МИНЕСТЕРСТВО ОБРАЗОВАНИЯ РЕСПУБЛИКИ БЕЛАРУСЬ <br/>
УЧЕРЕЖДЕНИЕ ОБРАЗОВАНИЯ <br/>
«Брестский государственный технический университет» <br/>
Кафедра «Интеллектуальные информационные технологии» <br/>

Лабораторная работа №1 <br/>
По дисциплине «Общая теория интеллектуальных систем» <br/>
Тема: «Modeling controlled object» <br/>

Выполнил: <br/>
студент 2 курса <br/>
группы ИИ-23 <br/>
Привезенцев М.А. <br/>

Проверил: <br/>
Иванюк Д.С. <br/>

Брест 2023 <br/>

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_01\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02311**).
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

## Код программы: ###
```С++
#include <iostream>
#include <cmath>

using namespace std;

double a = 0.5;
double b = 1;
double c = 0.15;
double d = 0.3;
double u = 1.2;

void liner(double& y1) {
  y1 = a * y1 + b * u;
  cout << y1 << endl;
}

void unliner(double& y2, double& y_prev, bool& second_iteration) {
  if (second_iteration) {
    y_prev = y2;
    y2 = a * y2 + c * u + d * sin(u); 
    cout << y2 << endl;
    second_iteration = false;
  } else {
    double temp;
    temp = a * y2 - b * pow(y_prev, 2) + c * u + d * sin(u);
    y_prev = y2;
    y2 = temp;
    cout << y2 << endl;
  }
}

int main() {
  double y1, y2, y_prev;
  bool second_iteration = true;
  cout << "Введите температуру: ";
  cin >> y1;
  y2 = y1;
  int num_steps = 10;

  cout << "Линейная модель\n" << y1 << endl;
  for (int i = 0; i < num_steps; i++) {
    liner(y1);
  }

  cout << "\nНелинейная модель\n" << y2 << endl;
  for (int i = 0; i < num_steps; i++) {
    unliner(y2, y_prev, second_iteration);
  }
}
```
## График линейной и не линейной зависимости ##
![graphic linear and non-linear models](picture.png)
