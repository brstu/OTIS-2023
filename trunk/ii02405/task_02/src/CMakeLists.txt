cmake_minimum_required(VERSION 3.10)
project(Unliner CXX)

set(CMAKE_CXX_STANDARD 11) # ������������� �������� C++11

add_executable(unliner task_02.cpp) # ������� ����������� ���� � ������ unliner � ����������� ���� main.cpp

target_link_libraries(unliner PRIVATE m) # ������� �������������� ����������

# ���� ���� ���� ��������� ����� ����������� ��� ������ ������������ (�������������)
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(unliner PRIVATE -Wall -Wextra -pedantic -Werror)
elseif(MSVC)
    target_compile_options(unliner PRIVATE /W4 /WX)
endif()
