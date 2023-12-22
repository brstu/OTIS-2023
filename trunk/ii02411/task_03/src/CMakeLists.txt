cmake_minimum_required(VERSION 3.6)

project(dasfsad)

# Update the path to the correct directory containing main.cpp
set(SOURCES trunk/ii02411/task_03/src/main.cpp)

# Choose a unique target name, for example, "MyExecutable"
add_executable(MyExecutable ${SOURCES})
