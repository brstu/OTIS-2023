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
<p align="right">Группы ИИ-23</p>
<p align="right">Швороб В.А.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание

1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_01\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_01\src**.

## Task 1. Modeling controlled object

Let's get some object to be controlled. We want to control its temperature, which can be described by this differential equation:

$$\Large\frac{dy(\tau)}{d\tau}=\frac{u(\tau)}{C}+\frac{Y_0-y(\tau)}{RC} $$ (1)

where $\tau$ – time; $y(\tau)$ – input temperature; $u(\tau)$ – input warm; $Y_0$ – room temperature; $C,RC$ – some constants.

After transformation we get these linear (2) and nonlinear (3) models:

$$\Large y_{\tau+1}=ay_{\tau}+bu_{\tau}$$ (2)
$$\Large y_{\tau+1}=ay_{\tau}-by_{\tau-1}^2+cu_{\tau}+d\sin(u_{\tau-1})$$ (3)

where $\tau$ – time discrete moments ($1,2,3{\dots}n$); $a,b,c,d$ – some constants.

Task is to write program (**C++**), which simulates this object temperature.

---

# Выполнение задания

Код программы:

```C++
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class Solution {
private:
    double y1;
    mutable double y2;
    double u;
    double a = 0.6;
    double b = 0.5;
    double c = 0.62;
    double d = 1.1;
    mutable int count = 0;

public:
    double func1(double y, double u) const;
    double func2(double y_param, double u_param, double y1_param) const;
    void input();
    void output(ofstream& outFile);
};

double Solution::func1(double y, double u) const {
    return a * y + b * u;
}

double Solution::func2(double y, double u, double y1) const {
    return a * y - b * pow(y1, 2) + c * u + d * sin(u);
}

void Solution::input() {
    cin >> y1 >> u;
}

void Solution::output(ofstream& outFile) {
    outFile << count << " " << y1 << " " << y1 << endl;
    double tempY1 = func1(y1, u);

    y2 = func2(tempY1, u, y1);

    count++;

    outFile << count << " " << tempY1 << " " << y2 << endl;

    for (int j = 2; j < 100; j++) {
        tempY1 = func1(tempY1, u);

        y2 = func2(y2, u, tempY1);

        outFile << j << " " << tempY1 << " " << y2 << endl;
    }
}

int main() {
    ofstream outFile("output.txt");
    Solution object;
    object.input();
    object.output(outFile);
    return 0;
}

```

Вывод программы:

0 0 0

1 0.5 1.84562
2 0.8 2.33299
3 0.98 2.46521
4 1.088 2.43287
5 1.1528 2.34087
6 1.19168 2.24009
7 1.21501 2.15155
8 1.229 2.08132
9 1.2374 2.02883
10 1.24244 1.99108
11 1.24547 1.96468
12 1.24728 1.94657
13 1.24837 1.93435
14 1.24902 1.9262
15 1.24941 1.92082
16 1.24965 1.9173
17 1.24979 1.91501
18 1.24987 1.91354
19 1.24992 1.91258
20 1.24995 1.91198
21 1.24997 1.91159
22 1.24998 1.91134
23 1.24999 1.91119
24 1.24999 1.91109
25 1.25 1.91102
26 1.25 1.91099
27 1.25 1.91096
28 1.25 1.91095
29 1.25 1.91094
30 1.25 1.91093
31 1.25 1.91093
32 1.25 1.91092
33 1.25 1.91092
34 1.25 1.91092
35 1.25 1.91092
36 1.25 1.91092
37 1.25 1.91092
38 1.25 1.91092
39 1.25 1.91092
40 1.25 1.91092
41 1.25 1.91092
42 1.25 1.91092
43 1.25 1.91092
44 1.25 1.91092
45 1.25 1.91092
46 1.25 1.91092
47 1.25 1.91092
48 1.25 1.91092
49 1.25 1.91092
50 1.25 1.91092
51 1.25 1.91092
52 1.25 1.91092
53 1.25 1.91092
54 1.25 1.91092
55 1.25 1.91092
56 1.25 1.91092
57 1.25 1.91092
58 1.25 1.91092
59 1.25 1.91092
60 1.25 1.91092
61 1.25 1.91092
62 1.25 1.91092
63 1.25 1.91092
64 1.25 1.91092
65 1.25 1.91092
66 1.25 1.91092
67 1.25 1.91092
68 1.25 1.91092
69 1.25 1.91092
70 1.25 1.91092
71 1.25 1.91092
72 1.25 1.91092
73 1.25 1.91092
74 1.25 1.91092
75 1.25 1.91092
76 1.25 1.91092
77 1.25 1.91092
78 1.25 1.91092
79 1.25 1.91092
80 1.25 1.91092
81 1.25 1.91092
82 1.25 1.91092
83 1.25 1.91092
84 1.25 1.91092
85 1.25 1.91092
86 1.25 1.91092
87 1.25 1.91092
88 1.25 1.91092
89 1.25 1.91092
90 1.25 1.91092
91 1.25 1.91092
92 1.25 1.91092
93 1.25 1.91092
94 1.25 1.91092
95 1.25 1.91092
96 1.25 1.91092
97 1.25 1.91092
98 1.25 1.91092
99 1.25 1.91092

![График моделей с t = 100:](picture.png)
