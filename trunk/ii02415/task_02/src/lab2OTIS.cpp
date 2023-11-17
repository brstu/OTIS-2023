#include <iostream>
#include <vector>
#include <cmath>

class PIDController {
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
    double w;
    double q0;
    double q1;
    double q2;
    std::vector<float> Yt; // выходная переменная
    std::vector<float> E;  // ошибка

public:
    PIDController(double start, double target)
        : w(target)
    {
        Yt.push_back(start);
        Yt.push_back(start);
        E.push_back(w - start);
        E.push_back(w - start);
    }

    void calculate()
    {
        // Коэффициенты
        q0 = e * (fD / f0 + 1);
        q1 = -e * (-f0 / g + 1 + 2 * fD / f0);
        q2 = e * (fD / f0);

        // Вычисление значений
        int temp = 2;
        while (std::abs(Yt.back() - w) > 0.1) { // пока ошибка меньше 0.1
            temp++;
            E.push_back(w - Yt.back());
            u = u1 + q0 * E.back() + q1 * E[E.size() - 2] + q2 * E[E.size() - 3]; // алгоритм работы ПИД-регулятора 

            Yt.push_back(a * Yt.back() - b * Yt[Yt.size() - 2] + c * u + d * sin(u1));
            u1 = u;
        }
    }

    void printGraph() // Вывод графика
    {
        for (int i = 0; i < Yt.size(); i++) {
            std::cout << Yt[i] << std::endl;
        }
    }
};

int main()
{
    double start = 10.0;
    double target = 60.0;

    PIDController pidController(start, target);
    pidController.calculate();
    pidController.printGraph();

    return 0;
}