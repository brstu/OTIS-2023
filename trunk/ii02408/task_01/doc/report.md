Министерство образования Республики Беларусь
Учреждение образования
«Брестский государственный технический университет»
Кафедра ИИТ

Лабораторная работа №1
За третий семестр
По дисциплине: «Общая теория интеллектуальных систем»
Тема: «Modeling controlled object»

Выполнил:
Студент 2 курса
Группы ИИ-24
Кураш А. Ю.

Проверил:
Иванюк Д.С.

Брест 2023

<img src="image.jpg" alt="" width="1200" height="500">

**Код программы:**
<<<<<<< HEAD

=======

    #include <iostream>
    #include <vector>
    #include <cmath>

    std::vector<double> simulate_linear_model(double a, double b, const std::vector<double>& u) {
        std::vector<double> y(u.size(), 0.0); // Создание вектора y с нулевыми значениями
        y[0] = 0.0; // Начальная температура
        for (int t = 1; t < u.size(); ++t) {
            y[t] = a * y[t-1] + b * u[t-1];
        }
        return y;
    }

    std::vector<double> simulate_nonlinear_model(double a, double b, double c, double d, const std::vector<double>& u) {
        std::vector<double> y(u.size(), 0.0); // Создание вектора y с нулевыми значениями
        y[0] = 0.0; // Начальная температура
        y[1] = 0.0; // Температура на втором временном шаге
        for (int t = 2; t < u.size(); ++t) {
            y[t] = a * y[t-1] - b * pow(y[t-2], 2) + c * u[t-1] + d * sin(u[t-2]);
        }
        return y;
    }

    int main() {
        // Пример использования
        double a_linear = 0.8;
        double b_linear = 0.5;
        std::vector<double> u_linear = {1.0, 2.0, 3.0, 4.0}; // Значения входящего тепла для линейной модели

        double a_nonlinear = 0.8;
        double b_nonlinear = 0.5;
        double c_nonlinear = 0.2;
        double d_nonlinear = 0.3;
        std::vector<double> u_nonlinear = {1.0, 2.0, 3.0, 4.0}; // Значения входящего тепла для нелинейной модели

        std::vector<double> linear_result = simulate_linear_model(a_linear, b_linear, u_linear);
        std::vector<double> nonlinear_result = simulate_nonlinear_model(a_nonlinear, b_nonlinear, c_nonlinear, d_nonlinear, u_nonlinear);
        
        return 0;
    }

>>>>>>> 1d2b5565231cdc453a21bfa8ef9390de81552c7b
**График:**

![](graphics.jpg)
