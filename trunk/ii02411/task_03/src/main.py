import tkinter as tk
from tkinter import messagebox as mb
import numpy as np

class GraphApp:
    def __init__(self):
        self.root = tk.Tk()
        self.root.title("Graph")
        self.root.geometry("890x860+410+10")
        self.root.resizable(False, False)

        self.canvas = tk.Canvas(self.root, bg="#888", width=886, height=726)
        self.canvas.place(x=0, y=130)

        self.label = tk.Label(self.root)
        self.label.place(x=370, y=100)
        self.label["text"] = "Graph Name"

        self.vertex_names = []
        self.edges = []
        self.vertices = []
        self.vertex_count = 0
        self.edge_count = 0

        self.check_var = tk.BooleanVar()
        self.check_var.set(False)

        self.btn_set_graph_name = tk.Button(self.root, text="Set Graph Name", command=self.menu_set_graph_name)
        self.btn_save_data = tk.Button(self.root, text="Save Data", command=self.save_data)
        self.btn_create_vertex = tk.Button(self.root, text="Create Vertex", command=self.menu_create_vertex)
        self.btn_delete_vertex = tk.Button(self.root, text="Delete Vertex", command=self.delete_vertex)
        self.btn_rename_vertex = tk.Button(self.root, text="Rename Vertex", command=self.menu_rename_vertex)
        self.btn_create_edge = tk.Button(self.root, text="Create Edge", command=self.menu_create_edge)
        self.btn_delete_edge = tk.Button(self.root, text="Delete Edge", command=self.menu_delete_edge)
        self.btn_move_vertices = tk.Button(self.root, text="Move Vertices", command=self.move_vertices)
        self.btn_create_adjacency_matrix = tk.Button(self.root, text="Adjacency Matrix", command=self.create_adjacency_matrix)
        self.btn_create_incidence_matrix = tk.Button(self.root, text="Incidence Matrix", command=self.create_incidence_matrix_window)

        self.btn_set_graph_name.grid(row=0, column=0, stick="ew")
        self.btn_save_data.grid(row=0, column=4, stick="ew")
        self.btn_create_vertex.grid(row=0, column=1, stick="ew")
        self.btn_delete_vertex.grid(row=1, column=1, stick="ew")
        self.btn_rename_vertex.grid(row=2, column=1, stick="ew")
        self.btn_create_edge.grid(row=0, column=2, stick="ew")
        self.btn_delete_edge.grid(row=1, column=2, stick="ew")
        self.btn_move_vertices.grid(row=1, column=0, stick="ew")
        self.btn_create_adjacency_matrix.grid(row=0, column=3, stick="ew")
        self.btn_create_incidence_matrix.grid(row=1, column=3, stick="ew")

        self.root.mainloop()

    def menu_set_graph_name(self):
        new_window = tk.Tk()
        new_window.title("Set Graph Name")
        new_window.wm_attributes('-topmost', 1)
        new_window.resizable(False, False)

        label_graph_name = tk.Label(new_window, text="Enter Graph Name")
        label_graph_name.grid(row=0, column=0, sticky="ew")
        
        entry = tk.Entry(new_window)
        entry.grid(row=1, column=0)

        btn_set_graph_name = tk.Button(new_window, text="Set", command=lambda: self.change_graph_name(entry.get(), new_window.destroy))
        btn_set_graph_name.grid(row=2, column=0, sticky="ew")

    def change_graph_name(self, name, window_destroy_func):
        self.label["text"] = name
        window_destroy_func()

    def save_data(self):
        """
        This method is currently empty as the implementation for saving data has not been provided yet.
        To save graph data, you may consider incorporating file I/O operations or any other suitable method
        based on the requirements of your application. Once the save functionality is implemented, this method
        can be updated accordingly.
        """
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

    def menu_delete_edge(self):
        new_window = tk.Tk()
        new_window.title("Delete Edge")
        new_window.wm_attributes('-topmost', 1)
        new_window.resizable(False, False)

        label_vertex1 = tk.Label(new_window, text="Enter Vertex 1 Name")
        label_vertex2 = tk.Label(new_window, text="Enter Vertex 2 Name")
        entry_vertex1 = tk.Entry(new_window)
        entry_vertex2 = tk.Entry(new_window)

        label_vertex1.grid(row=0, column=0, sticky="ew")
        entry_vertex1.grid(row=1, column=0)
        label_vertex2.grid(row=2, column=0, sticky="ew")
        entry_vertex2.grid(row=3, column=0)

        btn_delete_edge = tk.Button(new_window, text="Delete", command=lambda: self.find_delete_edge(entry_vertex1.get(), entry_vertex2.get(), new_window))
        btn_delete_edge.grid(row=4, column=0, sticky="ew")

    def find_delete_edge(self, en1, en2, root):
        for i, edge in enumerate(self.edges):
            if edge.vertex1.vertex_name == en1 and edge.vertex2.vertex_name == en2:
                self.canvas.delete(edge.line)
                # Delete other associated graphical elements
                self.edges.pop(i)
                self.edge_count -= 1
                root.destroy()
                break
        else:
            mb.showerror("Error", "Edge does not exist")

    def move_vertices(self):
        # Implement vertex movement functionality
        pass

    def create_adjacency_matrix(self):
        adjacency_matrix = [[0 for _ in range(len(self.vertex_names))] for _ in range(len(self.vertex_names))]
        for edge in self.edges:
            vertex1_index = self.vertex_names.index(edge.vertex1.vertex_name)
            vertex2_index = self.vertex_names.index(edge.vertex2.vertex_name)
            adjacency_matrix[vertex1_index][vertex2_index] = 1
            if not self.check_var.get():  # If the graph is not oriented, set symmetric value
                adjacency_matrix[vertex2_index][vertex1_index] = 1
        print("Adjacency Matrix:")
        print(np.array(adjacency_matrix))

    def create_incidence_matrix_window(self):
        # Implement incidence matrix creation window
        pass

class Vertex:
    def __init__(self, canvas, color):
        self.canvas = canvas
        self.color = color
        # Assuming you have a vertex_name attribute
        self.vertex_name = None  # Set the vertex name accordingly
        self.x = 0  # Set the x-coordinate accordingly
        self.y = 0  # Set the y-coordinate accordingly
        self.id_vert = canvas.create_oval(self.x - 20, self.y - 20, self.x + 20, self.y + 20, fill=color, width=2)
        self.id_txt = canvas.create_text(self.x, self.y, anchor='center', text=self.vertex_name,
                                         font="Arial 10", fill="white")

GraphApp()
