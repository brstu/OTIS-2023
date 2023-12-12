#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

class Regulator {
public:
    Regulator() {
        a = 0.8;
        b = 0.3;
        c = 0.6;
        d = 0.04;

        k = 0.0002;
        t = 150;
        td = 120;
        t0 = 2;

        q0 = k * (1 + td / t0);
        q1 = -k * (1 + 2 * td / t0 - t0 / t);
        q2 = k * td / t0;

        q = {q0, q1, q2};
        e = {0, 0, 0};
        y = {0, 0, 0};
        u = {1, 1};
    }

    double sum() {
        double result = 0;
        for (size_t i = 0; i < q.size(); ++i) {
            result += q[i] * e[i];
        }
        return result;
    }

    void notLinearModel(int n, double value) {
        for (int _ = 0; _ < n; ++_) {
            e[0] = value - y[y.size() - 1];
            e[1] = value - y[y.size() - 2];
            e[2] = value - y[y.size() - 3];

            u[0] = u[1] + sum();
            y.push_back(
                    a * y[y.size() - 2] -
                    b * std::pow(y[y.size() - 2], 2) +
                    c * u[0] +
                    d * std::sin(u[1])
            );
            u[1] = u[0];
        }
    }

    std::vector<double> getParameterY() {
        return y;
    }

private:
    double a, b, c, d, k, t, td, t0, q0, q1, q2;
    std::vector<double> q, e, y, u;
};

int main() {
    std::cout << "Enter the value: ";
    double value;
    std::cin >> value;

    Regulator model;
    model.notLinearModel(100, value);
    std::vector<double> yValues = model.getParameterY();

    std::ofstream outFile("output.txt");

    for (size_t i = 0; i < yValues.size(); ++i) {
        double resValue = (yValues[i] * value) / yValues[yValues.size() - 1];
        std::cout << i << " " << resValue << std::endl;
        outFile << i << " " << resValue << "\n";
    }

    outFile.close();

    return 0;
}
