#include <iostream>
#include <cmath>

const double A = 1;
const double B = 0.01;
const double C = 1;
const double D = 1;

void linear(double y, double u, int t_end) {
    for (int t = 1; t <= t_end; ++t) {
        double y_next = A * y + B * u;
        y = y_next;
        std::cout << y_next << "\n";
    }
}
void nonlinear(double y_prev, double y, double u, int t_end) {
    for (int t = 1; t <= t_end; ++t) {
        double y_next = A * y - B * pow(y_prev, 2) + C * u + D * sin(u);
        y_prev = y;
        y = y_next;
        std::cout << y_next << "\n";
    }
}


int main() {
    double initialTemperature;
    double warming;
    int endTime;

    std::cout << "Введите начальную температуру: ";
    std::cin >> initialTemperature;

    std::cout << "Введите потепление: ";
    std::cin >> warming;

    std::cout << "Введите время окончания: ";
    std::cin >> endTime;

    std::cout << "\nLinear Model:\n";
    linear(initialTemperature, warming, endTime);

    std::cout << "\nNonlinear Model:\n";
    nonlinear(0, initialTemperature, warming, endTime);

    return 0;
}

