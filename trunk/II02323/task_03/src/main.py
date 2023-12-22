# -*- coding: utf-8 -*-
# tkinter imports
from tkinter import messagebox, Canvas, Label, Button, Entry, Tk
from tkinter.colorchooser import askcolor

# numpy imports
from numpy.random import randint
from numpy import sqrt

# networkx imports
import networkx as nx

# import AppInterface
from AppInterface import create_buttons
from AppInterface import bind_canvas
def line_intersect_circle(x1, y1, x2, y2):
    '''Returns the coordinates of the intersection points of a line and two circles'''
    main_gipotenusa = sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
    main_dx = x2 - x1
    main_dy = y2 - y1
    dx = (main_gipotenusa - 20) * main_dx / main_gipotenusa
    dy = (main_gipotenusa - 20) * main_dy / main_gipotenusa
    return x2 - dx, y2 - dy, x1 + dx, y1 + dy
class Node:
    def __init__(self, name):
        self.name = name
        self.x = randint(0, 636)
        self.y = randint(0, 596)

        self.circle = create_circle(self.x, self.y, 20, fill=color_vertex)
        self.text = canvas.create_text(self.x, self.y, anchor='center', text=name, font="Arial 10", fill="black")
        graph.add_node(name)
    def move(self, x, y):
        self.x = x
        self.y = y
        canvas.coords(self.circle, x-20, y-20, x+20, y+20)
        canvas.coords(self.text, x, y)
        for edge in edges:
            if edge.node1 == self or edge.node2 == self:
                edge.move()
    def change(self):
        win = Tk()
        win.title("Изменение имени")
        win.geometry("190x120+1050+250")
        win.wm_attributes('-topmost', 3)
        win.resizable(False, False)
        label = Label(win, text="Введите новое имя")
        label.place(x=10, y=10)
        entry = Entry(win, width=10)
        entry.place(x=10, y=40)
        button = Button(win, text="Изменить", command=lambda: self.change_name(entry.get()))
        button.place(x=10, y=70)
        win.mainloop()
    def change_name(self, name):
        graph._adj[name] = graph._adj.pop(self.name)
        self.name = name
        canvas.itemconfig(self.text, text=name)
    def color_change_function(self, color):
        canvas.itemconfig(self.circle, fill=color)
    def delete(self):
        canvas.delete(self.circle)
        canvas.delete(self.text)
        for edge in edges:
            if edge.node1 == self or edge.node2 == self:
                edge.delete()
                edges.remove(edge)
        graph.renode_movement_function(self.name)
def create_circle(x, y, r, **kwargs):
    return canvas.create_oval(x-r, y-r, x+r, y+r, **kwargs)
class Edge:
    def __init__(self, node1, node2, weight: int):
        self.weight = weight
        self.node1 = node1
        self.node2 = node2
        self.line = canvas.create_line(line_intersect_circle(self.node1.x, self.node1.y, self.node2.x, self.node2.y),width=2, fill="black")
        self.text = canvas.create_text((node1.x + node2.x) / 2, (node1.y + node2.y) / 2 - 5, anchor='center',text=self.weight, font="Arial 20", fill="white")
        graph.add_edge(node1.name, node2.name, weight=weight)
    def change(self):
        win = Tk()
        win.title("Изменение веса")
        win.geometry("190x120+1050+250")
        win.wm_attributes('-topmost', 3)
        win.resizable(False, False)
        label = Label(win, text="Введите новый вес")
        label.place(x=10, y=10)
        entry = Entry(win, width=10)
        entry.place(x=10, y=40)
        print(5)
        button = Button(win, text="Изменить", command=lambda: self.change_weight(entry.get()))
        button.place(x=10, y=70)
        win.mainloop()
    def change_weight(self, weight):
        self.weight = int(weight)
        canvas.itemconfig(self.text, text=weight)
        graph.remove_edge(self.node1.name, self.node2.name)
        graph.add_edge(self.node1.name, self.node2.name, weight=self.weight)
    def color_change_function(self, color):
        canvas.itemconfig(self.line, fill=color)
    def move(self):
        canvas.coords(self.line, line_intersect_circle(self.node1.x, self.node1.y, self.node2.x, self.node2.y))
        canvas.coords(self.text, (self.node1.x + self.node2.x) / 2, (self.node1.y + self.node2.y) / 2 - 5)
    def delete(self):
        canvas.delete(self.line)
        canvas.delete(self.text)
        graph.remove_edge(self.node1.name, self.node2.name)
