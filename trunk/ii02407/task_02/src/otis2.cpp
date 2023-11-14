#include <iostream>
#include <cmath>
#include <vector>

struct NonLinearModelParams {
    double K0;
    double time;
    double alpha;
    double beta;
    double gamma;
    double delta;
    double y_nonLin1;
    double y_nonLin2;
    double t_nonLin1;
    double t_nonLin0;
    double Q;
    double P;
    double TD;
    double j;
};

void calculateNonLinearModelParams(double k, const NonLinearModelParams& params) {
    double q0 = params.Q * (1 + params.TD / k);
    double q1 = -params.Q * (1 + 2 * params.TD / k - k / params.P);
    double q2 = params.Q * params.TD / k;
    double l1 = params.j - params.y_nonLin1;
    double l2 = params.j - params.y_nonLin2;
    double y_nonlin3 = params.alpha * params.y_nonLin2 - params.beta * std::pow(std::abs(params.y_nonLin1), 2) + params.gamma * params.t_nonLin1 + params.delta * std::sin(params.t_nonLin0);
    double en = params.j - y_nonlin3;
    double t_nonlin_n = params.t_nonLin1 + q0 * en + q1 * l2 + q2 * l1;
    l1 = l2;
    l2 = en;
    std::cout << k << "\t" << y_nonlin3 << "\t:\t" << en << std::endl;
}

void calculateNonLinearModel(const NonLinearModelParams& params) {
    std::cout << "Модель нелинейной системы: \n" << std::endl;
    for (double k = params.K0; k <= params.time; k++) {
        calculateNonLinearModelParams(k, params);
    }
}

int main() {
<<<<<<< HEAD
    double a = 0.5;
    double b = 0.6;
    double c = 0.7;
    double d = 0.5;

    double K_val = 0.9;
    double T0 = 1.3;
    double TD = 1.2;
    double TValue = 1;

    double Q0 = K_val * (TD / T0 + 1);
    double Q1 = -K_val * (-T0 / TValue + 1 + 2 * TD / T0);
    double Q2 = K_val * (TD / T0);

    double Y = 10.0;
    std::vector<double> Yt = { Y, Y };

    double u2 = 1.0;
    double u1 = 1.0;

    double Wt = 40;

    std::vector<double> E = { Wt - Y, Wt - Y };

    int temp = 2;
    while (std::abs(Yt.back() - Wt) > 0.1) {
        temp++;
        E.push_back(Wt - Yt.back());
        u2 = u1 + Q0 * E.back() + Q1 * E[E.size() - 2] + Q2 * E[E.size() - 3];
        Yt.push_back(a * Yt.back() - b * Yt[Yt.size() - 2] + c * u2 + d * std::sin(u1));
        u1 = u2;
    }

    for (int i = 0; i < Yt.size(); i++) {
        std::cout << Yt[i] << std::endl;
    }

=======
    setlocale(LC_ALL, "ru");
    std::cout << std::endl;
    NonLinearModelParams params;
    params.K0 = 1;
    params.time = 10;
    params.alpha = 0.002;
    params.beta = 0.005;
    params.gamma = 0.45;
    params.delta = 0.007;
    params.y_nonLin1 = 0.2;
    params.y_nonLin2 = 0.04;
    params.t_nonLin1 = 0.1;
    params.t_nonLin0 = 0.0025;
    params.Q = 0.04;
    params.P = 0.01;
    params.TD = 1.7;
    params.j = 1.5;
    calculateNonLinearModel(params);
>>>>>>> 5d8c68b508037b9c41eae395373f690d0df72125
    return 0;
}
