cmake_minimum_required(VERSION 3.10)
project(LinearAndNonlinearModels)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 11)

add_executable(task_01.cpp)

target_link_libraries(LinearAndNonlinearModels PRIVATE m)
