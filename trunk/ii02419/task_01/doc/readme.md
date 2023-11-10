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
<p style="text-align: right;">Терехов Н. А.</p>
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
#include <vector>

class Models {
private:
    double a = 0.41;
    double b = 1.4;
    double c = 0.5;
    double d = 0.3;
public:
    double linearModel(double f, double u) {
        double result = a * f + b * u;
        std::cout << result << std::endl;
        return result;
    }

    double nonLinearModel(double f, double prevF, double u) {
        double result = a * f - b * prevF * prevF + c * u + d * sin(u);
        std::cout << result << std::endl;
        return result;
    }
};

int main() {
    double f = 0.0;
    double u = 1.0;
    double n = 100;
    Models model;
    
    std::cout << "LinearModeling\n";

    for (int i = 0; i < n; i++) {
        f = model.linearModel(f, u);
    }

    std::cout << "---" << std::endl;

    std::cout << "NonLinearModeling\n";


    float fn = 0;
    f = 0;
    for (int i = 0; i < n; i++) {
        double prevF = f;
        f = fn;
        fn = model.nonLinearModel(f, prevF, u);
    }

}


Вывод:
LinearModeling
1.4
1.974
2.20934
2.30583
2.34539
2.36161
2.36826
2.37099
2.3721
2.37256
2.37275
2.37283
2.37286
2.37287
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
2.37288
---
NonLinearModeling
0.752441
1.06094
0.394793
-0.661531
0.263008
0.247601
0.757115
0.97703
0.35051
-0.440271
0.39993
0.645038
0.792986
0.495062
0.0750599
0.440095
0.924993
0.860531
-0.0925967
-0.322243
0.608318
0.856475
0.585525
-0.0344616
0.258336
0.856697
1.01025
0.139145
-0.619368
0.471395
0.40865
0.60889
0.768294
0.548397
0.150898
0.393275
0.881806
0.89745
0.0317818
-0.362111
0.602562
0.815917
0.578655
0.0576805
0.307313
0.873782
0.978474
0.0847239
-0.553199
0.51558
0.535389
0.599798
0.597061
0.493575
0.455732
0.598228
0.706946
0.541261
0.274676
0.454909
0.833329
0.804387
0.110029
-0.1083
0.69109
1.01937
0.501735
-0.496602
0.196401
0.487707
0.898399
0.787783
-0.0545357
-0.138761
0.691385
1.00895
0.496893
-0.469013
0.214483
0.532417
0.906328
0.727181
-0.0994176
-0.0286291
0.726866
1.04931
0.44299
-0.607402
0.22867
0.329685
0.814406
0.934179
0.206895
-0.384498
0.53487
0.764764
0.665475
0.206477
0.217098
0.781765
