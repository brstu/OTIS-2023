#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

class ModelSimulation {
public:
    ModelSimulation() = default;

    void simulate() {
        // Вычисление коэффициентов
        F0 = e * (fD / f0 + 1);
        F1 = -e * (-f0 / g + 1 + 2 * fD / f0);
        F2 = e * (fD / f0);

        std::vector<double> Yt = { y, y };
        std::vector<double> E = { w - y, w - y };

        int temp = 2;
        while (std::abs(Yt.back() - w) > 0.1) {
            temp++;
            E.push_back(w - Yt.back());
            u = u1 + F0 * E.back() + F1 * E[E.size() - 2] + F2 * E[E.size() - 3];
            Yt.push_back(a * Yt.back() - b * Yt[Yt.size() - 2] + c * u + d * std::sin(u1));
            u1 = u;
        }

        // Вывод графика
        std::for_each(Yt.begin(), Yt.end(), [](double value) {
            std::cout << value << std::endl;
            });
    }

private:
    double a = 0.5;
    double b = 0.6;
    double c = 0.6;
    double d = 0.4;
    double e = 0.9;
    double f0 = 1.2;
    double fD = 1.1;
    double g = 1.1;
    double u = 1.0;
    double u1 = 1.0;
    double w = 60;
    double F0 = 0.0;
    double F1 = 0.0;
    double F2 = 0.0;
    double y = 10.0;
};

int main()
{
    ModelSimulation model;
    model.simulate();

    return 0;
}