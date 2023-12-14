cmake_minimum_required (VERSION 3.6)

project ("task3")

add_executable (task3 "task3.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task3 PROPERTY CXX_STANDARD 20)
endif()

