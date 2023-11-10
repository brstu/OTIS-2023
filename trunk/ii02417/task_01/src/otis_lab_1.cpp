#include <iostream>
#include<cmath>



 void LinearModel() {
    std::cout << "Linear Model" << std::endl;
    float yT = 1;
    float uT = 0.5;
    int time = 15;
    float a = 1.2;
    float b = 0.7;
    float arrayLinearY[15];

    for (int i = 0; i < time; i++) {
        yT = a * yT + b * uT;
        arrayLinearY[i] = yT;
        std::cout << yT << std::endl;
    }
 }

 void NonLinearModel() {
     std::cout << "Non-Linear Model" << std::endl;
     float yT = 1.5;
     float uT = 0.5;
     float prevYT = 0;
     int time = 15;
     float a = 1.2;
     float b = 0.7;
     float c = -0.32;
     float d = 0.53;
     float arrayNonLinearY[15];

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

