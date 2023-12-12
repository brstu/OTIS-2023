#include<iostream>
#include<cmath>
using namespace std;

class Model {
private:
    double a;
    double b;
    double c;
    double d;
    double y = 0.02;
    double u = 1;
    double y0 = 0.00;
    double u0 = 0.00;
public:
    Model(double a, double b, double c, double d) : a(a), b(b), c(c), d(d) {}

    double lfunc() {
        y = a * y + b * u;
        return y;
    }

    double nonlfunc() {
        double y1 = a * y - b * pow(y0, 2) + c * u + d * sin(u0);
        y0 = y;
        y = y1;
        return y;
    }

    void simulateLinear(int n) {
        cout << "Linear:" << endl;
        for (int i = 0; i < n; i++) {
            cout << i << " ";
            cout << lfunc() << endl;
        }
    }

    void simulateNonlinear(int n) {
        cout << "Nonlinear:" << endl;
        for (int i = 0; i < n; i++) {
            cout << i << " ";
            cout << nonlfunc() << endl;
        }
    }
};

int main() {
    double a = 0.23;
    double b = 0.77;
    double c = 0.45;
    double d = 0.11;
    const int n = 99;
    Model model(a, b, c, d);

    model.simulateLinear(n);
    model.simulateNonlinear(n);

    return 0;
}