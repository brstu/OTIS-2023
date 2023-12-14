#include <iostream>
#include <cmath>

const double a = 0.5;
const double b = 1;
const double c = 0.15;
const double d = 0.3;
const double u = 1.2;

void linearModel(double& y) {
    y = a * y + b * u;
    std::cout << y << std::endl;
}

void nonLinearModel(double& y, double& prevY, bool& secondIteration) {
    if (secondIteration) {
        prevY = y;
        y = a * y + c * u + d * std::sin(u); 
        std::cout << y << std::endl;
        secondIteration = false;
    } else {
        double temp;
        temp = a * y - b * std::pow(prevY, 2) + c * u + d * std::sin(u);
        prevY = y;
        y = temp;
        std::cout << y << std::endl;
    }
}

int main() {
    double linearY, nonLinearY, prevY;
    bool secondIteration = true;
    
    std::cout << "Введите температуру: ";
    std::cin >> linearY;
    
    nonLinearY = linearY;
    int numSteps = 10;
    
    std::cout << "Линейная модель" << std::endl;
    std::cout << linearY << std::endl;
    for (int i = 0; i < numSteps; i++) {
        linearModel(linearY);
    }
    
    std::cout << std::endl << "Нелинейная модель" << std::endl;
    std::cout << nonLinearY << std::endl;
    for (int i = 0; i < numSteps; i++) {
        nonLinearModel(nonLinearY, prevY, secondIteration);
    }
    
    return 0;
}