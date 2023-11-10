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
<p align="right">Рекун Д.А.</p>
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

Task is to write program (**C++**), which simulates this object temperature.

---

# Выполнение задания #

Код программы:
```C++
#include <iostream>
#include <math.h>
using namespace std;

class Perem {
public:
    void arry1() {
        cout << "LineModel" << endl;
        float Yt = 3.0;
        float Ut = 0.85;
        int time = 10;
        float arrLine[10];
        for (int i = 0; i < time; i++) {

            Yt = a * Yt + b * Ut;
            arrLine[i] = Yt;
            cout << Yt << endl;
        }
    }

    void arry2() {
        cout << "NoLineModel" << endl;
        float Yt = 2.0;
        float Ut = 0.45;
        float Prev_Yt = 1;
        int time = 10;
        float arrNoLine[10];
        for (int i = 0; i < time; i++) {
            Yt = a * Yt - b * pow(Prev_Yt, 2) + c * Ut + d * sin(Ut);
            arrNoLine[i] = Yt;
            cout << Yt << endl;
        }
    }

private:
    const int a = 4;
    const int b = 2;
    const int c = 3;
    const int d = 6;
};

int main() {
    Perem MClass;
    MClass.arry1();
    MClass.arry2();

    return 0;
}
```
![График:](picture.png)
