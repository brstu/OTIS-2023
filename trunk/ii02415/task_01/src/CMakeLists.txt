cmake_minimum_required(VERSION 3.22)

project(OTIS_01)

set(SOURCES otis_lab1.cpp)

add_executable(MyExecutable_ii02415 ${SOURCES})
add_subdirectory(trunk/ii02415/task_01/src)