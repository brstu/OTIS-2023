cmake_minimum_required(VERSION 3.12)

project(otis1111)

find_package(Python COMPONENTS Interpreter)

add_executable(otis1111 main2.cpp)

target_include_directories(otis1111 PRIVATE ${Python_INCLUDE_DIRS})
target_link_libraries(otis1111 PRIVATE ${Python_LIBRARIES})
