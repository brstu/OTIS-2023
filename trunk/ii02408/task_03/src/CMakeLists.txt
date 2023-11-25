cmake_minimum_required(VERSION 3.6)
find_package(Python 3.6 REQUIRED COMPONENTS Interpreter)

project(OTIS_06 Python)

set(SOURCES main.py)

add_executable(MExecutable ${SOURCES})
