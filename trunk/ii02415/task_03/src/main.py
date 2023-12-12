from tkinter import messagebox as mb
import tkinter as tk
from math import inf, sqrt
import networkx as nx

application = tk.Tk()  # Создание окна
application.geometry("860x860+310+0")  # Размер окна и его расположение
application.resizable(0, 0)  # Запрет на изменение размера окна
application.wm_attributes('-topmost', 1)  # Окно всегда сверху

canvas = tk.Canvas(application, bg="white", width=856, height=726)  # Создание холста

canvas.place(x=0, y=120)
application.title("работа с графами")

label = tk.Label(application)  # Создание метки
label.place(x=370, y=125)  # Расположение метки
label["text"] = "Имя графа"  # Текст метки


application.update()


def line_intersect_circle(x1, y1, x2, y2):  # функция для нахождения точек пересечения прямой и окружности
    '''Возвращает координаты точек пересечения прямой и двух окружностей'''
    main_gipotenusa = sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
    main_dx = x2 - x1
    main_dy = y2 - y1
    dx = (main_gipotenusa - 15) * main_dx / main_gipotenusa
    dy = (main_gipotenusa - 15) * main_dy / main_gipotenusa
    return x2 - dx, y2 - dy, x1 + dx, y1 + dy


BUTTON_1 = "<Button-1>"

def draw_vertices():
    canvas.bind_all(BUTTON_1, draw_vertex_on_click)


FONT = "Arial 14"

def draw_vertex_on_click(event):
    global name_vertex
    global color_vertices_line
    r = 15
    global ID
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    if mouse_y > 0:
        canvas.create_oval(mouse_x - r, mouse_y - r, mouse_x + r, mouse_y + r, fill=color_vertices_line,
                           outline="black", width=2)
        print(mouse_x, mouse_y)
        ID += 1
        data_vertex_id_x_y[ID] = [mouse_x, mouse_y, name_vertex, color_vertices_line]
        print("data_vertex_id_x_y\t", data_vertex_id_x_y)
        canvas.create_text(mouse_x, mouse_y, text=name_vertex, font=FONT)


def change_color_vertex():  # изменение цвета вершин
    canvas.bind_all(BUTTON_1, change_color_vertex_on_click)


def change_color_vertex_on_click(event):
    global color_vertices_line
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    for i in data_vertex_id_x_y:
        if mouse_x > data_vertex_id_x_y[i][0] - 15 and mouse_x < data_vertex_id_x_y[i][0] + 15 and \
                mouse_y > data_vertex_id_x_y[i][1] - 15 and mouse_y < data_vertex_id_x_y[i][1] + 15:
            data_vertex_id_x_y[i][3] = color_vertices_line
            canvas.create_oval(data_vertex_id_x_y[i][0] - 15, data_vertex_id_x_y[i][1] - 15,
                               data_vertex_id_x_y[i][0] + 15,
                               data_vertex_id_x_y[i][1] + 15, fill=color_vertices_line, outline="black", width=2)
            canvas.create_text(data_vertex_id_x_y[i][0], data_vertex_id_x_y[i][1], text=data_vertex_id_x_y[i][2],
                               font=FONT)
            print("data_vertex_id_x_y\t", data_vertex_id_x_y)


def draw_unoriented_line_between_vertex():  # рисование неориентированного ребра
    canvas.bind_all(BUTTON_1, draw_line_between_vertex_on_click)


def draw_line_between_vertex_on_click(event):
    global x1, y1, x2, y2, non_oriented_line, ID_none_oriented_line, name1, name2, color
    global count_unoriented_line
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    color = color_vertices_line
    print(mouse_x, mouse_y)
    for i in data_vertex_id_x_y:
        if mouse_x > data_vertex_id_x_y[i][0] - 15 and mouse_x < data_vertex_id_x_y[i][0] + 15 and \
                mouse_y > data_vertex_id_x_y[i][1] - 15 and mouse_y < data_vertex_id_x_y[i][1] + 15:
            if non_oriented_line == 0:
                name1 = data_vertex_id_x_y[i][2]
                x1 = data_vertex_id_x_y[i][0]
                y1 = data_vertex_id_x_y[i][1]
                non_oriented_line += 1
                break
            elif non_oriented_line == 1:
                ID_none_oriented_line += 1
                name2 = data_vertex_id_x_y[i][2]
                x2 = data_vertex_id_x_y[i][0]
                y2 = data_vertex_id_x_y[i][1]
                count_unoriented_line += 1
                data_id_unorient_line_x_y[ID_none_oriented_line] = [[x1, y1, name1, color], [x2, y2, name2, color]]
                print("data_id_unorient_line_x_y\t", data_id_unorient_line_x_y)
                canvas.create_line(*line_intersect_circle(x1, y1, x2, y2), fill=color, width=2)
                non_oriented_line = 0
                break


def delete_unoriented_line():
    canvas.bind_all(BUTTON_1, delete_unoriented_line_on_click)


