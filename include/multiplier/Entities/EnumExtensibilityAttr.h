// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>
#include <filesystem>
#include <memory>
#include <optional>
#include <vector>

#include "../Iterator.h"
#include "../Types.h"
#include "../Token.h"
#include "../Use.h"

#include "AttrKind.h"
#include "EnumExtensibilityAttrKind.h"
#include "InheritableAttr.h"

namespace mx {
class Attr;
class EnumExtensibilityAttr;
class InheritableAttr;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
using EnumExtensibilityAttrRange = DerivedEntityRange<AttrIterator, EnumExtensibilityAttr>;
using EnumExtensibilityAttrContainingTokenRange = DerivedEntityRange<TokenContextIterator, EnumExtensibilityAttr>;
class EnumExtensibilityAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  inline static EnumExtensibilityAttrRange in(const Fragment &frag) {
    return in_internal(frag);
  }

  inline static EnumExtensibilityAttrContainingTokenRange containing(const Token &tok) {
    return TokenContextIterator(tok.context());
  }

  inline bool contains(const Token &tok) {
    auto id_ = id();
    for (auto &parent : EnumExtensibilityAttr::containing(tok)) {
      if (parent.id() == id_) { return true; }
    }
    return false;
  }

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::ENUM_EXTENSIBILITY;
  }

  static std::optional<EnumExtensibilityAttr> from(const TokenContext &c);
  static std::optional<EnumExtensibilityAttr> from(const InheritableAttr &parent);

  inline static std::optional<EnumExtensibilityAttr> from(const std::optional<InheritableAttr> &parent) {
    if (parent) {
      return EnumExtensibilityAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<EnumExtensibilityAttr> from(const Attr &parent);

  inline static std::optional<EnumExtensibilityAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return EnumExtensibilityAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  EnumExtensibilityAttrKind extensibility(void) const;
  std::string_view spelling(void) const;
};

static_assert(sizeof(EnumExtensibilityAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
