#include <iostream>
#include <cstdlib>

int main() {
    // Замените "path/to/your/script.py" на путь к вашему Python-скрипту
    std::string command = "python W:/projects/helloworld/main.py";

    // Выполнение команды с использованием subprocess
    int result = std::system(command.c_str());

    if (result == 0) {
        std::cout << "Python script executed successfully." << std::endl;
    } else {
        std::cerr << "Error executing Python script." << std::endl;
    }

    return 0;
}


