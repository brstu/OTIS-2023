# Установите минимальную версию CMake
cmake_minimum_required(VERSION 3.12)

# Название вашего проекта
project(OTIS_3)

# Настройка вызова Python скрипта внутри CMake
add_custom_target(run_python_script
    COMMAND ${CMAKE_COMMAND} -E env PYTHONPATH=${CMAKE_CURRENT_SOURCE_DIR} ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/main.py
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# Добавление цели для сборки и запуска Python скрипта
add_custom_target(run
    DEPENDS run_python_script
)