#рисуем вершину
def create_vertex(entry_name, window):
    name = entry_name.get()
    vertexs.append(Node(name))
    window.destroy()
#выбор цвета
def chose_color(color_lable):
    global color_vertex
    rgb, hx= askcolor()
    print(rgb)
    color_vertex = hx
    color_lable.config(bg=color_vertex)
#меню добавления вершин
def menu_add_vertex():
    global color_vertex
    add_window = Tk()
    add_window.title("Добавление вершины")
    add_window.geometry("165x140+1050+250") 
    add_window.wm_attributes('-topmost', 3)
    add_window.resizable(False, False)
    label = Label(add_window, text="Имя вершины:")
    entry_style = {
    'font': ('Arial', 12),
    'width': 15,
    'bg': 'white',
    'fg': 'black',
    'borderwidth': 1,
    'relief': 'solid',
}
    entry_name = Entry(add_window, **entry_style)
    entry_name.grid(padx=10, pady=10)
    add_button = Button(add_window, text = "Задать цвет",command = lambda: chose_color(color_lable))
    color_button = Button(add_window, text = "Добавить вершину",command = lambda: create_vertex(entry_name,add_window))
    color_lable = Label(add_window,width=2,bg = "white")
    label.grid(row=0, column=0, sticky="ew")
    entry_name.grid(row=1, column=0, sticky="ewns", padx=10)
    add_button.grid(row=2, column=0, sticky="ewns", padx=10)
    color_button.grid(row=3, column=0, sticky="ewns", padx=10, pady=10)
    color_lable.grid(row = 1,column=1, padx=10, pady=10)
    add_window.mainloop()
# создание ребра
def create_edge(entry_weight, entry_node1, entry_node2, window):
    try:
        weight = int(entry_weight.get())
    except ValueError:
        messagebox.showerror("Ошибка", "Вес ребра должен быть числом")
    else:
        node1 = entry_node1.get()
        node2 = entry_node2.get()
        for vertex in vertexs:
            if vertex.name == node1:
                node1 = vertex
            if vertex.name == node2:
                node2 = vertex
        edges.append(Edge(node1, node2, weight))
        window.destroy()
#меню добавления ребер
def menu_add_edge():
    add_window = Tk()
    add_window.title("Добавление ребра")
    add_window.geometry("200x230+1050+250")
    add_window.wm_attributes('-topmost', 3)
    add_window.resizable(False, False)
    entry_style = {
        'font': ('Arial', 9),
        'width': 25,
        'bg': 'white',
        'fg': 'black',
        'borderwidth': 1,
        'relief': 'solid',
    }

    button_style = {
        'font': ('Arial', 9),
        'width': 15,
        'bg': 'lightblue',
        'fg': 'black',
    }

    label_style = {
        'font': ('Arial', 9),
    }

    # Элементы интерфейса для ребра
    label = Label(add_window, text="Укажите вес ребра", **label_style)
    entry_weight = Entry(add_window, **entry_style)
    label2 = Label(add_window, text="Первая вершина", **label_style)
    entry_node1 = Entry(add_window, **entry_style)
    label3 = Label(add_window, text="Вторая вершина", **label_style)
    entry_node2 = Entry(add_window, **entry_style)
    add_button = Button(add_window, text="Задать цвет", command=lambda: chose_color(color_label), **button_style)
    color_button = Button(add_window, text="Добавить ребро", command=lambda: create_edge(entry_weight, entry_node1, entry_node2, add_window), **button_style)
    color_label = Label(add_window, width=2, bg="white", **label_style)

    # Размещение элементов в окне
    label.grid(row=0, column=0, sticky="ew")
    entry_weight.grid(row=1, column=0, sticky="ewns", padx=10, pady=5)
    label2.grid(row=2, column=0, sticky="ew")
    entry_node1.grid(row=3, column=0, sticky="ewns", padx=10, pady=5)
    label3.grid(row=4, column=0, sticky="ew")
    entry_node2.grid(row=5, column=0, sticky="ewns", padx=10, pady=5)
    add_button.grid(row=6, column=0, sticky="ewns", padx=10, pady=5)
    color_button.grid(row=7, column=0, sticky="ewns", padx=10, pady=5)
    color_label.grid(row=1, column=1, padx=10, pady=5)

    add_window.mainloop()
def node_movement_function(event):
    for node in vertexs:
        if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
            node.move(event.x, event.y)
            break
