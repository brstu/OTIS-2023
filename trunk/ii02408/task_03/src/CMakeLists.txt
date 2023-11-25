cmake_minimum_required(VERSION 3.6)

project(python_project PYTHON)

find_package(PythonLibs 3.6 REQUIRED)

set(CMAKE_PYTHON_COMPILER "/usr/bin/python3")

set(SOURCES 
  main.py
)

add_executable(main ${SOURCES})

target_link_libraries(main PYTHON::Python)