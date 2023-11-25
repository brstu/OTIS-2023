cmake_minimum_required(VERSION 3.6)

project(ProjectName Python)

find_package(PythonLibs 3.6 REQUIRED)

set(SOURCES main.py)

add_executable(MExecutable ${SOURCES})

target_link_libraries(MExecutable Python::Python)