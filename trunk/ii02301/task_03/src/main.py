import tkinter as tk
from tkinter import messagebox, simpledialog
import tkinter.colorchooser as colorchooser

click_number = 0
id_of_the_edge = 0
oval_id = None
ovals = []
edges = []
i = 0
id_text = 0
tag = 0
x1, y1, x2, y2 = 0, 0, 0, 0
button_1="<Button-1>"
text_on_vertex='text on vertex'
id_text='id text'
num_of_vertex='num of vertex'

cord_edge2 = {'id_vertex1': [], 'id_vertex2': []}
cord_edge = {'id_edge_text': [], 'id_vertex1': [], 'id_vertex2': []}
cord = {'id': [], id_text: [], text_on_vertex: [], 'textID': [], num_of_vertex: [], 'coordinatesX': [],
        'coordinatesY': []}
visited = []
matrix = []


def draw_vertex():
    global canvas
    main_label.configure(text="Выбрано создание вершин, нажмите на пустое для создания вершины")
    canvas.unbind(button_1)
    canvas.bind(button_1, draw_canvas1)


def draw_canvas1(event):
    global oval_id, i, tag, id_text
    id_text += 1
    i += 1
    itext = str(i)
    x, y = event.x, event.y
    tag = 'oval' + str(id_text)
    texttag = 'text' + str(id_text)
    cord["num of vertex"].append(id_text)
    cord[id_text].append(tag)
    cord["coordinatesX"].append(x)
    cord["coordinatesY"].append(y)
    oval_id = canvas.create_oval(x - 15, y - 15, x + 15, y + 15, fill='red', tags=tag)
    ovals.append(oval_id)
    cord['id'].append(oval_id)
    canvas.create_text(x, y, text=itext, font="Arial 13", tags=texttag)
    cord['textID'].append(texttag)
    cord[text_on_vertex].append(itext)


def draw_edge():
    global canvas
    main_label.configure(text="Выбрано создание ребер, нажмите на вершину для создания ребра")
    canvas.unbind(button_1)
    canvas.bind(button_1, draw_canvas2)


def draw_canvas2(event):
    global click_number, x1, y1, x2, y2, id_of_the_edge
    if click_number == 0:
        for x in ovals:
            if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                x1 = cord['coordinatesX'][cord['id'].index(x)]
                y1 = cord['coordinatesY'][cord['id'].index(x)]
                cord_edge['id_vertex1'].append(x)
                cord_edge2['id_vertex1'].append(x)
                click_number = 1
                main_label.configure(text="Выбор второй вершины для рисования ребра графа")
    elif click_number == 1:
        for x in ovals:
            if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                x2 = cord['coordinatesX'][cord['id'].index(x)]
                y2 = cord['coordinatesY'][cord['id'].index(x)]
                cord_edge['id_vertex2'].append(x)
                cord_edge2['id_vertex2'].append(x)
        tag_edge = 'edge' + str(id_of_the_edge)
        line = canvas.create_line(x1, y1, x2, y2, width=4, tags=tag_edge)
        edges.append(id_of_the_edge)
        cord_edge['id_edge_text'].append(tag_edge)
        id_of_the_edge += 1
        canvas.tag_lower(line)
        click_number = 0
        main_label.configure(text="Выберите нужную вершину для рисования ребра графа")


def delete_vertex():
    global canvas
    main_label.configure(text="Выбрано удаление вершины или ребра, нажмите на вершину или ребро для удаления")
    canvas.unbind(button_1)
    canvas.bind(button_1, delete_canvas)


def delete_canvas(event):
    for x in ovals:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            canvas.delete(x)
            canvas.delete(cord['textID'][cord['id'].index(x)])
            ovals.remove(x)
            cord[num_of_vertex].remove(cord[num_of_vertex][cord['id'].index(x)])
            canvas.delete(cord[id_text][cord['id'].index(x)])
            cord['textID'].remove(cord['textID'][cord['id'].index(x)])
            cord[id_text].remove(cord[id_text][cord['id'].index(x)])
            cord["coordinatesX"].remove(cord['coordinatesX'][cord['id'].index(x)])
            cord["coordinatesY"].remove(cord['coordinatesY'][cord['id'].index(x)])
            cord[text_on_vertex].remove(cord[text_on_vertex][cord['id'].index(x)])
            cord['id'].remove(x)
            break
    for y in edges:
        tag_edge = 'edge' + str(y)
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == canvas.find_withtag(tag_edge)[0]:
            canvas.delete(tag_edge)
            cord_edge['id_vertex1'].remove(cord_edge['id_vertex1'][edges.index(y)])
            cord_edge['id_vertex2'].remove(cord_edge['id_vertex2'][edges.index(y)])
            edges.remove(y)
            break


def rename_vertex():
    global canvas
    main_label.configure(text="Выбрано переименование вершины, нажмите на вершину для переименования")
    canvas.unbind(button_1)
    canvas.bind(button_1, rename)


def rename(event):
    for x in ovals:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            new_name = simpledialog.askstring("Rename", "Enter new name")
            canvas.delete(cord['textID'][cord['id'].index(x)])
            canvas.create_text(cord['coordinatesX'][cord['id'].index(x)], cord['coordinatesY'][cord['id'].index(x)],
                               text=new_name, font="Arial 13", tags=(cord['textID'][cord['id'].index(x)]))
            cord[text_on_vertex][cord['id'].index(x)] = new_name
            break


