<p style="text-align: center;">Министерство образования Республики Беларусь</p>
<p style="text-align: center;">Учреждение образования</p>
<p style="text-align: center;">“Брестский Государственный технический университет”</p>
<p style="text-align: center;">Кафедра ИИТ</p>
<div style="margin-bottom: 10em;"></div>
<p style="text-align: center;">Лабораторная работа №1</p>
<p style="text-align: center;">По дисциплине “Общая теория интеллектуальных систем”</p>
<p style="text-align: center;">Тема: “Моделирования температуры объекта”</p>
<div style="margin-bottom: 10em;"></div>
<p style="text-align: right;">Выполнил:</p>
<p style="text-align: right;">Студент 2 курса</p>
<p style="text-align: right;">Группы ИИ-23</p>
<p style="text-align: right;">Медведь П.В.</p>
<p style="text-align: right;">Проверил:</p>
<p style="text-align: right;">Иванюк Д. С.</p>
<div style="margin-bottom: 10em;"></div>
<p style="text-align: center;">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: trunk\ii0xxyy\task_01\doc (где xx - номер группы, yy - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_01\src**.

## Task 1. Modeling controlled object ##
Let's get some object to be controlled. We want to control its temperature, which can be described by this differential equation:

$$\Large\frac{dy(\tau)}{d\tau}=\frac{u(\tau)}{C}+\frac{Y_0-y(\tau)}{RC} $$ (1)

where $\tau$ – time; $y(\tau)$ – input temperature; $u(\tau)$ – input warm; $Y_0$ – room temperature; $C,RC$ – some constants.

After transformation we get these linear (2) and nonlinear (3) models:

$$\Large y_{\tau+1}=ay_{\tau}+bu_{\tau}$$ (2)
$$\Large y_{\tau+1}=ay_{\tau}-by_{\tau-1}^2+cu_{\tau}+d\sin(u_{\tau-1})$$ (3)

where $\tau$ – time discrete moments ($1,2,3{\dots}n$); $a,b,c,d$ – some constants.

---

# Выполнение задания #

Код программы:
```cpp﻿#include <iostream>
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

class Function {
    private:
        int i = 1; //start time
        double y = 0; //input temperature
        double y1 = 0;
        double u = 1; //input warm
        int t = 100; //end time
        const double a = 0.5;
        const double b = 0.5;
        const double c = 0.5;
        const double d = 0.5; //some constants
public:
    void linear() {
        ofstream file("lin.txt");
        for (int j = i; j <= t; j++) {
            file << j << " " << y << endl;
            cout << y << endl;
            y = a * y + b * u;
        }
        cout << "end linear\n";
    }

    void nonlinear() {
        ofstream file("nonlin.txt");
        for (int j = i; j <= t; j++) {
            file << j << " " << y << endl;
            cout << y << endl;
            if (j == 1) {
                y = a * y - b * y1 * y1 + c * 0 + d * sin(0);
            }
            else {
                y = a * y - b * y1 * y1 + c * u + d * sin(u);
            }
            y1 = y;
        }
        cout << "end nonlinear\n";
    }
};



int main() {
    ofstream file1("lin.txt");
    ofstream file2("nonlin.txt");
    file1.clear();
    file2.clear();
    
    Function func;
    cout << "linear model: \n";
    func.linear();
    cout << "nonlinear model: \n";
    func.nonlinear();
}

Вывод:
linear model:
0
0.5
0.75
0.875
0.9375
0.96875
0.984375
0.992188
0.996094
0.998047
0.999023
0.999512
0.999756
0.999878
0.999939
0.999969
0.999985
0.999992
0.999996
0.999998
0.999999
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
end linear
nonlinear model:
1
0.5
1.04574
0.896822
0.967002
0.93669
0.950386
0.944312
0.947029
0.945818
0.946359
0.946117
0.946225
0.946177
0.946199
0.946189
0.946193
0.946191
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
0.946192
end nonlinear
```
 Линейный график и нелинейный графики:
 
 ![линейный график](grafik.png)
