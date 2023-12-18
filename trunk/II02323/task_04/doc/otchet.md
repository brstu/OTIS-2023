<b><p align="center"> Министерство образования Республики Беларусь</p>
<p align="center">Учреждение образования</p>
<p align="center">“Брестский Государственный технический университет”</p>
<p align="center">Кафедра ИИТ</p></b>
<br><br><br><br><br><br><br>
<b><p align="center">Лабораторная работа №4</p></b>
<p align="center">По дисциплине “Общая теория интеллектуальных систем”</p>
<p align="center">Тема: “Работа с проектом "NIKA" (Intelligent Knowledge-driven Assistant)”</p>
<br><br><br><br><br>
<b> <p align="right">Выполнил:</p></b>
<p align="right">Студент 2 курса</p>
<p align="right">Группы ИИ-23</p>
<p align="right">Швороб В.А.</p>
<p align="right">Проверил:</p>
<p align="right">Иванюк Д. С.</p>
<br><br><br><br><br>
<p align="center">Брест 2023</p>

---

# Задание лабораторной работы

1.  Изучить руководство.

2.  Запустить данный проект на локальной машине (домашний персональный компьютер, ноутбук, рабочая машина в аудитории и т.п.). Продемонстрировать работу проекта преподавателю.

3.  Написать отчет по выполненной работе в .md формате (readme.md) и с помощью pull request разместить его в следующем каталоге: trunk\ii0xxyy\task_04\doc.

# Установка "NIKA" (Intelligent Knowledge-driven Assistant)”

Команда для установки:

```
git submodule update --init --recursive
```

![Команда для установки](setup.png)

# Запуск и работа

Команда для запуска:

```
docker compose up --no-build
```

![работа](run.png)

Происходит запуск двух веб-интерфейсов:

```
localhost:8000
```

![работа](back.png)
Веб-диалог пользовательского интерфейса:

```
localhost:3033
```
![работа](web.png)
![работа](webw.png)
