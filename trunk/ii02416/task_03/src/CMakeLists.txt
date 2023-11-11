cmake_minimum_required(VERSION 3.20)
project(Project1)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES
    Unit1.cpp
    Unit2.cpp
    Unit3.cpp
    Unit4.cpp
    Unit5.cpp
    Unit6.cpp
    Unit7.cpp
    Project1.cpp
)

set(HEADER_FILES
    Unit1.h
    Unit2.h
    Unit3.h
    Unit4.h
    Unit5.h
    Unit6.h
    Unit7.h
)

set(DFM_FILE
    Unit1.dfm
    Unit2.dfm
    Unit4.dfm
    Unit5.dfm
    Unit6.dfm
    Unit7.dfm
)

set(EXTRA_DEPENDENCIES)

add_executable(Project1 ${SOURCE_FILES} ${HEADER_FILES} ${DFM_FILE})

target_link_libraries(Project1 ${EXTRA_DEPENDENCIES})

if (CMAKE_VERSION VERSION_GREATER 3.20)
  set_property(TARGET Project1 PROPERTY CXX_STANDARD 20)
endif()