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
<p align="right">Черник В. А.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_01\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_01\src**.

## Task 1. Modeling controlled object ##
Let's get some object to be controlled. We want to control its temperature, which can be described by this differential equation:

$$\Large\frac{dy(\tau)}{d\tau}=\frac{u(\tau)}{C}+\frac{Y_0-y(\tau)}{RC} $$ (1)

where $\tau$ – time; $y(\tau)$ – input temperature; $u(\tau)$ – input warm; $Y_0$ – room temperature; $C,RC$ – some constants.

After transformation we get these linear (2) and nonlinear (3) models:

$$\Large y_{\tau+1}=ay_{\tau}+bu_{\tau}$$ (2)
$$\Large y_{\tau+1}=ay_{\tau}-by_{\tau-1}^2+cu_{\tau}+d\sin(u_{\tau-1})$$ (3)

where $\tau$ – time discrete moments ($1,2,3{\dots}n$); $a,b,c,d$ – some constants.

Task is to write program (**С++**), which simulates this object temperature.

---

# Выполнение задания #

Код программы:
```C++
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const double lin[2] = {0.34, 2};
const double nonLin[4] = {0.56, 0.91, 0.3, -0.1};
const double u = 2.05;
const int t = 50;

void linearFunction(int t, double a, double b, double u){
    vector <double> y(t);

    for(int i = 0; i < t; i++) {
        if (i <= 0) {
            y[i] = 0;
        } else {
            y[i] = a * y[i - 1] + b * u;
        }
    }

    cout << "Linear:\n";

    for(int i = 0; i < t; i++)
        cout << y[i] << endl;
}

void nonLinearFunction(int t, double a, double b, double c, double d, double u){
    vector <double> y(t);

    for(int i = 0; i<t; i++) {
        if (i <= 0) {
            y[i] = a * 0 - b * pow(0, 2) + c * u + d * sin(u);
        } else {
            y[i] = a * y[i - 1] - b * pow(y[i - 2], 2) + c * u + d * sin(u);
        }
    }

    cout << "\nNon Linear:\n" << endl;

    for(int i = 0; i < t; i++)
        cout << y[i] << endl;
    cout << endl;
}

int main() {
    linearFunction(t, lin[0], lin[1], u);
    nonLinearFunction(t, nonLin[0], nonLin[1], nonLin[2], nonLin[3], u);

    return 0;
}
```     

Вывод программы:

    Linear:
    0
    4.1
    5.494
    5.96796
    6.12911
    6.1839
    6.20252
    6.20886
    6.21101
    6.21174
    6.21199
    6.21208
    6.21211
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212
    6.21212

    Non Linear:

    0.526264
    0.820971
    0.73398
    0.323958
    0.217439
    0.552526
    0.792654
    0.69234
    0.342221
    0.281713
    0.577448
    0.777415
    0.65818
    0.344864
    0.325174
    0.600134
    0.766117
    0.627543
    0.343577
    0.3603
    0.620611
    0.755673
    0.598948
    0.342026
    0.391347
    0.638964
    0.744715
    0.571774
    0.34177
    0.420153
    0.655255
    0.732566
    0.545783
    0.343549
    0.447581
    0.669506
    0.718888
    0.520945
    0.347705
    0.47402
    0.681697
    0.703542
    0.49736
    0.354362
    0.499602
    0.69177
    0.686517
    0.475237
    0.363508
    0.524305

![График моделей с t = 50:](Figure_1.png)
