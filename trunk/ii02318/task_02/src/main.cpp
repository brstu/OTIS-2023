#include <iostream>
#include <vector>
#include <cmath>

class NonlinearModel {
private:
    double a;
    double b;
    double c;
    double d;
    std::vector<double> q{ 0.0, 0.0, 0.0 };
    std::vector<double> e{ 0.0, 0.0, 0.0 };
    std::vector<double> y{ 0.0, 0.0, 0.0 };
    std::vector<double> u{ 1.0, 1.0 };

public:
    NonlinearModel(double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7)
        : a(a), b(b), c(c), d(d) {
        double K = 0.0001;
        double T = 100;
        double T_D = 100;
        double T_0 = 1;

        q[0] = K * (1 + T_D / T_0);
        q[1] = -K * (1 + 2 * T_D / T_0 - T_0 / T);
        q[2] = K * T_D / T_0;
    }

    void simulate(int time, int w) {
        int i = 0;
        while (i < time) {
            e[0] = w - y[y.size() - 1];
            e[1] = w - y[y.size() - 2];
            e[2] = w - y[y.size() - 3];
            u[0] = u[1] + q[0] * e[0] + q[1] * e[1] + q[2] * e[2];
            y.push_back(a * y[y.size() - 1] - b * pow(y[y.size() - 2], 2) + c * u[0] + d * sin(u[1]));
            u[1] = u[0];

            i++;
        }
    }

    void printNormalizedOutput(int w) const {
        for (double el : y) {
            std::cout << el * w / y[y.size() - 1] << std::endl;
        }
    }
};

int main() {
    int w = 23;
    NonlinearModel model;
    model.simulate(100, w);
    model.printNormalizedOutput(w);
    return 0;
}