def delete_unoriented_line_on_click(event):
    global x1, y1, x2, y2, non_oriented_line, ID_none_oriented_line, name1, name2, color
    global count_unoriented_line
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    print(mouse_x, mouse_y)
    clicked_vertex = get_clicked_vertex(mouse_x, mouse_y)
    if clicked_vertex:
        if non_oriented_line == 0:
            name1, x1, y1 = clicked_vertex
            non_oriented_line += 1
            print("nam1,x1,y1   ", name1, x1, y1)
        elif non_oriented_line == 1:
            name2, x2, y2 = clicked_vertex
            print("nam2,x2,y2   ", name2, x2, y2)
            count_unoriented_line -= 1
            delete_matching_unoriented_line(x1, y1, x2, y2)
            print("data_id_unorient_line_x_y in delete\t", data_id_unorient_line_x_y)
            canvas.create_line(*line_intersect_circle(x1, y1, x2, y2), fill="white", width=3)
            non_oriented_line = 0


def get_clicked_vertex(mouse_x, mouse_y):
    for i in data_vertex_id_x_y:
        if mouse_x > data_vertex_id_x_y[i][0] - 15 and mouse_x < data_vertex_id_x_y[i][0] + 15 and \
                mouse_y > data_vertex_id_x_y[i][1] - 15 and mouse_y < data_vertex_id_x_y[i][1] + 15:
            return data_vertex_id_x_y[i][2], data_vertex_id_x_y[i][0], data_vertex_id_x_y[i][1]
    return None


def delete_matching_unoriented_line(x1, y1, x2, y2):
    for key in data_id_unorient_line_x_y:
        if (data_id_unorient_line_x_y[key][0][0] == x1 and data_id_unorient_line_x_y[key][0][1] == y1 and
                data_id_unorient_line_x_y[key][1][0] == x2 and data_id_unorient_line_x_y[key][1][1] == y2) or \
                (data_id_unorient_line_x_y[key][0][0] == x2 and data_id_unorient_line_x_y[key][0][1] == y2 and
                 data_id_unorient_line_x_y[key][1][0] == x1 and data_id_unorient_line_x_y[key][1][1] == y1):
            print("data_id_unorient_line_x_y in delete\t", data_id_unorient_line_x_y)
            canvas.create_line(*line_intersect_circle(x1, y1, x2, y2), fill="white", width=3)
            del data_id_unorient_line_x_y[key]
            break

def draw_oriented_line_between_vertex():  # рисование ориентированного ребра
    canvas.bind_all(BUTTON_1, draw_oriented_line_between_vertex_on_click)


DATA_ID_ORIENT_LINE_X_Y_LABEL = "data_id_orient_line_x_y\t"


def draw_oriented_line_between_vertex_on_click(event):
    global x1, y1, x2, y2, oriented_line, ID_oriented_line, name1, name2, color1
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    print(mouse_x, mouse_y)
    color1 = color_vertices_line
    for i in data_vertex_id_x_y:
        if mouse_x > data_vertex_id_x_y[i][0] - 15 and mouse_x < data_vertex_id_x_y[i][0] + 15 and \
                mouse_y > data_vertex_id_x_y[i][1] - 15 and mouse_y < data_vertex_id_x_y[i][1] + 15:
            if oriented_line == 0:
                name1 = data_vertex_id_x_y[i][2]
                x1 = data_vertex_id_x_y[i][0]
                y1 = data_vertex_id_x_y[i][1]
                oriented_line += 1
                break
            elif oriented_line == 1:
                ID_oriented_line += 1

                name2 = data_vertex_id_x_y[i][2]
                x2 = data_vertex_id_x_y[i][0]
                y2 = data_vertex_id_x_y[i][1]
                data_id_orient_line_x_y[ID_oriented_line] = [[x1, y1, name1, color1], [x2, y2, name2, color1]]
                print(DATA_ID_ORIENT_LINE_X_Y_LABEL, data_id_orient_line_x_y)
                canvas.create_line(*line_intersect_circle(x1, y1, x2, y2), fill=color1, width=2, arrow=tk.LAST)
                oriented_line = 0
                break

def delete_oriented_line():  # удаление ориентированного ребра
    canvas.bind_all(BUTTON_1, delete_oriented_line_on_click)


def delete_oriented_line_on_click(event):
    global x1, y1, x2, y2, oriented_line, ID_oriented_line, name1, name2
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    print(mouse_x, mouse_y)

    for i in data_vertex_id_x_y:
        if is_within_range(mouse_x, mouse_y, data_vertex_id_x_y[i]):
            handle_oriented_line(i)
            break


def is_within_range(x, y, vertex):
    vertex_x, vertex_y = vertex[0], vertex[1]
    return (
            vertex_x - 15 < x < vertex_x + 15 and
            vertex_y - 15 < y < vertex_y + 15
    )


def handle_oriented_line(i):
    global oriented_line, name1, name2, x1, y1, x2, y2

    if oriented_line == 0:
        name1, x1, y1 = data_vertex_id_x_y[i][2], data_vertex_id_x_y[i][0], data_vertex_id_x_y[i][1]
        oriented_line += 1
        print("nam1,x1,y1   ", name1, x1, y1)
    elif oriented_line == 1:
        name2, x2, y2 = data_vertex_id_x_y[i][2], data_vertex_id_x_y[i][0], data_vertex_id_x_y[i][1]
        print("nam2,x2,y2   ", name2, x2, y2)
        delete_oriented_line()


