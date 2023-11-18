#include <iostream>
#include <cmath>
#include <array>

// Parameters for the nonlinear model
struct NonlinearModelParams {
    double coefficientA;
    double coefficientB;
    double coefficientC;
    double coefficientD;
};

// Calculation of linear model
double CalculateLinear(double y, double coefficientA, double coefficientB, double u) {
    y = coefficientA * y + coefficientB * u;
    return y;
}

// Calculation of nonlinear model
double CalculateNonlinear(double y, const NonlinearModelParams& params, double YPrev, double u, double UPrev) {
    y = params.coefficientA * y - params.coefficientB * pow(YPrev, 2) + params.coefficientC * u + params.coefficientD * sin(UPrev);
    return y;
}

int main() {
    const int quantity = 50;
    std::array<double, quantity> linY;
    double coefficientA = 0.8;
    double coefficientB = 1.5;
    double y = 0.0;
    double u = 3.3;

    // Linear model
    for (int i = 0; i < quantity; i++) {
        linY[i] = y;
        y = CalculateLinear(y, coefficientA, coefficientB, u);
        std::cout << i + 1 << " " << linY[i] << "\n";
    }

    // Nonlinear model
    NonlinearModelParams nonlinearParams;
    nonlinearParams.coefficientA = 0.75;
    nonlinearParams.coefficientB = 0.1;
    nonlinearParams.coefficientC = 2.2;
    nonlinearParams.coefficientD = 8.5;

    std::array<double, quantity> unLinY;
    y = 0.0;
    u = 0.3;
    double Ynext = 0.0;
    double Yprev = 0.0;

    for (int i = 0; i < quantity; i++) {
        Yprev = y;
        y = Ynext;
        Ynext = CalculateNonlinear(y, nonlinearParams, Yprev, u, u);
        unLinY[i] = Ynext;
        std::cout << i + 1 << " " << unLinY[i] << "\n";
    }

    return 0;
}