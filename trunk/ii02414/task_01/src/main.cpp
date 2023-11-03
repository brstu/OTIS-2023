#include <iostream>
#include <math.h>

class Models {
private:
    const float a = 0.722;
    const float b = 0.421;
    const float c = 0.587;
    const float d = 0.035;
public:
    [[nodiscard]] float linearModel(float f, float u) const {
        float result = a * f + b * u;
        std::cout << result << std::endl;
        return result;
    }

    [[nodiscard]] float notLinearModel(float f, float prevF, float u) const {
        float result = a * f - b * prevF * prevF + c * u + d * sin(u);
        std::cout << result << std::endl;
        return result;
    }
};

int main() {
    float f = 0.0;
    float u = 1.0;
    float n = 100;
    Models model;

    std::cout << "Linear modeling\n";

    for (int i = 0; i < n; i++) {
        f = model.linearModel(f, u);
    }

    std::cout << "-----------------------------------------------------------" << std::endl;

    std::cout << "Not Linear modeling\n";

    float fn = 0;
    f = 0;
    for (int i = 0; i < n; i++) {
        float prevF = f;
        f = fn;
        fn = model.notLinearModel(f, prevF, u);
    }

}