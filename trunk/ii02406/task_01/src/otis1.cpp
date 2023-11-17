#include <iostream>
#include <cmath>

double computeNextLinearValue(double coeffA, double coeffB, double inputU, double& outputY) {
    return coeffA * outputY + coeffB * inputU;
}

void updateLinearOutput(double& outputY, double nextY) {
    outputY = nextY;
}

void printLinearOutput(double& outputY, double coeffA, double coeffB, double inputU, int iterations) {
    std::cout << "Linear model" << std::endl;
    for (int i = 0; i < iterations; ++i) {
        std::cout << outputY << std::endl;
        double nextY = computeNextLinearValue(coeffA, coeffB, inputU, outputY);
        updateLinearOutput(outputY, nextY);
    }
}

double computeNextNonlinearValue(double coeffA, double coeffB, double coeffC, double coeffD, double inputU, double& outputY, double& prevY) {
    double nextY;
    if (prevY == 0) {
        nextY = coeffA * outputY - coeffB * pow(prevY, 2) + coeffC * 1 + coeffD * sin(1);
    }
    else {
        nextY = coeffA * outputY - coeffB * pow(prevY, 2) + coeffC * inputU + coeffD * sin(inputU);
    }
    return nextY;
}

void updateNonlinearOutput(double& outputY, double& prevY, double nextY) {
    prevY = outputY;
    outputY = nextY;
}

void printNonlinearOutput(double& outputY, double coeffA, double coeffB, double coeffC, double coeffD, double inputU, int iterations) {
    std::cout << "Nonlinear model" << std::endl;
    double prevY = 0.0;
    for (int i = 0; i < iterations; ++i) {
        std::cout << outputY << std::endl;
        double nextY = computeNextNonlinearValue(coeffA, coeffB, coeffC, coeffD, inputU, outputY, prevY);
        updateNonlinearOutput(outputY, prevY, nextY);
    }
}

int main() {
    const double linearCoeffA = 0.3;
    const double linearCoeffB = 0.3;
    const double linearInputU = 1.0;
    double linearOutputY = 0.0;
    const int linearIterations = 20;

    printLinearOutput(linearOutputY, linearCoeffA, linearCoeffB, linearInputU, linearIterations);

    const double nonlinearCoeffA = 0.3;
    const double nonlinearCoeffB = 0.3;
    const double nonlinearCoeffC = 0.2;
    const double nonlinearCoeffD = 0.4;
    const double nonlinearInputU = 1.0;
    double nonlinearOutputY = 0.0;
    const int nonlinearIterations = 20;

    printNonlinearOutput(nonlinearOutputY, nonlinearCoeffA, nonlinearCoeffB, nonlinearCoeffC, nonlinearCoeffD, nonlinearInputU, nonlinearIterations);

    return 0;
}
