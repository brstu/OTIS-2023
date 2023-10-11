cmake_minimum_required(VERSION 3.12)
project(task_01)

# Добавьте источник в исполняемый файл этого проекта.
add_executable(task_01 src/main.cpp)

# Копирование файлов Markdown и изображений в директорию сборки
file(COPY docs/ DESTINATION ${CMAKE_BINARY_DIR}/docs/)

# Настройка правил сборки для генерации исполняемого файла
set_target_properties(task_01 PROPERTIES
  CXX_STANDARD 11
  CXX_STANDARD_REQUIRED YES
  CXX_EXTENSIONS NO
)

# Создание цели "docs" для отображения файлов Markdown и изображений на GitHub
add_custom_target(docs
  COMMAND ${CMAKE_COMMAND} -E echo "Dummy target for GitHub"
  SOURCES docs/image.jpg docs/graphics.jpg docs/report.md
)

# Укажите, что вы хотите использовать git в качестве системы контроля версий
find_package(Git)

if(GIT_FOUND)
  # Добавьте цель "gh-pages", чтобы опубликовать документацию на GitHub Pages
  add_custom_target(gh-pages
    COMMAND ${GIT_EXECUTABLE} checkout --orphan gh-pages
    COMMAND ${GIT_EXECUTABLE} add -A
    COMMAND ${GIT_EXECUTABLE} commit -m "Publish documentation"
    COMMAND ${GIT_EXECUTABLE} push origin gh-pages
    COMMAND ${GIT_EXECUTABLE} checkout -
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
  )
endif()