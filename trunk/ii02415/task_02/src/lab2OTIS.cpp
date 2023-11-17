#include <iostream>
#include <vector>

class PIDController {
private:
    float a, b, c, d, e, f0, fD, g, u, u1, w;
    float q0, q1, q2;
    std::vector<float> Yt; //выходная переменная
    std::vector<float> E;  //ошибка

public:
    PIDController(float start, float target)
        : a(0.5), b(0.6), c(0.6), d(0.4), e(0.9), f0(1.2), fD(1.1), g(1.1), u(1.0), u1(1.0), w(target)
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
        while (std::abs(Yt.back() - w) > 0.1) {//пока ошибка меньше 0.1
            temp++;
            E.push_back(w - Yt.back());
            u = u1 + q0 * E.back() + q1 * E[E.size() - 2] + q2 * E[E.size() - 3]; //алгоритм работы ПИД-регулятора 

            Yt.push_back(a * Yt.back() - b * Yt[Yt.size() - 2] + c * u + d * std::sin(u1));
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
    float start = 10.0;
    float target = 60.0;

    PIDController pidController(start, target);
    pidController.calculate();
    pidController.printGraph();

    return 0;
}