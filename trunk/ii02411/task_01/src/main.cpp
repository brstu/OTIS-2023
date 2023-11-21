#include <iostream>
#include <cmath>

// Calculation of linear model
double CalculateLinear(double y, double koef_A, double koef_B, double u) {
    y = koef_A * y + koef_B * u;
    return y;
}

// Calculation of nonlinear model
double CalculateNonlinear(double y, double koef_A, double koef_B, double YPrev, double koef_C, double u, double koef_D, double UPrev) {
    y = koef_A * y - koef_B * pow(YPrev, 2) + koef_C * u + koef_D * sin(UPrev);
    return y;
}

int main() {
    const int quantity = 50;
    double linY[quantity];
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
    double unLinY[quantity];
    koef_A = 0.75;
    koef_B = 0.1;
    double koef_C = 2.2;
    double koef_D = 8.5;
    y = 0.0;
    u = 0.3;
    double Ynext = 0.0;

    for (int i = 0; i < quantity; i++) {
        double Yprev = y;
        y = Ynext;
        Ynext = CalculateNonlinear(y, koef_A, koef_B, Yprev, koef_C, u, koef_D, u);
        unLinY[i] = Ynext;
        std::cout << i + 1 << " " << unLinY[i] << "\n";
    }

    return 0;
}