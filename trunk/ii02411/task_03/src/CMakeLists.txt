cmake_minimum_required(VERSION 3.6)

project(dasfsad)

# Set the relative path to main.cpp from the CMakeLists.txt file
set(SOURCES src/main.cpp)

# Choose a unique target name, for example, "MyExecutable"
add_executable(MyExecutable ${SOURCES})