def change_color():
    global canvas
    main_label.configure(text="Вы выбрали изменение цвета вершины, нажмите на вершину для изменения её цвета")
    canvas.unbind(button_1)
    canvas.bind(button_1, color)


def color(event):
    for x in ovals:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            new_color = colorchooser.askcolor()
            color_hex = new_color[1]
            canvas.itemconfig(x, fill=color_hex)
            break


def change_text_color():
    global canvas
    main_label.configure(text="Вы выбрали изменение цвета текста, нажмите на вершину для изменения цвета её текста")
    canvas.unbind(button_1)
    canvas.bind(button_1, text_color)


def text_color(event):
    for x in ovals:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            new_color = colorchooser.askcolor()
            color_hex = new_color[1]
            canvas.itemconfig(cord['textID'][cord['id'].index(x)], fill=color_hex)
            break


def change_edge_color():
    global canvas
    main_label.configure(text="Вы выбрали изменение цвета ребер, нажмите на ребро для изменения его цвета")
    canvas.unbind(button_1)
    canvas.bind(button_1, edge_color)


def edge_color(event):
    for x in edges:
        tag_edge = 'edge' + str(x)
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == canvas.find_withtag(tag_edge)[0]:
            new_color = colorchooser.askcolor()
            color_hex = new_color[1]
            canvas.itemconfig(tag_edge, fill=color_hex)
            break


def adjacency_matrix():
    global canvas
    k = 0
    adj_matrix = tk.Tk()
    adj_matrix.title("Adjacency matrix")
    adj_matrix.geometry("150x150")
    matrix = [[0 for _ in range(len(ovals))] for _ in range(len(ovals))]
    for index, value in enumerate(cord_edge['id_vertex1']):
        matrix[cord['id'].index(cord_edge['id_vertex1'][index])][cord['id'].index(cord_edge['id_vertex2'][index])] = 1
        matrix[cord['id'].index(cord_edge['id_vertex2'][index])][cord['id'].index(cord_edge['id_vertex1'][index])] = 1

    for row in matrix:
        adj_matrix_label = tk.Label(adj_matrix, text=str(row))
        adj_matrix_label.grid(row=k, column=0)
        k += 1


def incidence_matrix():
    global canvas
    k = 0
    inc_matrix = tk.Tk()
    inc_matrix.title("Incidence matrix")
    inc_matrix.geometry("150x150")
    matrix = [[0 for _ in range(len(edges))] for _ in range(len(ovals))]
    for index, value in enumerate(cord_edge['id_vertex1']):
        matrix[cord['id'].index(cord_edge['id_vertex1'][index])][edges.index(cord_edge['id_edge_text'].index(
            cord_edge['id_edge_text'][index]))] = 1
        matrix[cord['id'].index(cord_edge['id_vertex2'][index])][edges.index(cord_edge['id_edge_text'].index(
            cord_edge['id_edge_text'][index]))] = 1

    for row in matrix:
        inc_matrix_label = tk.Label(inc_matrix, text=str(row))
        inc_matrix_label.grid(row=k, column=0)
        k += 1


def dfs():
    global canvas
    visited = [False] * len(ovals)

    def dfs_rec(vert):
        visited[vert] = True
        for u in range(len(ovals)):
            if matrix[vert][u] == 1 and not visited[u]:
                dfs_rec(u)

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
    global canvas
    visited = [False] * len(ovals)

    def bfs_rec(vert):
        visited[vert] = True
        for u in range(len(ovals)):
            if matrix[vert][u] == 1 and not visited[u]:
                bfs_rec(u)

    count = 0
    for v in range(len(ovals)):
        if not visited[v]:
            bfs_rec(v)
            count += 1
    if count == 1:
        messagebox.showinfo("BFS", "Graph is connected")
    else:
        messagebox.showinfo("BFS", "Graph is not connected")


root = tk.Tk()
root.geometry("800x600")

frame = tk.Frame(root)
frame.pack(fill=tk.BOTH, expand=True)

canvas = tk.Canvas(frame, width=1920, height=1080)
canvas.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)

menubar = tk.Menu(root)
root.config(menu=menubar)


graphmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Граф", menu=graphmenu)
graphmenu.add_command(label="Рисование вершины", command=draw_vertex)
graphmenu.add_command(label="Рисование ребра", command=draw_edge)
graphmenu.add_command(label="Удаление вершины или ребера", command=delete_vertex)

redmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Редактирование графа", menu=redmenu)
redmenu.add_command(label="Переименование вершины", command=rename_vertex)
redmenu.add_command(label="Перекрашивание вершины", command=change_color)
redmenu.add_command(label="Перекрашивание текста", command=change_text_color)
redmenu.add_command(label="Перекрашивание ребра", command=change_edge_color)

algmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Алгоритмы графа", menu=algmenu)
algmenu.add_command(label="Вывод матрицы смежности", command=adjacency_matrix)
algmenu.add_command(label="Вывод матрицы инцидентности", command=incidence_matrix)
algmenu.add_command(label="Поиск в глубину по графу", command=dfs)
algmenu.add_command(label="Поиск в ширину по графу", command=bfs)

root.mainloop()
