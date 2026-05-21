add_llvm_component_group(SuperTgt)

add_llvm_target(SuperTgtCodeGen
  SuperTgtTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  SuperTgtInfo

  ADD_TO_COMPONENT
  SuperTgt
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)
