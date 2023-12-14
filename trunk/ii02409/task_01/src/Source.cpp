#include <iostream>
#include <cmath>

// Linear Model Functions
double calculateNextLinearValue(double a, double b, double u, const double& y) {
    return a * y + b * u;
}

void updateLinearOutputValue(double& y, double nextY) {
    y = nextY;
}

void printLinearOutputValues(const double& y, double a, double b, double u, int numIterations) {
    std::cout << "Linear model" << std::endl;
    double currentY = y;
    for (int i = 0; i < numIterations; ++i) {
        std::cout << currentY << std::endl;
        double nextY = calculateNextLinearValue(a, b, u, currentY);
        updateLinearOutputValue(currentY, nextY);
    }
}

// Nonlinear Model Functions
double calculateNextNonlinearValue(double a, double b, double c, double d, double u, const double& y, const double& prevY) {
    double nextY;
    if (prevY == 0) {
        nextY = a * y - b * pow(prevY, 2) + c * 1 + d * sin(1);
    }
    else {
        nextY = a * y - b * pow(prevY, 2) + c * u + d * sin(u);
    }
    return nextY;
}

void updateNonlinearOutputValues(double& y, double& prevY, double nextY) {
    prevY = y;
    y = nextY;
}

void printNonlinearOutputValues(const double& y, double a, double b, double c, double d, double u, int numIterations) {
    std::cout << "Nonlinear model" << std::endl;
    double currentY = y;
    double currentPrevY = 0.0;
    for (int i = 0; i < numIterations; ++i) {
        std::cout << currentY << std::endl;
        double nextY = calculateNextNonlinearValue(a, b, c, d, u, currentY, currentPrevY);
        updateNonlinearOutputValues(currentY, currentPrevY, nextY);
    }
}

int main() {
    // Linear Model Parameters
    const double linearA = 0.3;
    const double linearB = 0.3;
    const double linearU = 1.0;
    double linearY = 0.0;
    const int linearNumIterations = 20;

    // Print Linear Model Output Values
    printLinearOutputValues(linearY, linearA, linearB, linearU, linearNumIterations);

    // Nonlinear Model Parameters
    const double nonlinearA = 0.3;
    const double nonlinearB = 0.3;
    const double nonlinearC = 0.2;
    const double nonlinearD = 0.4;
    const double nonlinearU = 1.0;
    double nonlinearY = 0.0;
    const int nonlinearNumIterations = 20;

    // Print Nonlinear Model Output Values
    printNonlinearOutputValues(nonlinearY, nonlinearA, nonlinearB, nonlinearC, nonlinearD, nonlinearU, nonlinearNumIterations);

    return 0;
}
