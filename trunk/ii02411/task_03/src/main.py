from tkinter import Tk, Canvas, Button, Label, Entry, Checkbutton, BooleanVar
from tkinter import messagebox as mb
import numpy as np

root = Tk()
root.title("Graph")
root.geometry("890x860+410+10")
root.resizable(False, False)
root.wm_attributes('-topmost', 1)

canvas = Canvas(root, bg="#888", width=886, height=726)
canvas.place(x=0, y=130)

graph_label = Label(root)
graph_label.place(x=370, y=100)
graph_label["text"] = "Graph Name"

class Vertex:
    def __init__(self, canvas, color):
        global click_x, click_y, vertex_names, vertex_count
        self.vertex_count = vertex_count
        self.vertex_name = vertex_names[-1]
        self.canvas = canvas
        self.color = color
        self.x = click_x
        self.y = click_y
        self.id_vertex = canvas.create_oval(self.x - 20, self.y - 20, self.x + 20, self.y + 20, fill=color, width=2)
        self.id_text = self.canvas.create_text(self.x, self.y, anchor='center', text=self.vertex_name,
                                               font="Arial 10", fill="white")
        canvas.unbind("<Button-1>")

    def get_info(self):
        return self.vertex_count, self.vertex_name[self.vertex_count - 1]

class Edge:
    def __init__(self, vertex1: Vertex, vertex2: Vertex, weight: int = 0):
        self.vertex1 = vertex1
        self.vertex2 = vertex2
        self.x1, self.y1 = vertex1.x, vertex1.y
        self.x2, self.y2 = vertex2.x, vertex2.y

        self.weight = weight
        if check_var.get():
            self.line = canvas.create_line(self.line_intersect_circle(self.x1, self.y1, self.x2, self.y2), width=2,
                                           arrow="last")
            if weight != "0":
                self.rect = canvas.create_rectangle((self.x1 + self.x2) / 2 - 5,
                                                    (self.y1 + self.y2) / 2 - 8,
                                                    (self.x1 + self.x2) / 2 + 5,
                                                    (self.y1 + self.y2) / 2 + 8,
                                                    fill='white', width=0)
                self.text = canvas.create_text((self.x1 + self.x2) / 2,
                                               (self.y1 + self.y2) / 2,
                                               text=self.weight,
                                               font=('Arial', 14), fill='black', )
            else:
                self.rect = None
                self.text = None
        else:
            self.line = canvas.create_line(self.line_intersect_circle(self.x1, self.y1, self.x2, self.y2), width=2)
            if weight != "0":
                self.rect = canvas.create_rectangle((self.x1 + self.x2) / 2 - 5,
                                                    (self.y1 + self.y2) / 2 - 8,
                                                    (self.x1 + self.x2) / 2 + 5,
                                                    (self.y1 + self.y2) / 2 + 8,
                                                    fill='white', width=0)
                self.text = canvas.create_text((self.x1 + self.x2) / 2,
                                               (self.y1 + self.y2) / 2,
                                               text=self.weight,
                                               font=('Arial', 14), fill='black', )
            else:
                self.rect = None
                self.text = None

    def delete(self):
        canvas.delete(self.line)
        canvas.delete(self.rect)
        canvas.delete(self.text)

def on_click(event):
    global click_x, click_y
    click_x = event.x
    click_y = event.y

def line_intersect_circle(x1, y1, x2, y2):
    main_hypotenuse = np.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
    main_dx = x2 - x1
    main_dy = y2 - y1
    dx = (main_hypotenuse - 20) * main_dx / main_hypotenuse
    dy = (main_hypotenuse - 20) * main_dy / main_hypotenuse

    return x2 - dx, y2 - dy, x1 + dx, y1 + dy

def create_adjacency_matrix():
    global vertex_names, edges
    adjacency_matrix = [[0 for i in range(len(vertex_names))] for i in range(len(vertex_names))]
    for edge in edges:
        adjacency_matrix[vertex_names.index(edge.vertex1.vertex_name)][vertex_names.index(edge.vertex2.vertex_name)] = 1
        adjacency_matrix[vertex_names.index(edge.vertex2.vertex_name)][vertex_names.index(edge.vertex1.vertex_name)] = 1
    window = Tk()
    window.title("Adjacency Matrix")
    window.geometry("400x400+0+0")
    for i in range(len(adjacency_matrix)):
        for j in range(len(adjacency_matrix[0])):
            Label(window, text=adjacency_matrix[i][j], font="Arial 10", width=5, height=2, borderwidth=1,
                  relief="solid").grid(row=i, column=j)
    window.mainloop()

def create_incidence_matrix_window():
    global vertex_names, edges
    incidence_matrix = [[0 for i in range(len(edges))] for i in range(len(vertex_names))]
    for i in range(len(edges)):
        incidence_matrix[vertex_names.index(edges[i].vertex1.vertex_name)][i] = 1
        incidence_matrix[vertex_names.index(edges[i].vertex2.vertex_name)][i] = 1
    window = Tk()
    window.title("Incidence Matrix")
    window.geometry("400x400+0+0")
    for i in range(len(incidence_matrix)):
        for j in range(len(incidence_matrix[0])):
            Label(window, text=incidence_matrix[i][j], font="Arial 10", width=5, height=2, borderwidth=1, relief="solid").grid(
                row=i, column=j)
    window.mainloop()

def quit_program():
    root.destroy()

def change_graph_name(name, window):
    graph_label["text"] = name
    quit_program(window)

