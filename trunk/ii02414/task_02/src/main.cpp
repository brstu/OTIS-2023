#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

class Regulator {
private:
    const double a = 0.722;
    const double b = 0.421;
    const double c = 0.587;
    const double d = 0.035;

    const double k = 0.0001;
    const double t = 100;
    const double td = 100;
    const double t0 = 1;

    const double q0 = k * (1 + td / t0);
    const double q1 = -k * (1 + 2 * td / t0 - t0 / t);
    const double q2 = k * td / t0;

    std::vector<double> q = {q0, q1, q2};
    std::vector<double> e = {0, 0, 0};
    std::vector<double> y = {0, 0, 0};
    std::vector<double> u = {1, 1};
public:
    [[nodiscard]] double sum() const {
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += q[i] * e[i];
        }
        return sum;
    }

    void notLinearModel(int n, double value) {
        for (int i = 0; i < n; i++) {
            e[0] = value - y[y.size() - 1];
            e[1] = value - y[y.size() - 2];
            e[2] = value - y[y.size() - 3];

            u[0] = u[1] + sum();
            y.push_back(a * y[y.size() - 1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
            u[1] = u[0];
        }
    }
    std::vector<double> getParameterY() {
        return  y;
    }
};

int main() {
    double value;
    std::ofstream out("output.txt");
    Regulator model1;
    if (out.is_open()) {
        std::cout << "Enter the value: ";
        std::cin >> value;
        model1.notLinearModel(100, value);
        std::vector<double> y_val = model1.getParameterY();

        for (int i = 0; i < y_val.size(); i++) {
            double resValue = y_val[i] * value / y_val[y_val.size() - 1];
            std::cout << i << " " << resValue << std::endl;
            out << i << " " << value << std::endl;
        }

        out.close();
    } else {
        std::cerr << "Error: Cannot open the output file." << std::endl;
    }
    return 0;
}
