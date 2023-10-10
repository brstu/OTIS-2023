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
<p align="right">Сухаревич Д. С.</p>
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
#include <vector>
#include <cmath>

class Iche {
public:
	double a = 0.5, b = 0.7, c = 1.25, d = 0.1, u = 1.5;
	int t = 50;
	std::vector<double>y{ 1.1 };
	std::vector<double>yy{ 1.1 };
	void linear_f(){
		double y_1 = a * y.back() + b * u;
		y.push_back(y_1);
	}
	void non_linear_f(){
		double y_1 = a * yy.back() - b * pow(yy.back(), 2) + c * u + d * sin(u);
		yy.push_back(y_1);
	}
};

void main() {
	Iche linear;
	for (int i = 0; i < linear.t; i++) {
		linear.linear_f();
	}

	for (int i = 0; i < linear.t; i++) {
		linear.non_linear_f();
	}

	std::cout << "linear model: " << std::endl;
	for (int i = 0; i < linear.y.size(); i++) {
		std::cout << linear.yy[i] << std::endl;
	}

	std::cout << std::endl << "nonlinear model: " << std::endl;
	for (int i = 0; i < linear.y.size(); i++) {
		std::cout << linear.yy[i] << std::endl;
	}
}
```     

Вывод программы:

linear model:
1.1
1.67775
0.843234
1.89864
0.400694
2.06271
0.0277697
1.98809
0.202033
2.04719
0.0646446
2.00415
0.1652
2.03825
0.0857601
2.01248
0.145934
2.03281
0.098536
2.01722
0.134934
2.02947
0.106357
2.02001
0.128447
2.02742
0.111148
2.02168
0.124566
2.02617
0.114077
2.02268
0.122229
2.02541
0.115864
2.02328
0.120816
2.02494
0.116952
2.02365
0.11996
2.02466
0.117614
2.02387
0.119442
2.02448
0.118017
2.02401
0.119127
2.02438
0.118262

nonlinear model:
1.1
1.67775
0.843234
1.89864
0.400694
2.06271
0.0277697
1.98809
0.202033
2.04719
0.0646446
2.00415
0.1652
2.03825
0.0857601
2.01248
0.145934
2.03281
0.098536
2.01722
0.134934
2.02947
0.106357
2.02001
0.128447
2.02742
0.111148
2.02168
0.124566
2.02617
0.114077
2.02268
0.122229
2.02541
0.115864
2.02328
0.120816
2.02494
0.116952
2.02365
0.11996
2.02466
0.117614
2.02387
0.119442
2.02448
0.118017
2.02401
0.119127
2.02438
0.118262

![График моделей с t = 50:](linear.png)
