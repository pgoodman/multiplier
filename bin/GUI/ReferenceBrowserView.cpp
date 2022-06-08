// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

#include "ReferenceBrowserView.h"

#include <QApplication>
#include <QBrush>
#include <QHeaderView>
#include <QSplitter>
#include <QThreadPool>
#include <QTreeWidget>
#include <QVBoxLayout>

#include <algorithm>
#include <atomic>
#include <cassert>
#include <cstdint>
#include <filesystem>
#include <map>
#include <unordered_map>

#include "CodeTheme.h"
#include "CodeView.h"
#include "Configuration.h"
#include "Multiplier.h"
#include "Util.h"

namespace mx::gui {
namespace {

template <typename T>
static std::optional<Decl> DeclContaining(const T &thing) {
  if (auto func = FunctionDecl::containing(thing)) {
    return func.value();

  } else if (auto field = FieldDecl::containing(thing)) {
    return field.value();

  } else if (auto var = VarDecl::containing(thing)) {
    if (var->is_local_variable_declaration()) {
      return DeclContaining<Decl>(var.value());

    } else {
      return var.value();
    }
  } else {
    return std::nullopt;
  }
};

static bool UserLocationSort(const UserLocation &a, const UserLocation &b) {
  if (!a.second && !b.second) {
    return false;
  } else if (!a.second && b.second) {
    return false;
  } else if (a.second && !b.second) {
    return false;
  }

  return std::less<EntityBaseOffsetPair>{}(GetFileOffset(a.second[0].id()),
                                           GetFileOffset(b.second[0].id()));
}

static FileLocationConfiguration LineNumConfig(const CodeTheme &theme) {
  FileLocationConfiguration config;
  config.tab_width = static_cast<unsigned>(theme.NumSpacesInTab());
  return config;
}

}  // namespace

struct InitReferenceHierarchyThread::PrivateData {
  Index index;
  const RawEntityId id;
  FileLocationCache line_cache;
  QTreeWidgetItem * const item_parent;
  const uint64_t counter;

  explicit PrivateData(const Index &index_, RawEntityId id_,
                       const FileLocationCache &line_cache_,
                       QTreeWidgetItem *parent_, uint64_t counter_)
      : index(index_),
        id(id_),
        line_cache(line_cache_),
        item_parent(parent_),
        counter(counter_) {}
};

struct ExpandReferenceHierarchyThread::PrivateData {
  Index index;
  const RawEntityId id;
  FileLocationCache line_cache;
  QTreeWidgetItem * const item_parent;
  const uint64_t counter;

  explicit PrivateData(const Index &index_, RawEntityId id_,
                       const FileLocationCache &line_cache_,
                       QTreeWidgetItem *parent_, uint64_t counter_)
      : index(index_),
        id(id_),
        line_cache(line_cache_),
        item_parent(parent_),
        counter(counter_) {}
};

InitReferenceHierarchyThread::~InitReferenceHierarchyThread(void) {}

InitReferenceHierarchyThread::InitReferenceHierarchyThread(
    const Index &index_, RawEntityId id_, const FileLocationCache &line_cache_,
    QTreeWidgetItem *parent_, uint64_t counter_)
    : d(new PrivateData(index_, id_, line_cache_, parent_, counter_)) {}

ExpandReferenceHierarchyThread::~ExpandReferenceHierarchyThread(void) {}

ExpandReferenceHierarchyThread::ExpandReferenceHierarchyThread(
    const Index &index_, RawEntityId id_, const FileLocationCache &line_cache_,
    QTreeWidgetItem *parent_, uint64_t counter_)
    : d(new PrivateData(index_, id_, line_cache_, parent_, counter_)) {}

static constexpr size_t kEmitBatchSize = 32;

void InitReferenceHierarchyThread::run(void) {

  auto entity = d->index.entity(d->id);
  if (!std::holds_alternative<Decl>(entity)) {
    return;
  }

  UserLocations users;
  FragmentId last_fragment_id = kInvalidEntityId;

  const Decl &root_decl = std::get<Decl>(entity);
  for (Reference ref : root_decl.references()) {
    Stmt stmt = ref.statement();
    if (auto decl = DeclContaining(stmt)) {

      // Send them off one batch at a time. Ideally, send them so that we don't
      // split across fragments.
      Fragment frag = Fragment::containing(decl.value());
      if (users.size() >= kEmitBatchSize && frag.id() != last_fragment_id) {

        // Group them by file; they are already grouped by fragment.
        std::stable_sort(users.begin(), users.end(), UserLocationSort);
        emit UsersOfRoot(d->item_parent, d->counter, root_decl,
                         std::make_shared<UserLocations>(std::move(users)));
      }

      // Populate the cache in this background thread to not block the main
      // thread.
      (void) decl->token().nearest_location(d->line_cache);

      users.emplace_back(decl.value(), stmt.tokens());
      last_fragment_id = frag.id();
    }
  }

  // Group them by file; they are already grouped by fragment.
  std::stable_sort(users.begin(), users.end(), UserLocationSort);
  emit UsersOfRoot(d->item_parent, d->counter, root_decl,
                   std::make_shared<UserLocations>(std::move(users)));
}

void ExpandReferenceHierarchyThread::run(void) {
  auto entity = d->index.entity(d->id);
  if (!std::holds_alternative<Decl>(entity)) {
    return;
  }

  UserLocations users;
  FragmentId last_fragment_id = kInvalidEntityId;

  for (Reference ref : std::get<Decl>(entity).references()) {
    Stmt stmt = ref.statement();
    if (auto decl = DeclContaining(stmt)) {

      // Send them off one batch at a time. Ideally, send them so that we don't
      // split across fragments.
      Fragment frag = Fragment::containing(decl.value());
      if (users.size() >= kEmitBatchSize && frag.id() != last_fragment_id) {

        // Group them by file; they are already grouped by fragment.
        std::stable_sort(users.begin(), users.end(), UserLocationSort);
        emit UsersOfLevel(d->item_parent, d->counter,
                          std::make_shared<UserLocations>(std::move(users)));
      }

      // Populate the cache in this background thread to not block the main
      // thread.
      (void) decl->token().nearest_location(d->line_cache);

      users.emplace_back(decl.value(), stmt.tokens());
      last_fragment_id = frag.id();
    }
  }

  // Group them by file; they are already grouped by fragment.
  std::stable_sort(users.begin(), users.end(), UserLocationSort);
  emit UsersOfLevel(d->item_parent, d->counter,
                    std::make_shared<UserLocations>(std::move(users)));
}

struct ReferenceBrowserView::PrivateData {
 public:
  Multiplier &multiplier;

