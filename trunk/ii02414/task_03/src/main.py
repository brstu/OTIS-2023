import tkinter as tk
from tkinter import messagebox
import tkinter.simpledialog as simpledialog
import tkinter.colorchooser as colorchooser

# main
root = tk.Tk()
root.title("Graph")
main_label = tk.Label(root, text="Select an action")
main_label.pack(side=tk.BOTTOM)

# всякие переменные
click_nums = 0
id_of_edge_unique = 0
text_of_button_first = "<Button-1>"
num_vertexes = "number of vertex"
id_text_global = "id text"
text_vertex_global = "text on vertex"

circle_id_num = None
circle = []
edges_array = []
i = 0
id_text = 0
tag = 0
x1, y1, x2, y2 = 0, 0, 0, 0
object_edge_first = {'id_vertex1': [], 'id_vertex2': []}
object_edge_second = {'id_edge_text': [], 'id_vertex1': [], 'id_vertex2': []}
object_first = {'id': [], id_text_global: [], text_vertex_global: [], 'textID': [], num_vertexes: [],
                'coordinatesX': [], 'coordinatesY': []}
array_size = len(object_first['id'])
array = [[0] * array_size for _ in range(array_size)]
tk.Tk.geometry(root, "800x600")
canvas = tk.Canvas(root, width=1920, height=1080)
canvas.pack()
menubar = tk.Menu(root)
root.config(menu=menubar)


# Function to handle drawing vertices
def draw_vertex_handler():
    main_label.configure(text="You have chosen to draw vertices, click on the free space to draw the vertex")
    canvas.unbind(text_of_button_first)
    canvas.bind(text_of_button_first, draw_canvas_handler)


# Function to handle drawing edges
def draw_edge_handler():
    main_label.configure(text="You have chosen to draw edges, click on the vertex to draw the edge")
    canvas.unbind(text_of_button_first)
    canvas.bind(text_of_button_first, draw_canvas_handler_second)


# Function to handle deleting vertices or edges
def delete_vertex_handler():
    main_label.configure(text="You have chosen to delete a vertex or edge, click on the vertex or edge to delete")
    canvas.unbind(text_of_button_first)
    canvas.bind(text_of_button_first, delete_canvas_handler)


# Function to handle renaming vertices
def rename_vertex_handler():
    main_label.configure(text="You have chosen to rename a vertex, click on the vertex to rename it")
    canvas.unbind(text_of_button_first)
    canvas.bind(text_of_button_first, rename_handler)


# Function to handle displaying information about vertices and edges
def edge_click_handler():
    print("Vertex")
    for key, value in object_first.items():
        print(key, value)
    print("Edge")
    for value in object_edge_first.values():
        print(value, end=", ")


# Function to handle changing the color of vertices
def change_color_handler():
    main_label.configure(
        text="You have chosen to change the color of the vertex, click on the vertex to change its color")
    canvas.unbind(text_of_button_first)
    canvas.bind(text_of_button_first, colour_handler)


# Function to handle changing the text color of vertices
def change_text_color_handler():
    main_label.configure(
        text="You have chosen to change the color of the text, click on the vertex to change the color of its text")
    canvas.unbind(text_of_button_first)
    canvas.bind(text_of_button_first, text_colour_handler)


# Function to handle changing the color of edges
def change_edge_color_handler():
    main_label.configure(text="You have chosen to change the color of the edges, click on the edge to change its color")
    canvas.unbind(text_of_button_first)
    canvas.bind(text_of_button_first, edge_colour_handler)


# Function to handle deleting vertices or edges based on user click
def delete_canvas_handler(event):
    for x in circle:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            # Delete the vertex
            canvas.delete(x)
            canvas.delete(object_first['textID'][object_first['id'].index(x)])
            circle.remove(x)

            # Remove information about the vertex from data structures
            object_first[num_vertexes].remove(object_first[num_vertexes][object_first['id'].index(x)])
            canvas.delete(object_first[id_text_global][object_first['id'].index(x)])
            object_first['textID'].remove(object_first['textID'][object_first['id'].index(x)])
            object_first[id_text_global].remove(object_first[id_text_global][object_first['id'].index(x)])
            object_first["coordinatesX"].remove(object_first['coordinatesX'][object_first['id'].index(x)])
            object_first["coordinatesY"].remove(object_first['coordinatesY'][object_first['id'].index(x)])
            object_first[text_vertex_global].remove(object_first[text_vertex_global][object_first['id'].index(x)])
            object_first['id'].remove(x)
            break  # Exit the loop after deleting the first matching vertex


