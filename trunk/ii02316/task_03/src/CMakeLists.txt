cmake_minimum_required(VERSION 3.12)
project(OTIS LAB 3)

# Найти интерпретатор Python
find_package(Python REQUIRED COMPONENTS Interpreter)

# Добавить ваш Python-скрипт в проект
add_executable(my_python_script main.py)

# Задать цель для сборки проекта на Python
add_custom_target(run_python_script
    COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/main.py
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    COMMENT "Running Python script"
)

# Добавить зависимость от цели run_python_script
add_dependencies(my_python_script run_python_script)
