


#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class LinearModel {
private:
    double a, b;
    ofstream file;

public:
    LinearModel(double a_val, double b_val) : a(a_val), b(b_val) {
        file.open("linear_data.txt");
        file.clear();
    }

    void simulate(double y, double u, double t, double i = 1) {
        if (i != t) {
            file << i << " " << y << endl;
            cout << y << endl;
            simulate(a * y + b * u, u, t, i + 1);
        } else {
            cout << "End of linear simulation\n";
        }
    }

    ~LinearModel() {
        file.close();
    }
};

class NonLinearModel {
private:
    double a, b, c, d;
    ofstream file;

public:
    NonLinearModel(double a_val, double b_val, double c_val, double d_val)
            : a(a_val), b(b_val), c(c_val), d(d_val) {
        file.open("nonlinear_data.txt");
        file.clear();
    }

    void simulate(double y, double y1, double u, double t, double i = 1) {
        if (i != t) {
            file << i << " " << y << endl;
            cout << y << endl;
            double nextY = a * y - b * y1 * y1 + c * u + d * sin(u);
            simulate(nextY, y, u, t, i + 1);
        } else {
            cout << "End of nonlinear simulation\n";
        }
    }

    ~NonLinearModel() {
        file.close();
    }
};

int main() {
    const double a = 0.5, b = 0.5, c = 0.5, d = 0.5;
    double y = 0, u = 1, t = 100;

    cout << "Linear model simulation:\n";
    LinearModel linear(a, b);
    linear.simulate(y, u, t);

    cout << "\nNonlinear model simulation:\n";
    NonLinearModel nonlinear(a, b, c, d);
    nonlinear.simulate(y, y, u, t);

    return 0;
}
