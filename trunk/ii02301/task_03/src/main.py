import tkinter as tk
from tkinter import messagebox, simpledialog, colorchooser

click_num = 0
id_of_edge = 0

def draw_vertex():
    main_label.configure(text="Выбрано создание вершин, нажмите на пустое место для создания вершины")
    canvas.unbind("<Button-1>")
    canvas.bind("<Button-1>", draw_canvas1)

def draw_canvas1(event):
    global oval_id
    global i, tag, id_text
    id_text += 1
    i += 1
    itext = str(i)
    x, y = event.x, event.y
    tag = 'oval' + str(id_text)
    texttag = 'text' + str(id_text)

    cord["num of vertex"].append(id_text)

    circle = canvas.create_oval(x-20, y-20, x+20, y+20, fill="white")
    text = canvas.create_text(x, y, text=itext)

    cord['id'].append(circle)
    cord['id text'].append(text)
    cord['coordinatesX'].append(x)
    cord['coordinatesY'].append(y)
    cord['text on vertex'].append(itext)

    canvas.tag_bind(circle, "<Button-1>", lambda event, c=circle: change_vertex_info(event, c))
    canvas.tag_bind(text, "<Button-1>", lambda event, c=text: change_vertex_info(event, c))

def delete_vertex():
    main_label.configure(text="Выбрано удаление вершины или ребра, нажмите на вершину или ребро для удаления")
    canvas.unbind("<Button-1>")
    canvas.bind("<Button-1>", delete_canvas)

def delete_canvas(event):
    for x in cord['id']:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
            index = cord['id'].index(x)
            canvas.delete(x)
            canvas.delete(cord['id text'][index])
            cord['id'].pop(index)
            cord['id text'].pop(index)
            cord['coordinatesX'].pop(index)
            cord['coordinatesY'].pop(index)
            cord['text on vertex'].pop(index)
            cord['num of vertex'].remove(cord['num of vertex'][index])
            break

    for y in cord_edge['id_edge']:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == y:
            index = cord_edge['id_edge'].index(y)
            canvas.delete(y)
            cord_edge['id_edge'].pop(index)
            cord_edge['id_vertex1'].pop(index)
            cord_edge['id_vertex2'].pop(index)
            break

def draw_edge():
    main_label.configure(text="Выбрано создание ребер, нажмите на вершину для создания ребра")
    canvas.unbind("<Button-1>")
    canvas.bind("<Button-1>", draw_canvas2)

def draw_canvas2(event):
    global click_num
    global id_of_edge
    for i in cord['id']:
        if canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == i:
            x1, y1 = canvas.coords(i)[0]+20, canvas.coords(i)[1]+20
            click_num += 1
            if click_num == 1:
                id_of_edge = cord['num of vertex'][cord['id'].index(i)]
            elif click_num == 2:
                id_vertex2 = cord['num of vertex'][cord['id'].index(i)]
                if id_of_edge != id_vertex2:
                    add_edge(id_of_edge, id_vertex2)
                    click_num = 0
                    id_of_edge = 0
                else:
                    click_num = 1
                    id_of_edge = id_vertex2
                break

def add_edge(id_vertex1, id_vertex2):
    index_vertex1 = cord['num of vertex'].index(id_vertex1)
    index_vertex2 = cord['num of vertex'].index(id_vertex2)
    x1, y1 = cord['coordinatesX'][index_vertex1], cord['coordinatesY'][index_vertex1]
    x2, y2 = cord['coordinatesX'][index_vertex2], cord['coordinatesY'][index_vertex2]
    edge_id = canvas.create_line(x1, y1, x2, y2)
    cord_edge['id_edge'].append(edge_id)
    cord_edge['id_vertex1'].append(id_vertex1)
    cord_edge['id_vertex2'].append(id_vertex2)
canvas.tag_bind(edge_id, "<Button-1>", lambda event, e=edge_id: change_edge_info(event, e))

def change_vertex_info(event, tag):
    input_text = simpledialog.askstring("Переименование вершины", "Введите новое имя для вершины")

    if input_text:
        canvas.itemconfig(tag, text=input_text)
        index = cord['id text'].index(tag)
        cord['text on vertex'][index] = input_text

def change_edge_info(event, tag):
    messagebox.showinfo("Информация о ребре", f"Идентификатор ребра: {tag}\nСоединяет вершины {cord_edge['id_vertex1'][cord_edge['id_edge'].index(tag)]} и {cord_edge['id_vertex2'][cord_edge['id_edge'].index(tag)]}")

def change_vertex_color(event, tag):
    color = colorchooser.askcolor(title="Выберите цвет вершины")
    index = cord['id'].index(tag)
    canvas.itemconfig(tag, fill=color[1])
    cord['colors'][index] = color[1]

def change_edge_color(event, tag):
    color = colorchooser.askcolor(title="Выберите цвет ребра")
    index = cord_edge['id_edge'].index(tag)
    canvas.itemconfig(tag, fill=color[1])
    cord_edge['colors'][index] = color[1]
    canvas.tag_bind(edge_id, "<Button-1>", lambda event, e=edge_id: change_edge_info(event, e))

 def change_vertex_info(event, tag):
        input_text = simpledialog.askstring("Переименование вершины", "Введите новое имя для вершины")

     if input_text:
         canvas.itemconfig(tag, text=input_text)
         index = cord['id text'].index(tag)
         cord['text on vertex'][index] = input_text

 def change_edge_info(event, tag):
        messagebox.showinfo("Информация о ребре",
                            f"Идентификатор ребра: {tag}\nСоединяет вершины {cord_edge['id_vertex1'][cord_edge['id_edge'].index(tag)]} и {cord_edge['id_vertex2'][cord_edge['id_edge'].index(tag)]}")

def change_vertex_color(event, tag):
        color = colorchooser.askcolor(title="Выберите цвет вершины")
        index = cord['id'].index(tag)
        canvas.itemconfig(tag, fill=color[1])
        cord['colors'][index] = color[1]

def change_edge_color(event, tag):
        color = colorchooser.askcolor(title="Выберите цвет ребра")
        index = cord_edge['id_edge'].index(tag)
        canvas.itemconfig(tag, fill=color[1])
        cord_edge['colors'][index] = color[1]