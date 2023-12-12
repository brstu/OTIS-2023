#include <iostream>
#include <cmath>

class LinearModel {
public:
    LinearModel(){
        std::cout << "Linear Model" << std::endl;
    }

    void simulate() {
        for (int i = 0; i < time; i++) {
            yT = a * yT + b * uT;
            std::cout << yT << std::endl;
        }
    }

private:
    double yT = 1;     
    double uT = 0.5;   
    int time = 15;     
    double a = 1.2;    
    double b = 0.7;    
};

class NonLinearModel {
public:
    NonLinearModel(){
        std::cout << "Non-Linear Model" << std::endl;
    }

    void simulate() {
        for (int i = 0; i < time; i++) {
            yT = a * yT - b * std::pow(prevYT, 2) + c * uT + d * std::sin(uT);

            std::cout << yT << std::endl;
            prevYT = yT;
        }
    }

private:
    double yT = 1.5;   
    double uT = 0.5;   
    double prevYT = 0; 
    int time = 15;     
    double a = 1.2;    
    double b = 0.7;    
    double c = -0.32;  
    double d = 0.53;   
};

int main() {
    LinearModel linearModel;
    linearModel.simulate();

    NonLinearModel nonLinearModel;
    nonLinearModel.simulate();

    return 0;
}