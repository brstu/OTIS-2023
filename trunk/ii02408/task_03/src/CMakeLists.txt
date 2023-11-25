cmake_minimum_required(VERSION 3.6)
project(MyPythonProject)

# Настройка переменных
set(SOURCES main.py)  # Список исходных файлов Python
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)  # Путь для сохранения скомпилированных библиотек

# Поиск и подключение библиотек Python
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

# Создание цели исполняемого файла
add_executable(MyPythonApp ${SOURCES})

# Линковка с библиотеками Python
target_link_libraries(MyPythonApp ${PYTHON_LIBRARIES})