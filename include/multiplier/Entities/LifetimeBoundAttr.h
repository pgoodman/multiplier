// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "InheritableAttr.h"

namespace mx {
class EntityProvider;
class Index;
class Attr;
class InheritableAttr;
class LifetimeBoundAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class LifetimeBoundAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<LifetimeBoundAttr> in(const Fragment &frag);
  static gap::generator<LifetimeBoundAttr> in(const File &file);
  static gap::generator<LifetimeBoundAttr> in(const Index &index);
  static gap::generator<LifetimeBoundAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<LifetimeBoundAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::LIFETIME_BOUND;
  }

  static std::optional<LifetimeBoundAttr> from(const Attr &parent);

  inline static std::optional<LifetimeBoundAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return LifetimeBoundAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<LifetimeBoundAttr> from(const Reference &r);
  static std::optional<LifetimeBoundAttr> from(const TokenContext &t);

};

static_assert(sizeof(LifetimeBoundAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
