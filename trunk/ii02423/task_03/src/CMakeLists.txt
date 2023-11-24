cmake_minimum_required(VERSION 3.0)

project(main)

find_package(Python3 REQUIRED COMPONENTS Development)

find_package(NumPy REQUIRED)

add_library(your_extension_module MODULE your_extension_source.cpp)

target_include_directories(your_extension_module PRIVATE ${Python3_INCLUDE_DIRS} ${NumPy_INCLUDE_DIRS})
target_link_libraries(your_extension_module PRIVATE ${Python3_LIBRARIES})

set_target_properties(your_extension_module PROPERTIES PREFIX "")

# Указать, где установить расширение Python
install(TARGETS your_extension_module DESTINATION main)
