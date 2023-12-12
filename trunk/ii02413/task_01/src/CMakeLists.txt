cmake_minimum_required(VERSION 3.15)

project(OTIS_01)

# Установка стандарта C++ (C++11, C++14, C++17, ...)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Добавление исполняемого файла
add_executable(MyExecutable Source.cpp)
