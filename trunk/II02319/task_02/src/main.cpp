#include <iostream>
#include <vector>
#include <cmath>

double constantA = 0.9, constantB = 0.2, constantC = 0.4, constantD = 0.8;
double constantK = 1.2, constantT0 = 0.9, constantTD = 1.0, constantT = 1.3, constantW = 25;
double factor0 = constantK * (1 + (constantTD / constantT0)),
        factor1 = -constantK * (1 + 2 * (constantTD / constantT0) - (constantT0 / constantT)),
        factor2 = constantK * (constantTD / constantT0);

void nonlin() {
    const short int initialValue = 3;
    std::vector<double> values = { initialValue, initialValue };
    double controlValue = 0.5;
    std::vector<double> errors = { constantW - initialValue, constantW - initialValue };
    std::vector<double> controlHistory = { controlValue, controlValue };

    int maxLines = 28;
    int currentLines = 0;

    while (std::abs(constantW - values.back()) > 0.01 && currentLines < maxLines)
    {
        errors.push_back(constantW - values.back());
        controlValue = controlHistory.back() + factor0 * errors.back() + factor1 * errors[errors.size() - 2] + factor2 * errors[errors.size() - 3];
        values.push_back(constantA * values.back() - constantB * values[values.size() - 2] + constantC * controlValue + constantD * std::sin(controlHistory.back()));
        controlHistory.push_back(controlValue);

        currentLines++;
    }

    std::cout << "Values\tErrors\tControl History\n";
    for (int i = 0; i < currentLines; i++)
        std::cout << i + 1 << ";" << values[i] << ";" << errors[i] << ";" << controlHistory[i] << std::endl;
}

int main() {
    nonlin();
}
