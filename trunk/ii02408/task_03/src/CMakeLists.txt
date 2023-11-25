cmake_minimum_required(VERSION 3.6)
project(OTIS_03)

set(SOURCES main.py)

add_executable(Myexex ${SOURCES})
set_target_properties(Myexex PROPERTIES LINKER_LANGUAGE Python)
