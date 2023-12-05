#include <iostream>
#include <vector>
#include <cmath>

// Функция моделирования линейной модели
std::vector<double> linear_model(double a, double b, double y0, const std::vector<double>& u) {
    int n = u.size();
    std::vector<double> y(n + 1, 0.0);
    y[0] = y0;

    for (int r = 0; r < n; r++) {
        y[r + 1] = a * y[r] + b * u[r];
    }

    return std::vector<double>(y.begin() + 1, y.end());
}

// Функция моделирования нелинейной модели
std::vector<double> nonlinear_model(double a, double b, double c, double d, double y0, const std::vector<double>& u) {
    int n = u.size();
    std::vector<double> y(n + 1, 0.0);
    y[0] = y0;
    y[n] = y0;

    for (int r = 0; r < n; r++) {
        y[r + 1] = a * y[r] - b * std::pow(y[r - 1], 2) + c * u[r] + d * std::sin(u[r - 1]);
    }

    return std::vector<double>(y.begin() + 1, y.end());
}

int main() {
    double a = 0.8;
    double b = 0.5;
    double c = 0.3;
    double d = 0.2;
    double y0 = 20.0;
    std::vector<double> u = {1.0, 2.0, 3.0, 4.0, 5.0};  // входные значения тепла

    std::vector<double> result = linear_model(a, b, y0, u);
    std::vector<double> result1 = nonlinear_model(a, b, c, d, y0, u);

    // Вывод результатов для линейной модели
    for (double value : result) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Вывод результатов для нелинейной модели
    for (double value : result1) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
