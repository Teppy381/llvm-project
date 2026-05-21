#ifndef LLVM_LIB_TARGET_SUPERTGT_SUPERTGT_H
#define LLVM_LIB_TARGET_SUPERTGT_SUPERTGT_H

#include "llvm/Support/raw_ostream.h"

#define SUPERTGT_DUMP(Color)                                                   \
  {                                                                            \
    llvm::errs().changeColor(Color)                                            \
        << __func__ << "\n\t\t" << __FILE__ << ":" << __LINE__ << "\n";        \
    llvm::errs().changeColor(llvm::raw_ostream::WHITE);                        \
  }
// #define SUPERTGT_DUMP(Color) {}

#define SUPERTGT_DUMP_RED SUPERTGT_DUMP(llvm::raw_ostream::RED)
#define SUPERTGT_DUMP_GREEN SUPERTGT_DUMP(llvm::raw_ostream::GREEN)
#define SUPERTGT_DUMP_YELLOW SUPERTGT_DUMP(llvm::raw_ostream::YELLOW)
#define SUPERTGT_DUMP_CYAN SUPERTGT_DUMP(llvm::raw_ostream::CYAN)
#define SUPERTGT_DUMP_MAGENTA SUPERTGT_DUMP(llvm::raw_ostream::MAGENTA)

#endif // LLVM_LIB_TARGET_SUPERTGT_SUPERTGT_H
