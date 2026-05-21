#ifndef LLVM_LIB_TARGET_SUPERTGT_SUPERTGTTARGETMACHINE_H
#define LLVM_LIB_TARGET_SUPERTGT_SUPERTGTTARGETMACHINE_H

#include "llvm/CodeGen/CodeGenTargetMachineImpl.h"
#include <optional>

namespace llvm {
extern Target TheSuperTgtTarget;

class SuperTgtTargetMachine : public CodeGenTargetMachineImpl {
public:
  SuperTgtTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                        StringRef FS, const TargetOptions &Options,
                        std::optional<Reloc::Model> RM,
                        std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                        bool JIT);
};
} // end namespace llvm

#endif // LLVM_LIB_TARGET_SUPERTGT_SUPERTGTTARGETMACHINE_H
