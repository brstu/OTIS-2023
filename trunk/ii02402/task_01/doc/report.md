<p align="center"> Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">“Брестский Государственный технический университет”</p>
<p align="center">Кафедра ИИТ</p>
<br><br><br><br><br><br><br>
<p align="center">Лабораторная работа №1</p>
<p align="center">По дисциплине “Общая теория интеллектуальных систем”</p>
<p align="center">Тема: “Моделирования температуры объекта”</p>
<br><br><br><br><br>
<p align="right">Выполнил:</p>
<p align="right">Студент 2 курса</p>
<p align="right">Группы ИИ-24</p>
<p align="right">Баранчук И.Я.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_01\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii02402\task_01\src**.

## Task 1. Modeling controlled object ##
Let's get some object to be controlled. We want to control its temperature, which can be described by this differential equation:

$$\Large\frac{dy(\tau)}{d\tau}=\frac{u(\tau)}{C}+\frac{Y_0-y(\tau)}{RC} $$ (1)

where $\tau$ – time; $y(\tau)$ – input temperature; $u(\tau)$ – input warm; $Y_0$ – room temperature; $C,RC$ – some constants.

After transformation we get these linear (2) and nonlinear (3) models:

$$\Large y_{\tau+1}=ay_{\tau}+bu_{\tau}$$ (2)
$$\Large y_{\tau+1}=ay_{\tau}-by_{\tau-1}^2+cu_{\tau}+d\sin(u_{\tau-1})$$ (3)

where $\tau$ – time discrete moments ($1,2,3{\dots}n$); $a,b,c,d$ – some constants.

Task is to write program (**C++**), which simulates this object temperature.

---

# Выполнение задания #

Код программы:
```C++
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<double> simulate_linear_system(double alpha, double beta, const vector<double>& input_signal) {
    vector<double> system_output(input_signal.size(), 0.0);
    system_output[0] = 0.0;
    for (int t = 1; t < input_signal.size(); ++t) {
        system_output[t] = alpha * system_output[t - 1] + beta * input_signal[t - 1];
    }
    return system_output;
}

vector<double> simulate_nonlinear_system(double alpha, double beta, double gamma, double delta, const vector<double>& input_signal) {
    vector<double> system_output(input_signal.size(), 0.0);
    system_output[0] = 0.0;
    system_output[1] = 0.0;
    for (int t = 2; t < input_signal.size(); ++t) {
        system_output[t] = alpha * system_output[t - 1] - beta * pow(system_output[t - 2], 2) + gamma * input_signal[t - 1] + delta * sin(input_signal[t - 2]);
    }
    return system_output;
}

void print_vector(const vector<double>& vec) {
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    double alpha_linear = 0.8;
    double beta_linear = 0.5;
    vector<double> input_linear = { 1.0, 2.0, 3.0, 4.0 };

    double alpha_nonlinear = 0.8;
    double beta_nonlinear = 0.5;
    double gamma_nonlinear = 0.2;
    double delta_nonlinear = 0.3;
    vector<double> input_nonlinear = { 1.0, 2.0, 3.0, 4.0 };

    vector<double> linear_system_output = simulate_linear_system(alpha_linear, beta_linear, input_linear);
    vector<double> nonlinear_system_output = simulate_nonlinear_system(alpha_nonlinear, beta_nonlinear, gamma_nonlinear, delta_nonlinear, input_nonlinear);

    cout << "Linear system output: ";
    print_vector(linear_system_output);

    cout << "Nonlinear system output: ";
    print_vector(nonlinear_system_output);

    return 0;
}

```     
**График:**

![](graphics.jpg)
