#include <iostream>
#include <math.h>

class Models {
private:
    const double a = 0.722;
    const double b = 0.421;
    const double c = 0.587;
    const double d = 0.035;
public:
    [[nodiscard]] double linearModel(double f, double u) const {
        double result = a * f + b * u;
        std::cout << result << std::endl;
        return result;
    }

    [[nodiscard]] double notLinearModel(double f, double prevF, double u) const {
        double result = a * f - b * prevF * prevF + c * u + d * sin(u);
        std::cout << result << std::endl;
        return result;
    }
};

int main() {
    double f = 0.0;
    double u = 1.0;
    int n = 100;
    Models model;

    std::cout << "Linear modeling\n";

    for (int i = 0; i < n; i++) {
        f = model.linearModel(f, u);
    }

    std::cout << "-----------------------------------------------------------" << std::endl;

    std::cout << "Not Linear modeling\n";

    double fn = 0;
    f = 0;
    for (int i = 0; i < n; i++) {
        double prevF = f;
        f = fn;
        fn = model.notLinearModel(f, prevF, u);
    }

}