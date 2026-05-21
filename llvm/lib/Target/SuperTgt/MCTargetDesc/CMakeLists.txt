add_llvm_component_library(LLVMSuperTgtDesc
  SuperTgtMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  SuperTgtInfo

  ADD_TO_COMPONENT
  SuperTgt
 )
