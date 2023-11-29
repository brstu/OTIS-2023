cmake_minimum_required(VERSION 3.5)

project(OTIS333 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT6_DIR "C:/Qt/6.6.0/mingw_64/lib/cmake/Qt6")
find_package(QT NAMES Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(OTIS333
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ../build-OTIS333-Desktop_Qt_6_6_0_MinGW_64_bit-Debug/graph.txt
        edge.h
        vertex.h
        euler.h
    )
else()
    if(ANDROID)
        add_library(OTIS333 SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(OTIS333
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(OTIS333 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.OTIS333)
endif()
set_target_properties(OTIS333 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS OTIS333
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(OTIS333)
endif()

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(OTIS333)
endif()
