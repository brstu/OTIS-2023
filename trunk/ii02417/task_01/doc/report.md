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
<p align="right">Супрунович И. С.</p>
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

Task is to write program (**Julia**), which simulates this object temperature.

---

# Выполнение задания #

Код программы:
```C++
#include <iostream>



 void LinearModel() {
    std::cout << "Linear Model" << std::endl;
    float yT = 1;
    float uT = 0.5;
    int time = 15;
    float a = 1.2;
    float b = 0.7;
    float arrayLinearY[15];

    for (int i = 0; i < time; i++) {
        yT = a * yT + b * uT;
        arrayLinearY[i] = yT;
        std::cout << yT << std::endl;
    }
 }

 void NonLinearModel() {
     std::cout << "Non-Linear Model" << std::endl;
     float yT = 1.5;
     float uT = 0.5;
     float prevYT = 0;
     int time = 15;
     float a = 1.2;
     float b = 0.7;
     float c = -0.32;
     float d = 0.53;
     float arrayNonLinearY[15];

     for (int i = 0; i < time; i++) {
         yT = a * yT - b * pow(prevYT, 2) + c * uT + d * sin(uT);
         arrayNonLinearY[i] = yT;
         std::cout << yT << std::endl;
     }
 }

 int main()
 {
     LinearModel();
     NonLinearModel();
 }
```     

Вывод программы:

    Linear Model
1.55
2.21
3.002
3.9524
5.09288
6.46146
8.10375
10.0745
12.4394
15.2773
18.6827
22.7693
27.6731
33.5578
40.6193
Non-Linear Model
1.8941
2.36701
2.93451
3.61551
4.4327
5.41334
6.5901
8.00222
9.69676
11.7302
14.1703
17.0985
20.6123
24.8289
29.8887
![График моделей с t = 100:](Linear.jpg NonLinear.jpg)
