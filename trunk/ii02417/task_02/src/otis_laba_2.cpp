#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

class ModelSimulation {
public:
    ModelSimulation() {
        a = 0.5;
        b = 0.6;
        c = 0.6;
        d = 0.4;
        e = 0.9;
        f0 = 1.2;
        fD = 1.1;
        g = 1.1;
        u = 1.0;
        u1 = 1.0;
        w = 60;
        F0 = 0.0;
        F1 = 0.0;
        F2 = 0.0;
        y = 10.0;
    }

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
    double a;
    double b;
    double c;
    double d;
    double e;
    double f0;
    double fD;
    double g;
    double u;
    double u1;
    double w;
    double F0;
    double F1;
    double F2;
    double y;
};

int main()
{
    ModelSimulation model;
    model.simulate();

    return 0;
}