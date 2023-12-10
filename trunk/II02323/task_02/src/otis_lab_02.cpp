#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class NonlinerFunk {
private:
    double A, B, C, D, K, T0, TD, T, W, YS;
    double q0, q1, q2;
    double U = 1.0;
    double U_pre = 1.0;


    vector<double> y;
    vector<double> E;
    vector<double> um;

    double val;
public:
    NonlinerFunk(double A, double B, double C, double D, double K, double T0, double TD, double T, double W, double YS) {
        this->A = 0.5;
        this->B = 0.6;
        this->C = 0.6;
        this->D = 0.6;
        this->K = 0.8;
        this->T0 = 1.1;
        this->TD = 1;
        this->T = 1.1;

        this->YS = 2.0;
        this->W = 20;

        this->q0 = K * (1 + (TD / T0));
        this->q1 = -K * (1 + 2 * (TD / T0) - (T0 / T));
        this->q2 = K * (TD / T0);

        this->val = 0;
    };
    void nonliner() {


        y = { YS, YS };
        E = { W - YS, W - YS };
        um = { U, U };

        while (abs(y.back() - W) > 0.1) {
            E.push_back(W - y.back());
            U = U_pre + q0 * E.back() + q1 * E[E.size() - 2] + q2 * E[E.size() - 3];
            y.push_back(A * y.back() - B * y[y.size() - 2] + C * U + D * sin(U_pre));
            U_pre = U;
            um.push_back(U);
        }
    }
    void print() {
        cout << "Y" << "\n";
        for (double val : y) {
            cout << val << "\n";
        }
        cout << "\n";

        cout << "E" << "\n";
        for (double val : E) {
            cout << val << "\n";
        }
        cout << "\n";

        cout << "U" << "\n";
        for (double val : um) {
            cout << val << "\n";
        }
    }
};

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

    NonlinerFunk nonliner(A, B, C, D, K, T0, TD, T, W, YS);

    nonliner.nonliner();
    nonliner.print();

    return 0;
}