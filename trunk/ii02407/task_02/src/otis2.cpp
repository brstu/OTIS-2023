#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "ru");
    int K0 = 1;
    double time = 10;
    double alpha = 0.002;
    double beta = 0.005;
    double gamma = 0.45;
    double delta = 0.007;
    double y_nonLin1 = 0.2;
    double y_nonLin2 = 0.04;
    double t_nonLin1 = 0.1;
    double t_nonLin0 = 0.0025;
    double Q = 0.04;
    double P = 0.01;
    double TD = 1.7;
    double j = 1.5;
    double l1 = 0;
    double l2 = 0;
    double en = 0;
    std::cout << "Нелинейная модель: \n" << std::endl;
    for (int k = K0; k <= time; k++) {
        double q0 = Q * (1 + TD / k);
        double q1 = -Q * (1 + 2 * TD / k - k / P);
        double q2 = Q * TD / k;
        l1 = j - y_nonLin1;
        l2 = j - y_nonLin2;
        double y_nonlin3 = alpha * y_nonLin2 - beta * pow(std::abs(y_nonLin1), 2) + gamma * t_nonLin1 + delta * sin(t_nonLin0);
        y_nonLin1 = y_nonLin2;
        y_nonLin2 = y_nonlin3;
        en = j - y_nonlin3;
        double t_nonlin_n = t_nonLin1 + q0 * en + q1 * l2 + q2 * l1;
        t_nonLin0 = t_nonLin1;
        t_nonLin1 = t_nonlin_n;
        std::cout << k << "\t" << y_nonlin3 << "\t:\t" << en << std::endl;
    }
    return 0;
}
