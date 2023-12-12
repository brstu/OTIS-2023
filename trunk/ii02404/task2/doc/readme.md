<p align="center"> Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">“Брестский Государственный технический университет”</p>
<p align="center">Кафедра ИИТ</p>
<br><br><br><br><br><br><br>
<p align="center">Лабораторная работа №2</p>
<p align="center">По дисциплине “Общая теория интеллектуальных систем”</p>
<p align="center">Тема: “ПИД-регуляторы”</p>
<br><br><br><br><br>
<p align="right">Выполнил:</p>
<p align="right">Студент 2 курса</p>
<p align="right">Группы ИИ-24</p>
<p align="right">Капуза Н. А.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_02\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_02\src**.

# Задание #
На С++ реализовать программу, моделирующую рассмотренный выше ПИД-регулятор.  В качестве объекта управления использовать математическую модель, полученную в предыдущей работе.
В отчете также привести графики для разных заданий температуры объекта, пояснить полученные результаты.

---
# Код программы: #
```cpp
#include <iostream>
#include <cmath>

class PIDController {
public:
    PIDController(double Kp, double Ki, double Kd, double T0)
        : Kp(Kp), Ki(Ki), Kd(Kd), T0(T0), prevError(0.0), integral(0.0) {}

    double compute(double setpoint, double processVariable) {
        double error = setpoint - processVariable;
        integral += error * T0;
        double derivative = (error - prevError) / T0;
        double output = Kp * error + Ki * integral + Kd * derivative;
        
        prevError = error;

        return output;
    }

private:
    double Kp;      // Proportional gain
    double Ki;      // Integral gain
    double Kd;      // Derivative gain
    double T0;      // Sampling time
    double prevError;
    double integral;
};

class TemperatureSystem {
public:
    TemperatureSystem(double a, double b, double c, double d)
        : a(a), b(b), c(c), d(d), y_prev(0.0), y_prev2(0.0) {}

    double update(double u) {
        double y = a * y_prev + b * std::pow(y_prev2, 2) + c * u + d * std::sin(u);
        y_prev2 = y_prev;
        y_prev = y;
        return y;
    }

private:
    double a;
    double b;
    double c;
    double d;
    double y_prev;
    double y_prev2;
};

int main() {
    // Параметры ПИД-регулятора
    double Kp = 1.0;
    double Ki = 0.1;
    double Kd = 0.01;
    double T0 = 0.1;  // Произвольное значение шага дискретизации

    // Параметры объекта управления
    double a = 0.5;
    double b = -0.1;
    double c = 0.2;
    double d = 0.01;

    PIDController pidController(Kp, Ki, Kd, T0);
    TemperatureSystem temperatureSystem(a, b, c, d);

    // Моделирование процесса управления
    for (int i = 0; i < 100; ++i) {
        double setpoint = 25.0;  // Желаемая температура
        double measuredTemperature = temperatureSystem.update(pidController.compute(setpoint, temperatureSystem.update(1.0)));
        std::cout << "Time: " << i * T0 << "s, Temperature: " << measuredTemperature << "C" << std::endl;
    }

    return 0;
}

    
```

