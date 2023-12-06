#include <iostream>
#include <cmath>
#include <array>

const std::array<double, 2> lin = {0.34, 2};
const std::array<double, 4> nonLin = {0.56, 0.91, 0.3, -0.1};
const double auf = 2.05;
const int t = 50;

void linearFunction(double a, double b, double u){
    std::array<double, t> list;

    for(int i = 0; i < t; i++) {
        if (i <= 0) {
            list[i] = a * 0 + b * u;
        } else {
            list[i] = a * list[i - 1] + b * u;
        }
    }

    std::cout << "Linear:\n" << std::endl;

    for(int i = 0; i < t; i++)
        std::cout << list[i] << std::endl;
}

void nonLinearFunction(double a, double b, double c, double d, double u){
    std::array<double, t> list;

    for(int i = 0; i<t; i++) {
        if (i > 1) {
            list[i] = a * list[i - 1] - b * pow(list[i - 2], 2) + c * u + d * sin(u);
        } else {
            list[i] = a * 0 - b * pow(0, 2) + c * u + d * sin(u);
        }
    }

    std::cout << "\nNon Linear:\n" << std::endl;

    for(int i = 0; i < t; i++) {
        std::cout << list[i] << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    for(int i = 0; i < 2; i++){
        if(i == 0){
            linearFunction(lin[0], lin[1], auf);
        }
        if(i == 1){
            nonLinearFunction(nonLin[0], nonLin[1], nonLin[2], nonLin[3], auf);
        }
    }

    return 0;
}