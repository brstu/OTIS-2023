#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Func {
private:
    double K;
    double T;
    double T_D;
    double T_0;

    double q_0;
    double q_1;
    double q_2;

    vector<double> q;
    vector<double> e;
    vector<double> y;
    vector<double> u;

public:
    Func(double k, double t, double tD, double t0)
        : K(k), T(t), T_D(tD), T_0(t0), q_0(K* (1 + T_D / T_0)),
        q_1(-K * (1 + 2 * T_D / T_0 - T_0 / T)), q_2(K* T_D / T_0),
        q({ q_0, q_1, q_2 }), e({ 0, 0, 0 }), y({ 0, 0, 0 }), u({ 1, 1 }) {}

    double sum() {
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += q[i] * e[i];
        }
        return sum;
    }

    void nonlin(int time, double setpoint, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7) {
        for (int i = 0; i < time; i++) {
            e[0] = setpoint - y[y.size() - 1];
            e[1] = setpoint - y[y.size() - 2];
            e[2] = setpoint - y[y.size() - 3];
            u[0] = u[1] + sum();
            y.push_back(a * y[y.size() - 1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
            u[1] = u[0];
        }
    }

    vector<double> getY() const {
        return y;
    }
};

int main() {
    double setpoint;
    Func f(0.0001, 100, 100, 1);

    cout << "Enter the setpoint: ";
    cin >> setpoint;
    f.nonlin(100, setpoint);
    vector<double> y_values = f.getY();

    for (int i = 0; i < y_values.size(); i++) {
        double scaledValue = y_values[i] * setpoint / y_values[y_values.size() - 1];
        cout << i << " " << scaledValue << endl;
    }

    return 0;
}