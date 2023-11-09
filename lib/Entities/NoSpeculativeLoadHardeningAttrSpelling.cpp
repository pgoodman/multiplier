// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/NoSpeculativeLoadHardeningAttrSpelling.h>

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(NoSpeculativeLoadHardeningAttrSpelling e) {
  switch (e) {
    case NoSpeculativeLoadHardeningAttrSpelling::GNU_NO_SPECULATIVE_LOAD_HARDENING: return "GNU_NO_SPECULATIVE_LOAD_HARDENING";
    case NoSpeculativeLoadHardeningAttrSpelling::CXX11_CLANG_NO_SPECULATIVE_LOAD_HARDENING: return "CXX11_CLANG_NO_SPECULATIVE_LOAD_HARDENING";
    case NoSpeculativeLoadHardeningAttrSpelling::C2X_CLANG_NO_SPECULATIVE_LOAD_HARDENING: return "C2X_CLANG_NO_SPECULATIVE_LOAD_HARDENING";
    case NoSpeculativeLoadHardeningAttrSpelling::SPELLING_NOT_CALCULATED: return "SPELLING_NOT_CALCULATED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
