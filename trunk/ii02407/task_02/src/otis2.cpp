#include <iostream>
#include <cmath>
#include <vector>

int main() {
    double a = 0.5;
    double b = 0.6;
    double c = 0.7;
    double d = 0.5;

    double K_val = 0.9;
    double T0 = 1.3;
    double TD = 1.2;
    double TValue = 1;

    double Q0 = K_val * (TD / T0 + 1);
    double Q1 = -K_val * (-T0 / TValue + 1 + 2 * TD / T0);
    double Q2 = K_val * (TD / T0);

    double Y = 10.0;
    std::vector<double> Yt = { Y, Y };

    double u2 = 1.0;
    double u1 = 1.0;

    double Wt = 40;

    std::vector<double> E = { Wt - Y, Wt - Y };

    int temp = 2;
    while (std::abs(Yt.back() - Wt) > 0.1) {
        temp++;
        E.push_back(Wt - Yt.back());
        u2 = u1 + Q0 * E.back() + Q1 * E[E.size() - 2] + Q2 * E[E.size() - 3];
        Yt.push_back(a * Yt.back() - b * Yt[Yt.size() - 2] + c * u2 + d * std::sin(u1));
        u1 = u2;
    }

    for (int i = 0; i < Yt.size(); i++) {
        std::cout << Yt[i] << std::endl;
    }

    return 0;
}