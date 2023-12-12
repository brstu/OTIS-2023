#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const double k = 0.001;//коэф. передачи
const double t = 50;//постоянная интегрирования
const double td = 100;//постоянная дифференцирования
const double t0 = 1;//шаг
const double a = 0.4;
const double b = 0.4;
const double c = 0.4;
const double d = 0.4;

void nelineyn(double znach) {
    double q0 = k * (1 + td / t0);
    double q1 = -k * (1 + 2 * td / t0 - t0 / t);
    double q2 = k * td / t0;
    vector<double> y = { 0, 0, 0 };
    vector<double> u = { 1, 1 };
    for (int i = 0; i < t; i++) {
        double e0 = znach - y[y.size() - 1];
        double e1 = znach - y[y.size() - 2];
        double e2 = znach - y[y.size() - 3];
        double intsum = q0 * e0 + q1 * e1 + q2 * e2;
        u[0] = u[1] + intsum;
        u[1] = u[0];
        y.push_back(a * y[y.size() - 1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
    }
    for (double i : y) {
        double res = i * znach / y[y.size() - 1];
        cout << res << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    double znach;
    cout << "Желаемое начальное значение: ";
    cin >> znach;
    nelineyn(znach);
    return 0;
}
