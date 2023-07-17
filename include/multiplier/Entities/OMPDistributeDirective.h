// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "OMPLoopDirective.h"

namespace mx {
class EntityProvider;
class Index;
class Decl;
class OMPDistributeDirective;
class OMPExecutableDirective;
class OMPLoopBasedDirective;
class OMPLoopDirective;
class Stmt;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class OMPDistributeDirective : public OMPLoopDirective {
 private:
  friend class FragmentImpl;
  friend class OMPLoopDirective;
  friend class OMPLoopBasedDirective;
  friend class OMPExecutableDirective;
  friend class Stmt;
 public:
  static gap::generator<OMPDistributeDirective> in(const Fragment &frag);
  static gap::generator<OMPDistributeDirective> in(const File &file);
  static gap::generator<OMPDistributeDirective> in(const Index &index);
  static gap::generator<OMPDistributeDirective> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<OMPDistributeDirective> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::OMP_DISTRIBUTE_DIRECTIVE;
  }

  static gap::generator<OMPDistributeDirective> containing(const Decl &decl);
  static gap::generator<OMPDistributeDirective> containing(const std::optional<Decl> &decl);

  static gap::generator<OMPDistributeDirective> containing(const Stmt &stmt);
  static gap::generator<OMPDistributeDirective> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<OMPDistributeDirective> from(const Stmt &parent);

  inline static std::optional<OMPDistributeDirective> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return OMPDistributeDirective::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<OMPDistributeDirective> from(const Reference &r);
  static std::optional<OMPDistributeDirective> from(const TokenContext &t);

};

static_assert(sizeof(OMPDistributeDirective) == sizeof(OMPLoopDirective));

#endif
} // namespace mx
