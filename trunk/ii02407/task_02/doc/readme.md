<p align="center">Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">"Брестский Государственный технический университет"</p>
<p align="center">Кафедра ИИТ</p>
<br>
<br>
<p align="center">Лабораторная работа №2</p>
<p align="center">По дисциплине: "Общая теория интеллектуальных систем"</p>
<p align="center">Тема: "ПИД-регуляторы"</p>
<br>
<br>
<p align="right">Выполнил:<br>Студент 2 курса<br>Группы ИИ-24<br>Крупич Д. Д.</p>
<p align="right">Проверил:<br>Иванюк Д. С.</p>
<br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №2 в .md формате (*readme.md*) и с помощью **pull request** разместить его в следующем каталоге: **trunk\ii0xxyy\task_02\doc**.
2. Исходный код написанной программы разместить в каталоге: **trunk\ii00xxyy\task_02\src**.
---

# Выполнение задания #

Код программы:
```C++
#include <iostream>
#include <cmath>

struct NonLinearModelParams {
    double K0;
    double time;
    double alpha;
    double beta;
    double gamma;
    double delta;
    double y_nonLin1;
    double y_nonLin2;
    double t_nonLin1;
    double t_nonLin0;
    double Q;
    double P;
    double TD;
    double j;
};

void calculateNonLinearModelParams(double k, const NonLinearModelParams& params) {
    double q0 = params.Q * (1 + params.TD / k);
    double q1 = -params.Q * (1 + 2 * params.TD / k - k / params.P);
    double q2 = params.Q * params.TD / k;
    double l1 = params.j - params.y_nonLin1;
    double l2 = params.j - params.y_nonLin2;
    double y_nonlin3 = params.alpha * params.y_nonLin2 - params.beta * std::pow(std::abs(params.y_nonLin1), 2) + params.gamma * params.t_nonLin1 + params.delta * std::sin(params.t_nonLin0);
    double en = params.j - y_nonlin3;
    double t_nonlin_n = params.t_nonLin1 + q0 * en + q1 * l2 + q2 * l1;
    l1 = l2;
    l2 = en;
    params.t_nonLin0 = params.t_nonLin1;
    params.t_nonLin1 = t_nonlin_n;
    std::cout << k << "\t" << y_nonlin3 << "\t:\t" << en << std::endl;
}

void calculateNonLinearModel(const NonLinearModelParams& params) {
    std::cout << "Модель нелинейной системы: \n" << std::endl;
    for (double k = params.K0; k <= params.time; k++) {
        calculateNonLinearModelParams(k, params);
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    std::cout << std::endl;
    NonLinearModelParams params;
    params.K0 = 1;
    params.time = 10;
    params.alpha = 0.002;
    params.beta = 0.005;
    params.gamma = 0.45;
    params.delta = 0.007;
    params.y_nonLin1 = 0.2;
    params.y_nonLin2 = 0.04;
    params.t_nonLin1 = 0.1;
    params.t_nonLin0 = 0.0025;
    params.Q = 0.04;
    params.P = 0.01;
    params.TD = 1.7;
    params.j = 1.5;
    calculateNonLinearModel(params);
    return 0;
}
```
Вывод программы:
```
Нелинейная модель:

1       0.0448975       :       1.4551
2       2.66865 :       -1.16865
3       7.82184 :       -6.32184
4       1.36276 :       0.137242
5       -44.2252        :       45.7252
6       -41.7234        :       43.2234
7       442.059 :       -440.559
8       977.892 :       -976.392
9       -6343.31        :       6344.81
10      -25821.3        :       25822.8
```
![](picture.png)
