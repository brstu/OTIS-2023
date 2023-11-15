#include <iostream>
#include <cmath>

const double lin[2] = {0.34, 2};
const double nonLin[4] = {0.56, 0.91, 0.3, -0.1};
const double u = 2.05;
const int t = 50;

void linearFunction(int t, double a, double b, double u){
    double list[t];

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

void nonLinearFunction(int t, double a, double b, double c, double d, double u){
    double list[t];

    for(int i = 0; i<t; i++) {
        if (i > 0) {
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
            linearFunction(t, lin[0], lin[1], u);
        }
        if(i == 1){
            nonLinearFunction(t, nonLin[0], nonLin[1], nonLin[2], nonLin[3], u);
        }
    }

    return 0;
}