#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void nonliner(double A, double B, double C, double D, double K, double T0, double TD, double T, double W, double YS) {
    double q0 = K * (1 + (TD / T0));
    double q1 = -K * (1 + 2 * (TD / T0) - (T0 / T));
    double q2 = K * (TD / T0);

    vector<double> y = {YS, YS};
    double U = 1.0;
    double U_pre = 1.0;
    vector<double> E = {W - YS, W - YS};
    vector<double> um = {U, U};

    while (abs(y.back() - W) > 0.1) {
        E.push_back(W - y.back());
        U = U_pre + q0 * E.back() + q1 * E[E.size() - 2] + q2 * E[E.size() - 3];
        y.push_back(A * y.back() - B * y[y.size() - 2] + C * U + D * sin(U_pre));
        U_pre = U;
        um.push_back(U);
    }

    cout << "Y" << endl;
    for (double val : y) {
        cout << val << endl;
    }
    cout << endl;

    cout << "E" << endl;
    for (double val : E) {
        cout << val << endl;
    }
    cout << endl;

    cout << "U" << endl;
    for (double val : um) {
        cout << val << endl;
    }
}

int main() {
    double A = 0.5;
    double B = 0.6;
    double C = 0.6;
    double D = 0.6;
    double K = 0.8;
    double T0 = 1.1;
    double TD = 1;
    double T = 1.1;

    double YS = 2.0;
    double W = 20;

    nonliner(A, B, C, D, K, T0, TD, T, W, YS);

    return 0;
}