// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "Expr.h"

namespace mx {
class EntityProvider;
class Index;
class CXXTypeidExpr;
class Decl;
class Expr;
class Stmt;
class Token;
class Type;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class CXXTypeidExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<CXXTypeidExpr> in(const Fragment &frag);
  static gap::generator<CXXTypeidExpr> in(const File &file);
  static gap::generator<CXXTypeidExpr> in(const Index &index);
  static gap::generator<CXXTypeidExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<CXXTypeidExpr> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::CXX_TYPEID_EXPR;
  }

  static gap::generator<CXXTypeidExpr> containing(const Decl &decl);
  static gap::generator<CXXTypeidExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<CXXTypeidExpr> containing(const Stmt &stmt);
  static gap::generator<CXXTypeidExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<CXXTypeidExpr> from(const Stmt &parent);

  inline static std::optional<CXXTypeidExpr> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return CXXTypeidExpr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<CXXTypeidExpr> from(const Reference &r);
  static std::optional<CXXTypeidExpr> from(const TokenContext &t);

  std::optional<Expr> expression_operand(void) const;
  Type type_operand(void) const;
  Type type_operand_source_info(void) const;
  std::optional<bool> is_most_derived(void) const;
  bool is_potentially_evaluated(void) const;
  bool is_type_operand(void) const;
};

static_assert(sizeof(CXXTypeidExpr) == sizeof(Expr));

#endif
} // namespace mx
