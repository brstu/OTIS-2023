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
<p align="right">Баранчук И.Я.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_01\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii02402\task_01\src**.

## Task 1. Modeling controlled object ##
Let's get some object to be controlled. We want to control its temperature, which can be described by this differential equation:

$$\Large\frac{dy(\tau)}{d\tau}=\frac{u(\tau)}{C}+\frac{Y_0-y(\tau)}{RC} $$ (1)

where $\tau$ – time; $y(\tau)$ – input temperature; $u(\tau)$ – input warm; $Y_0$ – room temperature; $C,RC$ – some constants.

After transformation we get these linear (2) and nonlinear (3) models:

$$\Large y_{\tau+1}=ay_{\tau}+bu_{\tau}$$ (2)
$$\Large y_{\tau+1}=ay_{\tau}-by_{\tau-1}^2+cu_{\tau}+d\sin(u_{\tau-1})$$ (3)

where $\tau$ – time discrete moments ($1,2,3{\dots}n$); $a,b,c,d$ – some constants.

Task is to write program (**C++**), which simulates this object temperature.

---

# Выполнение задания #

Код программы:
```C++
#include <iostream>
#include <cmath>

using namespace std;

class Simulation {
protected:
    double p1, p2, p3, p4, input;
public:
    Simulation(double p1, double p2, double p3, double p4, double input) : p1(p1), p2(p2), p3(p3), p4(p4), input(input) {}
    virtual void compute(double& temperature) = 0;
};

class LinearSimulation : public Simulation {
public:
    LinearSimulation(double p1, double p2, double p3, double p4, double input) : Simulation(p1, p2, p3, p4, input) {}
    void compute(double& temperature) override {
        temperature = p1 * temperature + p2 * input;
        cout << temperature << endl;
    }
};

class NonlinearSimulation : public Simulation {
private:
    double previousTemperature;
    bool isFirstRun;
public:
    NonlinearSimulation(double p1, double p2, double p3, double p4, double input) : Simulation(p1, p2, p3, p4, input), isFirstRun(true) {}
    void compute(double& temperature) override {
        if (isFirstRun)
        {
            previousTemperature = temperature;
            temperature = p1 * temperature + p3 * input + p4 * sin(input);
            cout << temperature << endl;
            isFirstRun = false;
        }
        else
        {
            double tempBuffer;
            tempBuffer = p1 * temperature - p2 * pow(previousTemperature, 2) + p3 * input + p4 * sin(input);
            previousTemperature = temperature;
            temperature = tempBuffer;
            cout << temperature << endl;
        }
    }
};

int main()
{
    double initialTempLinear, initialTempNonlinear;
    cout << "Введите начальную температуру: ";
    cin >> initialTempLinear;
    initialTempNonlinear = initialTempLinear;

    LinearSimulation linear(0.5, 1.0, 0.15, 0.3, 1.2);
    NonlinearSimulation nonlinear(0.5, 1.0, 0.15, 0.3, 1.2);

    int numIterations = 10;

    cout << "Результаты линейной симуляции\n" << initialTempLinear << endl;
    for (int i = 0; i < numIterations; i++)
        linear.compute(initialTempLinear);

    cout << endl << "Результаты нелинейной симуляции\n" << initialTempNonlinear << endl;
    for (int i = 0; i < numIterations; i++)
        nonlinear.compute(initialTempNonlinear);
}

```     
**График:**

![](graphics.jpg)