# Function to handle drawing vertices
def draw_canvas_handler(event):
    global circle_id_num
    global i, tag, id_text
    id_text += 1
    i += 1
    itext = str(i)
    x, y = event.x, event.y
    tag = 'oval' + str(id_text)
    texttag = 'text' + str(id_text)

    # Store information about the vertex in the data structures
    object_first[num_vertexes].append(id_text)
    object_first[id_text_global].append(tag)
    object_first["coordinatesX"].append(x)
    object_first["coordinatesY"].append(y)

    # Create oval (vertex) and text on canvas
    circle_id_num = canvas.create_oval(x - 20, y - 20, x + 20, y + 20, fill='green', tags=tag)
    circle.append(circle_id_num)
    object_first['id'].append(circle_id_num)
    canvas.create_text(x, y, text=itext, font="Arial 14", tags=texttag)
    object_first['textID'].append(texttag)
    object_first[text_vertex_global].append(itext)


# Function to handle drawing edges
def draw_canvas_handler_second(event):
    global click_nums
    global x1, y1, x2, y2, id_of_edge_unique
    if click_nums == 0:
        # Select the first vertex for the edge
        for x in circle:
            if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                x1 = object_first['coordinatesX'][object_first['id'].index(x)]
                y1 = object_first['coordinatesY'][object_first['id'].index(x)]
                object_edge_second['id_vertex1'].append(x)
                object_edge_first['id_vertex1'].append(x)
                click_nums = 1
                main_label.configure(text="Select the second vertex to draw the edge")
    elif click_nums == 1:
        # Select the second vertex and draw the edge
        for x in circle:
            if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                x2 = object_first['coordinatesX'][object_first['id'].index(x)]
                y2 = object_first['coordinatesY'][object_first['id'].index(x)]
                object_edge_second['id_vertex2'].append(x)
                object_edge_first['id_vertex2'].append(x)
        tag_edge = 'edge' + str(id_of_edge_unique)
        line = canvas.create_line(x1, y1, x2, y2, width=4, tags=tag_edge)
        edges_array.append(id_of_edge_unique)
        object_edge_second['id_edge_text'].append(tag_edge)
        id_of_edge_unique += 1
        canvas.tag_lower(line)
        click_nums = 0
        main_label.configure(text="Select a vertex to draw an edge on")


# Function to handle renaming vertices
def rename_handler(event):
    for x in circle:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            # Prompt user for a new name
            new_name = simpledialog.askstring("Rename", "Enter new name")
            canvas.delete(object_first['textID'][object_first['id'].index(x)])

            # Create text with the new name on canvas
            canvas.create_text(object_first['coordinatesX'][object_first['id'].index(x)],
                               object_first['coordinatesY'][object_first['id'].index(x)],
                               text=new_name, font="Arial 13",
                               tags=(object_first['textID'][object_first['id'].index(x)]))

            # Update data structures with the new name
            object_first[text_vertex_global][object_first['id'].index(x)] = new_name
            break


def colour_handler(event):
    # Обработчик события для изменения цвета объекта на холсте
    for x in circle:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            new_colour = colorchooser.askcolor()
            color_hex = new_colour[1]
            canvas.itemconfig(x, fill=color_hex)
            break


def text_colour_handler(event):
    # Обработчик события для изменения цвета текста объекта на холсте
    for oval in circle:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == oval:
            # Запрос цвета у пользователя
            new_colour = colorchooser.askcolor()
            color_hex = new_colour[1]
            # Изменение цвета текста
            canvas.itemconfig(object_first['textID'][object_first['id'].index(oval)], fill=color_hex)
            break


