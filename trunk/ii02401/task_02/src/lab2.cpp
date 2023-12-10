#include <iostream>
#include <cmath>

struct NonlinearParams {
    double A;
    double B;
    double C;
    double D;
    double K;
    double T0;
    double TD;
    double T;
    double w;
    double ys;
};

class functs {
public:
    double a = 0.3;
    double b = 0.4;
    double c = 0.1;
    double d = 0.5;
    double u = 1.0;
    double y = 0.0;

    void println(double val) const {
        std::cout << val << std::endl;
    }

    void nonliney(const NonlinearParams& params) const {
        double q0 = params.K * (1 + (params.TD / params.T0));
        double q1 = -params.K * (1 + 2 * (params.TD / params.T0) - (params.T0 / params.T));
        double q2 = params.K * (params.TD / params.T0);
        double u_prev = 1.0;
        double e_prev1 = params.w - params.ys;
        double e_prev2 = params.w - params.ys;
        double y_prev = params.ys;

        std::cout << "Y" << std::endl;
        while (std::abs(y - params.w) > 0.1) {
            double e = params.w - y;
            double u = u_prev + q0 * e + q1 * e_prev1 + q2 * e_prev2;
            y = params.A * y - params.B * y_prev + params.C * u + params.D * std::sin(u_prev);
            e_prev2 = e_prev1;
            e_prev1 = e;
            u_prev = u;

            println(y);
        }
    }
};

int main() {
    functs f;
    
    NonlinearParams params = {0.5, 0.6, 0.6, 0.6, 0.8, 1.1, 1, 1.1, 20, 2.0};
    f.nonliney(params);

    return 0;
}
