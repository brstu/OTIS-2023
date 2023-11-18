#include <iostream>
#include <cmath>

// Calculation of linear model
double CalculateLinear(double y, double coefficientA, double coefficientB, double input) {
    y = coefficientA * y + coefficientB * input;
    return y;
}

// Calculation of nonlinear model
double CalculateNonlinear(double y, double coefficientA, double coefficientB, double previousY, double coefficientC, double input, double coefficientD, double previousInput) {
    y = coefficientA * y - coefficientB * pow(previousY, 2) + coefficientC * input + coefficientD * sin(previousInput);
    return y;
}

int main() {
    const int quantity = 50;
    double linearY[quantity];
    double coefficientA = 0.8;
    double coefficientB = 1.5;
    double y = 0.0;
    double input = 3.3;

    // Linear model
    std::cout << "Linear Model:\n";
    std::cout << "----------------\n";
    for (int i = 0; i < quantity; i++) {
        linearY[i] = y;
        y = CalculateLinear(y, coefficientA, coefficientB, input);
        std::cout << "Step " << i + 1 << ": " << linearY[i] << "\n";
    }

    std::cout << "\n";

    // Nonlinear model
    double nonlinearY[quantity];
    coefficientA = 0.75;
    coefficientB = 0.1;
    double coefficientC = 2.2;
    double coefficientD = 8.5;
    y = 0.0;
    input = 0.3;
    double nextY = 0.0;
    double previousY = 0.0;

    std::cout << "Nonlinear Model:\n";
    std::cout << "-------------------\n";
    for (int i = 0; i < quantity; i++) {
        previousY = y;
        y = nextY;
        nextY = CalculateNonlinear(y, coefficientA, coefficientB, previousY, coefficientC, input, coefficientD, input);
        nonlinearY[i] = nextY;
        std::cout << "Step " << i + 1 << ": " << nonlinearY[i] << "\n";
    }

    return 0;
}