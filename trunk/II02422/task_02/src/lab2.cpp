#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    double A = 0.5, B = 0.5, C = 0.5, D = 0.5;
    double K = 1, To = 1, Td = 1, T = 1;

    double q1 = K * (Td / To + 1);
    double q2 = -K * (-To / T + 1 + 2 * Td / To);
    double q3 = K * (Td / To);

    cout << "Enter start temperature: ";
    double start_y;
    cin >> start_y;

    vector<double> y = { start_y, start_y };

    double uk1 = 0.0;

    cout << "Enter desired temperature: ";
    double w;
    cin >> w;

    vector<double> e = { w - start_y, w - start_y };

    cout << y.back() << endl;

    while (abs(w - y.back()) > 0.1) {
        e.push_back(w - y.back());

        double delu = q1 * e.back() + q2 * e[e.size() - 2] + q3 * e[e.size() - 3];
        double uk = uk1 + delu;

        y.push_back(A * y.back() - B * y[y.size() - 2] + C * uk + D * sin(uk1));
        uk1 = uk;

        cout << y.back() << endl;
    }

    return 0;
}
