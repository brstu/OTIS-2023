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
#include <cmath>
#include <array>

const std::array<double, 2> lin = {0.34, 2};
const std::array<double, 4> nonLin = {0.56, 0.91, 0.3, -0.1};
const double u = 2.05;
const int t = 50;

void linearFunction(double a, double b, double u){
    std::array<double, t> list;

    for(int i = 0; i < t; i++) {
        if (i <= 0) {
            list[i] = a * 0 + b * u;
        } else {
            list[i] = a * list[i - 1] + b * u;
        }
    }

    std::cout << "Linear:\n" << std::endl;

    for(int i = 0; i < t; i++)
        std::cout << list[i] << std::endl;
}

void nonLinearFunction(double a, double b, double c, double d, double u){
    std::array<double, t> list;

    for(int i = 0; i<t; i++) {
        if (i > 1) {
            list[i] = a * list[i - 1] - b * pow(list[i - 2], 2) + c * u + d * sin(u);
        } else {
            list[i] = a * 0 - b * pow(0, 2) + c * u + d * sin(u);
        }
    }

    std::cout << "\nNon Linear:\n" << std::endl;

    for(int i = 0; i < t; i++) {
        std::cout << list[i] << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    for(int i = 0; i < 2; i++){
        if(i == 0){
            linearFunction(lin[0], lin[1], u);
        }
        if(i == 1){
            nonLinearFunction(nonLin[0], nonLin[1], nonLin[2], nonLin[3], u);
        }
    }

    return 0;
}
```     

Вывод программы:

    Linear:

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
    6.21212

    Non Linear:

    0.526264
    0.526264
    0.568944
    0.592845
    0.563692
    0.522099
    0.529487
    0.574722
    0.592984
    0.557756
    0.518624
    0.5336
    0.580316
    0.592138
    0.551403
    0.515979
    0.53853
    0.585567
    0.590268
    0.544785
    0.514284
    0.544184
    0.590322
    0.58736
    0.538068
    0.513639
    0.550441
    0.59443
    0.583428
    0.531438
    0.514116
    0.557161
    0.597747
    0.578513
    0.525087
    0.515756
    0.564186
    0.600144
    0.572686
    0.519211
    0.51857
    0.571345
    0.601505
    0.56605
    0.514007
    0.522532
    0.578457
    0.601734
    0.558738
    0.509661

![График моделей с t = 50:](Figure_1.png)
