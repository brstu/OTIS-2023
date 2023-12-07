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
<p style="text-align: right;">Макаревич Н. Р.</p>
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
```cpp

#include <iostream>
#include <cmath>

using namespace std;

class Function {
private:
	double a = 0.6;
	double b = 0.5;
	double c = 0.65;
	double d = 1.1;
	double u = 4.1;
public:
	double func2(double prev) const {
		double next = a * prev + b * u;
		return next;
	}

	double func3(double cur, double prev) const {
		double next = a * cur - prev * prev * b + u * c + d * sin(u);
		return next;
	}
};


int main()
{
	double y1 = 0.6;
	double cur1 = y1;
	double cur2 = y1;
	double prev2 = y1;
	int t;
	cout << "Enter t: ";
	cin >> t;
	Function f;
	for (int i = 0; i < t; i++) {
		cur1 = f.func2(cur1);
		double temp = cur2;
		cur2 = f.func3(cur2, prev2);
		prev2 = temp;
		cout << i << ";" << cur1 << ";" << cur2 << endl;
	}
	return 0;
}


    Вывод находится в lin.txt и nonlin.txt:
```
 Линейный график и нелинейный графики:
 в документе график.docx
