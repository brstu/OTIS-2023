cmake_minimum_required (VERSION 3.12)
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("task_02222")
add_executable (task_02222 "task_02.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task_02222 PROPERTY CXX_STANDARD 20)
endif()
