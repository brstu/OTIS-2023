<p align="center"> Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">“Брестский Государственный технический университет”</p>
<p align="center">Кафедра ИИТ</p>
<br><br><br><br><br><br><br>
<p align="center">Лабораторная работа №4</p>
<p align="center">По дисциплине “Общая теория интеллектуальных систем”</p>
<p align="center">Тема: “Работа с проектом "NIKA" (Intelligent Knowledge-driven Assistant)”</p>
<br><br><br><br><br>
<p align="right">Выполнил:</p>
<p align="right">Студент 2 курса</p>
<p align="right">Группы ИИ-24</p>
<p align="right">Терехов Н.А.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Общее задание #
1. Изучить руководство.

2. Запустить данный проект на локальной машине (домашний персональный компьютер, ноутбук, рабочая машина в аудитории и т.п.). Продемонстрировать работу проекта преподавателю.

3. Написать отчет по выполненной работе в .md формате (readme.md) и с помощью pull request разместить его в следующем каталоге: trunk\ii0xxyy\task_04\doc.


---

# Выполнение задания #
Установка:
Сначала уставливаем Docker:
```
sudo apt-get install docker
```
Затем клонируем репозиторий:
```
git clone -c core.longpaths=true -c core.autocrlf=true https://github.com/ostis-apps/nika
```
Обновим пакеты через Docker
```
git submodule update --init --recursive
```
Затем соберём проект через Docker
```
docker compose pull
```
Перейдем на локальный сервер: localhost:8000 и localhost:3033

Результат:

sc-web:

![Вывод:](1.png)

Диалоговый веб-интерфейс:

![Вывод:](2.png)
![Вывод:](3.png)
![Вывод:](4.png)
![Вывод:](5.png)
