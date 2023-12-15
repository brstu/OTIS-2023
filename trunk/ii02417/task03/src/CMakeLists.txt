cmake_minimum_required(VERSION 3.12)
project(otis_3)

# Путь к исполняемому файлу компилятора C#
set(CSHARP_COMPILER "C:\Program Files\dotnet\sdk\7.0.402\Roslyn\bincore\csc.dll")

# Список исходных файлов
set(SOURCES main.cs)

# Команда компиляции
add_custom_target(CompileCSharp
    COMMAND ${CSHARP_COMPILER} -out:otis_3_executable.exe ${SOURCES}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    COMMENT "Compiling C# code..."
)

# Добавим команду запуска исполняемого файла
add_custom_target(RunExecutable
    COMMAND mono otis_3_executable.exe
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    COMMENT "Running otis_3_executable..."
)

# Установим зависимость между целями
add_dependencies(RunExecutable CompileCSharp)