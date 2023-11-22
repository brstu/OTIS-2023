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
<p align="right">Лозейко М. А.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_02\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_02\src**.

# Задание #
На C++ реализовать программу, моделирующую рассмотренный выше ПИД-регулятор.  В качестве объекта управления использовать математическую модель, полученную в предыдущей работе.
В отчете также привести графики для разных заданий температуры объекта, пояснить полученные результаты.

---

# Выполнение задания #

Код программы:
```C++
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class MyNewModel
{
private:
    double coeffA;
    double coeffB;
    double coeffC;
    double coeffD;

    double param0;
    double param1;
    double param2;

    vector<double> params;
    vector<double> residuals = { 0, 0, 0 };
    vector<double> states = { 0, 0, 0 };
    vector<double> variables = { 1, 1 };

public:
    MyNewModel(double a, double b, double c, double d)
        : coeffA(a), coeffB(b), coeffC(c), coeffD(d), param0(coeffA * (1 + coeffC / coeffD)),
          param1(-coeffA * (1 + 2 * coeffC / coeffD - coeffD / coeffB)), param2(coeffA * coeffC / coeffD),
          params({ param0, param1, param2 }) {}

    double calculateTotalValue()
    {
        double total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += params[i] * residuals[i];
        }
        return total;
    }

    void simulateModel(int steps, double target, double x = 0.5, double y = 0.3, double w = 0.9, double s = 0.7)
    {
        for (int i = 0; i < steps; i++)
        {
            residuals[0] = target - states[states.size() - 1];
            residuals[1] = target - states[states.size() - 2];
            residuals[2] = target - states[states.size() - 3];
            variables[0] = variables[1] + calculateTotalValue();
            states.push_back(x * states[states.size() - 1] - y * states[states.size() - 2] * states[states.size() - 2] + w * variables[0] + s * sin(variables[1]));
            variables[1] = variables[0];
        }
    }

    vector<double> getStateValues() const
    {
        return states;
    }
};

int main()
{
    double target;
    MyNewModel model(0.0001, 100, 100, 1);

    cout << "Enter the target value: ";
    cin >> target;
    model.simulateModel(100, target);
    vector<double> stateValues = model.getStateValues();

    for (int i = 0; i < stateValues.size(); i++)
    {
        double scaledValue = stateValues[i] * target / stateValues[stateValues.size() - 1];
        cout << i << " " << scaledValue << endl;
    }

    return 0;
}


```     

Вывод программы:

    0.0
    0.0
    0.0
    9.69140581303558
    14.449097032902666
    12.505277323667597
    6.318736882385786
    5.704833796489725
    10.73183301628717
    13.513535520540419
    11.094195656604356
    6.831378548074819
    7.480944261478211
    11.290776203159307
    12.71993436830598
    10.147240033233507
    7.324509676566069
    8.642628326039585
    11.538664676655939
    11.986498761095012
    ...
    10.14942655058238
    10.099062772982727
    9.998275633418178
    9.995925139904656
    10.08749381353281
    10.13428947400506
    10.073031372947419
    10.0
![График моделей с w = 10:](graph.png)
