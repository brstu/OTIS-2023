from tkinter import messagebox, Canvas, Label, Entry, Button, Tk
from tkinter.colorchooser import askcolor
from numpy.random import randint
from numpy import sqrt
import networkx as nx

def line_intersect_circle(x1, y1, x2, y2):
    main_gipotenusa = sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
    main_dx = x2 - x1
    main_dy = y2 - y1
    dx = (main_gipotenusa - 20) * main_dx / main_gipotenusa
    dy = (main_gipotenusa - 20) * main_dy / main_gipotenusa
    return x2 - dx, y2 - dy, x1 + dx, y1 + dy

class GraphNode:
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
        canvas.coords(self.circle, x - 20, y - 20, x + 20, y + 20)
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

    def change_color(self, color):
        canvas.itemconfig(self.circle, fill=color)

    def delete(self):
        canvas.delete(self.circle)
        canvas.delete(self.text)
        for edge in edges:
            if edge.node1 == self or edge.node2 == self:
                edge.delete()
                edges.remove(edge)
        graph.remove_node(self.name)

def create_circle(x, y, r, **kwargs):
    return canvas.create_oval(x - r, y - r, x + r, y + r, **kwargs)

class GraphEdge:
    def __init__(self, node1, node2, weight: int):
        self.weight = weight
        self.node1 = node1
        self.node2 = node2
        self.line = canvas.create_line(line_intersect_circle(self.node1.x, self.node1.y, self.node2.x, self.node2.y),
                                       width=2, fill="black")
        self.text = canvas.create_text((node1.x + node2.x) / 2, (node1.y + node2.y) / 2 - 5, anchor='center',
                                       text=self.weight, font="Arial 20", fill="white")
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

    def change_color(self, color):
        canvas.itemconfig(self.line, fill=color)

    def move(self):
        canvas.coords(self.line, line_intersect_circle(self.node1.x, self.node1.y, self.node2.x, self.node2.y))
        canvas.coords(self.text, (self.node1.x + self.node2.x) / 2, (self.node1.y + self.node2.y) / 2 - 5)

    def delete(self):
        canvas.delete(self.line)
        canvas.delete(self.text)
        graph.remove_edge(self.node1.name, self.node2.name)

nodes = []  # Список имен вершин
edges = []  # Список ребер
color_vertex = "#fff"
graph = nx.Graph()  # Граф
root = Tk()
root.title("Работа с графами")
root.geometry("800x600+500+150")
canvas = Canvas(root, width=636, height=596, bg="grey")
canvas.place(x=160, y=0)

button1 = Button(root, text="Добавить вершину", anchor="w", command=menu_add_vertex)
button2 = Button(root, text="Добавить ребро", anchor="w", command=menu_add_edge)
button3 = Button(root, text="Эйлеров цикл", anchor="w", command=eulerian_cycle)
button4 = Button(root, text="Кратчайший путь", anchor="w", command=shortest_path)
button1.grid(row=0, column=0, stick="ew")
button2.grid(row=1, column=0, stick="ew")
button3.grid(row=2, column=0, stick="ew")
button4.grid(row=3, column=0, stick="ew")
canvas.bind('<B1-Motion>', move_node)
canvas.bind('<Button-2>', change_name_or_weight)
canvas.bind('<Button-3>', change_color)
root.bind('<B3-Motion>', delete)
root.mainloop()
