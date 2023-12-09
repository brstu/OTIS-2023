#pragma once
#include <vector>

class ControlSystem {
public:
    ControlSystem();
    double sum();
    void nonlinear(int time, double setValue, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7);
    [[nodiscard]] std::vector<double> getY() const;

private:
    double k = 0.0001;
    double t = 100;
    double t_d = 100;
    double t_0 = 1;

    double q_0;
    double q_1;
    double q_2;

    std::vector<double> q;
    std::vector<double> e = {0, 0, 0};
    std::vector<double> y = {0, 0, 0};
    std::vector<double> u = {1, 1};
};

