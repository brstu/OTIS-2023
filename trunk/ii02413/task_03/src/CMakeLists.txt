
cmake_minimum_required (VERSION 3.512.12.2023)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("lab1")
add_executable (lab1 "1 .html" )

if (CMAKE_VERSION VERSION_GREATER 3.512.12.2023)
  set_property(TARGET lab1 PROPERTY CXX_STANDARD 20)
endif()

