cmake_minimum_required(VERSION 3.6)

project(dasfsad)

# Добавим флаги компиляции C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавим флаги для Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Найдем необходимые пакеты для Qt
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(SOURCES main.cpp)

add_executable(MExecutable ${SOURCES})

# Связываем Qt библиотеки с нашим проектом
target_link_libraries(MExecutable Qt5::Core Qt5::Widgets)