def set_graph_name():
    new_window = Tk()
    new_window.title("Set Graph Name")
    new_window.wm_attributes('-topmost', 1)
    new_window.resizable(False, False)
    label_graph = Label(new_window)
    label_graph["text"] = "Enter Graph Name"
    label_graph.grid(row=0, column=0, sticky="ew")
    entry = Entry(new_window)
    entry.grid(row=1, column=0)
    btn_set_graph_name = Button(new_window, text="Set", command=lambda: change_graph_name(entry.get(), new_window))
    btn_set_graph_name.grid(row=2, column=0, sticky="ew")
    if entry.get == graph_label["text"]:
        new_window.destroy()
    new_window.mainloop()

def move_vertex():
    canvas.bind("<Button-1>", select_vertex)

def select_vertex(event):
    global click_x, click_y, selected_vertex
    click_x = event.x
    click_y = event.y
    for vert in vertices:
        if vert.x - 20 <= click_x <= vert.x + 20 and vert.y - 20 <= click_y <= vert.y + 20:
            selected_vertex = vert
            canvas.bind("<B1-Motion>", move_vertex)
            canvas.bind("<ButtonRelease-1>", unselect_vertex)
            break

def move_vertex(event):
    global click_x, click_y, selected_vertex, vertices
    click_x = event.x
    click_y = event.y
    selected_vertex.x = click_x
    selected_vertex.y = click_y
    canvas.coords(selected_vertex.id_vertex, click_x - 20, click_y - 20, click_x + 20, click_y + 20)
    canvas.coords(selected_vertex.id_text, click_x, click_y)
    for edge in edges:
        if edge.vertex1 == selected_vertex:
            canvas.coords(edge.line, line_intersect_circle(click_x, click_y, edge.vertex2.x, edge.vertex2.y))
            canvas.coords(edge.rect, (click_x + edge.vertex2.x) / 2 - 5,
                          (click_y + edge.vertex2.y) / 2 - 8,
                          (click_x + edge.vertex2.x) / 2 + 5,
                          (click_y + edge.vertex2.y) / 2 + 8)
            canvas.coords(edge.text, (click_x + edge.vertex2.x) / 2, (click_y + edge.vertex2.y) / 2)
        elif edge.vertex2 == selected_vertex:
            canvas.coords(edge.line, line_intersect_circle(edge.vertex1.x, edge.vertex1.y, click_x, click_y))
            canvas.coords(edge.rect, (click_x + edge.vertex1.x) / 2 - 5,
                          (click_y + edge.vertex1.y) / 2 - 8,
                          (click_x + edge.vertex1.x) / 2 + 5,
                          (click_y + edge.vertex1.y) / 2 + 8)
            canvas.coords(edge.text, (click_x + edge.vertex1.x) / 2, (click_y + edge.vertex1.y) / 2)

def unselect_vertex(event):
    canvas.unbind("<B1-Motion>")
    canvas.unbind("<ButtonRelease-1>")

def save_data():
    pass

def give_color(numb):
    global color
    if numb == 1:
        color = "blue"
    elif numb == 2:
        color = "red"
    elif numb == 3:
        color = "green"
    else:
        color = "white"

def create_vertex(window, entry):
    global call_count, vertex_count, color, vertices, vertex_names
    if '' == entry.get():
        mb.showerror("Error", "You did not enter the vertex name")
    elif entry.get() in [vert.vertex_name for vert in vertices]:
        mb.showerror("Error", "Vertex already exists")
    elif entry.get() not in [vert.vertex_name for vert in vertices]:
        vertex_names[vertex_count] = entry.get()
        call_count += 1
    if call_count != 0:
        vertex_count += 1
        vertices.append(Vertex(canvas, color))
        call_count = 0
        window.destroy()

call_count = 0
click_x, click_y = 0, 0
selected_vertex = None
vertices = []
vertex_names = []
edges = []
color = "red"
vertex_count = 0
edge_count = 0
check_var = BooleanVar()
check_var.set(False)

btn_set_graph_name = Button(root, text="Set Graph Name", command=set_graph_name)
btn_save_data = Button(root, text="Save Data", command=save_data)
btn_create_vertex = Button(root, text="Create Vertex", command=menu_create_vertex)
btn_delete_vertex = Button(root, text="Delete Vertex", command=delete_vertex)
btn_rename_vertex = Button(root, text="Rename Vertex", command=menu_rename_vertex)
btn_create_edge = Button(root, text="Create Edge", command=menu_create_edge)
btn_quit = Button(root, text="Quit", command=quit_program)
btn_delete_edge = Button(root, text="Delete Edge", command=menu_delete_edge)
check_orientation = Checkbutton(root, text="Orientation", onvalue=1, offvalue=0, variable=check_var, bg="gray")
btn_move_vertex = Button(root, text="Move Vertices", command=move_vertex)
btn_incidence_matrix = Button(root, text="Incidence Matrix", command=create_incidence_matrix_window)
btn_adjacency_matrix = Button(root, text="Adjacency Matrix", command=create_adjacency_matrix)

btn_set_graph_name.grid(row=0, column=0, stick="ew")
btn_save_data.grid(row=0, column=4, stick="ew")
btn_create_vertex.grid(row=0, column=1, stick="ew")
btn_delete_vertex.grid(row=1, column=1, stick="ew")
btn_rename_vertex.grid(row=2, column=1, stick="ew")
btn_create_edge.grid(row=0, column=2, stick="ew")
btn_quit.grid(row=1, column=5, stick="ew")
btn_delete_edge.grid(row=1, column=2, stick="ew")
check_orientation.grid(row=2, column=2, stick="ew")
btn_move_vertex.grid(row=1, column=0, stick="ew")
btn_incidence_matrix.grid(row=1, column=3, stick="ew")
btn_adjacency_matrix.grid(row=0, column=3, stick="ew")

root.mainloop()
