#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

double calculateSum(const std::vector<double> &q, const std::vector<double> &e) {
    double sum = 0;
    for (size_t i = 0; i < 3; i++) {
        sum += q[i] * e[i];
    }
    return sum;
}

void simulateSystem(std::vector<double> &y, std::vector<double> &u, int time, double setpoint,
                    double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7) {
    std::vector<double> q = {
            0.0001 * (1 + 100 / 1),
            -0.0001 * (1 + 2 * 100 / 1 - 1 / 100),
            0.0001 * 100 / 1
    };
    std::vector<double> e(3, 0);

    for (int i = 0; i < time; i++) {
        e[0] = setpoint - y.back();
        e[1] = setpoint - y[y.size() - 2];
        e[2] = setpoint - y[y.size() - 3];

        double sum = calculateSum(q, e);
        u[0] = u[1] + sum;
        y.push_back(a * y.back() - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
        u[1] = u[0];
    }
}

int main() {
    double setpoint;
    std::ofstream out("output.txt");
    std::vector<double> y = {0, 0, 0};
    std::vector<double> u = {1, 1};

    if (out.is_open()) {
        std::cout << "Enter the setpoint: ";
        std::cin >> setpoint;

        simulateSystem(y, u, 100, setpoint);

        for (size_t i = 0; i < y.size(); i++) {
            double scaledValue = y[i] * setpoint / y.back();
            std::cout << i << " " << scaledValue << std::endl;
            out << i << " " << scaledValue << std::endl;
        }

        out.close();
    } else {
        std::cerr << "Error: Cannot open the output file." << std::endl;
    }

    return 0;
}
