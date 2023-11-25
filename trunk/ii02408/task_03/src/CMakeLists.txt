cmake_minimum_required(VERSION 3.6)
project(OTIS_03)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++13")
find_package(PythonLibs REQUIRED)

add_library(OTIS_03 SHARED ${SOURCE_FILES})
include_directories(${PYTHON_INCLUDE_DIRS})
target_link_libraries(OTIS_03 ${PYTHON_LIBRARIES})