  QVBoxLayout *layout{nullptr};
  QSplitter *splitter{nullptr};

  QTreeWidget *reference_tree{nullptr};

  // Theme used in `code` to highlight the tokens associated with the reference.
  HighlightRangeTheme theme;

  // Code preview.
  CodeView *code{nullptr};
  QTreeWidgetItem *active_item{nullptr};
  std::vector<RawEntityId> root_ids;

  // Thread-safe line/column counting cache. Used to calculate the locations of
  // references.
  FileLocationCache line_cache;

  // Used to detect re-entrancy issues when the underlying view is swapped out.
  std::atomic<uint64_t> counter;

  struct ItemInfo {
    const Decl decl;

    // We need to be able to scroll the code preview area to the relevant spot.
    // We also configure `PrivateData::theme` to highlight these tokens when
    // this reference is selected. Finally, the contexts of the first token in
    // this range is used for the breadcrumbs.
    TokenRange tokens;

    // Have we expanded this item yet? When we first create an reference item,
    // we add a "Downloading..." child under it that is hidden, and leave this
    // as `false`. Then, when we first expand this entry, if we transition from
    // `false` to `true`, then we know to remove the dummy downloading item and
    // leave the item empty or populate with the discovered references.
    bool has_been_expanded{false};

    // Is this the first expansion?
    bool is_first_expansion{true};

    inline explicit ItemInfo(Decl decl_)
        : decl(std::move(decl_)) {}
  };

  std::unordered_map<QTreeWidgetItem *, ItemInfo> item_to_info;
  std::unordered_map<FileId, std::filesystem::path> file_id_to_path;

  inline PrivateData(Multiplier &multiplier_)
      : multiplier(multiplier_),
        theme(multiplier.CodeTheme()),
        line_cache(LineNumConfig(theme)) {}
};

ReferenceBrowserView::~ReferenceBrowserView(void) {}

ReferenceBrowserView::ReferenceBrowserView(Multiplier &multiplier,
                                           QWidget *parent)
    : QWidget(parent),
      d(new PrivateData(multiplier)) {
  InitializeWidgets();
}

enum : int {
  kEntityColumnIndex,
  kPathColumnIndex,
  kFileColumnIndex,
  kLineColumnIndex,
  kColumnColumnIndex,
  kContextColumnIndex,

