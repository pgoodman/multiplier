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
#include <cassert>
#include <cstdint>
#include <filesystem>
#include <map>
#include <multiplier/Index.h>
#include <unordered_map>

#include "CodeView.h"
#include "Configuration.h"
#include "Util.h"

#include <iostream>

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

}  // namespace

struct InitReferenceHierarchyThread::PrivateData {
  Index index;
  const RawEntityId id;
  FileLocationCache &line_cache;
  QTreeWidgetItem * const item_parent;

  explicit PrivateData(const Index &index_, RawEntityId id_,
                       FileLocationCache &line_cache_,
                       QTreeWidgetItem *parent_)
      : index(index_),
        id(id_),
        line_cache(line_cache_),
        item_parent(parent_) {}
};

struct ExpandReferenceHierarchyThread::PrivateData {
  Index index;
  const RawEntityId id;
  FileLocationCache &line_cache;
  QTreeWidgetItem * const item_parent;

  explicit PrivateData(const Index &index_, RawEntityId id_,
                       FileLocationCache &line_cache_,
                       QTreeWidgetItem *parent_)
      : index(index_),
        id(id_),
        line_cache(line_cache_),
        item_parent(parent_) {}
};

InitReferenceHierarchyThread::~InitReferenceHierarchyThread(void) {}

InitReferenceHierarchyThread::InitReferenceHierarchyThread(
    const Index &index_, RawEntityId id_, FileLocationCache &line_cache_,
    QTreeWidgetItem *parent_)
    : d(new PrivateData(index_, id_, line_cache_, parent_)) {}

ExpandReferenceHierarchyThread::~ExpandReferenceHierarchyThread(void) {}

ExpandReferenceHierarchyThread::ExpandReferenceHierarchyThread(
    const Index &index_, RawEntityId id_, FileLocationCache &line_cache_,
    QTreeWidgetItem *parent_)
    : d(new PrivateData(index_, id_, line_cache_, parent_)) {}

void InitReferenceHierarchyThread::run(void) {

  auto entity = d->index.entity(d->id);
  if (!std::holds_alternative<Decl>(entity)) {
    return;
  }

  UserLocations users;

  const Decl &root_decl = std::get<Decl>(entity);
  for (Reference ref : root_decl.references()) {
    Stmt stmt = ref.statement();
    if (auto decl = DeclContaining(stmt)) {

      // Populate the cache in this background thread to not block the main
      // thread.
      (void) decl->token().nearest_location(d->line_cache);

      users.emplace_back(decl.value(), stmt.tokens());
    }
  }

  // Group them by file; they are already grouped by fragment.
  std::stable_sort(users.begin(), users.end(), UserLocationSort);

  emit UsersOfRoot(d->item_parent, root_decl, std::move(users));
}

void ExpandReferenceHierarchyThread::run(void) {
  auto entity = d->index.entity(d->id);
  if (!std::holds_alternative<Decl>(entity)) {
    return;
  }

  UserLocations users;

  for (Reference ref : std::get<Decl>(entity).references()) {
    Stmt stmt = ref.statement();
    if (auto decl = DeclContaining(stmt)) {

      // Populate the cache in this background thread to not block the main
      // thread.
      (void) decl->token().nearest_location(d->line_cache);

      users.emplace_back(decl.value(), stmt.tokens());
    }
  }

  // Group them by file; they are already grouped by fragment.
  std::stable_sort(users.begin(), users.end(), UserLocationSort);

  emit UsersOfLevel(d->item_parent, std::move(users));
}

struct ReferenceBrowserView::PrivateData {
 public:
  Index index;
  QVBoxLayout *layout{nullptr};
  QSplitter *splitter{nullptr};
  QTreeWidget *reference_tree{nullptr};
  HighlightRangeTheme theme;
  CodeView *code{nullptr};
  QTreeWidgetItem *active_item{nullptr};
  std::vector<RawEntityId> root_ids;
  FileLocationCache line_cache;
  bool show_file_paths{true};
  bool show_line_column_numbers{true};
  bool show_code_preview{true};
  bool show_context_breadcrumbs{true};

  struct ItemInfo {
    const Decl decl;
    TokenRange tokens;  // For scrolling and highlighting.
    bool has_been_expanded{false};

    inline explicit ItemInfo(Decl decl_)
        : decl(std::move(decl_)) {}
  };

  std::unordered_map<QTreeWidgetItem *, ItemInfo> item_to_info;
  std::unordered_map<FileId, QString> file_id_to_path;

