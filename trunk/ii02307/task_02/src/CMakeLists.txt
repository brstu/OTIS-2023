cmake_minimum_required(VERSION 3.25)
project(ii02307_task_01)

set(CMAKE_CXX_STANDARD 17)

add_executable(ii02307_task_01 main.cpp ControlSystem.cpp Exceptions/FileOpenException.cpp)
