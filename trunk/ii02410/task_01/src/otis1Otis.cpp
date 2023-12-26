#include <iostream>
#include <cmath>
#include <vector>

struct NonlinearParameters {
    double coefficientA;
    double coefficientB;
    double coefficientC;
    double coefficientD;
    double previousY;
    double previousInput;
};

// Calculation of nonlinear model
double CalculateNonlinear(double y, const NonlinearParameters& params, double input) {
    y = params.coefficientA * y - params.coefficientB * pow(params.previousY, 2) + params.coefficientC * input + params.coefficientD * sin(params.previousInput);
    return y;
}

int main() {
    const int quantity = 50;
    std::vector<double> linearY(quantity);
    double coefficientA = 0.8;
    double coefficientB = 1.5;
    double y = 0.0;
    double input = 3.3;

    // Linear model
    std::cout << "Linear Model:\n";
    std::cout << "----------------\n";
    for (int i = 0; i < quantity; i++) {
        linearY[i] = y;
        y = coefficientA * y + coefficientB * input;
        std::cout << "Step " << i + 1 << ": " << linearY[i] << "\n";
    }

    std::cout << "\n";

    // Nonlinear model
    std::vector<double> nonlinearY(quantity);
    NonlinearParameters params = { 0.75, 0.1, 2.2, 8.5, 0.0, input };
    y = 0.0;

    std::cout << "Nonlinear Model:\n";
    std::cout << "-------------------\n";
    for (int i = 0; i < quantity; i++) {
        params.previousY = y;
        y = CalculateNonlinear(y, params, input);
        nonlinearY[i] = y;
        std::cout << "Step " << i + 1 << ": " << nonlinearY[i] << "\n";
    }

    return 0;
}