def delete_oriented_line():
    global oriented_line

    for key in data_id_orient_line_x_y:
        if (
                (data_id_orient_line_x_y[key][0][0] == x1 and data_id_orient_line_x_y[key][0][1] == y1 and
                 data_id_orient_line_x_y[key][1][0] == x2 and data_id_orient_line_x_y[key][1][1] == y2) or
                (data_id_orient_line_x_y[key][0][0] == x2 and data_id_orient_line_x_y[key][0][1] == y2 and
                 data_id_orient_line_x_y[key][1][0] == x1 and data_id_orient_line_x_y[key][1][1] == y1)
        ):
            del data_id_orient_line_x_y[key]
            break
    print("data_id_orient_line_x_y in delete\t", data_id_orient_line_x_y)
    canvas.create_line(*line_intersect_circle(x1, y1, x2, y2), fill="white", width=3, arrow=tk.LAST)
    oriented_line = 0


def draw_weight_line():  # рисование веса
    canvas.bind_all(BUTTON_1, draw_weight_on_click)


def draw_weight_on_click(event):
    global weight, ID_weight
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    if mouse_y > 0:
        ID_weight += 1
        data_weight_line_x_y[ID_weight] = [mouse_x, mouse_y, weight]
        print("data_weight_line_x_y\t", data_weight_line_x_y)
        canvas.create_text(mouse_x, mouse_y, text=weight, fill="black", font=("Purisa", 12))


def delete_weight_line():  # удаление веса
    canvas.bind_all(BUTTON_1, delete_weight_on_click)


def delete_weight_on_click(event):
    global weight, ID_weight
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    if mouse_y > 0:
        for key in data_weight_line_x_y:
            if data_weight_line_x_y[key][0] == mouse_x and data_weight_line_x_y[key][1] == mouse_y:
                del data_weight_line_x_y[key]
                break
    canvas.create_oval(mouse_x - 10, mouse_y - 10, mouse_x + 10, mouse_y + 10, fill="white", outline="white")


def input_weight():  # рисование веса
    new_application1 = tk.Tk()
    new_application1.title("Задайте вес ребра")
    new_application1.resizable(15, 15)
    label1 = tk.Label(new_application1, text="Введите вес ребра")
    label1.grid(row=0, column=0, sticky="ew")
    entry1 = tk.Entry(new_application1)
    entry1.grid(row=1, column=0, sticky="ew")
    button1 = tk.Button(new_application1, text="OK",
                        command=lambda: input_weight_on_click(entry1.get(), new_application1))
    button1.grid(row=2, column=0, sticky="ew")
    new_application1.mainloop()


def input_weight_on_click(weight_line, root):
    global weight
    if weight_line == "":
        mb.showerror("", "Вы не вес ребра")
    else:
        weight = weight_line
        root.destroy()


def name_vertex():  # функция для задания имени вершины
    new_application = tk.Tk()
    new_application.title("Задайте имя вершины")
    new_application.resizable(15, 15)
    label = tk.Label(new_application)
    label["text"] = "Введите имя вершины"
    label.grid(row=0, column=0, sticky="ew")
    entry = tk.Entry(new_application)
    entry.grid(row=1, column=0)
    btn_graf = tk.Button(new_application, text="Ввод вершины", command=lambda: vertex_name(entry.get(), new_application))
    btn_graf.grid(row=2, column=0, sticky="ew")
    new_application.mainloop()


def vertex_name(name, root):  # проверка на существование вершины
    global name_vertex
    if name == "":
        mb.showerror(" ", "Вы не ввели имя вершины")
    elif name not in array_name_vertex:
        array_name_vertex.append(name)
        print(array_name_vertex)
        name_vertex = name
        root.destroy()
    else:
        mb.showerror(" ", "Такая вершина уже существует")


def stop_add_vertex():  # для остановки действия
    canvas.unbind_all(BUTTON_1)


def color_vertex(color):  # для изменения цвета вершины
    global color_vertices_line
    color_vertices_line = color
    print(color_vertices_line)


def graph_name():  # изменение имени графа
    new_application = tk.Tk()
    new_application.title("Задайте имя графа")
    new_application.wm_attributes('-topmost', 1)
    new_application.resizable(0, 0)
    label = tk.Label(new_application)
    label["text"] = "Введите имя графа"
    label.grid(row=0, column=0, sticky="ew")
    entry = tk.Entry(new_application)
    entry.grid(row=1, column=0)
    btn_graf = tk.Button(new_application, text="Ввод", command=lambda: change_graf_name(entry.get(), new_application))
    btn_graf.grid(row=2, column=0, sticky="ew")
    new_application.mainloop()


def change_graf_name(name, root):  # изменение имени графа
    if name in all_name_garphs:
        mb.showerror(" ", "Такое имя графа уже существует")
    elif name == "":
        mb.showerror(" ", "Вы не ввели имя графа")
    else:
        label["text"] = name
        all_name_garphs.append(name)
        print(all_name_garphs)
        root.destroy()


def delete_vertex():  # удаление вершины
    canvas.bind_all(BUTTON_1, delete_vertex_on_click)

VERTEX_DICT_LABEL = "словарь вершин:\t"

DATA_UNORIENT_LINE_LABEL = "data_id_unorient_line_x_y:\t"

DATA_ORIENT_LINE_LABEL = "data_id_orient_line_x_y:\t"

def delete_lines_for_vertex(vertex_id, lines_data):
    all_delete_names = []
    for name in lines_data:
        if lines_data[name][0][2] == vertex_id or lines_data[name][1][2] == vertex_id:
            canvas.create_line(*line_intersect_circle(lines_data[name][0][0], lines_data[name][0][1],
                                                     lines_data[name][1][0], lines_data[name][1][1]), fill="white",
                               width=3)
            canvas.delete(lines_data[name])
            all_delete_names.append(name)
    for name in all_delete_names:
        del lines_data[name]
    return lines_data

