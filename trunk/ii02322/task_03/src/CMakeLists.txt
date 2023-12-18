cmake_minimum_required(VERSION 3.8)
project(simple_graph_tool VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)



include_directories(.)

add_executable(simple_graph_tool
        EdgeGraphicsItem.cpp
        EdgeGraphicsItem.h
        Graph.cpp
        Graph.h
        GraphGraphicsScene.cpp
        GraphGraphicsScene.h
        GraphGraphicsView.cpp
        GraphGraphicsView.h
        AdjacencyMatrixTable.cpp
        AdjacencyMatrixTable.h
        GraphUtils.cpp
        GraphUtils.h
        MultiLineInputDialog.cpp
        MultiLineInputDialog.h
        main.cpp
        mainwindow.cpp
        mainwindow.h
        Node.cpp
        Node.h
        NodeGraphicsItem.cpp
        NodeGraphicsItem.h
        qdebugstream.h
        random.h
        ElementPropertiesTable.cpp
        ElementPropertiesTable.h
        GraphPropertiesTable.cpp
        GraphPropertiesTable.h
        Matrix.h
        Edge.h
        GraphOptionDialog.h
        GraphOptionDialog.cpp
        IncidenceMatrixTable.h
        IncidenceMatrixTable.cpp
        MultiComboboxDialog.cpp
        MultiComboboxDialog.h)

target_link_libraries(simple_graph_tool Qt5::Core)
target_link_libraries(simple_graph_tool Qt5::Widgets)
target_link_libraries(simple_graph_tool Qt5::Gui)
