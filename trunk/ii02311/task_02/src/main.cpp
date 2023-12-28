#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const double A = 0.5;
const double B = 0.6;
const double C = 0.6;
const double D = 0.6;
const double K = 0.8;
const double T0 = 1.1;
const double TD = 1.0;
const double T = 1.1;
const double w = 20;
double calculateQ0() {
    return K * (1 + (TD / T0));
}

double calculateQ1() {
    return -K * (1 + 2 * (TD / T0) - (T0 / T));
}

double calculateQ2() {
    return K * (TD / T0);
}

void unliner() {
    const short int y_start = 2;
    vector<double> y = { y_start, y_start };
    double u = 1.0;
    vector<double> e = { w - y_start, w - y_start };
    vector<double> u_pr = { u, u };
    
    double q0 = calculateQ0();
    double q1 = calculateQ1();
    double q2 = calculateQ2();

    while (abs(w - y.back()) > 0.01) {
        e.push_back(w - y.back());
        u = u_pr.back() + q0 * e.back() + q1 * e[e.size() - 2] + q2 * e[e.size() - 3];
        y.push_back(A * y.back() - B * y[y.size() - 2] + C * u + D * sin(u_pr.back()));
        u_pr.push_back(u);
    }

    cout << "y\te\tu_pr\n";
    for (int i = 0; i < y.size(); i++) {
        cout << i + 1 << ";" << y[i] << ";" << e[i] << ";" << u_pr[i] << endl;
    }
}

int main() {
    unliner();
}
