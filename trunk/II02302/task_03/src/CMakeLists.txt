cmake_minimum_required(VERSION 3.5)

project(otis_3)

set(SOURCES
    Source.cpp
    library.cpp
)

set(HEADERS
    header.h
)

add_executable(HUIPIDOR ${SOURCES} ${HEADERS})
