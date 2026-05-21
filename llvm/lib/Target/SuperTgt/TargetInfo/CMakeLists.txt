add_llvm_component_library(LLVMSuperTgtInfo
  SuperTgtTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  SuperTgt
  )
