#include <iostream>
#include <vector>
#include <cmath>

void nonliney(double A, double B, double C, double D, double K, double T0, double TD, double T, double w, double ys) {
    double q0 = K * (1 + (TD / T0));
    double q1 = -K * (1 + 2 * (TD / T0) - (T0 / T));
    double q2 = K * (TD / T0);
    std::vector<double> y = { ys, ys };
    double u = 1.0;
    double u_prev = 1.0;
    std::vector<double> e = { w - ys, w - ys };
    std::vector<double> um = { u, u };

    while (std::abs(y.back() - w) > 0.1) {
        e.push_back(w - y.back());
        u = u_prev + q0 * e.back() + q1 * e[e.size() - 2] + q2 * e[e.size() - 3];
        y.push_back(A * y.back() - B * y[y.size() - 2] + C * u + D * std::sin(u_prev));
        u_prev = u;
        um.push_back(u);
    }

    std::cout << "Y" << std::endl;
    for (int i = 0; i < y.size(); i++) {
        std::cout << y[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "E" << std::endl;
    for (int i = 0; i < e.size(); i++) {
        std::cout << e[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "U" << std::endl;
    for (int i = 0; i < um.size(); i++) {
        std::cout << um[i] << std::endl;
    }
}

int main() {
    double A = 0.5;
    double B = 0.6;
    double C = 0.6;
    double D = 0.6;
    double K = 0.8;
    double T0 = 1.1;
    double TD = 1.0;
    double T = 1.1;
    double ys = 2.0;
    double w = 20.0;

    nonliney(A, B, C, D, K, T0, TD, T, w, ys);

    return 0;
}