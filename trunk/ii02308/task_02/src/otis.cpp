#include <iostream>
#include <cmath>
#include <iomanip>

struct PID {
    double y0 = 0;
    double y1 = 0;

    double e0 = 0;
    double e1 = 0;
    double e2 = 0;

    double u0 = 0;
    double u1 = 0;

    void next_val(double& x0, double& x1, double next) const {
        x0 = x1;
        x1 = next;
    }

    void next_val1(double& x0, double& x1, double& x2, double next) const {
        x0 = x1;
        x1 = x2;
        x2 = next;
    }

    double K = 0.9;
    double T = 1.1;
    double TD = 1.01;
    double T0 = 1.34;

    double funk0() const {
        return K * (1 + TD / T0);
    }

    double funk1() const {
        return -K * (1 + 2 * TD / T0 - T0 / T);
    }

    double funk2() const {
        return K * TD / T0;
    }

    void function_cout(double val_y1, double val_y0) {
        double A = 0.5;
        double B = 0.5;
        double C = 0.35;
        double D = 1.1;
        double W = 30;
        int i = 0;
        y0 = val_y0;
        y1 = val_y1;
        e0 = 0;
        e1 = W - val_y0;
        e2 = W - val_y1;
        u0 = 1;
        u1 = 1;

        std::cout << "Function E is " << std::setw(25) << "Function Y is " << std::setw(28) << "Function U is" << std::endl;

        while (std::abs(W - y1) > 0.01) {
            std::cout << i << " " << std::fixed << std::setprecision(4) << e2 << std::setw(20);
            next_val1(e0, e1, e2, W - y1);
            double U = u1 + funk0() * e2 + funk1() * e1 + funk2() * e0;
            double next = A * y1 - B * y0 + C * U + D * std::sin(u1);
            std::cout << i << " " << next << std::setw(20);
            next_val(y0, y1, next);
            std::cout << i << " " << u1 << std::endl;
            next_val(u0, u1, U);
            i++;
        }
    }
};

int main() {
    double val_y1 = 1;
    double val_y0 = 0.1;

    PID func;
    func.function_cout(val_y1, val_y0);

    return 0;
}