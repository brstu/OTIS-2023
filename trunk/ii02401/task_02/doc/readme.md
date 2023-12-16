<p align="center"> Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">“Брестский Государственный технический университет”</p>
<p align="center">Кафедра ИИТ</p>
<br><br><br><br><br><br><br>
<p align="center">Лабораторная работа №2</p>
<p align="center">По дисциплине “Общая теория интеллектуальных систем”</p>
<p align="center">Тема: “ПИД-регуляторы”</p>
<br><br><br><br><br>
<p align="right">Выполнила:</p>
<p align="right">Студентка 2 курса</p>
<p align="right">Группы ИИ-24</p>
<p align="right">Алешко А.В.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №1 в .md формате (readme.md) и с помощью запроса на внесение изменений (**pull request**) разместить его в следующем каталоге: **trunk\ii0xxyy\task_02\doc** (где **xx** - номер группы, **yy** - номер студента, например **ii02302**).
2. Исходный код написанной программы разместить в каталоге: **trunk\ii0xxyy\task_02\src**.

# Задание #
Задание. На C++ реализовать программу, моделирующую рассмотренный выше ПИД-регулятор. В качестве объекта управления использовать математическую модель, полученную в предыдущей работе. В отчете также привести графики для разных заданий температуры объекта, пояснить полученные результаты.
---
# Код программы: #
```C++    
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class NonlinearModel {
public:
    NonlinearModel(int time, double desiredTemp = 10) : time(time), desiredTemp(desiredTemp) {
        arrayOfE[0] = 0.001;
        arrayOfE[1] = 0.19;
        arrayOfE[2] = 0.00002;

        // Introduce randomness to the coefficients for a 75% difference
        arrayOfQ[0] = 0.4 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        arrayOfQ[1] = 0.1 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        arrayOfQ[2] = 0.12 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));

        weight[0] = 1 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        weight[1] = 0 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        weight[2] = 1 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));
        weight[3] = 1.0 * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));

        prevU = weight[3];
    }

    void calculateModel() {
        for (int i = 0; i < time; i++) {
            param[3] = sin(param[3]);

            double futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[2] = desiredTemp - futureY;

            futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[1] = desiredTemp - futureY;

            // Introduce randomness to the calculation of weight[2]
            weight[2] = prevU + arrayOfQ[0] * arrayOfE[2] + arrayOfQ[1] * arrayOfE[1] + arrayOfQ[2] * arrayOfE[0] * (1 + 0.75 * ((double)rand() / RAND_MAX - 0.5));

            futureY = weight[0] * param[0] - weight[1] * param[1] * param[1] + weight[2] * param[2] + weight[3] * param[3];
            param[1] = param[0];
            param[0] = futureY;

            arrayOfE[0] = desiredTemp - futureY;

            result[i] = param[0];
        }
    }

    void printResults() {
        cout << "Y" << endl;
        for (int i = 0; i < time; i++) {
            cout << result[i] << endl;
        }
    }

private:
    int time;
    double desiredTemp;
    double arrayOfE[3];
    double arrayOfQ[3];
    double weight[4];
    double prevU;
    double param[4] = {1, 0, 1, 1.0};
    double result[200];
};

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed the random number generator

    int size = 200;
    NonlinearModel model(size);
    model.calculateModel();
    model.printResults();

    return 0;
}



```
Вывод:
```
Y
9.91965
18.9123
13.1663
8.51277
13.0865
14.9547
11.5297
11.0133
13.2546
13.0354
11.5989
12.0101
12.7983
12.3246
11.8905
12.2579
12.4261
12.1272
12.0604
12.2432
12.2239
12.0907
12.1131
12.1752
12.13
12.0838
12.1074
12.117
12.0857
12.073
12.0829
12.0766
12.0598
12.0563
12.0569
12.0486
12.0399
12.0375
12.0342
12.0274
12.0223
12.0193
12.0151
12.01
12.0062
12.0029
11.9988
11.9949
11.9915
11.9882
11.9847
11.9813
11.9782
11.9751
11.972
11.9691
11.9662
11.9634
11.9606
11.9579
11.9553
11.9528
11.9502
11.9478
11.9454
11.943
11.9407
11.9385
11.9363
11.9341
11.932
11.9299
11.9279
11.9259
11.9239
11.922
11.9201
11.9183
11.9164
11.9147
11.9129
11.9112
11.9095
11.9078
11.9062
11.9046
11.903
11.9014
11.8999
11.8984
11.8969
11.8954
11.894
11.8925
11.8911
11.8898
11.8884
11.8871
11.8858
11.8845
11.8832
11.8819
11.8807
11.8794
11.8782
11.877
11.8759
11.8747
11.8735
11.8724
11.8713
11.8702
11.8691
11.868
11.867
11.8659
11.8649
11.8638
11.8628
11.8618
11.8609
11.8599
11.8589
11.858
11.857
11.8561
11.8552
11.8543
11.8534
11.8525
11.8516
11.8507
11.8499
11.849
11.8482
11.8473
11.8465
11.8457
11.8449
11.8441
11.8433
11.8425
11.8417
11.841
11.8402
11.8395
11.8387
11.838
11.8372
11.8365
11.8358
11.8351
11.8344
11.8337
11.833
11.8323
11.8317
11.831
11.8303
11.8297
11.829
11.8284
11.8277
11.8271
11.8265
11.8258
11.8252
11.8246
11.824
11.8234
11.8228
11.8222
11.8216
11.821
11.8205
11.8199
11.8193
11.8188
11.8182
11.8176
11.8171
11.8166
11.816
11.8155
11.8149
11.8144
11.8139
11.8134
11.8129
11.8123
11.8118
11.8113
11.8108
11.8103
11.8098
11.8094
11.8089
11.8084
11.8079
11.8074
```
![Alt text](<графики нелинейных моделей.png>)
