import tkinter as tk
from tkinter import messagebox
import tkinter.simpledialog as simpledialog
import tkinter.colorchooser as colorchooser

click_num = 0
id_of_edge = 0
button1 = "<Button-1>"
num_vertex = "number of vertex"
id_text_global = "id text"
text_vertex = "text on vertex"


# функция для рисования вершины
def draw_vertex():
    main_label.configure(text="You have chosen to draw vertices, click on the free space to draw the vertex")
    canvas.unbind(button1)
    canvas.bind(button1, draw_canvas1)


# функция для рисования ребра
def draw_edge():
    main_label.configure(text="You have chosen to draw edges, click on the vertex to draw the edge")
    canvas.unbind(button1)
    canvas.bind(button1, draw_canvas2)


# функция для удаления вершины
def delete_vertex():
    main_label.configure(text="You have chosen to delete a vertex or edge, click on the vertex or edge to delete")
    canvas.unbind(button1)
    canvas.bind(button1, delete_canvas)


# функция для переименования вершины
def rename_vertex():
    main_label.configure(text="You have chosen to rename a vertex, click on the vertex to rename it")
    canvas.unbind(button1)
    canvas.bind(button1, rename)


# функция для проверки массива
def edge_click():
    print("Вершины")
    for key, value in cord.items():
        print(key, value)
    print("Ребра")
    for value in cord_edge2.values():
        print(value, end=", ")


# функция для изменения цвета вершины
def change_color():
    main_label.configure(
        text="You have chosen to change the color of the vertex, click on the vertex to change its color")
    canvas.unbind(button1)
    canvas.bind(button1, colour)


# функция для изменения цвета текста
def change_text_color():
    main_label.configure(
        text="You have chosen to change the color of the text, click on the vertex to change the color of its text")
    canvas.unbind(button1)
    canvas.bind(button1, text_colour)


# функция для изменения цвета ребер
def change_edge_color():
    main_label.configure(text="You have chosen to change the color of the edges, click on the edge to change its color")
    canvas.unbind(button1)
    canvas.bind(button1, edge_colour)


# функция для удаления вершин или ребер
def delete_canvas(event):
    for x in ovals:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            canvas.delete(x)  # удаление вершины
            canvas.delete(cord['textID'][cord['id'].index(x)])  # удаление текста
            ovals.remove(x)  # удаление вершины из массива
            # удаление информации о вершине из словаря
            cord[num_vertex].remove(cord[num_vertex][cord['id'].index(x)])
            canvas.delete(cord[id_text_global][cord['id'].index(x)])
            cord['textID'].remove(cord['textID'][cord['id'].index(x)])
            cord[id_text_global].remove(cord[id_text_global][cord['id'].index(x)])
            cord["coordinatesX"].remove(cord['coordinatesX'][cord['id'].index(x)])
            cord["coordinatesY"].remove(cord['coordinatesY'][cord['id'].index(x)])
            cord[text_vertex].remove(cord[text_vertex][cord['id'].index(x)])
            cord['id'].remove(x)
            break
    # удаление ребра
    for y in edges:
        tag_edge = 'edge' + str(y)
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == canvas.find_withtag(tag_edge)[0]:
            canvas.delete(tag_edge)
            cord_edge['id_edge_text'].remove(tag_edge)
            cord_edge['id_vertex1'].remove(cord_edge['id_vertex1'][edges.index(y)])
            cord_edge['id_vertex2'].remove(cord_edge['id_vertex2'][edges.index(y)])
            edges.remove(y)
            break


# функция для рисования вершины
def draw_canvas1(event):
    global oval_id
    global i, tag, id_text
    id_text += 1
    i += 1
    itext = str(i)  # присвоение текста вершине
    x, y = event.x, event.y  # координаты клика
    tag = 'oval' + str(id_text)
    texttag = 'text' + str(id_text)
    # добавление инфы о вершине в словарь
    cord[num_vertex].append(id_text)
    cord[id_text_global].append(tag)
    cord["coordinatesX"].append(x)
    cord["coordinatesY"].append(y)
    oval_id = canvas.create_oval(x - 20, y - 20, x + 20, y + 20, fill='green', tags=tag)  # создание вершины
    ovals.append(oval_id)
    cord['id'].append(oval_id)
    canvas.create_text(x, y, text=itext, font="Arial 14", tags=texttag)  # создание текста
    cord['textID'].append(texttag)
    cord[text_vertex].append(itext)


