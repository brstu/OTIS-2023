#include <iostream>
#include <cmath>
double a = 0.3;
double b = 0.4;
double c = 0.1;
double d = 0.5;
double u = 1.0;
double y = 0.0;
void println(double val) {
    std::cout << val << std::endl;
}
double linear(double y, int n, int t) {
    if (n < t) {
        println(y);
        return linear(a * y + b * u, n + 1, t);
    }
    println(y);
    return a * y + b * u;
}
int main() {
    std::cout << "Линейная модель" << std::endl;
    std::cout << linear(y, 0, 10) << std::endl;
    std::cout << "                   " << std::endl;
    std::cout << "Нелинейная модель" << std::endl;
    println(y);
    double y_prev = y;
    double u_prev = u;
    y = a * y - b * y_prev * y_prev + c * 1.0 + d * sin(1.0);
    for (int i = 1; i < 10; i++) {
        println(y);
        double temp = y;
        y = a * y - b * y_prev * y_prev + c * u + d * sin(u_prev);
        y_prev = temp;
        u_prev = u;
    }
    return 0;
}