def delete_none_oriented_lines(vertex_id):
    global ID_none_oriented_line
    if ID_none_oriented_line != 0:
        data_id_unorient_line_x_y = delete_lines_for_vertex(vertex_id, data_id_unorient_line_x_y)
    return data_id_unorient_line_x_y

def delete_oriented_lines(vertex_id):
    global ID_oriented_line
    if ID_oriented_line != 0:
        data_id_orient_line_x_y = delete_lines_for_vertex(vertex_id, data_id_orient_line_x_y)
    return data_id_orient_line_x_y

def delete_vertex(vertex_id):
    canvas.delete(data_vertex_id_x_y[vertex_id][2])
    del data_vertex_id_x_y[vertex_id]
    array_name_vertex.remove(vertex_id)
    print("array_name_vertex:\t", array_name_vertex)
    print(VERTEX_DICT_LABEL, data_vertex_id_x_y)

def delete_vertex_on_click(event):
    name_delete_vertex = ""
    global ID_none_oriented_line, ID_oriented_line
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    print(mouse_x, mouse_y)

    for i in data_vertex_id_x_y:
        vertex_x, vertex_y, vertex_id = data_vertex_id_x_y[i]
        if mouse_x > vertex_x - 15 and mouse_x < vertex_x + 15 and mouse_y > vertex_y - 15 and mouse_y < vertex_y + 15:
            canvas.create_oval(vertex_x - 15, vertex_y - 15, vertex_x + 15, vertex_y + 15, fill="white",
                               outline="white", width=2)
            name_delete_vertex = vertex_id

            print(VERTEX_DICT_LABEL, vertex_id)
            data_id_unorient_line_x_y = delete_none_oriented_lines(name_delete_vertex)
            print(DATA_UNORIENT_LINE_LABEL, data_id_unorient_line_x_y)

            data_id_orient_line_x_y = delete_oriented_lines(name_delete_vertex)
            print(DATA_ORIENT_LINE_LABEL, data_id_orient_line_x_y)

            delete_vertex(name_delete_vertex)

            break


global name_vanish_vertex
name_vanish_vertex = ''
global ID_vanish_vertex
ID_vanish_vertex = 0
all_vanish_nonorline_id = []
all_vanish_orline_id = []


def move_vertex_and_line():
    canvas.bind_all(BUTTON_1, vanish_vertex_on_click)

def is_within_vertex_bounds(mouse_x, mouse_y, vertex_x, vertex_y):
    return mouse_x > vertex_x - 15 and mouse_x < vertex_x + 15 and mouse_y > vertex_y - 15 and mouse_y < vertex_y + 15

def delete_none_oriented_lines(vertex_id):
    global ID_none_oriented_line
    all_vanish_nonorline_id = []
    if ID_none_oriented_line != 0:
        for tid, line_data in data_id_unorient_line_x_y.items():
            if line_data[0][2] == vertex_id or line_data[1][2] == vertex_id:
                canvas.create_line(*line_intersect_circle(line_data[0][0], line_data[0][1],
                                                          line_data[1][0], line_data[1][1]),
                                   fill="white", width=2)
                all_vanish_nonorline_id.append(tid)
        print(DATA_UNORIENT_LINE_LABEL, data_id_unorient_line_x_y)
    return data_id_unorient_line_x_y, all_vanish_nonorline_id

def delete_oriented_lines(vertex_id):
    global ID_oriented_line
    all_vanish_orline_id = []
    if ID_oriented_line != 0:
        for tid, line_data in data_id_orient_line_x_y.items():
            if line_data[0][2] == vertex_id or line_data[1][2] == vertex_id:
                canvas.create_line(*line_intersect_circle(line_data[0][0], line_data[0][1],
                                                          line_data[1][0], line_data[1][1]),
                                   fill="white", width=2, arrow=tk.LAST)
                all_vanish_orline_id.append(tid)
        print(DATA_ORIENT_LINE_LABEL, data_id_orient_line_x_y)
    return data_id_orient_line_x_y, all_vanish_orline_id

def delete_vertex(vertex_id):
    canvas.delete(data_vertex_id_x_y[vertex_id][2])
    del data_vertex_id_x_y[vertex_id]
    array_name_vertex.remove(vertex_id)
    print("array_name_vertex:\t", array_name_vertex)
    print(VERTEX_DICT_LABEL, data_vertex_id_x_y)

def vanish_vertex_on_click(event):
    print("event", event)
    global ID_none_oriented_line, ID_oriented_line, name_vanish_vertex, ID_vanish_vertex
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    print(mouse_x, mouse_y)

    for i, vertex_data in data_vertex_id_x_y.items():
        vertex_x, vertex_y, vertex_id = vertex_data
        if is_within_vertex_bounds(mouse_x, mouse_y, vertex_x, vertex_y):
            canvas.create_oval(vertex_x - 15, vertex_y - 15, vertex_x + 15,
                               vertex_y + 15, fill="white", outline="white", width=2)
            name_vanish_vertex = vertex_id
            ID_vanish_vertex = i
            print("имена вершин:\t", array_name_vertex)
            print(VERTEX_DICT_LABEL, vertex_data[2])

            _, _ = delete_none_oriented_lines(name_vanish_vertex)

            _, _ = delete_oriented_lines(name_vanish_vertex)

            delete_vertex(name_vanish_vertex)

            break

    canvas.bind_all(BUTTON_1, appearance_vertex_on_move)


