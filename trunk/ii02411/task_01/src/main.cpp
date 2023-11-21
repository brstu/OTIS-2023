#include <iostream>
#include <cmath>

struct NonlinearParameters {
    double koef_A;
    double koef_B;
    double koef_C;
    double koef_D;
};

// Calculation of linear model
double CalculateLinear(double y, double koef_A, double koef_B, double u) {
    y = koef_A * y + koef_B * u;
    return y;
}

// Calculation of nonlinear model
double CalculateNonlinear(double y, const NonlinearParameters& params, double YPrev, double u) {
    y = params.koef_A * y - params.koef_B * pow(YPrev, 2) + params.koef_C * u + params.koef_D * sin(u);
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
    NonlinearParameters params;
    params.koef_A = 0.75;
    params.koef_B = 0.1;
    params.koef_C = 2.2;
    params.koef_D = 8.5;
    y = 0.0;

    for (int i = 0; i < quantity; i++) {
        double Yprev = y;
        y = unLinY[i] = CalculateNonlinear(y, params, Yprev, u);
        std::cout << i + 1 << " " << unLinY[i] << "\n";
    }

    return 0;
}