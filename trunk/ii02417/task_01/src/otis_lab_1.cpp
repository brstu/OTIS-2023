#include <iostream>
#include <cmath>

class LinearModel {
public:
    LinearModel() {
        std::cout << "Linear Model" << std::endl;
        yT = 1;
        uT = 0.5;
        time = 15;
        a = 1.2;
        b = 0.7;
    }

    void simulate() {
        for (int i = 0; i < time; i++) {
            yT = a * yT + b * uT;

            std::cout << yT << std::endl;
        }
    }

private:
    double yT;
    double uT;
    int time;
    double a;
    double b;
};

class NonLinearModel {
public:
    NonLinearModel() {
        std::cout << "Non-Linear Model" << std::endl;
        yT = 1.5;
        uT = 0.5;
        prevYT = 0;
        time = 15;
        a = 1.2;
        b = 0.7;
        c = -0.32;
        d = 0.53;
    }

    void simulate() {
        for (int i = 0; i < time; i++) {
            yT = a * yT - b * std::pow(prevYT, 2) + c * uT + d * std::sin(uT);

            std::cout << yT << std::endl;
            prevYT = yT;
        }
    }

private:
    double yT;
    double uT;
    double prevYT;
    int time;
    double a;
    double b;
    double c;
    double d;
};

int main() {
    LinearModel linearModel;
    linearModel.simulate();

    NonLinearModel nonLinearModel;
    nonLinearModel.simulate();

    return 0;
}