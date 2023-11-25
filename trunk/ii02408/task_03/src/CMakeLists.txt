cmake_minimum_required(VERSION 3.6)

project(OTIS_03)

set_target_properties(MyPython_ii02408 PROPERTIES LINKER_LANGUAGE Python)

set(SOURCES main.py)

add_executable(MyPython_ii02408 ${SOURCES})