def change_name_weight_function(event):
    x, y = event.x, event.y
    for edge in edges:
        print(2)
        legs_sum = sqrt((x - edge.node1.x)**2 + (y - edge.node1.y)**2) + sqrt((x - edge.node2.x)**2 + (y - edge.node2.y)**2)
        gipotenusa = sqrt((edge.node2.x - edge.node1.x)**2 + (edge.node2.y - edge.node1.y)**2)+10
        if legs_sum <= gipotenusa:
            edge.change()
            break
    else:
        for node in vertexs:
            if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
                node.change()
                break
def color_change_function(event):
    x, y = event.x, event.y
    for node in vertexs:
        if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
            node.color_change_function(askcolor()[1])
            break
    else:
        for edge in edges:
            legs_sum = sqrt((x - edge.node1.x)**2 + (y - edge.node1.y)**2) + sqrt((x - edge.node2.x)**2 + (y - edge.node2.y)**2)
            gipotenusa = sqrt((edge.node2.x - edge.node1.x)**2 + (edge.node2.y - edge.node1.y)**2)+10
            if legs_sum <= gipotenusa:
                edge.color_change_function(askcolor()[1])
                break
def delete(event):
    x, y = event.x, event.y
    for node in vertexs:
        if node.x - 25 < x < node.x + 25 and node.y - 25 < y < node.y + 25:
            node.delete()
            vertexs.remove(node)
            print(1)
            break
    else:
        for edge in edges:
            print(2)
            legs_sum = sqrt((x - edge.node1.x)**2 + (y - edge.node1.y)**2) + sqrt((x - edge.node2.x)**2 + (y - edge.node2.y)**2)
            gipotenusa = sqrt((edge.node2.x - edge.node1.x)**2 + (edge.node2.y - edge.node1.y)**2)+10
            if legs_sum <= gipotenusa:
                edge.delete()
                edges.remove(edge)
                break

def shortest_path():
    enter = []
    win = Tk()
    win.title("Выбор вершин")
    win.geometry("180x150+1050+250")
    win.resizable(False, False)
    # Styles for elements
    entry_style = {
        'font': ('Arial', 9),
        'width': 15,
        'bg': 'white',
        'fg': 'black',
        'borderwidth': 1,
        'relief': 'solid',
    }

    label_style = {
        'font': ('Arial', 9),
    }

    button_style = {
        'font': ('Arial', 9),
        'width': 15,
        'bg': 'lightblue',
        'fg': 'black',
    }

    # Elements in the UI
    label = Label(win, text="Выберите первую вершину", **label_style)
    entry1 = Entry(win, **entry_style)
    label2 = Label(win, text="Выберите вторую вершину", **label_style)
    entry2 = Entry(win, **entry_style)
    button = Button(win, text="Выбрать", command=lambda: func(enter, win), **button_style)

    # Grid placement
    label.grid(row=0, column=0, sticky="ew", padx=10)
    entry1.grid(row=1, column=0, sticky="ewns", padx=10, pady=5)
    label2.grid(row=2, column=0, sticky="ew" , padx=10)
    entry2.grid(row=3, column=0, sticky="ewns", padx=10, pady=5)
    button.grid(row=4, column=0, sticky="ewns", padx=10, pady=5)

    def func(arr, win):
        arr += [entry1.get(), entry2.get()]
        win.destroy()
        display_props("Кратчайший путь", nx.algorithms.shortest_path(graph, arr[0], arr[1]))
    win.mainloop()
    return enter[0], enter[1]
def display_props(title, props):
    string = ''
    for prop in props:
        string += str(prop) + ' '
    win = Tk()
    win.title(title)
    win.geometry("500x500")
    label = Label(win, text=string)
    label.pack()
    win.mainloop()
def eulerian_cycle_search_function():
    display_props("Эйлеров цикл", nx.algorithms.eulerian_path(graph))


# Список имен вершин
vertexs = []
# Список ребер
edges = []
color_vertex = "#fff"
graph = nx.Graph()  # Граф
root = Tk()
root.title("Приложение для работы с графами")
root.geometry("800x600+500+150")
canvas = Canvas(root, width=690, height=600, bg="light blue")
canvas.place(x=135, y=0)
#главное меню
create_buttons(root, canvas, menu_add_vertex, menu_add_edge, eulerian_cycle_search_function, shortest_path)
bind_canvas(root, canvas, node_movement_function, change_name_weight_function, color_change_function, delete)
root.mainloop()