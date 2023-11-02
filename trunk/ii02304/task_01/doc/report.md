<center> Министерство образования Республики Беларусь
<center> Учреждение образования
<center> “Брестский Государственный технический университет”
<center> Кафедра ИИТ

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

<center> Лабораторная работа №1
<center> По дисциплине “Общая теория интеллектуальных систем”
<center> Тема: “Моделирования температуры объекта” 
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br> 
<div style="text-align:right;">
Выполнил:
<br> Студент 2 курса
<br> Группы ИИ-23
<br> Гавришук В.Р.
<br> Проверил:
<br> Иванюк Д.С.
<br>
<br>
<br>
<br>
<br>
<center> Брест 2023

---
<div style="text-align:left;">

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (pull request) разместить его в следующем каталоге: trunk\ii0xxyy\task_01\doc (где xx - номер группы, yy - номер студента, например ii02302).
2. Исходный код написанной программы разместить в каталоге: trunk\ii0xxyy\task_01\src.
3. Выполнить рецензирование ([review](https://linearb.io/blog/code-review-on-github), [checklist](https://linearb.io/blog/code-review-checklist)) запросов других студентов (минимум 2-е рецензии).
## Task 1. Modeling controlled object ##

<dr>Let's get some object to be controlled. We want to control its temperature, which can be described by this differential equation:

**$$\Large\frac{dy(\tau)}{d\tau}=\frac{u(\tau)}{C}+\frac{Y_0-y(\tau)}{RC} $$ (1)**
where $\tau$ – time; $y(\tau)$ – input temperature; $u(\tau)$ – input warm; $Y_0$ – room temperature; $C,RC$ – some constants.

After transformation we get these linear (2) and nonlinear (3) models:

**$$\Large y_{\tau+1}=ay_{\tau}+bu_{\tau}$$ (2)**
**$$\Large y_{\tau+1}=ay_{\tau}-by_{\tau-1}^2+cu_{\tau}+d\sin(u_{\tau-1})$$ (3)**

where $\tau$ – time discrete moments ($1,2,3{\dots}n$); $a,b,c,d$ – some constants.

Task is to write program (**Julia**), which simulates this object temperature.

---
# Выполнение задания #
Код программы:
```c++
#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

// Constants
const float a = 1.0;
const float b = 0.5;
const double c = 0.001;
const double d = 0.999;
const int t = 10;

// Linear model function
void linmodel(float a_param, float b_param, float ylin, float ulin) {
    vector<float> ylinmodel(t + 1);
    ylinmodel[0] = ylin;
    cout << "Linear model:" << endl;
    for (int i = 0; i <= t; i++) {
        ylinmodel[i + 1] = a_param * ylinmodel[i] + b_param * ulin;
        cout << ylinmodel[i + 1] << endl;
    }
}

// Nonlinear model function
void nonlinear(float a_param, float b_param, double c_param, double d_param, float ulin) {
    vector<double> ynonlinmodel(t + 1); // Changed from vector<float> to vector<double>
    double y_prev = 0; // Changed from float to double
    double y = 0; // Changed from float to double
    cout << endl << "Nonlinear model:" << endl;
    for (int i = 0; i <= t; i++) {
        if (i == 1) {
            y = 1.2;
            y_prev = y;
            y = a_param * y + c_param * ulin + d_param * sin(ulin);
        }
        if (i <= t) {
            ynonlinmodel[i + 1] = a_param * y - b_param * pow(y_prev, 2) + c_param * ulin + d_param * sin(ulin);
            y_prev = y;
            y = ynonlinmodel[i + 1];
            cout << ynonlinmodel[i + 1] << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    linmodel(a, b, 0.0, 1.0);
    nonlinear(a, b, c, d, 1.0);
    return 0;
}

```
Вывод программы:
```
Linear model:
0
0.5
1
1.5
2
2.5
3
3.5
4
4.5
5
5.5

Nonlinear model:
0
0.841629
2.16326
0.920763
-0.577452
-0.159725
0.515179
1.34405
2.05298
1.99137
0.72564
-0.415504
```

![График][def]

[def]: picture.jpg