#include <iostream>
#include <cmath>

class functs {
public:
    double a = 0.3;
    double b = 0.4;
    double c = 0.1;
    double d = 0.5;
    double u = 1.0;
    double y = 0.0;

    void println(double val) {
        std::cout << val << std::endl;
    }

    // Нелинейная модель
    void nonliney(double A, double B, double C, double D, double K, double T0, double TD, double T, double w, double ys) {
        double q0 = K * (1 + (TD / T0));
        double q1 = -K * (1 + 2 * (TD / T0) - (T0 / T));
        double q2 = K * (TD / T0);
        double u_prev = 1.0;
        double e_prev1 = w - ys;
        double e_prev2 = w - ys;
        double y_prev = ys;
        double u = 1.0;

        std::cout << "Y" << std::endl;
        while (std::abs(y - w) > 0.1) {
            double e = w - y;
            double u = u_prev + q0 * e + q1 * e_prev1 + q2 * e_prev2;
            y = A * y - B * y_prev + C * u + D * std::sin(u_prev);
            e_prev2 = e_prev1;
            e_prev1 = e;
            u_prev = u;

            println(y);
        }
    }
};

int main() {
    functs f;

    std::cout << "модель" << std::endl;
    f.nonliney(0.5, 0.6, 0.6, 0.6, 0.8, 1.1, 1, 1.1, 20, 2.0);

    return 0;
}
