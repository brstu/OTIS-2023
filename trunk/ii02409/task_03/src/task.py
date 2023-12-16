from tkinter import messagebox, Canvas, Label, Entry, Button, Tk
from tkinter.colorchooser import askcolor
from numpy.random import Generator, PCG64
from numpy import sqrt
import networkx as nx

CHANGE_NAME_WINDOW_GEOMETRY = "190x120+1050+250"


def line_intersect_circle(x1, y1, x2, y2):
    main_hypotenuse = sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
    main_dx = x2 - x1
    main_dy = y2 - y1
    dx = (main_hypotenuse - 20) * main_dx / main_hypotenuse
    dy = (main_hypotenuse - 20) * main_dy / main_hypotenuse
    return x2 - dx, y2 - dy, x1 + dx, y1 + dy


class Node:
    def __init__(self, name, canvas, graph, seed=None):
        self.name = name
        self.x = Generator(PCG64(seed=seed)).integers(0, 636)
        self.y = Generator(PCG64(seed=seed)).integers(0, 596)
        self.circle = create_circle(canvas, self.x, self.y, 20, fill=color_vertex)
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
    create_change_window("Изменение веса", CHANGE_NAME_WINDOW_GEOMETRY, lambda weight: self.change_weight(weight))

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


def create_circle(canvas, x, y, r, **kwargs):
    return canvas.create_oval(x - r, y - r, x + r, y + r, **kwargs)


class Edge:
    def __init__(self, node1, node2, weight: int, canvas, graph):
        self.weight = weight
        self.node1 = node1
        self.node2 = node2
        self.line = canvas.create_line(line_intersect_circle(self.node1.x, self.node1.y, self.node2.x, self.node2.y),
                                       width=2, fill="black")
        self.text = canvas.create_text((node1.x + node2.x) / 2, (node1.y + node2.y) / 2 - 5, anchor='center',
                                       text=self.weight, font="Arial 20", fill="white")
        graph.add_edge(node1.name, node2.name, weight=weight)

    def change(self):
        win = create_change_window("Изменение веса", CHANGE_NAME_WINDOW_GEOMETRY, lambda weight: self.change_weight(weight))

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


def create_vertex(entry_name, window, canvas, graph):
    name = entry_name.get()
    nodes.append(Node(name, canvas, graph))
    window.destroy()


def choose_color(color_label):
    global color_vertex
    rgb, hex_color = askcolor()
    color_vertex = hex_color
    color_label.config(bg=color_vertex)


def create_change_window(title, geometry, command):
    win = Tk()
    win.title(title)
    win.geometry(geometry)
    win.wm_attributes('-topmost', 3)
    win.resizable(False, False)
    label = Label(win, text=f"Введите новое {title.split()[1].lower()}")
    label.place(x=10, y=10)
    entry = Entry(win, width=10)
    entry.place(x=10, y=40)
    button = Button(win, text="Изменить", command=lambda: command(entry.get()))
    button.place(x=10, y=70)
    win.mainloop()


def create_edge(entry_weight, entry_node1, entry_node2, window, canvas, graph):
    try:
        weight = int(entry_weight.get())
    except ValueError:
        messagebox.showerror("Ошибка", "Вес ребра должен быть числом")
    else:
        node1 = entry_node1.get()
        node2 = entry_node2.get()
        for vertex in nodes:
            if vertex.name == node1:
                node1 = vertex
            if vertex.name == node2:
                node2 = vertex
        edges.append(Edge(node1, node2, weight, canvas, graph))
        window.destroy()


def move_node(event, nodes):
    for node in nodes:
        if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
            node.move(event.x, event.y)
            break


def change_name_or_weight(event, edges, nodes):
    x, y = event.x, event.y
    for edge in edges:
        legs_sum = sqrt((x - edge.node1.x) ** 2 + (y - edge.node1.y) ** 2) + sqrt(
            (x - edge.node2.x) ** 2 + (y - edge.node2.y) ** 2)
        hypotenuse = sqrt((edge.node2.x - edge.node1.x) ** 2 + (edge.node2.y - edge.node1.y) ** 2) + 10
        if legs_sum <= hypotenuse:
            edge.change()
            break
    else:
        for node in nodes:
            if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
                node.change()
                break


def change_color(event, edges, nodes):
    x, y = event.x, event.y
    for node in nodes:
        if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
            node.change_color(askcolor()[1])
            break
    else:
        for edge in edges:
            legs_sum = sqrt((x - edge.node1.x) ** 2 + (y - edge.node1.y) ** 2) + sqrt(
                (x - edge.node2.x) ** 2 + (y - edge.node2.y) ** 2)
            hypotenuse = sqrt((edge.node2.x - edge.node1.x) ** 2 + (edge.node2.y - edge.node1.y) ** 2) + 10
            if legs_sum <= hypotenuse:
                edge.change_color(askcolor()[1])
                break


def delete(event, edges, nodes):
    x, y = event.x, event.y
    for node in nodes:
        if node.x - 25 < x < node.x + 25 and node.y - 25 < y < node.y + 25:
            node.delete()
            nodes.remove(node)
            break
    else:
        for edge in edges:
            legs_sum = sqrt((x - edge.node1.x) ** 2 + (y - edge.node1.y) ** 2) + sqrt(
                (x - edge.node2.x) ** 2 + (y - edge.node2.y) ** 2)
            hypotenuse = sqrt((edge.node2.x - edge.node1.x) ** 2 + (edge.node2.y - edge.node1.y) ** 2) + 10
            if legs_sum <= hypotenuse:
                edge.delete()
                edges.remove(edge)
                break


def shortest_path(graph):
    enter = []

    def func():
        enter.extend([entry1.get(), entry2.get()])
        win.destroy()
        display_props("Кратчайший путь", nx.algorithms.shortest_path(graph, enter[0], enter[1]))

    win = Tk()
    win.title("Выбор вершин")
    win.geometry("200x120+1050+250")
    win.resizable(False, False)
    create_entry_label_button(win, "Выберите первую вершину", 0, func, enter)
    create_entry_label_button(win, "Выберите вторую вершину", 2, func, enter)


def create_entry_label_button(win, label_text, row, func, enter):
    label = Label(win, text=label_text)
    label.grid(row=row, column=0, sticky="ew")
    entry = Entry(win)
    entry.grid(row=row + 1, column=0, sticky="ewns")
    button = Button(win, text="Выбрать", command=func)
    button.grid(row=row + 2, column=0, sticky="ewns")


# Добавьте следующие строки для запуска программы:
nodes = []
edges = []
color_vertex = "white"
graph = nx.Graph()
canvas = Canvas(Tk(), width=700, height=700, bg="white")
canvas.pack()
canvas.bind("<Button-1>", lambda event: move_node(event, nodes))
canvas.bind("<Button-3>", lambda event: change_name_or_weight(event, edges, nodes))
canvas.bind("<Shift-Button-3>", lambda event: change_color(event, edges, nodes))
canvas.bind("<Control-Button-3>", lambda event: delete(event, edges, nodes))
menu_add_vertex(canvas, graph)
menu_add_edge(canvas, graph)
Tk().mainloop()