def update_vertex_coordinates(mouse_x, mouse_y):
    temp_color_vertex = data_vertex_id_x_y[ID_vanish_vertex][3]
    data_vertex_id_x_y[ID_vanish_vertex] = [mouse_x, mouse_y, name_vanish_vertex, temp_color_vertex]
    canvas.create_oval(mouse_x - 15, mouse_y - 15, mouse_x + 15, mouse_y + 15, fill=temp_color_vertex,
                       outline="black", width=2)
    canvas.create_text(mouse_x, mouse_y, text=name_vanish_vertex, font=FONT)
    print("data_vertex_id_x_y:\t", data_vertex_id_x_y)

def update_non_oriented_lines():
    if ID_none_oriented_line != 0:
        for idi in all_vanish_nonorline_id:
            line_data = data_id_unorient_line_x_y[idi]
            if name_vanish_vertex == line_data[0][2]:
                line_data[0] = [mouse_x, mouse_y, name_vanish_vertex, line_data[0][3]]
            elif name_vanish_vertex == line_data[1][2]:
                line_data[1] = [mouse_x, mouse_y, name_vanish_vertex, line_data[1][3]]
            canvas.create_line(*line_intersect_circle(line_data[0][0], line_data[0][1],
                                                      line_data[1][0], line_data[1][1]),
                               fill=line_data[0][3], width=2)
        print(DATA_UNORIENT_LINE_LABEL, data_id_unorient_line_x_y)

def update_oriented_lines():
    if ID_oriented_line != 0:
        for idj in all_vanish_orline_id:
            line_data = data_id_orient_line_x_y[idj]
            if name_vanish_vertex == line_data[0][2]:
                line_data[0] = [mouse_x, mouse_y, name_vanish_vertex, line_data[0][3]]
            elif name_vanish_vertex == line_data[1][2]:
                line_data[1] = [mouse_x, mouse_y, name_vanish_vertex, line_data[1][3]]
            canvas.create_line(*line_intersect_circle(line_data[0][0], line_data[0][1],
                                                      line_data[1][0], line_data[1][1]),
                               fill=line_data[0][3], width=2, arrow=tk.LAST)
        print(DATA_ORIENT_LINE_LABEL, data_id_orient_line_x_y)

def appearance_vertex_on_move(event):
    global ID_none_oriented_line, ID_oriented_line, name_vanish_vertex, ID_vanish_vertex
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    if mouse_y > 0:
        update_vertex_coordinates(mouse_x, mouse_y)
        update_non_oriented_lines()
        update_oriented_lines()


def rename_vertex():  # переименование вершины
    canvas.bind_all(BUTTON_1, rename_vertex_on_click)


def rename_vertex_on_click(event):
    mouse_x = canvas.winfo_pointerx() - canvas.winfo_rootx()
    mouse_y = canvas.winfo_pointery() - canvas.winfo_rooty()
    print(mouse_x, mouse_y)
    for i in data_vertex_id_x_y:
        if mouse_x > data_vertex_id_x_y[i][0] - 15 and mouse_x < data_vertex_id_x_y[i][0] + 15 and \
                mouse_y > data_vertex_id_x_y[i][1] - 15 and mouse_y < data_vertex_id_x_y[i][1] + 15:
            new_application = tk.Tk()
            new_application.title("Задайте имя вершины")
            new_application.resizable(15, 15)
            label = tk.Label(new_application)
            label["text"] = "Введите имя вершины"
            label.grid(row=0, column=0, sticky="ew")
            entry = tk.Entry(new_application)
            entry.grid(row=1, column=0)
            print("имена вершин: ", array_name_vertex)
            print("оставшийся словарь вершин", data_vertex_id_x_y)
            btn_graf = tk.Button(new_application, text="Ввод вершины",
                                 command=lambda new_application=new_application, entry=entry, i=i: rename_vertex_name(entry.get(), new_application, i))
            btn_graf.grid(row=2, column=0, sticky="ew")
            new_application.mainloop()
            break


def show_error(message):
    mb.showerror(" ", message)

def delete_previous_vertex(i):
    canvas.delete(data_vertex_id_x_y[i][2])

def create_updated_vertex(name, i):
    canvas.create_oval(
        data_vertex_id_x_y[i][0] - 15, data_vertex_id_x_y[i][1] - 15,
        data_vertex_id_x_y[i][0] + 15, data_vertex_id_x_y[i][1] + 15,
        fill=color_vertices_line, outline="black", width=2
    )
    canvas.create_text(
        data_vertex_id_x_y[i][0], data_vertex_id_x_y[i][1],
        text=name, font=FONT, fill="black"
    )

def update_vertex_data(name, i):
    array_name_vertex.remove(data_vertex_id_x_y[i][2])
    rename_name = data_vertex_id_x_y[i][2]
    print("rename_name\t", rename_name)
    data_vertex_id_x_y[i][2] = name
    data_vertex_id_x_y[i][3] = color_vertices_line