# функция для рисования ребра
def draw_canvas2(event):
    global click_num
    global x1, y1, x2, y2, id_of_edge
    if click_num == 0:
        for x in ovals:
            if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:  # проверка клика на вершину
                x1 = cord['coordinatesX'][cord['id'].index(x)]  # и получение ее координат
                y1 = cord['coordinatesY'][cord['id'].index(x)]
                cord_edge['id_vertex1'].append(x)
                cord_edge2['id_vertex1'].append(x)
                click_num = 1
                main_label.configure(text="Select the second vertex to draw the edge")
    elif click_num == 1:
        for x in ovals:
            if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                x2 = cord['coordinatesX'][cord['id'].index(x)]
                y2 = cord['coordinatesY'][cord['id'].index(x)]
                cord_edge['id_vertex2'].append(x)
                cord_edge2['id_vertex2'].append(x)
        tag_edge = 'edge' + str(id_of_edge)
        line = canvas.create_line(x1, y1, x2, y2, width=4, tags=tag_edge)  # создание ребра
        edges.append(id_of_edge)
        cord_edge['id_edge_text'].append(tag_edge)
        id_of_edge += 1
        canvas.tag_lower(line)  # перенос ребра под вершины
        click_num = 0
        main_label.configure(text="Select a vertex to draw an edge on")


# переименование вершины
def rename(event):
    for x in ovals:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            new_name = simpledialog.askstring("Rename", "Enter new name")
            canvas.delete(cord['textID'][cord['id'].index(x)])
            canvas.create_text(cord['coordinatesX'][cord['id'].index(x)], cord['coordinatesY'][cord['id'].index(x)],
                               text=new_name, font="Arial 13", tags=(cord['textID'][cord['id'].index(x)]))
            cord[text_vertex][cord['id'].index(x)] = new_name
            break


# изменение цвета вершины
def colour(event):
    for x in ovals:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            new_colour = colorchooser.askcolor()
            color_hex = new_colour[1]
            canvas.itemconfig(x, fill=color_hex)
            break


# изменение цвета текста
def text_colour(event):
    for x in ovals:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            new_colour = colorchooser.askcolor()
            color_hex = new_colour[1]
            canvas.itemconfig(cord['textID'][cord['id'].index(x)], fill=color_hex)
            break


# изменение цвета ребра
def edge_colour(event):
    for x in edges:
        tag_edge = 'edge' + str(x)
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == canvas.find_withtag(tag_edge)[0]:
            new_colour = colorchooser.askcolor()
            color_hex = new_colour[1]
            canvas.itemconfig(tag_edge, fill=color_hex)
            break


def adjacency_matrix():
    k = 0
    adj_matrix = tk.Tk()
    adj_matrix.title("Adjacency matrix")
    adj_matrix.geometry("250x250")
    global cord, cord_edge, cord_edge2, ovals, edges
    matrix = [[0 for _ in range(len(ovals))] for _ in range(len(ovals))]
    for i2 in range(len(cord_edge['id_vertex1'])):
        matrix[cord['id'].index(cord_edge['id_vertex1'][i2])][cord['id'].index(cord_edge['id_vertex2'][i2])] = 1
        matrix[cord['id'].index(cord_edge['id_vertex2'][i2])][cord['id'].index(cord_edge['id_vertex1'][i2])] = 1
    for i3, val3 in enumerate(matrix):
        adj_matrix_label = tk.Label(adj_matrix, text=str(val3))
        adj_matrix_label.grid(row=k, column=0)
        i3 += 1
        print(i3)


def incidence_matrix():
    k = 0
    inc_matrix = tk.Tk()
    inc_matrix.title("Incidence matrix")
    inc_matrix.geometry("250x250")
    global cord, cord_edge, cord_edge2, ovals, edges
    matrix = [[0 for _ in range(len(edges))] for _ in range(len(ovals))]
    for index in range(len(cord_edge['id_vertex1'])):
        matrix[cord['id'].index(cord_edge['id_vertex1'][index])][
            edges.index(cord_edge['id_edge_text'].index(cord_edge['id_edge_text'][index]))] = 1
        matrix[cord['id'].index(cord_edge['id_vertex2'][index])][
            edges.index(cord_edge['id_edge_text'].index(cord_edge['id_edge_text'][index]))] = 1
    for index2, vall in enumerate(matrix):
        inc_matrix_label = tk.Label(inc_matrix, text=str(vall))
        inc_matrix_label.grid(row=k, column=0)
        k += 1
        index2 += 1
        print(index2)


