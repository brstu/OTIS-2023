cmake_minimum_required(VERSION 3.15)

# Enable Hot Reload for MSVC compilers if supported.
if(POLICY CMP0091)
  cmake_policy(SET CMP0091 NEW)
endif()

project(lab1)

add_executable(lab1 "1 .html")

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(lab1 PRIVATE "/std:c++latest")
  set_target_properties(lab1 PROPERTIES LINK_FLAGS_DEBUG "/EDITANDCONTINUE")
endif()
