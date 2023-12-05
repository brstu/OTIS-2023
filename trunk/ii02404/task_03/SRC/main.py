import tkinter as tk
from tkinter import simpledialog, colorchooser, messagebox
import networkx as nx
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
class GraphEditor:
    a="Add Edge"
    c="Choose Color"
    s="Shortest Path"
    def __init__(self, root):
        self.root = root
        self.root.title("Graph Editor")
        self.graph_menu = tk.Menu(self.menu, tearoff=0)
        self.menu.add_cascade(label="Graph", menu=self.graph_menu)
        self.graph_menu.add_command(label="Add Vertex", command=self.add_vertex)
        self.graph_menu.add_command(label=a, command=self.add_edge)
        self.color_menu = tk.Menu(self.menu, tearoff=0)
        self.menu.add_cascade(label="Node Color", menu=self.color_menu)
        self.algorithm_menu = tk.Menu(self.menu, tearoff=0)
        self.menu.add_cascade(label="Algorithms", menu=self.algorithm_menu)
        self.algorithm_menu.add_command(label=s, command=self.shortest_path)
        self.algorithm_menu.add_command(label="Eulerian Path", command=self.eulerian_path)
    def add_vertex(self):
            self.draw_graph()
    def add_edge(self):
        edge_start = tk.simpledialog.askstring(a, "Enter Start Vertex Label:")
        edge_end = tk.simpledialog.askstring(a, "Enter End Vertex Label:")
        edge_length = tk.simpledialog.askfloat(a, "Enter Edge Length:")
        if edge_start and edge_end and edge_length:
            self.graph.add_edge(edge_start, edge_end, length=edge_length)
            self.draw_graph()
    def choose_color(self):
         selected_vertex = tk.simpledialog.askstring(c, "Enter Vertex Label:")
        if selected_vertex:
            color = colorchooser.askcolor(title=c)[1]
            self.node_colors[selected_vertex] = color
            self.draw_graph()
    def shortest_path(self):
        try:
            start_vertex = tk.simpledialog.askstring(s, "Enter Start Vertex Label:")
            end_vertex = tk.simpledialog.askstring(s, "Enter End Vertex Label:")
            path = nx.shortest_path(self.graph, source=start_vertex, target=end_vertex, weight="length")
            length = nx.shortest_path_length(self.graph, source=start_vertex, target=end_vertex, weight="length")
            messagebox.showinfo(s, f"Shortest Path: {path}\nLength: {length}")
        except nx.NetworkXNoPath:
            messagebox.showerror("Error", "No path found between the specified vertices.")
    def eulerian_path(self):
        try:
            path = nx.eulerian_circuit(self.graph)
            messagebox.showinfo("Eulerian Path", f"Eulerian Path: {list(path)}")
        except nx.NetworkXError:
            messagebox.showerror("Error", "No Eulerian path found in the graph.")
if __name__ == "__main__":
    root = tk.Tk()
    app = GraphEditor(root)
    root.mainloop()