def dfs():
    global cord, cord_edge, cord_edge2, ovals, edges
    visited = [False] * len(ovals)

    def dfs_rec(vert):
        visited[vert] = True
        for u in range(len(ovals)):
            if matrix[vert][u] == 1 and not visited[u]:
                dfs_rec(u)

    matrix = [[0 for _ in range(len(ovals))] for _ in range(len(ovals))]
    for ii in range(len(cord_edge['id_vertex1'])):
        matrix[cord['id'].index(cord_edge['id_vertex1'][ii])][cord['id'].index(cord_edge['id_vertex2'][ii])] = 1
        matrix[cord['id'].index(cord_edge['id_vertex2'][ii])][cord['id'].index(cord_edge['id_vertex1'][ii])] = 1
    count = 0
    for v in range(len(ovals)):
        if not visited[v]:
            dfs_rec(v)
            count += 1
    if count == 1:
        messagebox.showinfo("DFS", "Graph is connected")
    else:
        messagebox.showinfo("DFS", "Graph is not connected")


def bfs():
    global cord, cord_edge, cord_edge2, ovals, edges
    visited = [False] * len(ovals)

    def bfs_rec(vert):
        visited[vert] = True
        for u, val in enumerate(ovals):
            if matrix[vert][u] == 1 and not visited[u]:
                bfs_rec(u)

    matrix = [[0 for _ in range(len(ovals))] for _ in range(len(ovals))]
    for index, value in enumerate(cord_edge['id_vertex1']):
        matrix[cord['id'].index(cord_edge['id_vertex1'][index])][cord['id'].index(cord_edge['id_vertex2'][index])] = 1
        matrix[cord['id'].index(cord_edge['id_vertex2'][index])][cord['id'].index(cord_edge['id_vertex1'][index])] = 1
    count = 0
    for v in range(len(ovals)):
        if not visited[v]:
            bfs_rec(v)
            count += 1
    if count == 1:
        messagebox.showinfo("BFS", "Graph is connected")
    else:
        messagebox.showinfo("BFS", "Graph is not connected")


# main
root = tk.Tk()
root.title("Graph")
main_label = tk.Label(root, text="Select an action")
main_label.pack(side=tk.BOTTOM)
# всякие переменные
oval_id = None
ovals = []
edges = []
i = 0
id_text = 0
tag = 0
x1, y1, x2, y2 = 0, 0, 0, 0

# словарь для хранения разной инфы о вершинах и ребрах
cord_edge2 = {'id_vertex1': [], 'id_vertex2': []}  # для хранения id вершин, которые соединяет ребро
cord_edge = {'id_edge_text': [], 'id_vertex1': [], 'id_vertex2': []}  # для хранения id вершин, которые соединяет
# ребро(но с id ребра)
cord = {'id': [], id_text_global: [], text_vertex: [], 'textID': [], num_vertex: [], 'coordinatesX': [],
        'coordinatesY': []}  # для хранения инфы о вершинах
tk.Tk.geometry(root, "800x600")
canvas = tk.Canvas(root, width=1920, height=1080)  # основной canvas
canvas.pack()
menubar = tk.Menu(root)  # меню
root.config(menu=menubar)

# раздел меню
graphmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Graph", menu=graphmenu)
# кнопки в разделе меню
graphmenu.add_command(label="Draw a vertex", command=draw_vertex)
graphmenu.add_command(label="Draw an edge", command=draw_edge)
graphmenu.add_command(label="Removing vertices or edges", command=delete_vertex)

redmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Editing", menu=redmenu)
redmenu.add_command(label="Rename a vertex", command=rename_vertex)
redmenu.add_command(label="Repaint the vertex", command=change_color)
redmenu.add_command(label="Recolor text", command=change_text_color)
redmenu.add_command(label="Repaint an edge", command=change_edge_color)

algmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Algorithms", menu=algmenu)
algmenu.add_command(label="Output the adjacency matrix", command=adjacency_matrix)
algmenu.add_command(label="Output the incidence matrix", command=incidence_matrix)
algmenu.add_command(label="Search in depth", command=dfs)
algmenu.add_command(label="Search in width", command=bfs)

root.mainloop()