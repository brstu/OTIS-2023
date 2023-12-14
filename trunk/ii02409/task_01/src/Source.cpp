#include <iostream>
#include <cmath>

double calculateNextLinearValue(double coeffA, double coeffB, double inputU, const double& outputY) {
    return coeffA * outputY + coeffB * inputU;
}

void updateLinearOutputValue(double& outputY, double nextY) {
    outputY = nextY;
}

void printLinearOutputValues(const double& outputY, double coeffA, double coeffB, double inputU, int numIterations) {
    std::cout << "Linear model" << std::endl;
    double currentOutputY = outputY;
    for (int i = 0; i < numIterations; ++i) {
        std::cout << currentOutputY << std::endl;
        double nextY = calculateNextLinearValue(coeffA, coeffB, inputU, currentOutputY);
        updateLinearOutputValue(currentOutputY, nextY);
    }
}

double calculateNextNonlinearValue(double coeffA, double coeffB, double coeffC, double coeffD, double inputU, const double& outputY, const double& prevY) {
    double nextY;
    if (prevY == 0) {
        nextY = coeffA * outputY - coeffB * pow(prevY, 2) + coeffC * 1 + coeffD * sin(1);
    }
    else {
        nextY = coeffA * outputY - coeffB * pow(prevY, 2) + coeffC * inputU + coeffD * sin(inputU);
    }
    return nextY;
}

void updateNonlinearOutputValues(double& outputY, double& prevY, double nextY) {
    prevY = outputY;
    outputY = nextY;
}

void printNonlinearOutputValues(const double& outputY, double coeffA, double coeffB, double coeffC, double coeffD, double inputU, int numIterations) {
    std::cout << "Nonlinear model" << std::endl;
    double currentOutputY = outputY;
    double currentPrevY = 0.0;
    for (int i = 0; i < numIterations; ++i) {
        std::cout << currentOutputY << std::endl;
        double nextY = calculateNextNonlinearValue(coeffA, coeffB, coeffC, coeffD, inputU, currentOutputY, currentPrevY);
        updateNonlinearOutputValues(currentOutputY, currentPrevY, nextY);
    }
}

int main() {
    const double linearCoeffA = 0.3;
    const double linearCoeffB = 0.3;
    const double linearInputU = 1.0;
    double linearOutputY = 0.0;
    const int linearNumIterations = 20;

    printLinearOutputValues(linearOutputY, linearCoeffA, linearCoeffB, linearInputU, linearNumIterations);

    const double nonlinearCoeffA = 0.3;
    const double nonlinearCoeffB = 0.3;
    const double nonlinearCoeffC = 0.2;
    const double nonlinearCoeffD = 0.4;
    const double nonlinearInputU = 1.0;
    double nonlinearOutputY = 0.0;
    const int nonlinearNumIterations = 20;

    printNonlinearOutputValues(nonlinearOutputY, nonlinearCoeffA, nonlinearCoeffB, nonlinearCoeffC, nonlinearCoeffD, nonlinearInputU, nonlinearNumIterations);

    return 0;
}
