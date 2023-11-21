#include <iostream>
#include <cmath>
#include <array>

void runControlSystem() {
    const double proportionalGain = 0.097;
    const double integralTime = 2.1623;
    const double derivativeTime = 1.0;
    const double timeStep = 0.001;

    const double gainCoefficient = proportionalGain * (1.0 + (timeStep != 0 ? derivativeTime / timeStep : 0.0));
    const double coefficient1 = -proportionalGain * (1.0 + 2.0 * derivativeTime / timeStep - timeStep / integralTime);
    const double coefficient2 = (proportionalGain * derivativeTime) / timeStep;

    const int iterations = 100;
    const double setPoint = 29.0;

    std::cout << "START" << std::endl;

    const double modelParamA = 0.8;
    const double modelParamB = 0.3;
    double output = 0.0;
    double input = 0.0;

    auto linearModel = [&](double outputLambda, double paramALambda, double paramBLambda, double inputLambda) {
        return paramALambda * outputLambda + paramBLambda * inputLambda;
    };

    std::array<double, 3> errorArray = {0.0};
    for (int i = 1; i <= iterations; i++) {
        errorArray[2] = errorArray[1];
        errorArray[1] = std::abs(setPoint - output);
        const double deltaInput = gainCoefficient * errorArray[1] + coefficient1 * errorArray[2] + coefficient2 * errorArray[0];
        const double previousInput = input;
        input = previousInput + deltaInput;
        output = linearModel(output, modelParamA, modelParamB, input);
        std::cout << i << ". output = " << output << "\t| input = " << input << std::endl;
    }
}

int main() {
    runControlSystem();
    return 0;
}
