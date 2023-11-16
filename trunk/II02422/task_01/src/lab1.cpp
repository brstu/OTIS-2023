#include <iostream>
#include <cmath>

class globalki {
public:
    double a = 0.31;
    double b = 0.48;
    double c = 0.14;
    double d = 0.48;
    double u = 1.1;
    double y = 0.1;
};

globalki globals;

void linearmod(int t, int n, double y) {
    if (n < t) {
        std::cout << y << std::endl;
        linearmod(t, n + 1, globals.a * y + globals.b * globals.u);
    }
    std::cout << y << std::endl;
}

void unlinearmodel(double y, double y_prev, double u, double u_prev, int i, int t) {
    if (i == 1) {
        std::cout << y << std::endl;
        unlinearmodel(globals.a * y - globals.b * pow(y_prev, 2) + globals.c * 1 + globals.d * sin(1), y, globals.u, globals.u, i + 1, t);
    }
    else if (i < t) {
        std::cout << y << std::endl;
        unlinearmodel(globals.a * y - globals.b * pow(y_prev, 2) + globals.c * u + globals.d * sin(u_prev), y, globals.u, globals.u, i + 1, t);
    }
    std::cout << y << std::endl;
}

int main() {
    std::cout << "linear model" << std::endl;
    linearmod(10, 0, globals.y);

    std::cout << "unlinear model" << std::endl;
    unlinearmodel(globals.y, 0, globals.u, 0, 1, 10);

    return 0;
}