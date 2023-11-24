cmake_minimum_required(VERSION 3.0)

main(GraphicalApplication)

find_package(Tkinter)

add_executable(graphical_app your_script.py)

target_link_libraries(graphical_app PRIVATE Tkinter::Tkinter)
