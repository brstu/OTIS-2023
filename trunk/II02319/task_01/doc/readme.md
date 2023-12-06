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
#include <fstream>
#include <cmath>
using namespace std;

class LinearModel {
private:
    double a, b;
    ofstream file;

public:
    LinearModel(double a_val, double b_val) : a(a_val), b(b_val) {
        file.open("linear_data.txt");
        file.clear();
    }

    void simulate(double y, double u, double t, double i = 1) {
        if (i != t) {
            file << i << " " << y << endl;
            cout << y << endl;
            simulate(a * y + b * u, u, t, i + 1);
        } else {
            cout << "End of linear simulation\n";
        }
    }

    ~LinearModel() {
        file.close();
    }
};

class NonLinearModel {
private:
    double a, b, c, d;
    ofstream file;

public:
    NonLinearModel(double a_val, double b_val, double c_val, double d_val)
            : a(a_val), b(b_val), c(c_val), d(d_val) {
        file.open("nonlinear_data.txt");
        file.clear();
    }

    void simulate(double y, double y1, double u, double t, double i = 1) {
        if (i != t) {
            file << i << " " << y << endl;
            cout << y << endl;
            double nextY = a * y - b * y1 * y1 + c * u + d * sin(u);
            simulate(nextY, y, u, t, i + 1);
        } else {
            cout << "End of nonlinear simulation\n";
        }
    }

    ~NonLinearModel() {
        file.close();
    }
};

int main() {
    const double a = 0.5, b = 0.5, c = 0.5, d = 0.5;
    double y = 0, u = 1, t = 100;

    cout << "Linear model simulation:\n";
    LinearModel linear(a, b);
    linear.simulate(y, u, t);

    cout << "\nNonlinear model simulation:\n";
    NonLinearModel nonlinear(a, b, c, d);
    nonlinear.simulate(y, y, u, t);

    return 0;
}


    Вывод находится в lin.txt и nonlin.txt:
```
 Линейный график и нелинейный графики:
 в документе график.docx
