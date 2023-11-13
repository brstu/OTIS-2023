#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const double A = 0.5;
const double B = 0.5;
const double C = 0.5;
const double D = 0.5;
const double K = 0.001;
const double T = 50;
const double TD = 100;
const double To = 1;
void unlinear(double value) {

    int t = 100;

    double q0 = K * (1 + TD / To);

    double q1 = -K * (1 + 2 * TD / To - To / T);

    double q2 = K * TD / To;

    vector<double> y = { 0, 0, 0 };
    vector<double> u = { 1, 1 };

    for (int i = 0; i < t; i++) {
        double e0 = value - y[y.size() - 1];
        double e1 = value - y[y.size() - 2];
        double e2 = value - y[y.size() - 3];
        double sum = q0 * e0 + q1 * e1 + q2 * e2;
        u[0] = u[1] + sum;
        u[1] = u[0];
        y.push_back(A * y[y.size() - 1] - B * y[y.size() - 2] * y[y.size() - 2] + C * u[0] + D * sin(u[1]));
    }

    for (int i = 0; i < y.size(); i++) {
        double res = y[i] * value / y[y.size() - 1];
        cout << " " << i << ": " << res << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    double value;
    cout << "Желаемое значение: ";
    cin >> value;

    unlinear(value);

    return 0;
}