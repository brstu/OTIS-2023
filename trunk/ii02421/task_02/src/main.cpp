#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

class Regulator {
public:
    Regulator() = default;

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

    std::vector<double> getParameterY() const {
        return y;
    }

private:
    double a = 0.8;
    double b = 0.3;
    double c = 0.6;
    double d = 0.04;
    double k = 0.0002;
    double t = 150;
    double t0 = 2;
    double td = 120;
    double q0 = k * (1 + td / t0);
    double q1 = -k * (1 + 2 * td / t0 - t0 / t);
    double q2 = k * td / t0;
    std::vector<double> q = {q0, q1, q2};
    std::vector<double> e = {0, 0, 0};
    std::vector<double> y = {0, 0, 0};
    std::vector<double> u = {1, 1};
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
