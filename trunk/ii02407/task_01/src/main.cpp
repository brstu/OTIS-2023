#include <iostream>
#include <cmath>

// Глобальные константы
const double VALUE_U_T = 0.5; // Входное значение температуры
const int TIME = 10; // Время
const double CONSTANT_A = 1.1;  // Константа
const double CONSTANT_B = 0.9;  // Константа
const double CONSTANT_C = -0.68;  // Константа
const double CONSTANT_D = 1.53; // Константа

// Функция для линейной зависимости
void linearModel() {
    double temperature = 1; // Входная температура
    for (int i = 1; i <= TIME; i++) {
        // Формула для линейной модели
        temperature = CONSTANT_A * temperature + CONSTANT_B * VALUE_U_T;
        std::cout << temperature << std::endl;
    }
}

// Функция для нелинейной зависимости
void nonlinearModel() {
    double temperature = 1.5; // Входная температура
    double previousTemperature = 0; // Предыдущая температура
    for (int i = 1; i <= TIME; i++) {
        double temp = previousTemperature;
        // Формула для нелинейной модели
        temperature = CONSTANT_A * temperature - CONSTANT_B * pow(previousTemperature, 2) + CONSTANT_C * VALUE_U_T + CONSTANT_D * sin(VALUE_U_T);
        previousTemperature = temp;
        std::cout << temperature << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    std::cout << "Линейная модель:" << std::endl;
    linearModel();

    std::cout << "Нелинейная модель:" << std::endl;
    nonlinearModel();

    return 0;
}