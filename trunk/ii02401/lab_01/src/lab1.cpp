#include <iostream>
#include <cmath>
#include <vector>

std::vector<double> y_lin;
std::vector<double> y_nonlin;

void linear_model(double a, double b, double y, double u, int i, int t) {
    if (i <= t) {
        std::cout << y << std::endl;
        y_lin.push_back(y);
        double y_2 = a * y + b * u;
        linear_model(a, b, y_2, u, i + 1, t);
    } else {
        std::cout << "END" << std::endl;
    }
}

void nonlinear_model(double a, double b, double c, double d, double y, double y_prev, double u, double u_prev, int i, int t) {
    if (i == 1) {
        std::cout << y << std::endl;
        y_nonlin.push_back(y);
        double y_2 = a * y - b * pow(y_prev, 2) + c * 0 + d * sin(0);
        nonlinear_model(a, b, c, d, y_2, y, u, u, i + 1, t);
    } else if (i <= t) {
        std::cout << y << std::endl;
        y_nonlin.push_back(y);
        double y_2 = a * y - b * pow(y_prev, 2) + c * u + d * sin(u_prev);
        nonlinear_model(a, b, c, d, y_2, y, u, u, i + 1, t);
    } else {
        std::cout << "END" << std::endl;
    }
}

int main() {
    int i = 1;
    double y = 0.0;
    double u = 1.0;
    int t = 10;
    double a = 1.0;
    double b = 0.5;
    double c = 0.001;
    double d = 0.999;

    std::cout << "Linear Model:" << std::endl;
    linear_model(a, b, y, u, i, t);

    std::cout << "Nonlinear Model:" << std::endl;
    nonlinear_model(a, b, c, d, y, y, u, u, i, t);

    std::cout << "linear_model: ";
    for (const auto &val : y_lin) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "nonlinear_model: ";
    for (const auto &val : y_nonlin) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