def update_unoriented_lines(name):
    if ID_none_oriented_line != 0:
        for i in data_id_unorient_line_x_y:
            if data_id_unorient_line_x_y[i][0][2] == rename_name:
                data_id_unorient_line_x_y[i][0][2] = name
            if data_id_unorient_line_x_y[i][1][2] == rename_name:
                data_id_unorient_line_x_y[i][1][2] = name
        print(DATA_ID_ORIENT_LINE_X_Y_LABEL, data_id_unorient_line_x_y)
        print(DATA_ORIENT_LINE_LABEL, data_id_unorient_line_x_y)

def update_oriented_lines(name):
    if ID_oriented_line != 0:
        for i in data_id_orient_line_x_y:
            if data_id_orient_line_x_y[i][0][2] == rename_name:
                data_id_orient_line_x_y[i][0][2] = name
            if data_id_orient_line_x_y[i][1][2] == rename_name:
                data_id_orient_line_x_y[i][1][2] = name

def rename_vertex_name(name, root, i):
    global color_vertices_line, rename_name

    if name == "":
        show_error("Вы не ввели имя вершины")
        return

    if name in array_name_vertex:
        show_error("Такое имя вершины уже существует")
        return

    delete_previous_vertex(i)
    create_updated_vertex(name, i)
    update_vertex_data(name, i)
    update_unoriented_lines(name)
    update_oriented_lines(name)

    print(DATA_ID_ORIENT_LINE_X_Y_LABEL, data_id_orient_line_x_y)

    array_name_vertex.append(name)
    root.destroy()

def algorithm():  # функция для создания окна с алгоритмами
    global max_node, UNORIN_ORIENT, result_adjancy_matrix, result_incidency_matrix
    new_application = tk.Tk()  # Создание окна
    new_application.geometry("432x470+195+0")  # Размер окна и его расположение
    new_application.resizable(0, 0)  # Запрет на изменение размера окна
    new_application.wm_attributes('-topmost', 1)  # Окно всегда сверху
    new_application.title("запишите свой граф и выберите алгоритм")  # Заголовок окна
    entry = tk.Entry(new_application, width=20, font="Arial 16")

    button_dejkstra = tk.Button(new_application, text="Алгоритм\nДейкстры",
                                command=lambda: deikstra(temp_edges, weight, max_node), width=12, height=2)
    input_value = tk.Button(new_application, text="Ввод графа",
                            command=lambda: graph_info(entry.get()), width=12, height=2)
    button_reading_file = tk.Button(new_application, text="Чтение из файла",
                                    command=lambda: reading_file(), width=12, height=2)

    if UNORIN_ORIENT == 0:
        button_diametr_graph = tk.Button(new_application, text="Диаметр графа",
                                         command=lambda: diameterGraph(nodes, temp_edges), width=12, height=2)
        button_radius_graph = tk.Button(new_application, text="Радиус графа",
                                        command=lambda: radiusGraph(nodes, temp_edges), width=12, height=2)
        button_center_graph = tk.Button(new_application, text="Центр графа",
                                        command=lambda: centerGraph(nodes, temp_edges), width=12, height=2)
    else:
        button_diametr_graph = tk.Button(new_application, text="Диаметр графа",
                                         command=lambda: diameterGraph(nodes, temp_edges), width=12, height=2,
                                         state=tk.DISABLED)
        button_radius_graph = tk.Button(new_application, text="Радиус графа",
                                        command=lambda: radiusGraph(nodes, temp_edges), width=12, height=2,
                                        state=tk.DISABLED)
        button_center_graph = tk.Button(new_application, text="Центр графа",
                                        command=lambda: centerGraph(nodes, temp_edges), width=12, height=2,
                                        state=tk.DISABLED)

    entry.grid(row=0, column=1)
    input_value.grid(row=1, column=1, sticky="ew")
    button_reading_file.grid(row=2, column=1, sticky="ew")
    button_adjancy_matrix = tk.Button(new_application, text="Матрица\nсмежности",
                                      command=lambda: adjancy_matrix(temp_edges, max_node), width=12, height=2)
    button_incidency_matrix = tk.Button(new_application, text="Матрица\nинцидентности",
                                        command=lambda: incidency_matrix(temp_edges, max_node, UNORIN_ORIENT),
                                        width=12, height=2)
    button_euleran_circle = tk.Button(new_application, text="Эйлеров\nцикл",
                                      command=lambda: euleran_circle(result_adjancy_matrix), width=12, height=2)
    button_quit = tk.Button(new_application, text="Выход", command=new_application.destroy, width=12, height=2)

    print("result_ajancy_matrix\t", result_adjancy_matrix)
    print("result_incidency_matrix\t", result_incidency_matrix)
    print("max_node=\t", max_node)
    print("nodes=\t", nodes)
    print("edges=\t", weight)
    button_adjancy_matrix.grid(row=1, column=0, sticky="ew")
    button_incidency_matrix.grid(row=0, column=0, sticky="ew")
    button_euleran_circle.grid(row=2, column=0, sticky="ew")
    button_diametr_graph.grid(row=0, column=2, sticky="ew")
    button_radius_graph.grid(row=1, column=2, sticky="ew")
    button_center_graph.grid(row=2, column=2, sticky="ew")
    button_dejkstra.grid(row=3, column=0, sticky="ew")
    button_quit.grid(row=8, column=0, sticky="ew")
    new_application.mainloop()


def graph_info(information):  # функция для ввода графа
    file = open("info.txt", "w")
    file.write(information)
    file.close()