  inline PrivateData(const CodeTheme &theme_)
      : theme(theme_) {}
};

ReferenceBrowserView::~ReferenceBrowserView(void) {}

ReferenceBrowserView::ReferenceBrowserView(const CodeTheme &theme_,
                                               QWidget *parent)
    : QWidget(parent),
      d(new PrivateData(theme_)) {
  InitializeWidgets();
}

void ReferenceBrowserView::InitializeWidgets(void) {
  d->layout = new QVBoxLayout;
  d->splitter = new QSplitter(Qt::Horizontal);

  d->layout->setContentsMargins(0, 0, 0, 0);
  d->layout->addWidget(d->splitter);

  d->reference_tree = new QTreeWidget;
  d->layout->addWidget(d->reference_tree);

  setWindowTitle(tr("Reference Browser"));
  setLayout(d->layout);

  QList<int> splitter_sizes;
  splitter_sizes.push_back(d->splitter->width() / 2);
  splitter_sizes.push_back(splitter_sizes.back());
  d->splitter->setSizes(splitter_sizes);
  d->splitter->addWidget(d->reference_tree);

  // We'll potentially have a bunch of columns depending on the configuration,
  // so make sure they span to use all available space.
  d->reference_tree->header()->setStretchLastSection(true);
  d->reference_tree->header()->setSectionResizeMode(
      QHeaderView::ResizeToContents);

  // Disallow multiple selection. If we have grouping by file enabled, then when
  // a user clicks on a file name, we instead jump down to the first entry
  // grouped under that file. This is to make using the up/down arrows easier.
  d->reference_tree->setSelectionMode(
      QAbstractItemView::SelectionMode::SingleSelection);

  // Hide the header.
  d->reference_tree->setHeaderHidden(true);

  // When a user clicks on a cell, we don't want Qt to randomly scroll to the
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

void ReferenceBrowserView::Clear(void) {
  d->item_to_info.clear();
  d->reference_tree->clear();
  d->active_item = nullptr;
  d->root_ids.clear();
  if (d->code) {
    d->code->hide();
  }
  update();
}

void ReferenceBrowserView::SetIndex(const Index &index) {
  d->file_id_to_path.clear();
  d->index = std::move(index);
  for (auto &[path, index] : d->index.file_paths()) {
    d->file_id_to_path.emplace(
        index, QString::fromStdString(path.generic_string()));
  }
  Clear();
}

// Should we group references by file path? Defaults to `true`.
void ReferenceBrowserView::SetGroupByFilePath(bool show) {
  d->show_file_paths = show;
}

// Should we show line and column numbers? Defaults to `true`.
void ReferenceBrowserView::SetShowLineColumnNumbers(bool show) {
  d->show_line_column_numbers = show;
}

// Should we show a preview of the code associated with the reference?
// Defaults to `true`.
void ReferenceBrowserView::SetShowCodePreview(bool show) {
  d->show_code_preview = show;
  if (d->code) {
    d->code->hide();
  }
}

// Should we show token context breadcrumbs? These can be useful for a quick
// diagnosis of the context of a use? Defaults to `true`.
void ReferenceBrowserView::SetShowContextBreadcrumbs(bool show) {
  d->show_context_breadcrumbs = show;
}

void ReferenceBrowserView::AddRoot(RawEntityId root_id) {
  QTreeWidgetItem *root_item = new QTreeWidgetItem;
  root_item->setText(0, tr("Downloading entity %1 references...").arg(root_id));
  d->reference_tree->addTopLevelItem(root_item);
  d->root_ids.push_back(root_id);

  auto expander = new InitReferenceHierarchyThread(
      d->index, root_id, d->line_cache, root_item);

  expander->setAutoDelete(true);

  connect(expander, &InitReferenceHierarchyThread::UsersOfRoot,
          this, &ReferenceBrowserView::OnUsersOfFirstLevel);

  QThreadPool::globalInstance()->start(expander);
}

void ReferenceBrowserView::OnTreeWidgetItemExpanded(QTreeWidgetItem *item) {

  item->setExpanded(true);

  auto it = d->item_to_info.find(item);
  if (it == d->item_to_info.end()) {
    return;  // Weird.
  }

  if (it->second.has_been_expanded) {
    item->setExpanded(true);
    return;  // Already attempted to expand.
  }

  // Mark as having previously been expanded.
  it->second.has_been_expanded = true;

  auto expander = new ExpandReferenceHierarchyThread(
      d->index, it->second.decl.id(), d->line_cache, item);

  expander->setAutoDelete(true);

  connect(expander, &ExpandReferenceHierarchyThread::UsersOfLevel,
          this, &ReferenceBrowserView::OnUsersOfLevel);

  QThreadPool::globalInstance()->start(expander);
}

template <typename T>
QString NameOf(T enumerator) {
  std::string_view ret = EnumeratorName(enumerator);
  if (ret.ends_with("_EXPR") || ret.ends_with("_STMT") ||
      ret.ends_with("_DECL") || ret.ends_with("_TYPE")) {
    ret = ret.substr(0u, ret.size() - 5u);
  } else if (ret.ends_with("_OPERATOR")) {
    ret = ret.substr(0u, ret.size() - 9u);
  } else if (ret.ends_with("_DIRECTIVE")) {
    ret = ret.substr(0u, ret.size() - 10u);
  }
  return QString::fromUtf8(ret.data(), static_cast<int>(ret.size()));
}

QString ReferenceBrowserView::FormatBreadcrumbs(const Token &use) const {
  QString breadcrumbs;
  static const QString kBreadCrumb("%1%2%3");
  const char *sep = "";
  const char * const next_sep = " → ";
  int repetitions = 0;
  const char *reps[] = {"", "²", "³", "⁴", "⁵", "⁶", "⁷", "⁸", "⁹"};
  auto i = -1;

  auto add_name = [&] (QString name) {
    if (breadcrumbs.endsWith(name)) {
      ++repetitions;

    } else if (repetitions < 9) {
      breadcrumbs.append(kBreadCrumb.arg(reps[repetitions]).arg(sep).arg(name));
      repetitions = 0;

    } else {
      breadcrumbs.append(kBreadCrumb.arg("⁺").arg(sep).arg(name));
      repetitions = 0;
    }

    sep = next_sep;
  };

  for (auto context = TokenContext::of(use);
       context; context = context->parent()) {
    ++i;

    if (auto cdecl = context->as_declaration()) {
      add_name(NameOf(cdecl->kind()));

    } else if (auto ctype = context->as_type()) {
      add_name(NameOf(ctype->kind()));

    } else if (auto cstmt = context->as_statement()) {
      switch (cstmt->kind()) {
        case StmtKind::DECL_REF_EXPR:
        case StmtKind::COMPOUND_STMT:
        case StmtKind::PAREN_EXPR:
          break;
        case StmtKind::UNARY_EXPR_OR_TYPE_TRAIT_EXPR: {
          auto &expr = reinterpret_cast<const UnaryExprOrTypeTraitExpr &>(
              cstmt.value());
          add_name(NameOf(expr.expression_or_trait_kind()));
          continue;
        }

        case StmtKind::IMPLICIT_CAST_EXPR: {
          auto &cast = reinterpret_cast<const ImplicitCastExpr &>(cstmt.value());
          auto ck = cast.cast_kind();
          if (ck != CastKind::L_VALUE_TO_R_VALUE && ck != CastKind::BIT_CAST &&
              ck != CastKind::FUNCTION_TO_POINTER_DECAY &&
              ck != CastKind::ARRAY_TO_POINTER_DECAY) {
            add_name(NameOf(ck));
          }
          break;
        }

        case StmtKind::UNARY_OPERATOR: {
          auto &op = reinterpret_cast<const UnaryOperator &>(cstmt.value());
          add_name(NameOf(op.opcode()));
          continue;
        }

        case StmtKind::BINARY_OPERATOR: {
          auto &op = reinterpret_cast<const BinaryOperator &>(cstmt.value());
          add_name(NameOf(op.opcode()));
          continue;
        }

        case StmtKind::MEMBER_EXPR:
          if (!i) {
            continue;
          }
          [[clang::fallthrough]];

        default: {
          add_name(NameOf(cstmt->kind()));
          break;
        }
      }
    }
  }
  return breadcrumbs;
}

void ReferenceBrowserView::FillRow(
    QTreeWidgetItem *item, const Decl &decl, const Token &use) const {

  // Format the declaration column. If we have a name then use it, otherwise
  // use the stringized enumerator name for the declaration kind, coupled with
  // the entity ID.
  //
  // TODO(pag): Eventually use symbol names in here.
  if (auto nd = NamedDecl::from(decl)) {
    if (auto name_data = nd->name(); !name_data.empty()) {
      item->setText(0, QString::fromUtf8(name_data.data(),
                                         static_cast<int>(name_data.size())));
    } else {
      item->setText(0, QString("%1(%2)").arg(EnumeratorName(decl.category()))
                                        .arg(decl.id()));
    }
  } else {
    item->setText(0, QString("%1(%2)").arg(EnumeratorName(decl.category()))
                                      .arg(decl.id()));
  }

  auto index = 1;

  auto color = qApp->palette().text().color();
  color = QColor::fromRgbF(
      color.redF(), color.greenF(), color.blueF(), color.alphaF() * 0.75);

  // Show the line and column numbers.
  if (d->show_line_column_numbers) {
    if (auto loc = use.nearest_location(d->line_cache)) {
      item->setTextColor(index, color);
      item->setText(index, QString::number(loc->first));  // Line.
      ++index;

      item->setTextColor(index, color);
      item->setText(index, QString::number(loc->second));  // Column.
      ++index;
    }
  }

  // Show the context breadcrumbs. This is a chain of stringized enumerators
  // derived from the token contexts.
  if (d->show_context_breadcrumbs) {
    item->setTextColor(index, color);
    item->setText(index, FormatBreadcrumbs(use));
    ++index;
  }

  // Make sure we're shoring the right number of columns.
  if (index > d->reference_tree->columnCount()) {
    d->reference_tree->setColumnCount(index);
  }
}

void ReferenceBrowserView::OnUsersOfFirstLevel(
    QTreeWidgetItem *root_item, std::optional<Decl> root_decl,
    UserLocations users) {

  // Something else was requested before the background thread returned.
  if (0 < d->reference_tree->indexOfTopLevelItem(root_item)) {
    return;
  }

  FillRow(root_item, root_decl.value(), root_decl->token());
  d->item_to_info.clear();

  auto &item = d->item_to_info.emplace(
      root_item, std::move(root_decl.value())).first->second;

  if (auto ft = item.decl.token().nearest_file_token()) {
    item.tokens = ft.value();
  }

  OnUsersOfLevel(root_item, std::move(users));
  OnItemPressed(root_item, 0);
}

void ReferenceBrowserView::OnUsersOfLevel(
    QTreeWidgetItem *parent_item, UserLocations users) {

  // Something else was requested before the background thread returned.
  auto id_it = d->item_to_info.find(parent_item);
  if (id_it == d->item_to_info.end()) {
    return;
  }

  id_it->second.has_been_expanded = true;

  // Remove the `Downloading...` item.
  while (parent_item->childCount()) {
    parent_item->removeChild(parent_item->child(0));
  }

  // Nothing to show.
  if (users.empty()) {
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

  std::map<QString, QTreeWidgetItem *> file_users;
  for (auto &[decl, tokens] : users) {

    // If we should group by file paths, then do the grouping here, building up
    // the intermediate file path items.
    if (d->show_file_paths) {
      if (std::optional<File> file = File::containing(decl)) {
        if (auto id_it = d->file_id_to_path.find(file->id());
            id_it != d->file_id_to_path.end()) {

          QTreeWidgetItem *&file_parent = file_users[id_it->second];
          if (!file_parent) {
            file_parent = new QTreeWidgetItem;
            file_parent->setText(0, id_it->second);

            // Make the text only partially visible.
            auto color = qApp->palette().text().color();
            file_parent->setTextColor(0, QColor::fromRgbF(
                color.redF(), color.greenF(), color.blueF(),
                color.alphaF() * 0.75));
          }

          add_user(file_parent, std::move(decl), std::move(tokens));
          continue;
        }
      }
    }

    // If we're not grouping by file paths, or if we have no associatd file
    // path, then show this here.
    add_user(parent_item, std::move(decl), std::move(tokens));
  }

  for (const auto &[path, file_item] : file_users) {
    parent_item->addChild(file_item);
    file_item->setExpanded(true);
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

  if (d->show_code_preview && !d->code) {
    d->code = new CodeView(d->theme);
    d->splitter->addWidget(d->code);
  }

  const PrivateData::ItemInfo &info = id_it->second;

  auto [fragment_id, offset] = GetFragmentOffset(info.decl.id());
  if (fragment_id != kInvalidEntityId) {
    if (d->show_code_preview && d->code) {
      TokenRange tokens = info.tokens.file_tokens().strip_whitespace();
      d->code->show();
      d->theme.SetRangeToHighlight(tokens);
      d->code->SetFragment(d->index, fragment_id);
      d->code->ScrollToToken(tokens);
    }
  } else if (d->code) {
    d->code->hide();
  }
}

}  // namespace mx::gui
