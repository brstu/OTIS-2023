#include <iostream>
#include<cmath>



 void LinearModel() {
    std::cout << "Linear Model" << std::endl;
    double yT = 1;
    double uT = 0.5;
    int time = 15;
    double a = 1.2;
    double b = 0.7;
    double arrayLinearY[15];

    for (int i = 0; i < time; i++) {
        yT = a * yT + b * uT;
        arrayLinearY[i] = yT;
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
     double arrayNonLinearY[15];

     for (int i = 0; i < time; i++) {
         yT = a * yT - b * pow(prevYT, 2) + c * uT + d * sin(uT);
         arrayNonLinearY[i] = yT;
         std::cout << yT << std::endl;
     }
 }

 int main()
 {
     LinearModel();
     NonLinearModel();
 }

