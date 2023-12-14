#include <cstdlib>

int main() {
    system("${Python_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/alg_button_lid.py");
    system("${Python_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/export.py");
    system("${Python_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/lib.py");
    return 0;
}