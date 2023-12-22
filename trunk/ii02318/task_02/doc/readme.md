<p align="center"> Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">“Брестский Государственный технический университет”</p>
<p align="center">Кафедра ИИТ</p>
<br><br><br><br><br><br><br>
<p align="center">Лабораторная работа №2</p>
<p align="center">По дисциплине “Общая теория интеллектуальных систем”</p>
<p align="center">Тема: “ПИД-регуляторы”</p>
<br><br><br><br><br>
<p align="right">Выполнила:</p>
<p align="right">Студентка 2 курса</p>
<p align="right">Группы ИИ-23</p>
<p align="right">Осипова А.Е.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_02\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_02\src**.

# Задание #
На C++ реализовать программу, моделирующую рассмотренный выше ПИД-регулятор.  В качестве объекта управления использовать математическую модель, полученную в предыдущей работе.
В отчете также привести графики для разных заданий температуры объекта, пояснить полученные результаты.

---

# Выполнение задания #

Код программы:

#include <iostream>
#include <vector>
#include <cmath>

class NonlinearModel {
private:
    double a;
    double b;
    double c;
    double d;
    std::vector<double> q;
    std::vector<double> e;
    std::vector<double> y;
    std::vector<double> u;

public:
    NonlinearModel(double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7)
            : a(a), b(b), c(c), d(d), q({0.0, 0.0, 0.0}), e({0.0, 0.0, 0.0}), y({0.0, 0.0, 0.0}), u({1.0, 1.0}) {
        double K = 0.0001;
        double T = 100;
        double T_D = 100;
        double T_0 = 1;

        q[0] = K * (1 + T_D / T_0);
        q[1] = -K * (1 + 2 * T_D / T_0 - T_0 / T);
        q[2] = K * T_D / T_0;
    }

    void simulate(int time, int w) {
        int i = 0;
        while (i < time) {
            e[0] = w - y[y.size() - 1];
            e[1] = w - y[y.size() - 2];
            e[2] = w - y[y.size() - 3];
            u[0] = u[1] + q[0] * e[0] + q[1] * e[1] + q[2] * e[2];
            y.push_back(a * y[y.size() - 1] - b * pow(y[y.size() - 2], 2) + c * u[0] + d * sin(u[1]));
            u[1] = u[0];

            i++;
        }
    }

    void printNormalizedOutput(int w) const {
        for (double el : y) {
            std::cout << el * w / y[y.size() - 1] << std::endl;
        }
    }
};

int main() {
    int w = 23;
    NonlinearModel model;
    model.simulate(100, w);
    model.printNormalizedOutput(w);
    return 0;
}
```     

Вывод программы:
0
0
0
22.2763
33.2124
28.7447
14.5245
13.1134
24.6689
31.0635
25.5021
15.7027
17.1963
25.9552
29.241
23.3259
16.8359
19.8674
26.5269
27.5565
21.9125
18.0561
21.737
26.5939
26.0459
21.109
19.2799
23.0231
26.3144
24.7677
20.7835
20.417
23.8503
25.822
23.759
20.8058
21.4044
24.3148
25.2292
23.0275
21.0544
22.2088
24.5016
24.6246
22.5539
21.426
22.8214
24.488
24.0713
22.3
21.8407
23.252
24.3428
23.608
22.2177
22.2424
23.5226
24.1243
23.252
22.2571
22.5957
23.6618
23.879
23.0039
22.3728
22.8824
23.7007
23.6406
22.8533
22.527
23.097
23.6695
23.4311
22.7828
22.691
23.2429
23.5951
23.2625
22.7728
22.8449
23.329
23.4996
23.1383
22.8038
22.9767
23.367
23.4
23.0565
22.859
23.0808
23.3696
23.3079
23.0113
22.9247
23.1563
23.3486
23.2303
22.9951
22.9907
23.2053
23.3142
23.1704
23