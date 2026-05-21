#include "TargetInfo/SuperTgtTargetInfo.h"
#include "SuperTgt.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

Target &llvm::getTheSuperTgtTarget() {
  SUPERTGT_DUMP_YELLOW
  static Target TheSuperTgtTarget;
  return TheSuperTgtTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeSuperTgtTargetInfo() {
  SUPERTGT_DUMP_YELLOW
  RegisterTarget<Triple::supertgt> X(getTheSuperTgtTarget(), "supertgt",
                                     "SuperTgt target for LLVM course",
                                     "SUPERTGT");
}
