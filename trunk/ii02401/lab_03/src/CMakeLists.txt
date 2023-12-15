# CMakeList.txt: проект CMake для lab1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.cmake_minimum_required(VERSION 3.6)
cmake_minimum_required(VERSION 3.6)
project("OTIS_03")

set(SOURCES OTIS3.cpp)

add_executable(OTIS_03 "OTIS3.cpp" )
