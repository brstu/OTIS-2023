cmake_minimum_required(VERSION 3.6)

project(OTIS_03)

set(SOURCES main.py)

add_executable(MExecutable ${SOURCES})

# Set the linker language to Python
set_target_properties(MExecutable PROPERTIES LINKER_LANGUAGE C)