cmake_minimum_required(VERSION 3.20)
project(Project1)

set(CMAKE_CXX_STANDARD 20)

set(VCL_INCLUDE_DIR "vcl")

link_directories(${VCL_LIBRARY_DIR})

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

set(VCL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/vcl")
set(VCL_SRC_DIR "${VCL_DIR}/design")

include_directories(${VCL_DIR})

add_executable(Project1 ${SOURCE_FILES} ${HEADER_FILES} ${DFM_FILES})

if (CMAKE_VERSION VERSION_GREATER_EQUAL 3.20)
    set_property(TARGET Project1 PROPERTY CXX_STANDARD 20)
endif()