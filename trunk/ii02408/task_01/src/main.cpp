#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> simulate_linear_model(double a, double b, const std::vector<double>& u) {
    std::vector<double> y(u.size(), 0.0);
    y[0] = 0.0;
    for (int t = 1; t < u.size(); ++t) {
        y[t] = a * y[t-1] + b * u[t-1];
    }
    return y;
}

std::vector<double> simulate_nonlinear_model(double a, double b, double c, double d, const std::vector<double>& u) {
    std::vector<double> y(u.size(), 0.0);
    y[0] = 0.0;
    y[1] = 0.0;
    for (int t = 2; t < u.size(); ++t) {
        y[t] = a * y[t-1] - b * pow(y[t-2], 2) + c * u[t-1] + d * sin(u[t-2]);
    }
    return y;
}

int main() {
    double a_linear = 0.8;
    double b_linear = 0.5;
    std::vector<double> u_linear = {1.0, 2.0, 3.0, 4.0};

    double a_nonlinear = 0.8;
    double b_nonlinear = 0.5;
    double c_nonlinear = 0.2;
    double d_nonlinear = 0.3;
    std::vector<double> u_nonlinear = {1.0, 2.0, 3.0, 4.0};

    std::vector<double> linear_result = simulate_linear_model(a_linear, b_linear, u_linear);
    std::vector<double> nonlinear_result = simulate_nonlinear_model(a_nonlinear, b_nonlinear, c_nonlinear, d_nonlinear, u_nonlinear);
    
    // Вывод результатов
    std::cout << "Linear Model Result: ";
    for (const auto& value : linear_result) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::cout << "Nonlinear Model Result: ";
    for (const auto& value : nonlinear_result) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}