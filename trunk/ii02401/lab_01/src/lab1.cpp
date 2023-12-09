#include <iostream>
#include <cmath>

class functs {
public:
    double a = 0.2;  // Modified value
    double b = 0.3;  // Modified value
    double c = 0.2;  // Modified value
    double d = 0.3;  // Modified value
    double u = 1.0;
    double y = 0.0;

    void println(double val) const {
        std::cout << val << std::endl;
    }

    // Modified linear model
    double linear(double y_input, int n, int t) {
        if (n < t) {
            println(y_input);
            return linear(a * y_input + b * u, n + 1, t);
        }
        println(y_input);
        return a * y_input + b * u;
    }
};

int main() {
    functs f;

    std::cout << "Modified Линейная модель" << std::endl;
    std::cout << f.linear(f.y, 0, 10) << std::endl;
    std::cout << "                   " << std::endl;
    std::cout << "Modified Нелинейная модель" << std::endl;
    f.println(f.y);
    double y_prev = f.y;
    double u_prev = f.u;
    f.y = f.a * f.y - f.b * y_prev * y_prev + f.c * 1.0 + f.d * sin(1.0);
    for (int i = 1; i < 10; i++) {
        f.println(f.y);
        double temp = f.y;
        f.y = f.a * f.y - f.b * y_prev * y_prev + f.c * f.u + f.d * sin(u_prev);
        y_prev = temp;
        u_prev = f.u;
    }

    return 0;
}