Вывод:
```
Time: 0s, Temperature: 5.6148C
Time: 0.1s, Temperature: 2.78651C
Time: 0.2s, Temperature: 4.62162C
Time: 0.3s, Temperature: 3.74743C
Time: 0.4s, Temperature: 4.28815C
Time: 0.5s, Temperature: 4.06064C
Time: 0.6s, Temperature: 4.21694C
Time: 0.7s, Temperature: 4.18673C
Time: 0.8s, Temperature: 4.23903C
Time: 0.9s, Temperature: 4.2585C
Time: 1s, Temperature: 4.28751C
Time: 1.1s, Temperature: 4.31591C
Time: 1.2s, Temperature: 4.34124C
Time: 1.3s, Temperature: 4.36948C
Time: 1.4s, Temperature: 4.39464C
Time: 1.5s, Temperature: 4.42143C
Time: 1.6s, Temperature: 4.44651C
Time: 1.7s, Temperature: 4.47211C
Time: 1.8s, Temperature: 4.49686C
Time: 1.9s, Temperature: 4.52164C
Time: 2s, Temperature: 4.54601C
Time: 2.1s, Temperature: 4.5703C
Time: 2.2s, Temperature: 4.59443C
Time: 2.3s, Temperature: 4.61852C
Time: 2.4s, Temperature: 4.6426C
Time: 2.5s, Temperature: 4.66675C
Time: 2.6s, Temperature: 4.69099C
Time: 2.7s, Temperature: 4.71538C
Time: 2.8s, Temperature: 4.73994C
Time: 2.9s, Temperature: 4.76468C
Time: 3s, Temperature: 4.78961C
Time: 3.1s, Temperature: 4.81471C
Time: 3.2s, Temperature: 4.83996C
Time: 3.3s, Temperature: 4.86533C
Time: 3.4s, Temperature: 4.89077C
Time: 3.5s, Temperature: 4.91625C
Time: 3.6s, Temperature: 4.94169C
Time: 3.7s, Temperature: 4.96705C
Time: 3.8s, Temperature: 4.99227C
Time: 3.9s, Temperature: 5.0173C
Time: 4s, Temperature: 5.0421C
Time: 4.1s, Temperature: 5.06663C
Time: 4.2s, Temperature: 5.09086C
Time: 4.3s, Temperature: 5.11477C
Time: 4.4s, Temperature: 5.13836C
Time: 4.5s, Temperature: 5.16164C
Time: 4.6s, Temperature: 5.18462C
Time: 4.7s, Temperature: 5.20734C
Time: 4.8s, Temperature: 5.22983C
Time: 4.9s, Temperature: 5.25214C
Time: 5s, Temperature: 5.27433C
Time: 5.1s, Temperature: 5.29644C
Time: 5.2s, Temperature: 5.31853C
Time: 5.3s, Temperature: 5.34066C
Time: 5.4s, Temperature: 5.36286C
Time: 5.5s, Temperature: 5.38519C
Time: 5.6s, Temperature: 5.40766C
Time: 5.7s, Temperature: 5.43031C
Time: 5.8s, Temperature: 5.45314C
Time: 5.9s, Temperature: 5.47614C
Time: 6s, Temperature: 5.49931C
Time: 6.1s, Temperature: 5.52262C
Time: 6.2s, Temperature: 5.54603C
Time: 6.3s, Temperature: 5.5695C
Time: 6.4s, Temperature: 5.593C
Time: 6.5s, Temperature: 5.61646C
Time: 6.6s, Temperature: 5.63984C
Time: 6.7s, Temperature: 5.66308C
Time: 6.8s, Temperature: 5.68615C
Time: 6.9s, Temperature: 5.709C
Time: 7s, Temperature: 5.7316C
Time: 7.1s, Temperature: 5.75392C
Time: 7.2s, Temperature: 5.77596C
Time: 7.3s, Temperature: 5.79772C
Time: 7.4s, Temperature: 5.81919C
Time: 7.5s, Temperature: 5.84041C
Time: 7.6s, Temperature: 5.8614C
Time: 7.7s, Temperature: 5.8822C
Time: 7.8s, Temperature: 5.90285C
Time: 7.9s, Temperature: 5.9234C
Time: 8s, Temperature: 5.9439C
Time: 8.1s, Temperature: 5.96441C
Time: 8.2s, Temperature: 5.98496C
Time: 8.3s, Temperature: 6.0056C
Time: 8.4s, Temperature: 6.02636C
Time: 8.5s, Temperature: 6.04728C
Time: 8.6s, Temperature: 6.06836C
Time: 8.7s, Temperature: 6.08962C
Time: 8.8s, Temperature: 6.11105C
Time: 8.9s, Temperature: 6.13263C
Time: 9s, Temperature: 6.15434C
Time: 9.1s, Temperature: 6.17616C
Time: 9.2s, Temperature: 6.19803C
Time: 9.3s, Temperature: 6.21992C
Time: 9.4s, Temperature: 6.24178C
Time: 9.5s, Temperature: 6.26356C
Time: 9.6s, Temperature: 6.28522C
Time: 9.7s, Temperature: 6.30671C
Time: 9.8s, Temperature: 6.32801C
Time: 9.9s, Temperature: 6.34907C
```
![grafik](Model.jpg)

