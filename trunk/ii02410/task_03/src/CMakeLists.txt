cmake_minimum_required(VERSION 3.6)

project(dasfsad)

# Set C++ standard and required features
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt5 package
set(CMAKE_PREFIX_PATH /path/to/Qt5)
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(SOURCES main.cpp)

add_executable(MExecutable ${SOURCES})

# Link Qt5 libraries
target_link_libraries(MExecutable Qt5::Core Qt5::Widgets)
