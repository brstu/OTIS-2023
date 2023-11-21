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
<p align="right">Кунц А. И.</p>
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
#include <fstream>

int main()
{
	srand(time(NULL));
	double a = 0.5, b = 0.5, c = 0.5, d = 0.5;
	int n=100;
	double* u = new double[n];
	double* y = new double[n];
	y[0] = 0;
	y[1] = 0;
	for (int i = 0; i < n; i++) {
		u[i] = 1;
	}
	for (int i = 1; i < n; i++) {
		y[i] = a * y[i - 1] + b * u[i - 1];
	}
	std::ofstream out;          
	out.open("outputs.txt");     
	if (out.is_open())
	{
		out << "Linar" << std::endl;
		for (int i = 0; i < 100; i++) {
			out << y[i] << std::endl;
		}
	}
	out.close();
	for (int i = 2; i < n; i++) {
		y[i] = a * y[i - 1] - b * y[i - 2] * y[i - 2] + c * u[i - 1] + d * sin(u[i -2 ]);
	}
	out.open("outputs1.txt");
	if (out.is_open())
	{
		out << "Non-Linar" << std::endl;
		for (int i = 0; i < 100; i++) {
			out << y[i] << std::endl;
		}
	}
	out.close();
	delete[] u;
	delete[] y;
}
```     

Вывод программы:

    Linar
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
Non-Linar
	0
	0.5
	1.17074
	1.3811
	0.925976
	0.430001
	0.70702
	1.1818
	1.26169
	0.853263
	0.55143
	.....
	0.929035
	0.913704
	0.946035
	0.976325
	0.961408
	0.924834
	0.921
	0.953577
	0.973403
	0.952783
	0.92337
	0.928523
	0.958691
	0.969004
![График моделей с t = 100:](linnonlingraph.png)
