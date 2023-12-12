cmake_minimum_required(VERSION 3.12)

project(otis_lab_01)

add_executable(otis_lab_01 otis_lab_01.cpp)

set_target_properties(otis_lab_01 PROPERTIES
    CXX_STANDARD 20
)

if (POLICY CMP0141)
    cmake_policy(SET CMP0141 NEW)
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()