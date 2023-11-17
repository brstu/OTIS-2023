#include <iostream>
#include <cmath>

double computeNextLinearValue(double coeffA, double coeffB, double inputU, double& outputY) {
    outputY = coeffA * outputY + coeffB * inputU;
    return outputY;
}

void printLinearOutput(double coeffA, double coeffB, double inputU, double& outputY, int iterations) {
    std::cout << "Linear model" << std::endl;
    for (int i = 0; i < iterations; ++i) {
        std::cout << outputY << std::endl;
        computeNextLinearValue(coeffA, coeffB, inputU, outputY);
    }
    std::cout << std::endl;
}

double computeNextNonlinearValue(double coeffA, double coeffB, double coeffC, double coeffD, double inputU, double& outputY, double& prevY) {
    double nextY;
    if (prevY == 0) {
        nextY = coeffA * outputY - coeffB * pow(prevY, 2) + coeffC * 1 + coeffD * sin(1);
    }
    else {
        nextY = coeffA * outputY - coeffB * pow(prevY, 2) + coeffC * inputU + coeffD * sin(inputU);
    }
    prevY = outputY;
    outputY = nextY;
    return outputY;
}

void printNonlinearOutput(double coeffA, double coeffB, double coeffC, double coeffD, double inputU, double& outputY, double& prevY, int iterations) {
    std::cout << "Nonlinear model" << std::endl;
    for (int i = 0; i < iterations; ++i) {
        std::cout << outputY << std::endl;
        computeNextNonlinearValue(coeffA, coeffB, coeffC, coeffD, inputU, outputY, prevY);
    }
}

int main() {
    const double linearCoeffA = 0.3;
    const double linearCoeffB = 0.3;
    const double linearInputU = 1.0;
    double linearOutputY = 0.0;
    const int linearIterations = 20;

    printLinearOutput(linearCoeffA, linearCoeffB, linearInputU, linearOutputY, linearIterations);

    const double nonlinearCoeffA = 0.3;
    const double nonlinearCoeffB = 0.3;
    const double nonlinearCoeffC = 0.2;
    const double nonlinearCoeffD = 0.4;
    const double nonlinearInputU = 1.0;
    double nonlinearOutputY = 0.0;
    double nonlinearPrevY = 0.0;
    const int nonlinearIterations = 20;

    printNonlinearOutput(nonlinearCoeffA, nonlinearCoeffB, nonlinearCoeffC, nonlinearCoeffD, nonlinearInputU, nonlinearOutputY, nonlinearPrevY, nonlinearIterations);

    return 0;
}
