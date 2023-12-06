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
<p align="right">Палто Е.С.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_02\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02302**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_02\src**.

# Задание #
Задание. На C++ реализовать программу, моделирующую рассмотренный выше ПИД-регулятор. В качестве объекта управления использовать математическую модель, полученную в предыдущей работе. В отчете также привести графики для разных заданий температуры объекта, пояснить полученные результаты.
---
# Код программы: #
```
#include <iostream>
#include <vector>
#include <cmath>

double constantA = 0.9, constantB = 0.2, constantC = 0.4, constantD = 0.8;
double constantK = 1.2, constantT0 = 0.9, constantTD = 1.0, constantT = 1.3, constantW = 25;
double factor0 = constantK * (1 + (constantTD / constantT0)),
        factor1 = -constantK * (1 + 2 * (constantTD / constantT0) - (constantT0 / constantT)),
        factor2 = constantK * (constantTD / constantT0);

void nonlin() {
    const short int initialValue = 3;
    std::vector<double> values = { initialValue, initialValue };
    double controlValue = 0.5;
    std::vector<double> errors = { constantW - initialValue, constantW - initialValue };
    std::vector<double> controlHistory = { controlValue, controlValue };

    int maxLines = 28;
    int currentLines = 0;

    while (std::abs(constantW - values.back()) > 0.01 && currentLines < maxLines)
    {
        errors.push_back(constantW - values.back());
        controlValue = controlHistory.back() + factor0 * errors.back() + factor1 * errors[errors.size() - 2] + factor2 * errors[errors.size() - 3];
        values.push_back(constantA * values.back() - constantB * values[values.size() - 2] + constantC * controlValue + constantD * std::sin(controlHistory.back()));
        controlHistory.push_back(controlValue);

        currentLines++;
    }

    std::cout << "Values\tErrors\tControl History\n";
    for (int i = 0; i < currentLines; i++)
        std::cout << i + 1 << ";" << values[i] << ";" << errors[i] << ";" << controlHistory[i] << std::endl;
}

int main() {
    nonlin();
}


```
Вывод:
```
Values  Errors  Control History
1;3;22;0.5
2;3;22;0.5
3;9.99431;22;18.7769
4;16.0708;15.0057;19.3349
5;23.1314;8.92921;25.7332
6;27.4027;1.86865;23.3665
7;28.6563;-2.40267;23.5123
8;29.1253;-3.6563;24.0355
9;28.3621;-4.12532;21.4813
10;28.3365;-3.36208;20.613
11;27.3625;-3.33646;16.8671
12;24.8372;-2.36245;16.5286
13;24.1616;0.162813;19.6646
14;24.618;0.838442;18.1445
15;23.519;0.382015;16.7839
16;23.7371;1.48104;20.494
17;25.34;1.26295;19.7066
18;25.4576;-0.340014;16.9857
19;24.495;-0.457617;18.5426
20;25.0154;0.504998;20.7579
21;25.8;-0.0154254;18.5755
22;24.908;-0.799953;17.2691
23;24.4213;0.0919628;19.9101
24;25.7078;0.578672;20.0303
25;25.6339;-0.70781;16.603
26;24.4718;-0.633875;17.9176
27;24.3501;0.528226;20.2364
28;25.5808;0.649856;19.4339

Process finished with exit code 0

```

