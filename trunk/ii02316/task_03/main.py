import tkinter as tk
from tkinter import ttk, messagebox, simpledialog, colorchooser
import networkx as nx
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk
from tkinter import filedialog
import json

class GraphEditor:
    def __init__(self, master):
        self.master = master
        self.master.title("Graph Editor")

        self.graph_name = tk.StringVar()
        self.graph_name.set("Graph")

        self.graphs = {}
        self.current_graph = None

        self.canvas = tk.Canvas(self.master, bg="white")
        self.canvas.pack(fill=tk.BOTH, expand=True)

        self.graph_dropdown = ttk.Combobox(self.master, values=list(self.graphs.keys()))
        self.graph_dropdown.set("Select Graph")
        self.graph_dropdown.pack(pady=5)

        self.create_graph_button = tk.Button(self.master, text="Create Graph", command=self.create_graph)
        self.create_graph_button.pack(pady=5)

        self.set_graph_name_button = tk.Button(self.master, text="Set Graph Name", command=self.set_graph_name)
        self.set_graph_name_button.pack(pady=5)

        self.save_graph_button = tk.Button(self.master, text="Save Graph", command=self.save_graph)
        self.save_graph_button.pack(pady=5)

        self.load_graph_button = tk.Button(self.master, text="Load Graph", command=self.load_graph)
        self.load_graph_button.pack(pady=5)

        self.info_button = tk.Button(self.master, text="Graph Info", command=self.display_graph_info)
        self.info_button.pack(pady=5)

        self.draw_graph_button = tk.Button(self.master, text="Draw Graph", command=self.draw_graph)
        self.draw_graph_button.pack(pady=5)

        self.node_label = tk.Label(self.master, text="Node Content:")
        self.node_label.pack(pady=5)

        self.node_content = tk.StringVar()
        self.node_content_entry = tk.Entry(self.master, textvariable=self.node_content)
        self.node_content_entry.pack(pady=5)

        self.add_node_button = tk.Button(self.master, text="Add Node", command=self.add_node)
        self.add_node_button.pack(pady=5)

        self.remove_node_button = tk.Button(self.master, text="Remove Node", command=self.remove_node)
        self.remove_node_button.pack(pady=5)

        self.add_edge_button = tk.Button(self.master, text="Add Edge", command=self.add_edge)
        self.add_edge_button.pack(pady=5)

        self.remove_edge_button = tk.Button(self.master, text="Remove Edge", command=self.remove_edge)
        self.remove_edge_button.pack(pady=5)

        self.edit_node_button = tk.Button(self.master, text="Edit Node Content", command=self.edit_node_content)
        self.edit_node_button.pack(pady=5)

        self.color_node_button = tk.Button(self.master, text="Color Node", command=self.color_node)
        self.color_node_button.pack(pady=5)

        self.color_edge_button = tk.Button(self.master, text="Color Edge", command=self.color_edge)
        self.color_edge_button.pack(pady=5)

    def create_graph(self):
        graph_name = simpledialog.askstring("Graph Name", "Enter a name for the graph:")
        if graph_name:
            if graph_name not in self.graphs:
                self.graphs[graph_name] = nx.Graph()
                self.current_graph = graph_name
                self.graph_dropdown['values'] = list(self.graphs.keys())
                self.graph_dropdown.set(graph_name)
            else:
                tk.messagebox.showinfo("Error", "Graph with this name already exists.")

    def set_graph_name(self):
        if self.current_graph:
            new_name = simpledialog.askstring("Graph Name", "Enter a new name for the graph:")
            if new_name:
                if new_name not in self.graphs:
                    self.graphs[new_name] = self.graphs.pop(self.current_graph)
                    self.current_graph = new_name
                    self.graph_dropdown['values'] = list(self.graphs.keys())
                    self.graph_dropdown.set(new_name)
                else:
                    tk.messagebox.showinfo("Error", "Graph with this name already exists.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def save_graph(self):
        if self.current_graph:
            file_path = filedialog.asksaveasfilename(defaultextension=".json", filetypes=[("JSON files", "*.json")])
            if file_path:
                with open(file_path, 'w') as file:
                    json.dump(nx.node_link_data(self.graphs[self.current_graph]), file)
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def load_graph(self):
        file_path = filedialog.askopenfilename(filetypes=[("JSON files", "*.json")])
        if file_path:
            with open(file_path, 'r') as file:
                data = json.load(file)
                new_graph = nx.node_link_graph(data)
                graph_name = simpledialog.askstring("Graph Name", "Enter a name for the loaded graph:")
                if graph_name:
                    if graph_name not in self.graphs:
                        self.graphs[graph_name] = new_graph
                        self.current_graph = graph_name
                        self.graph_dropdown['values'] = list(self.graphs.keys())
                        self.graph_dropdown.set(graph_name)
                    else:
                        tk.messagebox.showinfo("Error", "Graph with this name already exists.")

    def display_graph_info(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            num_nodes = selected_graph.number_of_nodes()
            num_edges = selected_graph.number_of_edges()
            degrees = [selected_graph.degree(node) for node in selected_graph.nodes]

            info_str = f"Graph Info:\nNumber of Nodes: {num_nodes}\nNumber of Edges: {num_edges}\nDegrees: {degrees}"
            tk.messagebox.showinfo("Graph Info", info_str)
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def draw_graph(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            figure = Figure(figsize=(5, 5), dpi=100)
            ax = figure.add_subplot(111)
            nx.draw(selected_graph, with_labels=True, ax=ax)

            # Create a new Toplevel window for drawing the graph
            draw_window = tk.Toplevel(self.master)
            draw_window.title("Draw Graph")

            canvas = FigureCanvasTkAgg(figure, master=draw_window)
            canvas.draw()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

            # Add a toolbar to the window
            toolbar = NavigationToolbar2Tk(canvas, draw_window)
            toolbar.update()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def add_node(self):
        if self.current_graph:
            node_content = self.node_content.get()
            self.graphs[self.current_graph].add_node(node_content)
            tk.messagebox.showinfo("Node Added", f"Node '{node_content}' added to the graph.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def remove_node(self):
        if self.current_graph:
            node_content = self.node_content.get()
            if node_content in self.graphs[self.current_graph]:
                self.graphs[self.current_graph].remove_node(node_content)
                tk.messagebox.showinfo("Node Removed", f"Node '{node_content}' removed from the graph.")
            else:
                tk.messagebox.showinfo("Error", f"Node '{node_content}' not found in the graph.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def add_edge(self):
        if self.current_graph:
            start_node = simpledialog.askstring("Add Edge", "Enter the start node:")
            end_node = simpledialog.askstring("Add Edge", "Enter the end node:")
            self.graphs[self.current_graph].add_edge(start_node, end_node)
            tk.messagebox.showinfo("Edge Added", f"Edge added between nodes '{start_node}' and '{end_node}'.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def remove_edge(self):
        if self.current_graph:
            start_node = simpledialog.askstring("Remove Edge", "Enter the start node:")
            end_node = simpledialog.askstring("Remove Edge", "Enter the end node:")
            if (start_node, end_node) in self.graphs[self.current_graph].edges:
                self.graphs[self.current_graph].remove_edge(start_node, end_node)
                tk.messagebox.showinfo("Edge Removed", f"Edge removed between nodes '{start_node}' and '{end_node}'.")
            else:
                tk.messagebox.showinfo("Error", f"Edge not found between nodes '{start_node}' and '{end_node}'.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def edit_node_content(self):
        if self.current_graph:
            old_content = self.node_content.get()
            new_content = simpledialog.askstring("Edit Node Content", f"Enter new content for node '{old_content}':")
            if new_content is not None:
                if old_content in self.graphs[self.current_graph]:
                    self.graphs[self.current_graph].remove_node(old_content)
                    self.graphs[self.current_graph].add_node(new_content)
                    tk.messagebox.showinfo("Node Content Edited", f"Content of node '{old_content}' edited to '{new_content}'.")
                else:
                    tk.messagebox.showinfo("Error", f"Node '{old_content}' not found in the graph.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def color_node(self):
        if self.current_graph:
            node_content = simpledialog.askstring("Color Node", "Enter the node to color:")
            if node_content in self.graphs[self.current_graph]:
                color = colorchooser.askcolor()[1]
                self.graphs[self.current_graph].nodes[node_content]['color'] = color
                tk.messagebox.showinfo("Node Colored", f"Node '{node_content}' colored.")
            else:
                tk.messagebox.showinfo("Error", f"Node '{node_content}' not found in the graph.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def color_edge(self):
        if self.current_graph:
            start_node = simpledialog.askstring("Color Edge", "Enter the start node:")
            end_node = simpledialog.askstring("Color Edge", "Enter the end node:")
            if (start_node, end_node) in self.graphs[self.current_graph].edges:
                color = colorchooser.askcolor()[1]
                self.graphs[self.current_graph].edges[start_node, end_node]['color'] = color
                tk.messagebox.showinfo("Edge Colored", f"Edge between nodes '{start_node}' and '{end_node}' colored.")
            else:
                tk.messagebox.showinfo("Error", f"Edge not found between nodes '{start_node}' and '{end_node}'.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")


if __name__ == "__main__":
    root = tk.Tk()
    app = GraphEditor(root)
    root.mainloop()
