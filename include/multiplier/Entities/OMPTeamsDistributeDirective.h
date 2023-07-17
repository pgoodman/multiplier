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
class OMPExecutableDirective;
class OMPLoopBasedDirective;
class OMPLoopDirective;
class OMPTeamsDistributeDirective;
class Stmt;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class OMPTeamsDistributeDirective : public OMPLoopDirective {
 private:
  friend class FragmentImpl;
  friend class OMPLoopDirective;
  friend class OMPLoopBasedDirective;
  friend class OMPExecutableDirective;
  friend class Stmt;
 public:
  static gap::generator<OMPTeamsDistributeDirective> in(const Fragment &frag);
  static gap::generator<OMPTeamsDistributeDirective> in(const File &file);
  static gap::generator<OMPTeamsDistributeDirective> in(const Index &index);
  static gap::generator<OMPTeamsDistributeDirective> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<OMPTeamsDistributeDirective> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::OMP_TEAMS_DISTRIBUTE_DIRECTIVE;
  }

  static gap::generator<OMPTeamsDistributeDirective> containing(const Decl &decl);
  static gap::generator<OMPTeamsDistributeDirective> containing(const std::optional<Decl> &decl);

  static gap::generator<OMPTeamsDistributeDirective> containing(const Stmt &stmt);
  static gap::generator<OMPTeamsDistributeDirective> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<OMPTeamsDistributeDirective> from(const Stmt &parent);

  inline static std::optional<OMPTeamsDistributeDirective> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return OMPTeamsDistributeDirective::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<OMPTeamsDistributeDirective> from(const Reference &r);
  static std::optional<OMPTeamsDistributeDirective> from(const TokenContext &t);

};

static_assert(sizeof(OMPTeamsDistributeDirective) == sizeof(OMPLoopDirective));

#endif
} // namespace mx
