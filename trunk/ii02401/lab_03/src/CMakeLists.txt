cmake_minimum_required(VERSION 3.12)
project(GraphEditor)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED)
find_package(PythonLibs REQUIRED)
find_package(PythonInterp REQUIRED)

include_directories(${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})

add_executable(GraphEditor OTIS3.cpp)

target_link_libraries(GraphEditor ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})
