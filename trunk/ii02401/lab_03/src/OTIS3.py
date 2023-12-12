import tkinter as tk
from tkinter import simpledialog, filedialog, messagebox
import networkx as nx
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
class GraphEditor:
    def __init__(self, master):
        self.master = master
        self.master.title("Graph Editor")
        self.graph_name = ""
        self.graph_type = "UNORIENT"
        self.graph = nx.Graph()
        self.canvas_frame = tk.Frame(self.master)
        self.canvas_frame.pack(expand=tk.YES, fill=tk.BOTH)
        self.info_frame = tk.Frame(self.master)
        self.info_frame.pack(side=tk.RIGHT, padx=10)
        self.create_menu()
        self.create_toolbar()
        self.create_canvas()
        self.create_info_panel()
        self.node_colors = {}
        self.node_shapes = {}
    def create_menu(self):
        menubar = tk.Menu(self.master)
        self.master.config(menu=menubar)
        file_menu = tk.Menu(menubar, tearoff=0)
        menubar.add_cascade(label="File", menu=file_menu)
        file_menu.add_command(label="New Graph", command=self.new_graph)
        file_menu.add_command(label="Open Graph", command=self.open_graph)
        file_menu.add_command(label="Save Graph", command=self.save_graph)
        file_menu.add_separator()
        file_menu.add_command(label="Exit", command=self.master.destroy)
    def create_toolbar(self):
        toolbar = tk.Frame(self.master)
        toolbar.pack(side=tk.TOP, fill=tk.X)
        tk.Button(toolbar, text="Add Node", command=self.add_node).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Add Edge", command=self.add_edge).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Delete Node", command=self.delete_node).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Delete Edge", command=self.delete_edge).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Rename Node", command=self.rename_node).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Move Node", command=self.move_node).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Graph Info", command=self.show_graph_info).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Find Paths", command=self.find_paths).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Update Canvas", command=self.update_canvas).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Update Info Panel", command=self.update_info_panel).pack(side=tk.LEFT)
        tk.Button(toolbar, text="Find Eulerian Cycle", command=self.find_eulerian_cycle).pack(side=tk.LEFT)
    def create_canvas(self):
        self.fig, self.ax = plt.subplots(figsize=(6, 6))
        self.canvas = FigureCanvasTkAgg(self.fig, master=self.canvas_frame)
        self.canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        self.canvas.draw()
    def create_info_panel(self):
        self.info_text = tk.Text(self.info_frame, height=15, width=30)
        self.info_text.pack()
    def new_graph(self):
        self.graph_name = simpledialog.askstring("Graph Name", "Enter the name of the new graph:")
        self.graph_type = simpledialog.askstring("Graph Type", "Enter the type of the new graph (UNORIENT/ORIENT):")
        self.graph.clear()
    # Если граф ориентированный, устанавливаем соответствующий атрибут
        if self.graph_type == "ORIENT":
            self.graph = nx.DiGraph()
        self.update_canvas()
        self.update_info_panel("New graph created.")
    def open_graph(self):
        file_path = filedialog.askopenfilename(title="Open Graph", filetypes=[("Graph files", "*.graph")])
        if file_path:
            try:
                self.graph = nx.read_graphml(file_path)
                self.graph_name = self.graph.graph["name"]
                self.graph_type = self.graph.graph["type"]
                self.update_canvas()
                self.update_info_panel(f"Graph '{self.graph_name}' opened.")
            except Exception as e:
                messagebox.showerror("Error", f"Error opening graph: {e}")
    def save_graph(self):
        file_path = filedialog.asksaveasfilename(title="Save Graph", defaultextension=".graph", filetypes=[("Graph files", "*.graph")])
        if file_path:
            self.graph.graph["name"] = self.graph_name
            self.graph.graph["type"] = self.graph_type
            nx.write_graphml(self.graph, file_path)
            self.update_info_panel(f"Graph '{self.graph_name}' saved to {file_path}.")
    def add_node(self):
        node_name = simpledialog.askstring("Add Node", "Enter the name of the new node:")
        if node_name:
            node_color = simpledialog.askstring("Node Color", "Enter the color of the node (e.g., 'red'):")
            self.node_colors[node_name] = node_color
        # Запрос формы
            node_shape = simpledialog.askstring("Node Shape", "Enter the shape of the node (e.g., 'o' for circle):")
            self.node_shapes[node_name] = node_shape
            self.graph.add_node(node_name)
            self.update_canvas()
            self.update_info_panel(f"Node '{node_name}' added with color '{node_color}' and shape '{node_shape}'.")
    def add_edge(self):
        edge_str = simpledialog.askstring("Add Edge", "Enter the edge description (e.g., 'A -> B'):")
        if edge_str:
            try:
                edge_parts = edge_str.split("->")
                if len(edge_parts) == 2:
                    src, dest = edge_parts[0].strip(), edge_parts[1].strip()
                    if self.graph_type == "ORIENT":
                        self.graph.add_edge(src, dest)
                    else:
                        self.graph.add_edge(src, dest)
                        self.graph.add_edge(dest, src)  # Add reverse edge for undirected
                    self.update_canvas()
                    self.update_info_panel(f"Edge '{edge_str}' added.")
                else:
                    raise ValueError("Invalid edge description.")
            except Exception as e:
                messagebox.showerror("Error", f"Error adding edge: {e}")
    def delete_node(self):
        node_name = simpledialog.askstring("Delete Node", "Enter the name of the node to delete:")
        if node_name:
            if node_name in self.graph.nodes:
                self.graph.remove_node(node_name)
                self.update_canvas()
                self.update_info_panel(f"Node '{node_name}' deleted.")
            else:
                messagebox.showwarning("Warning", f"Node '{node_name}' not found.")
    def delete_edge(self):
        edge_str = simpledialog.askstring("Delete Edge", "Enter the edge description (e.g., 'A -> B'):")
        if edge_str:
            try:
                edge_parts = edge_str.split("->")
                if len(edge_parts) == 2:
                    src, dest = edge_parts[0].strip(), edge_parts[1].strip()
                    if self.graph_type == "ORIENT":
                        self.graph.remove_edge(src, dest)
                    else:
                        self.graph.remove_edge(src, dest)
                        self.graph.remove_edge(dest, src)  # Remove reverse edge for undirected
                    self.update_canvas()
                    self.update_info_panel(f"Edge '{edge_str}' deleted.")
                else:
                    raise ValueError("Invalid edge description.")
            except Exception as e:
                messagebox.showerror("Error", f"Error deleting edge: {e}")
    def rename_node(self):
        old_name = simpledialog.askstring("Ren Nod", "Enter the current name of the node:")
        new_name = simpledialog.askstring("Rena Nod", "Enter the new name of the node:")
        if old_name and new_name:
            if old_name in self.graph.nodes:
                self.graph = nx.relabel_nodes(self.graph, {old_name: new_name})
                self.update_canvas()
                self.update_info_panel(f"Node '{old_name}' renamed to '{new_name}'.")
            else:
                messagebox.showwarning("Warning", f"Node '{old_name}' not found.")
    def move_node(self):
        node_name = simpledialog.askstring("Mve Nod", "Enter the name of the node to move:")
        new_position = simpledialog.askstring("Mov Nde", "Enter the new position (e.g., '0.5,0.5'):")
        if node_name and new_position:
            try:
                x, y = map(float, new_position.split(','))
                if node_name in self.graph.nodes:
                    self.graph.nodes[node_name]['pos'] = (x, y)
                    self.update_canvas()
                    self.update_info_panel(f"Node '{node_name}' moved to position ({x}, {y}).")
                else:
                    messagebox.showwarning("Warning", f"Node '{node_name}' not found.")
            except ValueError:
                messagebox.showerror("Error", "Invalid position format. Use 'x, y'.")
    def show_graph_info(self):
        info_str = f"Graph Name: {self.graph_name}\nGraph Type: {self.graph_type}\n\n"
        info_str += f"Number of Nodes: {len(self.graph.nodes)}\n"
        info_str += f"Number of Edges: {len(self.graph.edges)}\n\n"
        info_str += f"Degrees:\n{nx.degree(self.graph)}\n\n"
        info_str += f"Incidence Matrix:\n{nx.incidence_matrix(self.graph)}\n\n"
    # Convert sparse adjacency matrix to dense matrix
        adj_matrix_dense = nx.adjacency_matrix(self.graph).todense()
        info_str += f"Adjacency Matrix:\n{adj_matrix_dense}\n\n"
        info_str += f"Is Tree: {nx.is_tree(self.graph)}\n"
        info_str += f"Is Connected: {nx.is_connected(self.graph)}\n"
        info_str += f"Is Eulerian: {nx.is_eulerian(self.graph)}\n"
    # Добавляем информацию о радиусе, диаметре и центре
        if self.graph:
            info_str += f"Radius: {nx.radius(self.graph)}\n"
            info_str += f"Diameter: {nx.diameter(self.graph)}\n"
            info_str += f"Center: {nx.center(self.graph)}\n"
        self.update_info_panel(info_str)
    def find_paths(self):
        src_node = simpledialog.askstring("Fin Path", "Enter the source node:")
        dest_node = simpledialog.askstring("Fnd Pats", "Enter the destination node:")
        if src_node and dest_node:
            try:
                all_paths = list(nx.all_simple_paths(self.graph, source=src_node, target=dest_node))
                shortest_paths = list(nx.shortest_simple_paths(self.graph, source=src_node, target=dest_node))
                info_str = f"All Paths: {all_paths}\n\nShortest Paths: {shortest_paths}"
                self.update_info_panel(info_str)
            except Exception as e:
                messagebox.showerror("Error", f"Error finding paths: {e}")
    def update_canvas(self):
        self.ax.clear()
        pos = nx.get_node_attributes(self.graph, 'pos') if 'pos' in nx.get_node_attributes(self.graph, 'pos') else nx.spring_layout(self.graph)
        for node, shape in self.node_shapes.items():
            nx.draw_networkx_nodes(self.graph, pos, nodelist=[node], node_size=300, node_color=self.node_colors.get(node, 'blue'), node_shape=shape)
        nx.draw_networkx_edges(self.graph, pos, ax=self.ax, connectionstyle='arc3,rad=0.1')
        nx.draw_networkx_labels(self.graph, pos, font_weight='bold', ax=self.ax)
        self.canvas.draw()
    def update_info_panel(self, info_str):
        self.info_text.delete(1.0, tk.END)
        self.info_text.insert(tk.END, info_str)
    def find_eulerian_cycle(self):
        try:
            eulerian_cycle = list(nx.eulerian_circuit(self.graph))
            info_str = f"Eulerian Cycle: {eulerian_cycle}"
            self.update_info_panel(info_str)
        except Exception as e:
            messagebox.showerror("Error", f"Error finding Eulerian cycle: {e}")


if __name__ == "__main__":
    root = tk.Tk()
    app = GraphEditor(root)
    root.mainloop()
