#include <iostream>
#include <vector>
#include <cmath>

class CustomModels {
private:
    double param1 = 0.41;
    double param2 = 1.4;
    double param3 = 0.5;
    double param4 = 0.3;

public:
    double customLinearModel(double val1, double val2) const {
        double result = param1 * val1 + param2 * val2;
        std::cout << result << std::endl;
        return result;
    }

    double customNonLinearModel(double val1, double val2, double val3) const {
        double result = param1 * val1 - param2 * val2 * val2 + param3 * val3 + param4 * sin(val3);
        std::cout << result << std::endl;
        return result;
    }
};

int main() {
    double val1 = 0.0;
    double val2 = 1.0;
    double val3 = 100;  
    CustomModels customModel;

    std::cout << "CustomLinearModeling\n";

    for (int i = 0; i < val3; i++) {
        val1 = customModel.customLinearModel(val1, val2);
    }

    std::cout << "---" << std::endl;

    std::cout << "CustomNonLinearModeling\n";

    double prevVal1 = 0;
    val1 = 0;
    for (int i = 0; i < val3; i++) {
        double tempVal = val1;
        val1 = prevVal1;
        prevVal1 = customModel.customNonLinearModel(val1, tempVal, val2);
    }

    return 0;
}

