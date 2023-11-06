#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

using namespace std;

double const K = 0.0001;
int const T = 100;
int const T_D = 100;
int const T_0 = 1;

double const q_0 = K * (1 + T_D / T_0);
double const q_1 = -K * (1 + 2 * T_D / T_0 - T_0 / T);
double const q_2 = K * T_D / T_0;

const vector<double> q = { q_0, q_1, q_2 };

vector<double> nonlinear_model(double w, int time, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7) {
    vector<double> e = { 0.0, 0.0, 0.0 };
    vector<double> y = { 0.0, 0.0, 0.0 };
    vector<double> u = { 1.0, 1.0 };

    int i = 0;
    while (i < time) {
        e[0] = w - y.back();
        e[1] = w - y[y.size() - 2];
        e[2] = w - y[y.size() - 3];
        u[0] = u[1] + std::inner_product(q.begin(), q.end(), e.begin(), 0.0);
        y.push_back(a * y.back() - b * pow(y[y.size() - 2], 2) + c * u[0] + d * sin(u[1]));
        u[1] = u[0];

        i += 1;
    }
    return y;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double w;
    cin >> w;
    vector<double> y = nonlinear_model(w, 100);
    for (auto el : y) {
        cout << el * w / y.back() << endl;
    }
    return 0;
}
