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
<p style="text-align: right;">Группы ИИ-24</p>
<p style="text-align: right;">Крупич Д. Д.</p>
<p style="text-align: right;">Проверил:</p>
<p style="text-align: right;">Иванюк Д. С.</p>
<div style="margin-bottom: 10em;"></div>
<p style="text-align: center;">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_01\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02302**).
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
```C++
Код программы:
#include <iostream>
#include <cmath>

// Глобальные константы
const double VALUE_U_T = 0.5; // Входное значение температуры
const int TIME = 10; // Время
const double CONSTANT_A = 1.1;  // Константа
const double CONSTANT_B = 0.9;  // Константа
const double CONSTANT_C = -0.68;  // Константа
const double CONSTANT_D = 1.53; // Константа

// Функция для линейной зависимости
void linearModel() {
    double temperature = 1; // Входная температура
    for (int i = 1; i <= TIME; i++) {
        // Формула для линейной модели
        temperature = CONSTANT_A * temperature + CONSTANT_B * VALUE_U_T;
        std::cout << temperature << std::endl;
    }
}

// Функция для нелинейной зависимости
void nonlinearModel() {
    double temperature = 1.5; // Входная температура
    double previousTemperature = 0; // Предыдущая температура
    for (int i = 1; i <= TIME; i++) {
        double temp = previousTemperature;
        // Формула для нелинейной модели
        temperature = CONSTANT_A * temperature - CONSTANT_B * pow(previousTemperature, 2) + CONSTANT_C * VALUE_U_T + CONSTANT_D * sin(VALUE_U_T);
        previousTemperature = temp;
        std::cout << temperature << std::endl;
    }
}

int main() {
    setlocale(LC_ALL,"ru");
    std::cout << "Линейная модель:" << std::endl;
    linearModel();

    std::cout << "Нелинейная модель:" << std::endl;
    nonlinearModel();

    return 0;
}﻿
```     

Вывод программы:

Линейная модель:
1.55
2.155
2.8205
3.55255
4.35781
5.24359
6.21794
7.28974
8.46871
9.76558
Нелинейная модель:
2.04352
2.64139
3.29905
4.02248
4.81825
5.6936
6.65648
7.71565
8.88073
10.1623

![](grafic.png)