def reading_file():  # считывание записанного в файл графа
    global max_node, UNORIN_ORIENT, temp_edges, nodes, weight
    file = open("info.txt ", "r")
    temp = file.readline()
    information = temp.split(";")
    name_type_graph = information[0]
    temp_nodes = information[1]
    edges_graph = information[2]
    temp_weight = information[3]

    UNORIN_ORIENT = 0
    if "UNORIENT" in name_type_graph:
        UNORIN_ORIENT = 0
    elif "ORIENT" in name_type_graph:
        UNORIN_ORIENT = 1

    nodes = temp_nodes.split(",")
    for i, val in enumerate(nodes):
        nodes[i] = int(val)

    temp = edges_graph.split(",")
    temp_edges = []
    for i, val in enumerate(temp):
        temp_edges.append(temp[i].split("->"))
    for i, vali in enumerate(temp_edges):
        for j, valj in enumerate(vali):
            temp_edges[i][j] = int(valj)
    print("temp edges\t", temp_edges)
    n = len(temp_edges)
    max_node = 0
    for i, val in enumerate(temp_edges):
        for j, valj in enumerate(val):
            if max_node < valj:
                max_node = valj

    weight = temp_weight.split(",")
    for i, val in enumerate(weight):
        weight[i] = int(val)
    print("max_node=\t", max_node)
    print("n=\t", n)
    print("nodes=\t", nodes)
    print("weight=\t", weight)
    file.close()


def adjancy_matrix(nodes, max_node):  # функция для матрицы смежности
    global result_adjancy_matrix
    print("Матрица смежности")
    adj = [[0 for _ in range(max_node)] for _ in range(max_node)]
    for val in nodes:
        adj[val[0] - 1][val[1] - 1] = 1
        if UNORIN_ORIENT == 0:
            adj[val[1] - 1][val[0] - 1] = 1
    for row in adj:
        print(row)
    print()
    result_adjancy_matrix = adj


def incidency_matrix(nodes, max_nodes, unorin_orient):
    global result_incidency_matrix
    print("Матрица инцидентности")
    if unorin_orient == 0:
        inc = [[0 for _ in range(len(nodes))] for _ in range(max_nodes)]
        for i, val in enumerate(nodes):
            inc[val[0] - 1][i] = 1
            inc[val[1] - 1][i] = 1
    else:
        inc = [[0 for _ in range(len(nodes))] for _ in range(max_nodes)]
        for i, val in enumerate(nodes):
            inc[val[0] - 1][i] = 1
            inc[val[1] - 1][i] = -1
    for row in inc:
        print(row)
    print()
    result_incidency_matrix = inc


def adjancy_for_deikstra(nodes, weight, max_node):
    n = len(nodes)
    m = 2
    array_edge = [[0 for _ in range(m)] for _ in range(n)]
    array_edjancy = [[0 for _ in range(max_node)] for _ in range(max_node)]
    for i in range(n):
        for j in range(m):
            array_edge[i][j] = nodes[i][j]
    for i in range(max_node):
        for j in range(max_node):
            array_edjancy[i][j] = 0
    for i in range(n):
        x = array_edge[i][0]
        y = array_edge[i][1]
        array_edjancy[x - 1][y - 1] = weight[i]
        array_edjancy[y - 1][x - 1] = weight[i]
    return array_edjancy


def deikstra(nodes, weight, max_node):
    adjacency_matrix = adjancy_for_deikstra(nodes, weight, max_node)
    for start in range(max_node):
        distance = calculate_distances(adjacency_matrix, start, max_node)
        print_distances(distance, max_node)


def calculate_distances(adjacency_matrix, start, max_node):
    distance = [inf for _ in range(max_node)]
    visited = [0 for _ in range(max_node)]
    distance[start] = 0
    for _ in range(max_node):
        v = find_min_distance_vertex(distance, visited, max_node)
        if distance[v] == inf:
            break
        visited[v] = 1
        update_distances(adjacency_matrix, distance, v, max_node)
    return distance


def find_min_distance_vertex(distance, visited, max_node):
    v = -1
    for j in range(max_node):
        if visited[j] == 0 and (v == -1 or distance[j] < distance[v]):
            v = j
    return v


def update_distances(adjacency_matrix, distance, v, max_node):
    for j in range(max_node):
        if adjacency_matrix[v][j] != 0:
            to = j
            size = adjacency_matrix[v][j]
            if distance[v] + size < distance[to]:
                distance[to] = distance[v] + size


def print_distances(distance, max_node):
    print("vertex\tdistance")
    for i in range(max_node):
        print(i + 1, "\t", distance[i])


def connected_components(adjacency_matrix):
    visited = [False] * len(adjacency_matrix)
    count = 0
    for i in range(len(adjacency_matrix)):
        if not visited[i]:
            dfs(adjacency_matrix, i, visited)
            count += 1
    return count


def dfs(adjacency_matrix, i, visited):
    visited[i] = True
    for j in range(len(adjacency_matrix)):
        if adjacency_matrix[i][j] == 1 and not visited[j]:
            dfs(adjacency_matrix, j, visited)


ERROR_MESSAGE = "граф не является Эйлеровым"

def euleran_circle(adjacency_matrix):
    max_node = len(adjacency_matrix)
    check_connected_components(adjacency_matrix)
    check_degrees(adjacency_matrix)

    path = find_euleran_circle(adjacency_matrix, max_node)
    print("Euleran circle:\t", path)


