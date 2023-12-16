import tkinter as tk
from tkinter import simpledialog, colorchooser, messagebox
import networkx as nx
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg

class GraphEditor:
    def __init__(self, root):
        self.root = root
        self.root.title("Graph Editor")

        self.graph = nx.Graph()
        self.node_colors = {}  # Dictionary to store node colors
        self.figure, self.ax = plt.subplots()
        self.canvas = FigureCanvasTkAgg(self.figure, master=root)
        self.canvas_widget = self.canvas.get_tk_widget()
        self.canvas_widget.pack(side=tk.TOP, fill=tk.BOTH, expand=1)

        self.menu = tk.Menu(root)
        root.config(menu=self.menu)

        self.graph_menu = tk.Menu(self.menu, tearoff=0)
        self.menu.add_cascade(label="Graph", menu=self.graph_menu)
        self.graph_menu.add_command(label="Add Vertex", command=self.add_vertex)
        self.graph_menu.add_command(label="Add Edge", command=self.add_edge)

        self.color_menu = tk.Menu(self.menu, tearoff=0)
        self.menu.add_cascade(label="Node Color", menu=self.color_menu)
        self.color_menu.add_command(label="Choose Color", command=self.choose_color)

        self.algorithm_menu = tk.Menu(self.menu, tearoff=0)
        self.menu.add_cascade(label="Algorithms", menu=self.algorithm_menu)
        self.algorithm_menu.add_command(label="Shortest Path", command=self.shortest_path)
        self.algorithm_menu.add_command(label="Eulerian Path", command=self.eulerian_path)

    def add_vertex(self):
        vertex = simpledialog.askstring("Add Vertex", "Enter Vertex Label:")
        if vertex:
            self.graph.add_node(vertex)
            self.node_colors[vertex] = "skyblue"  # Default color
            self.draw_graph()

    def add_edge(self):
        edge_start = simpledialog.askstring("Add Edge", "Enter Start Vertex Label:")
        edge_end = simpledialog.askstring("Add Edge", "Enter End Vertex Label:")
        edge_length = simpledialog.askfloat("Add Edge", "Enter Edge Length:")
        if edge_start and edge_end and edge_length:
            self.graph.add_edge(edge_start, edge_end, length=edge_length)
            self.draw_graph()

    def choose_color(self):
        selected_vertex = simpledialog.askstring("Choose Color", "Enter Vertex Label:")
        if selected_vertex:
            color = colorchooser.askcolor(title="Choose Color")[1]
            self.node_colors[selected_vertex] = color
            self.draw_graph()

    def draw_graph(self):
        self.ax.clear()
        pos = nx.spring_layout(self.graph)
        node_colors = [self.node_colors[node] for node in self.graph.nodes]
        nx.draw(self.graph, pos, with_labels=True, ax=self.ax, node_size=700, node_color=node_colors)
        labels = nx.get_edge_attributes(self.graph, "length")
        nx.draw_networkx_edge_labels(self.graph, pos, edge_labels=labels, ax=self.ax)
        self.canvas.draw()

    def shortest_path(self):
        try:
            start_vertex = simpledialog.askstring("Shortest Path", "Enter Start Vertex Label:")
            end_vertex = simpledialog.askstring("Shortest Path", "Enter End Vertex Label:")
            path = nx.shortest_path(self.graph, source=start_vertex, target=end_vertex, weight="length")
            length = nx.shortest_path_length(self.graph, source=start_vertex, target=end_vertex, weight="length")
            messagebox.showinfo("Shortest Path", f"Shortest Path: {path}\nLength: {length}")
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

    