def edge_colour_handler(event):
    # Обработчик события для изменения цвета граней на холсте
    for edge in edges_array:
        tag_edge = 'edge' + str(edge)
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == canvas.find_withtag(tag_edge)[0]:
            # Запрос цвета у пользователя
            new_colour = colorchooser.askcolor()
            color_hex = new_colour[1]
            # Изменение цвета грани
            canvas.itemconfig(tag_edge, fill=color_hex)
            break


def fill_adjacency_matrix():
    # Заполнение матрицы смежности на основе данных о вершинах и ребрах
    for edge_index in range(len(object_edge_second['id_vertex1'])):
        vertex1_index = object_first['id'].index(object_edge_second['id_vertex1'][edge_index])
        vertex2_index = object_first['id'].index(object_edge_second['id_vertex2'][edge_index])
        array[vertex1_index][vertex2_index] = 1
        array[vertex2_index][vertex1_index] = 1


def adjacency_matrix_handler():
    k = 0
    adj_matrix = tk.Tk()
    adj_matrix.title("Adjacency matrix")
    adj_matrix.geometry("250x250")

    fill_adjacency_matrix()
    for i3, val3 in enumerate(array):
        adj_matrix_label = tk.Label(adj_matrix, text=str(val3))
        adj_matrix_label.grid(row=k, column=0)
        i3 += 1
        print(i3)


def incidence_matrix_handler():
    k = 0
    inc_matrix = tk.Tk()
    inc_matrix.title("Incidence matrix")
    inc_matrix.geometry("250x250")

    for index in range(len(object_edge_second['id_vertex1'])):
        array[object_first['id'].index(object_edge_second['id_vertex1'][index])][
            edges_array.index(object_edge_second['id_edge_text'].index(object_edge_second['id_edge_text'][index]))] = 1
        array[object_first['id'].index(object_edge_second['id_vertex2'][index])][
            edges_array.index(object_edge_second['id_edge_text'].index(object_edge_second['id_edge_text'][index]))] = 1
    for index2, value1 in enumerate(array):
        inc_matrix_label = tk.Label(inc_matrix, text=str(value1))
        inc_matrix_label.grid(row=k, column=0)
        k += 1
        index2 += 1
        print(index2)


def dfs_handler():
    visited = [False] * len(circle)

    def dfs_rec_handler(vert):
        visited[vert] = True
        for u in enumerate(circle):
            if array[vert][u] == 1 and not visited[u]:
                dfs_rec_handler(u)

    fill_adjacency_matrix()
    count = 0
    for v in range(len(circle)):
        if not visited[v]:
            dfs_rec_handler(v)
            count += 1
    messagebox.showinfo("DFS", "Graph is connected" if count == 1 else "Graph is not connected")


def bfs_handler():
    visited = [False] * len(circle)

    def bfs_rec_handler(vert):
        visited[vert] = True
        for u in enumerate(circle):
            if array[vert][u] == 1 and not visited[u]:
                bfs_rec_handler(u)

    fill_adjacency_matrix()
    count = 0
    for v in range(len(circle)):
        if not visited[v]:
            bfs_rec_handler(v)
            count += 1
    messagebox.showinfo("BFS", "Graph is connected" if count == 1 else "Graph is not connected")


# раздел меню
graphmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Graph", menu=graphmenu)
# кнопки в разделе меню
graphmenu.add_command(label="Draw a vertex", command=draw_vertex_handler)
graphmenu.add_command(label="Draw an edge", command=draw_edge_handler)
graphmenu.add_command(label="Removing vertices or edges", command=delete_vertex_handler)

redmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Editing", menu=redmenu)
redmenu.add_command(label="Rename a vertex", command=rename_vertex_handler)
redmenu.add_command(label="Repaint the vertex", command=change_color_handler)
redmenu.add_command(label="Recolor text", command=change_text_color_handler)
redmenu.add_command(label="Repaint an edge", command=change_edge_color_handler)

algmenu = tk.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Algorithms", menu=algmenu)
algmenu.add_command(label="Output the adjacency matrix", command=adjacency_matrix_handler)
algmenu.add_command(label="Output the incidence matrix", command=incidence_matrix_handler)
algmenu.add_command(label="Search in depth", command=dfs_handler)
algmenu.add_command(label="Search in width", command=bfs_handler)

root.mainloop()