  kNumColumns
};

void ReferenceBrowserView::InitializeWidgets(void) {
  d->layout = new QVBoxLayout;
  d->splitter = new QSplitter(Qt::Vertical);

  d->layout->setContentsMargins(0, 0, 0, 0);
  d->layout->addWidget(d->splitter);

  d->reference_tree = new QTreeWidget;
  d->layout->addWidget(d->reference_tree);

  // Add the column headers.
  QHeaderView *header = d->reference_tree->header();
  QTreeWidgetItem *header_item = d->reference_tree->headerItem();
  d->reference_tree->setColumnCount(kNumColumns);
  header_item->setText(kEntityColumnIndex, tr("Entity"));
  header_item->setText(kPathColumnIndex, tr("Path"));
  header_item->setText(kFileColumnIndex, tr("File"));
  header_item->setText(kLineColumnIndex, tr("Line"));
  header_item->setText(kColumnColumnIndex, tr("Column"));
  header_item->setText(kContextColumnIndex, tr("Context"));

  // Customize visibility of columns.
  ReferenceBrowserConfiguration &config =
      d->multiplier.Configuration().reference_browser;
  d->reference_tree->setColumnHidden(kPathColumnIndex, !config.show_file_path);
  d->reference_tree->setColumnHidden(kFileColumnIndex, !config.show_file_name);
  d->reference_tree->setColumnHidden(kLineColumnIndex,
                                     !config.show_line_numbers);
  d->reference_tree->setColumnHidden(kColumnColumnIndex,
                                     !config.show_column_numbers);
  d->reference_tree->setColumnHidden(kContextColumnIndex,
                                     !config.breadcrumbs.visible);

  setWindowTitle(tr("Reference Browser"));
  setLayout(d->layout);

  QList<int> splitter_sizes;
  splitter_sizes.push_back(d->splitter->width() / 2);
  splitter_sizes.push_back(splitter_sizes.back());
  d->splitter->setSizes(splitter_sizes);
  d->splitter->addWidget(d->reference_tree);

  // We'll potentially have a bunch of columns depending on the configuration,
  // so make sure they span to use all available space.
  header->setStretchLastSection(true);
  header->setSectionResizeMode(
      QHeaderView::ResizeToContents);

  // Enable sorting. We want to be able to sort by context (breadcrumbs) so that
  // it's easy to pick out when a given thing is used differently among many
  // common uses, e.g. every use but one is inside two nested `if` statements.
  d->reference_tree->setSortingEnabled(true);

  // Disallow multiple selection. If we have grouping by file enabled, then when
  // a user clicks on a file name, we instead jump down to the first entry
  // grouped under that file. This is to make using the up/down arrows easier.
  d->reference_tree->setSelectionMode(
      QAbstractItemView::SelectionMode::SingleSelection);

  // Hide the header.
  d->reference_tree->setHeaderHidden(false);

  // When a user clicks on a cell, we don't want to randomly scroll to the
  // beginning of a cell. That can be jarring.
  d->reference_tree->setAutoScroll(false);

  // Smooth scrolling.
  d->reference_tree->setHorizontalScrollMode(
      QAbstractItemView::ScrollPerPixel);
  d->reference_tree->setVerticalScrollMode(
      QAbstractItemView::ScrollPerPixel);

  connect(d->reference_tree, &QTreeWidget::itemExpanded,
          this, &ReferenceBrowserView::OnTreeWidgetItemExpanded);

  connect(d->reference_tree, &QTreeWidget::itemPressed,
          this, &ReferenceBrowserView::OnItemPressed);

  connect(d->reference_tree, &QTreeWidget::itemSelectionChanged,
          this, &ReferenceBrowserView::OnItemSelectionChanged);
}

void ReferenceBrowserView::SetRoots(std::vector<RawEntityId> new_root_ids) {
  if (d->root_ids != new_root_ids) {
    Clear();
    for (RawEntityId root_id : new_root_ids) {
      AddRoot(root_id);
    }
  }
}

void ReferenceBrowserView::SetCodePreviewHorizontal(void) {
  d->splitter->setOrientation(Qt::Orientation::Horizontal);
}

void ReferenceBrowserView::SetCodePreviewVertical(void) {
  d->splitter->setOrientation(Qt::Orientation::Vertical);
}

void ReferenceBrowserView::Clear(void) {
  d->item_to_info.clear();
  d->reference_tree->clear();
  d->active_item = nullptr;
  d->root_ids.clear();
  d->counter.fetch_add(1u);
  if (d->code) {
    d->code->Clear();
    d->code->hide();
  }
  update();
}

void ReferenceBrowserView::OnDownloadedFileList(FilePathList files) {
  Clear();
  for (auto &[path, index] : files) {
    d->file_id_to_path.emplace(index, std::move(path));
  }
}

void ReferenceBrowserView::AddRoot(RawEntityId root_id) {
  QTreeWidgetItem *root_item = new QTreeWidgetItem;
  root_item->setText(0, tr("Downloading entity %1 references...").arg(root_id));
  d->reference_tree->addTopLevelItem(root_item);
  d->root_ids.push_back(root_id);

  const Index &index = d->multiplier.Index();
  auto expander = new InitReferenceHierarchyThread(
      index, root_id, d->line_cache, root_item, d->counter.load());

  expander->setAutoDelete(true);

  connect(expander, &InitReferenceHierarchyThread::UsersOfRoot,
          this, &ReferenceBrowserView::OnUsersOfFirstLevel);

  QThreadPool::globalInstance()->start(expander);
}

void ReferenceBrowserView::OnTreeWidgetItemExpanded(QTreeWidgetItem *item) {

  // Weird; might be a re-entrancy issue, or might be expanding a file entry.
  auto it = d->item_to_info.find(item);
  if (it == d->item_to_info.end()) {
    return;
  }

  if (it->second.has_been_expanded) {
    return;  // Already attempted to expand.
  }

  // Mark as having previously been expanded.
  it->second.has_been_expanded = true;

  const Index &index = d->multiplier.Index();
  auto expander = new ExpandReferenceHierarchyThread(
      index, it->second.decl.id(), d->line_cache, item, d->counter.load());

  expander->setAutoDelete(true);

  connect(expander, &ExpandReferenceHierarchyThread::UsersOfLevel,
          this, &ReferenceBrowserView::OnUsersOfLevel);

  QThreadPool::globalInstance()->start(expander);
}

void ReferenceBrowserView::FillRow(
    QTreeWidgetItem *item, const Decl &decl, const Token &use) const {

  ReferenceBrowserConfiguration &config =
      d->multiplier.Configuration().reference_browser;

  // Format the declaration column. If we have a name then use it, otherwise
  // use the stringized enumerator name for the declaration kind, coupled with
  // the entity ID.
  //
  // TODO(pag): Eventually use symbol names in here.
  item->setText(0, DeclName(decl));

  auto color = qApp->palette().text().color();
  color = QColor::fromRgbF(
      color.redF(), color.greenF(), color.blueF(), color.alphaF() * 0.75);

  // Show the line and column numbers.
  if (auto loc = use.nearest_location(d->line_cache)) {
    auto file = File::containing(use);
    FileId file_id = file ? file->id() : kInvalidEntityId;

    if (auto fp_it = d->file_id_to_path.find(file_id);
        fp_it != d->file_id_to_path.end()) {
      item->setTextColor(kPathColumnIndex, color);
      item->setTextAlignment(kPathColumnIndex, Qt::AlignRight);
      item->setText(
          kPathColumnIndex,
          QString::fromStdString(fp_it->second.generic_string()));

      item->setTextColor(kFileColumnIndex, color);
      item->setTextAlignment(kFileColumnIndex, Qt::AlignRight);
      item->setText(
          kFileColumnIndex,
          QString::fromStdString(fp_it->second.filename().string()));

#ifndef QT_NO_TOOLTIP
      item->setToolTip(
          kFileColumnIndex,
          QString::fromStdString(fp_it->second.generic_string()));
#endif
    }

    item->setTextColor(kLineColumnIndex, color);
    item->setText(kLineColumnIndex, QString::number(loc->first));  // Line.
#ifndef QT_NO_TOOLTIP
    item->setToolTip(kLineColumnIndex, tr("Line %1").arg(loc->first));
#endif

    item->setTextColor(kColumnColumnIndex, color);
    item->setText(kColumnColumnIndex, QString::number(loc->second));  // Column.
#ifndef QT_NO_TOOLTIP
    item->setToolTip(kColumnColumnIndex, tr("Column %1").arg(loc->second));
#endif
  }

  // Show the context breadcrumbs. This is a chain of stringized enumerators
  // derived from the token contexts.
  item->setTextColor(kContextColumnIndex, color);
  item->setText(
      kContextColumnIndex,
      TokenBreadCrumbs(use, config.breadcrumbs.run_length_encode));
}

void ReferenceBrowserView::OnUsersOfFirstLevel(
    QTreeWidgetItem *root_item, uint64_t counter, std::optional<Decl> root_decl,
    UserLocationsPtr users) {

  // Something else was requested before the background thread returned.
  if (counter != d->counter.load() ||
      0 < d->reference_tree->indexOfTopLevelItem(root_item)) {
    return;
  }

  // This is the first batch of results for this root.
  auto id_it = d->item_to_info.find(root_item);
  auto is_first = false;
  if (id_it == d->item_to_info.end()) {

    FillRow(root_item, root_decl.value(), root_decl->token());
    d->item_to_info.clear();

    auto &item = d->item_to_info.emplace(
        root_item, std::move(root_decl.value())).first->second;

    if (auto ft = item.decl.token().nearest_file_token()) {
      item.tokens = ft.value();
    }

    is_first = true;
  }

  OnUsersOfLevel(root_item, counter, std::move(users));

  if (is_first) {
    OnItemPressed(root_item, 0);
  }
}

void ReferenceBrowserView::OnUsersOfLevel(
    QTreeWidgetItem *parent_item, uint64_t counter, UserLocationsPtr users) {

  // Something else was requested before the background thread returned.
  if (counter != d->counter.load()) {
    return;
  }

  // Something else was requested before the background thread returned.
  auto id_it = d->item_to_info.find(parent_item);
  if (id_it == d->item_to_info.end()) {
    return;
  }

  // Remove the `Downloading...` item.
  id_it->second.has_been_expanded = true;
  if (id_it->second.is_first_expansion) {
    id_it->second.is_first_expansion = false;
    while (parent_item->childCount()) {
      parent_item->removeChild(parent_item->child(0));
    }
  }

  // Nothing to show.
  if (users->empty()) {
    update();
    return;
  }

  auto add_user = [=] (QTreeWidgetItem *parent, Decl decl, TokenRange tokens) {
    QTreeWidgetItem *user_item = new QTreeWidgetItem;
    if (tokens) {
      FillRow(user_item, decl, tokens[0]);
    } else {
      FillRow(user_item, decl, decl.token());
    }
    parent->addChild(user_item);

    PrivateData::ItemInfo &child_id =
        d->item_to_info.emplace(user_item, std::move(decl)).first->second;
    child_id.tokens = std::move(tokens);
    child_id.has_been_expanded = false;

    QTreeWidgetItem *download_item = new QTreeWidgetItem;
    download_item->setText(0, tr("Downloading..."));

    user_item->addChild(download_item);
    user_item->setExpanded(false);
  };

  ReferenceBrowserConfiguration &config =
      d->multiplier.Configuration().reference_browser;

  for (auto &[decl, tokens] : *users) {
    add_user(parent_item, std::move(decl), std::move(tokens));
  }

  parent_item->setExpanded(true);

  update();
}

void ReferenceBrowserView::OnItemSelectionChanged(void) {

  for (auto item : d->reference_tree->selectedItems()) {
    auto id_it = d->item_to_info.find(item);
    if (id_it == d->item_to_info.end()) {

      // If we've done something like selected a file path, then try to deselect
      // it, and then select the child (if any), triggering us to open the
      // child. This is convenient when using up/down arrows through the
      // reference list.
      if (item->childCount()) {
        d->reference_tree->clearSelection();
        d->reference_tree->setItemSelected(item, false);
        d->reference_tree->setItemSelected(item->child(0), true);
        return;
      }
    } else {
      OnItemPressed(item, 0);
      return;
    }
  }
}

void ReferenceBrowserView::OnItemPressed(
    QTreeWidgetItem *item, int column) {
  auto id_it = d->item_to_info.find(item);
  if (id_it == d->item_to_info.end()) {
    return;
  }

  if (item == d->active_item) {
    return;
  }

  d->active_item = item;

  ReferenceBrowserConfiguration &config =
      d->multiplier.Configuration().reference_browser;

  if (config.code_preview.visible && !d->code) {
    d->code = new CodeView(d->theme);
    d->splitter->addWidget(d->code);

    auto &config = d->multiplier.Configuration().reference_browser.code_preview;

    MX_CONNECT_CHILD_ACTIONS(config, ReferenceBrowserView, d->code, CodeView)
    MX_ROUTE_ACTIONS(config, ReferenceBrowserView, d->multiplier)
  }

  const PrivateData::ItemInfo &info = id_it->second;
  const Index &index = d->multiplier.Index();

  auto [fragment_id, offset] = GetFragmentOffset(info.decl.id());
  if (fragment_id != kInvalidEntityId) {
    if (config.code_preview.visible && d->code) {
      TokenRange tokens = info.tokens.file_tokens().strip_whitespace();
      d->code->show();
      d->theme.SetRangeToHighlight(tokens);
      d->code->SetFragment(index, fragment_id);
      d->code->ScrollToToken(tokens);
    }
  } else if (d->code) {
    d->code->hide();
  }
}

MX_DEFINE_DECLARATION_SLOTS(
    ReferenceBrowserView,
    d->multiplier.Configuration().reference_browser.code_preview)

}  // namespace mx::gui
