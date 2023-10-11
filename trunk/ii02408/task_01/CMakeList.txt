cmake_minimum_required(VERSION 3.8)

project(task_01)

# Добавьте источник в исполняемый файл этого проекта.
add_executable(task_01 src/main.cpp)

# Добавьте дополнительные файлы исходного кода, если необходимо.
# add_executable(task_01 src/main.cpp src/other_file.cpp)

# Добавьте папку "doc" в проект.
add_subdirectory(doc)

# Добавьте папку "src" в проект.
add_subdirectory(src)


# TODO: Добавьте тесты и целевые объекты, если это необходимо.