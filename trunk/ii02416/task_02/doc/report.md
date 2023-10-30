<p align="center">Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">"Брестский Государственный технический университет"</p>
<p align="center">Кафедра ИИТ</p>
<br>
<br>
<p align="center">Лабораторная работа №2</p>
<p align="center">По дисциплине: "Общая теория интеллектуальных систем"</p>
<p align="center">Тема: "ПИД-регуляторы"</p>
<br>
<br>
<p align="right">Выполнил:<br>Студент 2 курса<br>Группы ИИ-24<br>Рудецкий Е.В.</p>
<p align="right">Проверил:<br>Иванюк Д. С.</p>
<br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Написать отчет по выполненной лабораторной работе №2 в .md формате (*readme.md*) и с помощью **pull request** разместить его в следующем каталоге: **trunk\ii0xxyy\task_02\doc**.
2. Исходный код написанной программы разместить в каталоге: **trunk\ii00xxyy\task_02\src**.
---

# Выполнение задания #

Код программы:
```C++

#include<iostream>
#include<vector>
using namespace std;


class pid
{
private:
   vector<float>a2;
   float i=0,p_err=0;
public:
   float pid_c (float k_p,float k_i,float k_d,float val,float c_val,float dt)
   {
      float err = val - c_val;
      float p = err;
      i = i + err*dt; 
      float d = (err - p_err) / dt;
      float c_sig= p * k_p + i * k_i + d * k_d;
      p_err = err;
      float buff=c_sig-c_val;
      a2.push_back(buff);
      return c_sig;
   }
   
   void lin(float y_c, float u, float t, float dt, float setting)
   {
      float a = 0.925, b = 0.75, k_p = 0.19, k_i = 0.27, k_d = 0.0006;
      vector<float>a1,a3(t,setting);
      a1.push_back(y_c);
      for(float i=1;i<=t;i++)
      {
         if (((int)i)%((int)dt)==0)
         {
            float y=pid_c(k_p,k_i,k_d, setting, y_c, dt);
            float y_next = a * y  + b * u;
            a1.push_back(y_next);
            y_c = y_next;
         }
         else
         {
            float y_next = a * y_next + b * u;
            a1.push_back(y_next);
            y_c = y_next;
         }
      }
      cout<<"value:\n";
      for(int i=0;i<a1.size();i++)
      {
         cout<<a1[i]<<",";
      }
      cout<<"\n\nsignal:\n";
      for(int i = 0; i < a1.size()-a2.size(); i++){
         a2.push_back(a2.back());
      }
      for(int i=0;i<a2.size();i++)
      {
         cout<<a2[i]<<",";
      }
      cout<<"\n\nsetting:\n";
      for(int i=0;i<a3.size();i++)
      {
         cout<<a3[i]<<",";
      }
   }
};

int main() {
   pid T;
   cout<<"setting:\n";
   float setting;       
   cin>>setting;
   cout<<"duration:\n";
   float duration;
   cin>>duration;
   cout<<"discretization value:\n";
   float dis_time;
   cin>>dis_time;
   T.lin(0, 0, duration, dis_time, setting);
   return 0;
}

```
Ввод программы:
```
setting:
312
duration:
12
discretization value:
1
```

Вывод программы:
```
value:
0,132.929,154.043,189.844,214.052,234.267,250.13,262.796,272.861,280.868,287.237,292.303,296.333,

signal:
143.707,33.6037,51.1938,41.5638,39.2089,36.1443,33.9742,32.1881,30.7808,29.6584,28.7663,28.0566,28.0566,

setting:
312,312,312,312,312,312,312,312,312,312,312,312,
```
![График](Figure1_.png)
