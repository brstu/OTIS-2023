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
#include <vector>

int main() {
    double a = 0.5;
    double b = 0.6;
    double c = 0.7;
    double d = 0.5;

    double K_val = 0.9;
    double T0 = 1.3;
    double TD = 1.2;
    double TValue = 1;

    double Q0 = K_val * (TD / T0 + 1);
    double Q1 = -K_val * (-T0 / TValue + 1 + 2 * TD / T0);
    double Q2 = K_val * (TD / T0);

    double Y = 10.0;
    std::vector<double> Yt = { Y, Y };

    double u2 = 1.0;
    double u1 = 1.0;

    double Wt = 40;

    std::vector<double> E = { Wt - Y, Wt - Y };

    int temp = 2;
    while (std::abs(Yt.back() - Wt) > 0.1) {
        temp++;
        E.push_back(Wt - Yt.back());
        u2 = u1 + Q0 * E.back() + Q1 * E[E.size() - 2] + Q2 * E[E.size() - 3];
        Yt.push_back(a * Yt.back() - b * Yt[Yt.size() - 2] + c * u2 + d * std::sin(u1));
        u1 = u2;
    }

    for (int i = 0; i < Yt.size(); i++) {
        std::cout << Yt[i] << std::endl;
    }

    return 0;
}
```
Вывод программы:
```
10
10
24.6907
37.8872
41.7522
40.1757
39.5636
40.3139
39.9656

```
![](picture.png)