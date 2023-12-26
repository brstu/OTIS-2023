# CMakeList.txt: проект CMake для laba_1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("laba_1")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (laba_1 "laba_1.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET laba_1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
