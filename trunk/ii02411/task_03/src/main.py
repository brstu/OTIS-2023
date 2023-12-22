import tkinter as tk
from tkinter import messagebox as mb
import numpy as np

class GraphApp:
    def __init__(self):
        self.root = tk.Tk()
        self.root.title("Graph")
        self.root.geometry("890x860+410+10")
        self.root.resizable(False, False)
        self.root.wm_attributes('-topmost', 1)

        self.canvas = tk.Canvas(self.root, bg="#888", width=886, height=726)
        self.canvas.place(x=0, y=130)

        self.graph_label = tk.Label(self.root, text="Graph Name")
        self.graph_label.place(x=370, y=100)

        self.vertices = []
        self.vertex_names = []
        self.edges = []

        self.click_x, self.click_y = 0, 0
        self.selected_vertex = None
        self.vertex_count = 0
        self.edge_count = 0

        self.check_var = tk.BooleanVar()
        self.check_var.set(False)

        self.setup_buttons()

        self.root.mainloop()

    def setup_buttons(self):
        btn_set_graph_name = tk.Button(self.root, text="Set Graph Name", command=self.set_graph_name)
        btn_save_data = tk.Button(self.root, text="Save Data", command=self.save_data)
        btn_create_vertex = tk.Button(self.root, text="Create Vertex", command=self.menu_create_vertex)
        btn_delete_vertex = tk.Button(self.root, text="Delete Vertex", command=self.delete_vertex)
        btn_rename_vertex = tk.Button(self.root, text="Rename Vertex", command=self.menu_rename_vertex)
        btn_create_edge = tk.Button(self.root, text="Create Edge", command=self.menu_create_edge)
        btn_quit = tk.Button(self.root, text="Quit", command=self.quit_program)
        btn_delete_edge = tk.Button(self.root, text="Delete Edge", command=self.menu_delete_edge)
        check_orientation = tk.Checkbutton(self.root, text="Orientation", onvalue=1, offvalue=0,
                                           variable=self.check_var, bg="gray")
        btn_move_vertex = tk.Button(self.root, text="Move Vertices", command=self.move_vertex)
        btn_incidence_matrix = tk.Button(self.root, text="Incidence Matrix", command=self.create_incidence_matrix_window)
        btn_adjacency_matrix = tk.Button(self.root, text="Adjacency Matrix", command=self.create_adjacency_matrix)

        btn_set_graph_name.grid(row=0, column=0, sticky="ew")
        btn_save_data.grid(row=0, column=4, sticky="ew")
        btn_create_vertex.grid(row=0, column=1, sticky="ew")
        btn_delete_vertex.grid(row=1, column=1, sticky="ew")
        btn_rename_vertex.grid(row=2, column=1, sticky="ew")
        btn_create_edge.grid(row=0, column=2, sticky="ew")
        btn_quit.grid(row=1, column=5, sticky="ew")
        btn_delete_edge.grid(row=1, column=2, sticky="ew")
        check_orientation.grid(row=2, column=2, sticky="ew")
        btn_move_vertex.grid(row=1, column=0, sticky="ew")
        btn_incidence_matrix.grid(row=1, column=3, sticky="ew")
        btn_adjacency_matrix.grid(row=0, column=3, sticky="ew")

    def set_graph_name(self):
        new_window = tk.Tk()
        new_window.title("Set Graph Name")
        new_window.wm_attributes('-topmost', 1)
        new_window.resizable(False, False)
        label_graph = tk.Label(new_window, text="Enter Graph Name")
        label_graph.grid(row=0, column=0, sticky="ew")
        entry = tk.Entry(new_window)
        entry.grid(row=1, column=0)
        btn_set_graph_name = tk.Button(new_window, text="Set", command=lambda: self.change_graph_name(entry.get(), new_window))
        btn_set_graph_name.grid(row=2, column=0, sticky="ew")
        if entry.get == self.graph_label["text"]:
            new_window.destroy()
        new_window.mainloop()

    def change_graph_name(self, name, window):
        self.graph_label["text"] = name
        self.quit_program(window)

    def move_vertex(self):
        self.canvas.bind("<Button-1>", self.select_vertex)

    def select_vertex(self, event):
        self.click_x, self.click_y = event.x, event.y
        for vert in self.vertices:
            if vert.x - 20 <= self.click_x <= vert.x + 20 and vert.y - 20 <= self.click_y <= vert.y + 20:
                self.selected_vertex = vert
                self.canvas.bind("<B1-Motion>", self.move_vertex)
                self.canvas.bind("<ButtonRelease-1>", self.unselect_vertex)
                break

    def move_vertex(self, event):
        self.click_x, self.click_y = event.x, event.y
        self.selected_vertex.x = self.click_x
        self.selected_vertex.y = self.click_y
        self.canvas.coords(self.selected_vertex.id_vertex, self.click_x - 20, self.click_y - 20,
                           self.click_x + 20, self.click_y + 20)
        self.canvas.coords(self.selected_vertex.id_text, self.click_x, self.click_y)
        for edge in self.edges:
            if edge.vertex1 == self.selected_vertex:
                self.canvas.coords(edge.line, self.line_intersect_circle(self.click_x, self.click_y, edge.vertex2.x, edge.vertex2.y))
                self.canvas.coords(edge.rect, (self.click_x + edge.vertex2.x) / 2 - 5,
                                   (self.click_y + edge.vertex2.y) / 2 - 8,
                                   (self.click_x + edge.vertex2.x) / 2 + 5,
                                   (self.click_y + edge.vertex2.y) / 2 + 8)
                self.canvas.coords(edge.text, (self.click_x + edge.vertex2.x) / 2, (self.click_y + edge.vertex2.y) / 2)
            elif edge.vertex2 == self.selected_vertex:
                self.canvas.coords(edge.line, self.line_intersect_circle(edge.vertex1.x, edge.vertex1.y, self.click_x, self.click_y))
                self.canvas.coords(edge.rect, (self.click_x + edge.vertex1.x) / 2 - 5,
                                   (self.click_y + edge.vertex1.y) / 2 - 8,
                                   (self.click_x + edge.vertex1.x) / 2 + 5,
                                   (self.click_y + edge.vertex1.y) / 2 + 8)
                self.canvas.coords(edge.text, (self.click_x + edge.vertex1.x) / 2, (self.click_y + edge.vertex1.y) / 2)

    def unselect_vertex(self, event):
        self.canvas.unbind("<B1-Motion>")
        self.canvas.unbind("<ButtonRelease-1>")

    def save_data(self):
        pass

    def create_adjacency_matrix(self):
        adjacency_matrix = [[0 for i in range(len(self.vertex_names))] for i in range(len(self.vertex_names))]
        for edge in self.edges:
            vertex1_index = self.vertex_names.index(edge.vertex1.vertex_name)
            vertex2_index = self.vertex_names.index(edge.vertex2.vertex_name)
            adjacency_matrix[vertex1_index][vertex2_index] = 1
            if not self.check_var.get():  # If the graph is not oriented, set symmetric value
                adjacency_matrix[vertex2_index][vertex1_index] = 1
        print("Adjacency Matrix:")
        print(np.array(adjacency_matrix))

    def create_incidence_matrix_window(self):
        incidence_matrix = self.create_incidence_matrix()
        incidence_matrix_str = "\n".join([" ".join(map(str, row)) for row in incidence_matrix])
        mb.showinfo("Incidence Matrix", incidence_matrix_str)

    def create_incidence_matrix(self):
        incidence_matrix = [[0 for i in range(len(self.edges))] for i in range(len(self.vertices))]
        for col, edge in enumerate(self.edges):
            row_vertex1 = self.vertex_names.index(edge.vertex1.vertex_name)
            row_vertex2 = self.vertex_names.index(edge.vertex2.vertex_name)
            incidence_matrix[row_vertex1][col] = 1
            incidence_matrix[row_vertex2][col] = 1
        return incidence_matrix

    def line_intersect_circle(self, x1, y1, x2, y2):
        # Your implementation of line-circle intersection
        pass

    def menu_create_vertex(self):
        new_window = tk.Tk()
        new_window.title("Create Vertex")
        new_window.wm_attributes('-topmost', 1)
        new_window.resizable(False, False)
        label_vertex_name = tk.Label(new_window, text="Enter Vertex Name")
        label_vertex_name.grid(row=0, column=0, sticky="ew")
        entry = tk.Entry(new_window)
        entry.grid(row=1, column=0)
        btn_create_vertex = tk.Button(new_window, text="Create", command=lambda: self.create_vertex(entry, new_window))
        btn_create_vertex.grid(row=2, column=0, sticky="ew")
        new_window.mainloop()

    def create_vertex(self, entry, window):
        if entry.get() == '':
            mb.showerror("Error", "You did not enter the vertex name")
        elif entry.get() in [vert.vertex_name for vert in self.vertices]:
            mb.showerror("Error", "Vertex already exists")
        elif entry.get() not in [vert.vertex_name for vert in self.vertices]:
            self.vertex_names.append(entry.get())
            self.vertex_count += 1
            self.vertices.append(Vertex(self.canvas, "red"))  # Assume Vertex is a class with __init__ method
        window.destroy()

    def delete_vertex(self):
        # Implement vertex deletion functionality
        pass

    def menu_rename_vertex(self):
        # Implement vertex renaming functionality
        pass

    def menu_create_edge(self):
        # Implement edge creation functionality
        pass

    def quit_program(self):
        self.root.destroy()

class Vertex:
    def __init__(self, canvas, color):
        self.canvas = canvas
        self.color = color
        # Add other attributes for Vertex as needed
        # e.g., self.x, self.y, self.id_vertex, self.id_text

class Edge:
    def __init__(self, vertex1, vertex2, line, rect, text):
        self.vertex1 = vertex1
        self.vertex2 = vertex2
        self.line = line
        self.rect = rect
        self.text = text
        # Add other attributes for Edge as needed

app = GraphApp()
