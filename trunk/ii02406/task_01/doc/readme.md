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
<p style="text-align: right;">Группы ИИ-24</p>
<p style="text-align: right;">Крейдич А.А.</p>
<p style="text-align: right;">Проверил:</p>
<p style="text-align: right;">Иванюк Д. С.</p>
<div style="margin-bottom: 10em;"></div>
<p style="text-align: center;">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: trunk\ii0xxyy\task_01\doc (где xx - номер группы, yy - номер студента, например **ii02301**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_01\src**.

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

double computeNextLinearValue(double coeffA, double coeffB, double inputU, const double& outputY) {
    return coeffA * outputY + coeffB * inputU;
}

void updateLinearOutput(double& outputY, double nextY) {
    outputY = nextY;
}

void printLinearOutput(const double& outputY, double coeffA, double coeffB, double inputU, int iterations) {
    std::cout << "Linear model" << std::endl;
    double currentOutputY = outputY;
    for (int i = 0; i < iterations; ++i) {
        std::cout << currentOutputY << std::endl;
        double nextY = computeNextLinearValue(coeffA, coeffB, inputU, currentOutputY);
        updateLinearOutput(currentOutputY, nextY);
    }
}

double computeNextNonlinearValue(double coeffA, double coeffB, double coeffC, double coeffD, double inputU, const double& outputY, const double& prevY) {
    double nextY;
    if (prevY == 0) {
        nextY = coeffA * outputY - coeffB * pow(prevY, 2) + coeffC * 1 + coeffD * sin(1);
    }
    else {
        nextY = coeffA * outputY - coeffB * pow(prevY, 2) + coeffC * inputU + coeffD * sin(inputU);
    }
    return nextY;
}

void updateNonlinearOutput(double& outputY, double& prevY, double nextY) {
    prevY = outputY;
    outputY = nextY;
}

void printNonlinearOutput(const double& outputY, double coeffA, double coeffB, double coeffC, double coeffD, double inputU, int iterations) {
    std::cout << "Nonlinear model" << std::endl;
    double currentOutputY = outputY;
    double currentPrevY = 0.0;
    for (int i = 0; i < iterations; ++i) {
        std::cout << currentOutputY << std::endl;
        double nextY = computeNextNonlinearValue(coeffA, coeffB, coeffC, coeffD, inputU, currentOutputY, currentPrevY);
        updateNonlinearOutput(currentOutputY, currentPrevY, nextY);
    }
}

int main() {
    const double linearCoeffA = 0.3;
    const double linearCoeffB = 0.3;
    const double linearInputU = 1.0;
    double linearOutputY = 0.0;
    const int linearIterations = 20;

    printLinearOutput(linearOutputY, linearCoeffA, linearCoeffB, linearInputU, linearIterations);

    const double nonlinearCoeffA = 0.3;
    const double nonlinearCoeffB = 0.3;
    const double nonlinearCoeffC = 0.2;
    const double nonlinearCoeffD = 0.4;
    const double nonlinearInputU = 1.0;
    double nonlinearOutputY = 0.0;
    const int nonlinearIterations = 20;

    printNonlinearOutput(nonlinearOutputY, nonlinearCoeffA, nonlinearCoeffB, nonlinearCoeffC, nonlinearCoeffD, nonlinearInputU, nonlinearIterations);

    return 0;
}

    Вывод:
    lineynaya model:
0
0.3
0.36
0.372
0.3744
0.37488
0.374976
0.374995
0.374999
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
0.375
end lineynaya model
nelineynaya model:
0
1.03903
1.24684
0.964522
0.765554
0.91305
1.04582
0.998095
0.910528
0.922277
0.974767
0.978804
0.94974
0.94156
0.95674
0.964417
0.957308
0.951461
0.954391
0.958324
0.957436
0.955001
0.955025
0.956426
0.956693
0.955943
0.95564
0.95601
0.956257
0.956095
0.95592
0.955978
0.95609
0.956079
0.956013
0.956006
0.956043
0.956054
0.956035
0.956025
0.956034
0.956041
0.956038
0.956033
0.956034
0.956037
0.956037
0.956035
0.956035
end nelineynaya model
```
 Графики:
 
 линейный график :
 
 ![линейный график](image.png)
 
 нелинейный график:
 
 ![нелинейный график](image1.png)
