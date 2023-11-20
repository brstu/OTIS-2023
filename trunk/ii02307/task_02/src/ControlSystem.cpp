#include "ControlSystem.h"
#include <vector>
#include "math.h"

ControlSystem::ControlSystem() : k(0.0001), t(100), t_d(100), t_0(1), q_0(k * (1 + t_d / t_0)), q_1(-k * (1 + 2 * t_d / t_0 - t_0 / t)),
                                 q_2(k * t_d / t_0), q({q_0, q_1, q_2}), e({0, 0, 0}), y({0, 0, 0}), u({1, 1}) {}

double ControlSystem::sum() {
    double sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += q[i] * e[i];
    }
    return sum;
}

void ControlSystem::nonlinear(int time, double setValue, double a, double b, double c, double d) {
    for (int i = 0; i < time; i++) {
        e[0] = setValue - y[y.size() - 1];
        e[1] = setValue - y[y.size() - 2];
        e[2] = setValue - y[y.size() - 3];
        u[0] = u[1] + sum();
        y.push_back(a * y[y.size() - 1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
        u[1] = u[0];
    }
}

std::vector<double> ControlSystem::getY() const {
    return y;
}