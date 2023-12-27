<p style="text-align: center;">Министерство образования Республики Беларусь</p>
<p style="text-align: center;">Учреждение образования</p>
<p style="text-align: center;">“Брестский Государственный технический университет”</p>
<p style="text-align: center;">Кафедра ИИТ</p>
<div style="margin-bottom: 10em;"></div>
<p style="text-align: center;">Лабораторная работа №2</p>
<p style="text-align: center;">По дисциплине “Общая теория интеллектуальных систем”</p>
<p style="text-align: center;">Тема: “ПИД-регуляторы”</p>
<div style="margin-bottom: 10em;"></div>
<p style="text-align: right;">Выполнил:</p>
<p style="text-align: right;">Студент 2 курса</p>
<p style="text-align: right;">Группы ИИ-23</p>
<p style="text-align: right;">Новицкая В.Д.</p>
<p style="text-align: right;">Проверил:</p>
<p style="text-align: right;">Иванюк Д. С.</p>
<div style="margin-bottom: 10em;"></div>
<p style="text-align: center;">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: trunk\ii0xxyy\task_01\doc (где xx - номер группы, yy - номер студента, например **ii02102**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_01\src**.


# Выполнение задания #

Код программы:

#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

class PidRegulator {
private:
    double K = 0.001;
    double T = 100;
    double Td = 100;
    double h = 1;
    
    double q0 = K * (1 + Td / h);
    double q1 = -K * (1 + 2 * Td / h - h / T);
    double q2 = (K * Td) / h;
    
    vector<double> q = {q0, q1, q2};
    vector<double> e = {0, 0, 0};
    vector<double> y = {0, 0, 0};
    vector<double> u = {1, 1};
public:
    double sum() {
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += q[i] * e[i];
        }
        return sum;
    }
    void nline(int time, double setpoint, double a = 0.5, double b = 0.3, double c = 0.9, double d = 0.7) {
        for (int i = 0; i < time; i++) {
            e[0] = setpoint - y[y.size() - 1];
            e[1] = setpoint - y[y.size() - 2];
            e[2] = setpoint - y[y.size() - 3];
            u[0] = u[1] + sum();
            y.push_back(a * y[y.size() - 1] - b * y[y.size() - 2] * y[y.size() - 2] + c * u[0] + d * sin(u[1]));
            u[1] = u[0];
        }
    }

    vector<double> getY() const{
        return y;
    }
};
int main() {
    double value;
    ofstream out("output.txt");
    PidRegulator f;
    if (out.is_open()) {
        cout << "Enter the value: ";
        cin >> value;
        f.nline(100, value);
        vector<double> y_value = f.getY();

        for (int i = 0; i < y_value.size(); i++) {
            double repValue = y_value[i] * value / y_value[y_value.size() - 1];
            cout << i << " " << repValue << endl;
            out << i << " " << value << endl;
        }

        out.close();
    } else {
        cerr << "Error: Cannot open the output file." << std::endl;
    }
    return 0;
}


 Линейный график и нелинейный графики:
 
 ![линейный график](graph.png)
