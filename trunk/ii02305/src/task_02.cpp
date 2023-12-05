#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Unliner {
public:
    explicit Unliner(double w) : w(w) {}

    void calculate() {
        const short int y_start = 2;
        y = { y_start, y_start };
        double u = 4.0;
        e = { w - y_start, w - y_start };
        u_pr = { u, u };

        while (abs(w - y.back()) > 0.01)
        {
            e.push_back(w - y.back());
            u = u_pr.back() + q0 * e.back() + q1 * e[e.size() - 2] + q2 * e[e.size() - 3];
            y.push_back(A * y.back() - B * y[y.size() - 2] + C * u + D * sin(u_pr.back()));
            u_pr.push_back(u);
        }
    }

    void print() {
        cout << "y\te\tu_pr\n";
        for (size_t i = 0; i < y.size(); i++)
            cout << i + 1 << ";" << y[i] << ";" << e[i] << ";" << u_pr[i] << endl;
    }

private:
    double A = 0.5, B = 0.5, C = 0.66, D = 0.68;
    double K = 0.78, T0 = 1.05, TD = 1.08, T = 1.0, w;
    double q0 = K * (1 + (TD / T0)),
        q1 = -K * (1 + 2 * (TD / T0) - (T0 / T)),
        q2 = K * (TD / T0);
    vector<double> y;
    vector<double> e;
    vector<double> u_pr;
};

int main() {
    Unliner unliner(20);
    unliner.calculate();
    unliner.print();
}
