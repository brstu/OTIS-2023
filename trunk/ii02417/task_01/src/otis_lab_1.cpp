#include <iostream>
#include <cmath>
#include <array>
#include <vector>

void LinearModel() {
    std::cout << "Linear Model" << std::endl;
    double yT = 1;
    double uT = 0.5;
    int time = 15;
    double a = 1.2;
    double b = 0.7;


    for (int i = 0; i < time; i++) {
        yT = a * yT + b * uT;

        std::cout << yT << std::endl;
    }
}

void NonLinearModel() {
    std::cout << "Non-Linear Model" << std::endl;

    double yT = 1.5;
    double uT = 0.5;
    double prevYT = 0;
    int time = 15;
    double a = 1.2;
    double b = 0.7;
    double c = -0.32;
    double d = 0.53;


    for (int i = 0; i < time; i++) {
        yT = a * yT - b * std::pow(prevYT, 2) + c * uT + d * std::sin(uT);

        std::cout << yT << std::endl;
        prevYT = yT;
    }
}

int main() {
    LinearModel();
    NonLinearModel();
    return 0;
}