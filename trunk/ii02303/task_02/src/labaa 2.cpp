#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

const double K = 0.0001;
const double T = 100;
const double TD = 100;
const double T0 = 1;

const double q0 = K * (1 + TD / T0);
const double q1 = -K * (1 + 2 * TD / T0 - T0 / T);
const double q2 = K * TD / T0;


class func {
private:
    vector<double> q = { q0, q1, q2 };
    vector<double> e = { 0, 0, 0 };
    vector<double> y = { 0, 0, 0 };
    vector<double> u = { 1, 1 };

public:
    double summ() {
        double summ = 0;
        for (int i = 0; i < 3; i++) {
            summ += q[i] * e[i];
        }
        return summ;
    }

    void nonlinear(int time, double setp, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7) {
        for (int i = 0; i < time; i++) {
            e[0] = setp - y[y.size() - 1];
            e[1] = setp - y[y.size() - 2];
            e[2] = setp - y[y.size() - 3];
            u[0] = u[1] + summ();
            y.push_back(a * y[y.size() - 1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
            u[1] = u[0];
        }
    }

    vector<double> getY() const {
        return y;
    }
};

int main() {
    double setp;
    ofstream out("output.txt");
    func f;

    if (out.is_open()) {
        cout << "Enter the setpoint: ";
        cin >> setp;
        f.nonlinear(100, setp);
        vector<double> y_values = f.getY();

        for (int i = 0; i < y_values.size(); i++) {
            double scaledValue = y_values[i] * setp / y_values[y_values.size() - 1];
            cout << i << " " << scaledValue << endl;
            out << i << " " << scaledValue << endl;
        }

        out.close();
    }
    else {
        cerr << "Error: Cannot open the output file." << endl;
    }

    return 0;
}