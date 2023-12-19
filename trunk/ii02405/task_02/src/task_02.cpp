#include <iostream>
#include <vector>
#include <cmath>

const double A = 0.5;
const double B = 0.6;
const double C = 0.6;
const double D = 0.6;
const double K = 0.8;
const double T0 = 1.1;
const double TD = 1.0;
const double T = 1.1;
const double w = 20;
const double q0 = K * (1 + (TD / T0));
const double q1 = -K * (1 + 2 * (TD / T0) - (T0 / T));
const double q2 = K * (TD / T0);

void unliner() {
    const double y_start = 2;
    std::vector<double> y = { y_start, y_start }; // Вектор для хранения значений переменной y
    double u = 1.0; // Начальное значение управляющей переменной u
    std::vector<double> e = { w - y_start, w - y_start }; // Вектор для хранения значений разности w - y
    std::vector<double> u_pr = { u, u }; // Вектор для хранения значений предыдущей управляющей переменной u

    while (std::abs(w - y.back()) > 0.01) { // Цикл выполняется, пока разница между w и последним значением y больше 0.01
        e.push_back(w - y.back()); // Добавление текущей разности в вектор e
        u = u_pr.back() + q0 * e.back() + q1 * e[e.size() - 2] + q2 * e[e.size() - 3]; // Вычисление нового значения управляющей переменной u
        y.push_back(A * y.back() - B * y[y.size() - 2] + C * u + D * std::sin(u_pr.back())); // Вычисление нового значения переменной y
        u_pr.push_back(u); // Добавление нового значения управляющей переменной u в вектор u_pr
    }

    std::cout << "y\te\tu_pr\n";
    for (std::size_t i = 0; i < y.size(); i++) {
        std::cout << i + 1 << ";" << y[i] << ";" << e[i] << ";" << u_pr[i] << std::endl; // Вывод значений y, e и u_pr на каждой итерации цикла
    }
}

int main() {
    unliner();
    return 0;
}