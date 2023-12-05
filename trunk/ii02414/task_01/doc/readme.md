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
<p style="text-align: right;">Поддубный Ю. А.</p>
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
#include <math.h>

class Models {
private:
    const float a = 0.722;
    const float b = 0.421;
    const float c = 0.587;
    const float d = 0.035;
public:
    [[nodiscard]] float linearModel(float f, float u) const {
        float result = a * f + b * u;
        std::cout << result << std::endl;
        return result;
    }

    [[nodiscard]] float notLinearModel(float f, float prevF, float u) const {
        float result = a * f - b * prevF * prevF + c * u + d * sin(u);
        std::cout << result << std::endl;
        return result;
    }
};

int main() {
    float f = 0.0;
    float u = 1.0;
    float n = 100;
    Models model;

    std::cout << "Linear modeling\n";

    for (int i = 0; i < n; i++) {
        f = model.linearModel(f, u);
    }

    std::cout << "-----------------------------------------------------------" << std::endl;

    std::cout << "Not Linear modeling\n";

    float fn = 0;
    f = 0;
    for (int i = 0; i < n; i++) {
        float prevF = f;
        f = fn;
        fn = model.notLinearModel(f, prevF, u);
    }

}

Вывод:
Enter n: 100
Linear modeling
0.421          
0.724962       
0.944423       
1.10287        
1.21727        
1.29987        
1.35951        
1.40256        
1.43365        
1.4561         
1.4723         
1.484          
1.49245        
1.49855        
1.50295        
1.50613        
1.50843        
1.51008        
1.51128        
1.51214        
1.51277        
1.51322        
1.51354        
1.51378        
1.51395
1.51407
1.51416
1.51422
1.51427
1.5143
1.51433
1.51434
1.51436
1.51437
1.51437
1.51438
1.51438
1.51438
1.51438
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
1.51439
-----------------------------------------------------------
Not Linear modeling
0.616452
1.06153
1.22289
1.02498
0.726896
0.698977
0.898666
1.0596
1.04148
0.895723
0.80651
0.860975
0.964233
1.00055
0.947426
0.87903
0.873215
0.921609
0.960838
0.952595
0.915554
0.89545
0.910068
0.93595
0.943525
0.92888
0.912312
0.911894
0.924436
0.933811
0.930884
0.921437
0.916913
0.921015
0.927477
0.928969
0.925017
0.920998
0.92118
0.924436
0.926645
0.92571
0.923314
0.922313
0.923455
0.925058
0.925327
0.924275
0.923305
0.923424
0.924265
0.924779
0.924496
0.923892
0.923675
0.92399
0.924385
0.924426
0.924148
0.923915
0.923964
0.924179
0.924298
0.924215
0.924064
0.924018
0.924104
0.9242
0.924204
0.924131
0.924076
0.924093
0.924148
0.924174
0.924151
0.924113
0.924104
0.924127
0.92415
0.92415
0.924131
0.924118
0.924123
0.924137
0.924143
0.924136
0.924127
0.924125
0.924132
0.924137
0.924137
0.924132
0.924129
0.92413
0.924134
0.924135
0.924133
0.924131
0.924131
0.924132