def check_connected_components(adjacency_matrix):
    if connected_components(adjacency_matrix) != 1:
        print(ERROR_MESSAGE)
        mb.showerror(" ", ERROR_MESSAGE)


def check_degrees(adjacency_matrix):
    degrees = calculate_degrees(adjacency_matrix)
    for degree in degrees:
        if degree % 2 != 0:
            print(ERROR_MESSAGE)
            mb.showerror(" ", ERROR_MESSAGE)


def calculate_degrees(adjacency_matrix):
    max_node = len(adjacency_matrix)
    degrees = [0] * max_node
    for i in range(max_node):
        for j in range(max_node):
            if adjacency_matrix[i][j]:
                degrees[i] += 1
    return degrees


def find_euleran_circle(adjacency_matrix, max_node):
    path = []
    stack = []
    position = 0
    stack.append(position)
    while stack:
        position = stack[-1]
        temp = False
        for i in range(max_node):
            if adjacency_matrix[position][i]:
                adjacency_matrix[position][i] = 0
                adjacency_matrix[i][position] = 0
                stack.append(i)
                temp = True
                break
        if not temp:
            path.append(position + 1)
            stack.pop()
    return path


def radius_graph(nodes, edges):
    G = nx.Graph()
    G.add_nodes_from(nodes)
    G.add_edges_from(edges)
    print("радиус графа\t", nx.radius(G))


def diameter_graph(nodes, edges):
    G = nx.Graph()
    G.add_nodes_from(nodes)
    G.add_edges_from(edges)
    print("диаметр графа\t", nx.diameter(G))


def center_graph(nodes, edges):
    G = nx.Graph()
    G.add_nodes_from(nodes)
    G.add_edges_from(edges)
    print("центр графа\t", nx.center(G))


def main():
    button_vertex = tk.Button(application, text="add vertex", command=draw_vertixes, width=15, height=2)
    button_stop_add_vertex = tk.Button(application, text="stop add and\n delete vertex", command=stop_add_vertex,
                                       width=15, height=2)
    button_green = tk.Button(application, text="green", command=lambda: color_vertex("green"), width=15, height=2,
                             bg="green")
    button_blue = tk.Button(application, text="blue", command=lambda: color_vertex("blue"), width=15, height=2,
                            bg="blue")
    button_yellow = tk.Button(application, text="yellow", command=lambda: color_vertex("yellow"), width=15, height=2,
                              bg="yellow")

    button_name_graph = tk.Button(application, text="name graph", command=graph_name, width=15, height=2)
    button_name_vertex = tk.Button(application, text="name vertex", command=NAME_VERTEX, width=15, height=2)
    button_delete_vertex = tk.Button(application, text="delete vertex", command=delete_vertex, width=15, height=2)
    button_rename_vertex = tk.Button(application, text="rename vertex", command=rename_vertex, width=15, height=2)
    button_draw_line_between_vertex = tk.Button(application, text="draw unoriented_line\n between vertex", \
                                                command=draw_unoriented_line_between_vertex, width=15, height=2)
    button_draw_oriented_line_between_vertex = tk.Button(application, text="draw oriented\n  between vertex", \
                                                         command=draw_oriented_line_between_vertex, width=15, height=2)
    button_move_vertex_with_line = tk.Button(application, text="move vertex \nwith line", command=move_vertex_and_line,
                                             width=15, height=2)
    button_delete_unoriented_line = tk.Button(application, text="delete unoriented\n line",
                                              command=delete_unoriented_line, width=15, height=2)
    button_delete_oriented_line = tk.Button(application, text="delete oriented\n line", command=delete_oriented_line,
                                            width=15, height=2)
    button_algorithm = tk.Button(application, text="algorithm", command=algorithm, width=15, height=2)
    button_quit2 = tk.Button(application, text="quit", command=application.destroy, width=15, height=2)
    button_weight_line = tk.Button(application, text="input weight\n line", command=input_weight, width=15, height=2)
    button_draw_weight_line = tk.Button(application, text="draw weight\n line", command=draw_weight_line, width=15,
                                        height=2)
    button_delete_weight_line = tk.Button(application, text="delete weight\n line", command=delete_weight_line,
                                          width=15, height=2)
    button_change_color_vertex = tk.Button(application, text="change color\n vertex", command=change_color_vertex,
                                           width=15, height=2)

    button_name_vertex.grid(row=0, column=0)
    button_stop_add_vertex.grid(row=1, column=0)
    button_green.grid(row=0, column=1)
    button_blue.grid(row=0, column=2)
    button_yellow.grid(row=0, column=3)
    button_vertex.grid(row=0, column=4)
    button_draw_line_between_vertex.grid(row=1, column=4)
    button_delete_unoriented_line.grid(row=1, column=5)
    button_delete_oriented_line.grid(row=2, column=5)
    button_draw_oriented_line_between_vertex.grid(row=2, column=4)
    button_delete_vertex.grid(row=0, column=5)
    button_rename_vertex.grid(row=0, column=6)
    button_move_vertex_with_line.grid(row=1, column=6)
    button_name_graph.grid(row=2, column=0)
    button_algorithm.grid(row=2, column=1)
    button_weight_line.grid(row=1, column=1)
    button_draw_weight_line.grid(row=1, column=2)
    button_delete_weight_line.grid(row=1, column=3)
    button_quit2.grid(row=2, column=6)
    button_change_color_vertex.grid(row=2, column=2)
    application.mainloop()


if __name__ == "__main__":
    main()
