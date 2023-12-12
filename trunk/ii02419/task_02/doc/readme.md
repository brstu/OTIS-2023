<p align="center"> Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">“Брестский Государственный технический университет”</p>
<p align="center">Кафедра ИИТ</p>
<br><br><br><br><br><br><br>
<p align="center">Лабораторная работа №2</p>
<p align="center">По дисциплине “Общая теория интеллектуальных систем”</p>
<p align="center">Тема: “ПИД-регуляторы”</p>
<br><br><br><br><br>
<p align="right">Выполнил:</p>
<p align="right">Студент 2 курса</p>
<p align="right">Группы ИИ-24</p>
<p align="right">Терехов Н. А.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_02\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_02\src**.

# Задание #
На С++ реализовать программу, моделирующую рассмотренный выше ПИД-регулятор.  В качестве объекта управления использовать математическую модель, полученную в предыдущей работе.
В отчете также привести графики для разных заданий температуры объекта, пояснить полученные результаты.

---
# Код программы: #
```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class ModelParameters
{
    double A = 0.5;
    double B = 0.5;
    double C = 0.5;
    double D = 0.5;
    double K = 1;
    double T0 = 1;
    double TD = 1;
    double T = 1;
    double q1 = K * (TD / T0 + 1);
    double q2 = -K * (-T0 / T + 1 + 2 * TD / T0);
    double q3 = K * (TD / T0);

    friend class ControlSystem;
};
class ControlSystem
{
public:
    explicit ControlSystem(const ModelParameters &params) : parameters(params) {}

    void run()
    {
        cout << "Enter start temperature: ";
        cin >> start_temperature;
        temperature = {start_temperature, start_temperature};

        double u_k = 0.0;
        double u_k_minus_1 = 0.0;

        cout << "Enter desired temperature: ";
        cin >> desired_temperature;

        error = {desired_temperature - start_temperature, desired_temperature - start_temperature};

        cout << "Current temperature: " << temperature.back() << endl;

        int iterations = 0;

        while (abs(desired_temperature - temperature.back()) > tolerance && iterations < max_iterations)
        {
            error.push_back(desired_temperature - temperature.back());

            double delta_u = parameters.q1 * error.back() + parameters.q2 * error[error.size() - 2] + parameters.q3 * error[error.size() - 3];
            u_k = u_k_minus_1 + delta_u;

            temperature.push_back(parameters.A * temperature.back() - parameters.B * temperature[temperature.size() - 2] + parameters.C * u_k + parameters.D * sin(u_k_minus_1));
            u_k_minus_1 = u_k;

            cout << "Current temperature: " << temperature.back() << endl;

            iterations++;
        }

        if (iterations >= max_iterations)
        {
            cout << "Maximum number of iterations reached. Consider adjusting the parameters." << endl;
        }
        else
        {
            cout << "Temperature reached the desired value within tolerance." << endl;
        }
    }
private:
    const ModelParameters &parameters;
    double start_temperature{};
    double desired_temperature{};
    vector<double> temperature;
    vector<double> error;
    const double tolerance = 0.1;
    const int max_iterations = 1000;
};
int main()
{
    ModelParameters params;
    ControlSystem control_system(params);
    control_system.run();
    return 0;
}
```

Вывод:
```
Enter start temperature: 10
Enter desired temperature: 50
Current temperature: 10
Current temperature: 20
Current temperature: 35.3726
Current temperature: 42.1613
Current temperature: 46.3028
Current temperature: 47.7046
Current temperature: 48.8329
Current temperature: 49.9761
Temperature reached the desired value within tolerance.
Program ended with exit code: 0
```

