#include <iostream>
#include <cmath>
#include <array>

// Calculation of linear model
double CalculateLinear(double y, double koef_A, double koef_B, double u) {
    y = koef_A * y + koef_B * u;
    return y;
}

// Calculation of nonlinear model
double CalculateNonlinear(double y, double YPrev, double u, double UPrev) {
    double koef_A = 0.75;
    double koef_B = 0.1;
    double koef_C = 2.2;
    double koef_D = 8.5;
    y = koef_A * y - koef_B * pow(YPrev, 2) + koef_C * u + koef_D * sin(UPrev);
    return y;
}

int main() {
    const int quantity = 50;

    std::array<double, quantity> linY;
    double koef_A = 0.8;
    double koef_B = 1.5;
    double y = 0.0;
    double u = 3.3;

    // Linear model
    for (int i = 0; i < quantity; i++) {
        linY[i] = y;
        y = CalculateLinear(y, koef_A, koef_B, u);
        std::cout << i + 1 << " " << linY[i] << "\n";
    }

    // Nonlinear model
    std::array<double, quantity> unLinY;
    y = 0.0;
    u = 0.3;
    double Yprev = 0.0;
    double Uprev = 0.0;

    for (int i = 0; i < quantity; i++) {
        double Ynext = CalculateNonlinear(y, Yprev, u, Uprev);
        unLinY[i] = Ynext;
        Yprev = y;
        Uprev = u;
        y = Ynext;
        std::cout << i + 1 << " " << unLinY[i] << "\n";
    }

    return 0;
}
