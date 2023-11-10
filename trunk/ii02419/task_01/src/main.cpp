#include <iostream>
#include <vector>
#include <cmath>
class Models {
private:
    double a = 0.41;
    double b = 1.4;
    double c = 0.5;
    double d = 0.3;
public:
    double linearModel(double f, double u) {
        double result = a * f + b * u;
        std::cout << result << std::endl;
        return result;
    }

    double nonLinearModel(double f, double prevF, double u) {
        double result = a * f - b * prevF * prevF + c * u + d * sin(u);
        std::cout << result << std::endl;
        return result;
    }
};

int main() {
    double f = 0.0;
    double u = 1.0;
    double n = 100;
    Models model;

    std::cout << "LinearModeling\n";

    for (int i = 0; i < n; i++) {
        f = model.linearModel(f, u);
    }

    std::cout << "---" << std::endl;

    std::cout << "NonLinearModeling\n";


    float fn = 0;
    f = 0;
    for (int i = 0; i < n; i++) {
        double prevF = f;
        f = fn;
        fn = model.nonLinearModel(f, prevF, u);
    }

}