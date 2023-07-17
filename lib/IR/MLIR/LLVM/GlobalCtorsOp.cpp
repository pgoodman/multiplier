// Copyright (c) 2023-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/IR/MLIR/LLVM/GlobalCtorsOp.h>
#include <multiplier/IR/Attribute.h>
#include <multiplier/IR/Block.h>
#include <multiplier/IR/Region.h>
#include <multiplier/IR/Type.h>

#include <vast/Dialect/HighLevel/HighLevelOps.hpp>
#include <vast/Dialect/Dialects.hpp>
#include <mlir/Dialect/SCF/IR/SCF.h>
#include <mlir/Dialect/LLVMIR/LLVMDialect.h>

namespace mx::ir::llvm {
std::optional<GlobalCtorsOp> GlobalCtorsOp::from(const ::mx::ir::Operation &that) {
  if (that.kind() == OperationKind::LLVM_MLIR_GLOBAL_CTORS) {
    return reinterpret_cast<const GlobalCtorsOp &>(that);
  }
  return std::nullopt;
}

std::optional<GlobalCtorsOp> GlobalCtorsOp::producing(const ::mx::ir::Value &that) {
  if (auto op = ::mx::ir::Operation::producing(that)) {
    return from(op.value());
  }
  return std::nullopt;
}

::mlir::LLVM::GlobalCtorsOp GlobalCtorsOp::underlying_op(void) const noexcept {
  return ::mlir::LLVM::GlobalCtorsOp(this->Operation::op_);
}

}  // namespace mx::ir::llvm
