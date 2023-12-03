import tkinter as tk
from tkinter import ttk, messagebox, simpledialog, colorchooser
import networkx as nx
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk
from tkinter import filedialog
import json
import numpy as np
addEdge = "Add Edge"
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

        self.create_set_frame = tk.Frame(self.master)
        self.create_set_frame.pack(pady=5)

        self.create_graph_button = tk.Button(self.create_set_frame, text="Create Graph", command=self.create_graph)
        self.create_graph_button.pack(side=tk.LEFT)

        self.set_graph_name_button = tk.Button(self.create_set_frame, text="Set Graph Name",
                                               command=self.set_graph_name)
        self.set_graph_name_button.pack(side=tk.LEFT, padx=5)

        self.save_load_frame = tk.Frame(self.master)
        self.save_load_frame.pack(pady=5)

        self.save_graph_button = tk.Button(self.save_load_frame, text="Save Graph", command=self.save_graph)
        self.save_graph_button.pack(side=tk.LEFT)

        self.load_graph_button = tk.Button(self.save_load_frame, text="Load Graph", command=self.load_graph)
        self.load_graph_button.pack(side=tk.LEFT, padx=5)

        self.info_draw_frame = tk.Frame(self.master)
        self.info_draw_frame.pack(pady=5)

        self.info_button = tk.Button(self.info_draw_frame, text="Graph Info", command=self.display_graph_info)
        self.info_button.pack(side=tk.LEFT)

        self.draw_graph_button = tk.Button(self.info_draw_frame, text="Draw Graph", command=self.draw_graph)
        self.draw_graph_button.pack(side=tk.LEFT, padx=5)

        self.node_label = tk.Label(self.master, text="Node Content:")
        self.node_label.pack(pady=5)

        self.node_content = tk.StringVar()
        self.node_content_entry = tk.Entry(self.master, textvariable=self.node_content)
        self.node_content_entry.pack(pady=5)

        self.add_node_button = tk.Button(self.master, text="Add Node", command=self.add_node)
        self.add_node_button.pack(pady=5)

        self.remove_node_button = tk.Button(self.master, text="Remove Node", command=self.remove_node)
        self.remove_node_button.pack(pady=5)

        self.edge_type_var = tk.StringVar()
        self.edge_type_var.set("Directed")

        self.edge_type_menu = tk.OptionMenu(self.master, self.edge_type_var, "Directed", "Undirected")
        self.edge_type_menu.pack(pady=5)

        self.add_edge_button = tk.Button(self.master, text=addEdge, command=self.add_edge)
        self.add_edge_button.pack(pady=5)

        self.remove_edge_button = tk.Button(self.master, text="Remove Edge", command=self.remove_edge)
        self.remove_edge_button.pack(pady=5)

        self.edit_node_button = tk.Button(self.master, text="Edit Node Content", command=self.edit_node_content)
        self.edit_node_button.pack(pady=5)

        self.color_node_button = tk.Button(self.master, text="Color Node", command=self.color_node)
        self.color_node_button.pack(pady=5)

        self.color_edge_button = tk.Button(self.master, text="Color Edge", command=self.color_edge)
        self.color_edge_button.pack(pady=5)

        self.find_paths_button = tk.Button(self.master, text="Find Paths", command=self.show_find_paths_dialog)
        self.find_paths_button.pack(pady=5)

        self.find_shortest_path_button = tk.Button(self.master, text="Shortest Path", command=self.show_find_shortest_path_dialog)
        self.find_shortest_path_button.pack(pady=5)

        self.calculate_distance_button = tk.Button(self.master, text="Calculate Distance",
                                                   command=self.calculate_distance_between_nodes)
        self.calculate_distance_button.pack(pady=5)

        self.calculate_metrics_button = tk.Button(self.master, text="Calculate Metrics", command=self.calculate_diameter_radius_center)
        self.calculate_metrics_button.pack(pady=5)

        self.find_eulerian_cycles_button = tk.Button(self.master, text="Find Eulerian Cycles", command=self.find_eulerian_cycles)
        self.find_eulerian_cycles_button.pack(pady=5)

        # Additional button for displaying advanced graph information
        self.advanced_info_button = tk.Button(self.info_draw_frame, text="Advanced Graph Info",
                                              command=self.display_advanced_graph_info)
        self.advanced_info_button.pack(side=tk.LEFT, padx=5)

    def display_advanced_graph_info(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            # Number of vertices and edges
            num_vertices = selected_graph.number_of_nodes()
            num_edges = selected_graph.number_of_edges()

            # Degrees for all vertices
            degrees = [selected_graph.degree(node) for node in selected_graph.nodes]

            # Degree for the selected vertex
            selected_vertex = simpledialog.askstring("Advanced Graph Info", "Enter the vertex to get degree:")
            if selected_vertex is not None:
                if selected_vertex in selected_graph:
                    selected_vertex_degree = selected_graph.degree(selected_vertex)
                else:
                    tk.messagebox.showinfo("Error", f"Vertex '{selected_vertex}' not found in the graph.")
                    return
            else:
                selected_vertex_degree = None

            # Incidence matrix
            incidence_matrix = nx.incidence_matrix(selected_graph)

            # Adjacency matrix
            adjacency_matrix = nx.to_numpy_array(selected_graph)

            # Properties: tree, complete, connected, eulerian
            is_tree = nx.is_tree(selected_graph)
            is_complete = nx.is_complete_graph(selected_graph)
            is_connected = nx.is_connected(selected_graph)
            is_eulerian = nx.is_eulerian(selected_graph)

            # Display the information in a new window
            info_window = tk.Toplevel(self.master)
            info_window.title("Advanced Graph Information")

            info_str = (
                f"Number of Vertices: {num_vertices}\n"
                f"Number of Edges: {num_edges}\n"
                f"Degrees: {degrees}\n\n"
                f"Degree of Selected Vertex '{selected_vertex}': {selected_vertex_degree}\n\n"
                f"Incidence Matrix:\n{incidence_matrix}\n\n"
                f"Adjacency Matrix:\n{adjacency_matrix}\n\n"
                f"Is Tree: {is_tree}\n"
                f"Is Complete: {is_complete}\n"
                f"Is Connected: {is_connected}\n"
                f"Is Eulerian: {is_eulerian}"
            )

            info_label = tk.Label(info_window, text=info_str, justify=tk.LEFT)
            info_label.pack(padx=10, pady=10)

        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")
    def calculate_distance_between_nodes(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            start_node = simpledialog.askstring("Calculate Distance", "Enter the start node:")
            end_node = simpledialog.askstring("Calculate Distance", "Enter the end node:")

            if start_node is not None and end_node is not None:
                try:
                    distance = nx.shortest_path_length(selected_graph, source=start_node, target=end_node)
                    tk.messagebox.showinfo("Distance", f"Distance between {start_node} and {end_node}: {distance}")
                except nx.NetworkXNoPath:
                    tk.messagebox.showinfo("Error", "No path found between the specified nodes.")
            else:
                tk.messagebox.showinfo("Error", "Please enter valid start and end nodes.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def create_distance_button(self):
                self.calculate_distance_button = tk.Button(self.master, text="Calculate Distance Between Nodes",
                                                           command=self.calculate_distance_between_nodes)
                self.calculate_distance_button.pack(pady=5)

    def split_path_inout(path):
        path_iter = iter(path)
        ctl_points, command = next(path_iter, ([], None))
        in_points, out_points = [], []

        while command is not None:
            if command == 'L':
                in_points.extend(ctl_points)
                out_points.extend(ctl_points)
                ctl_points, command = next(path_iter, ([], None))
            elif command == 'C':
                in_points.append(ctl_points[0])
                in_points.append(ctl_points[1])
                out_points.append(ctl_points[2])
                out_points.append(ctl_points[3])
                ctl_points, command = next(path_iter, ([], None))
            else:
                raise ValueError(f"Unsupported command: {command}")

        return in_points, out_points

    def calculate_diameter_radius_center(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            # Проверка, является ли граф строго связанным
            if not nx.is_strongly_connected(selected_graph):
                tk.messagebox.showinfo("Error", "The graph is not strongly connected.")
                return

            diameter = nx.diameter(selected_graph)
            radius = nx.radius(selected_graph)
            center = nx.center(selected_graph)

            tk.messagebox.showinfo("Graph Metrics", f"Diameter: {diameter}\nRadius: {radius}\nCenter: {center}")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")
    def show_find_shortest_path_dialog(self):
        start_node = simpledialog.askstring("Shortest Path", "Enter the start node:")
        end_node = simpledialog.askstring("Shortest Path", "Enter the end node:")
        if start_node and end_node:
            self.find_shortest_path(start_node, end_node)
        else:
            tk.messagebox.showinfo("Error", "Please enter valid start and end nodes.")

    def show_find_paths_dialog(self):
        start_node = simpledialog.askstring("Find Paths", "Enter the start node:")
        end_node = simpledialog.askstring("Find Paths", "Enter the end node:")
        if start_node and end_node:
            self.find_all_paths(start_node, end_node)
        else:
            tk.messagebox.showinfo("Error", "Please enter valid start and end nodes.")

    def find_all_paths(self, start_node, end_node):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            all_paths = list(nx.all_simple_paths(selected_graph, source=start_node, target=end_node))
            tk.messagebox.showinfo("All Paths", f"All paths from {start_node} to {end_node}:\n{all_paths}")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def find_shortest_path(self, start_node, end_node):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            shortest_path = nx.shortest_path(selected_graph, source=start_node, target=end_node)
            shortest_distance = nx.shortest_path_length(selected_graph, source=start_node, target=end_node)
            tk.messagebox.showinfo("Shortest Path", f"Shortest path from {start_node} to {end_node}:\n{shortest_path}\n"
                                                    f"Shortest distance: {shortest_distance}")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def calculate_diameter_radius_center(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            diameter = nx.diameter(selected_graph)
            radius = nx.radius(selected_graph)
            center = nx.center(selected_graph)
            tk.messagebox.showinfo("Graph Metrics", f"Diameter: {diameter}\nRadius: {radius}\nCenter: {center}")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def find_eulerian_cycles(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            try:
                eulerian_cycles = list(nx.eulerian_circuit(selected_graph))
                tk.messagebox.showinfo("Eulerian Cycles", f"Eulerian cycles:\n{eulerian_cycles}")
            except nx.NetworkXError:
                tk.messagebox.showinfo("Error", "Graph does not have an Eulerian circuit.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")
    def create_graph(self):
        graph_name = simpledialog.askstring("Graph Name", "Enter a name for the graph:")
        if graph_name:
            if graph_name not in self.graphs:
                self.graphs[graph_name] = nx.DiGraph()  # Use DiGraph for a directed graph
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

    def draw_directed_graph(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            draw_window = tk.Toplevel(self.master)
            draw_window.title("Draw Directed Graph")

            figure = Figure(figsize=(5, 5), dpi=100)
            ax = figure.add_subplot(111)

            node_colors = [selected_graph.nodes[node].get('color', 'red') for node in selected_graph.nodes]
            edge_colors = [selected_graph.edges[edge].get('color', 'blue') for edge in selected_graph.edges]

            pos = nx.spring_layout(selected_graph, seed=42)

            # Изменения для отображения веса на графе
            edge_labels = {(start, end): selected_graph.edges[start, end].get('weight', '') for start, end in selected_graph.edges}
            nx.draw_networkx_nodes(selected_graph, pos, ax=ax, node_color=node_colors, node_size=800)
            nx.draw_networkx_labels(selected_graph, pos, ax=ax, font_size=10, font_color='black')
            nx.draw_networkx_edges(selected_graph, pos, ax=ax, edgelist=selected_graph.edges(),
                                   edge_color=edge_colors,
                                   connectionstyle='arc3,rad=0.1', arrows=True, width=1.5, arrowstyle='->')
            nx.draw_networkx_edge_labels(selected_graph, pos, edge_labels=edge_labels, ax=ax)

            canvas = FigureCanvasTkAgg(figure, master=draw_window)
            canvas.draw()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

            toolbar = NavigationToolbar2Tk(canvas, draw_window)
            toolbar.update()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def draw_undirected_graph(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            draw_window = tk.Toplevel(self.master)
            draw_window.title("Draw Undirected Graph")

            figure = Figure(figsize=(5, 5), dpi=100)
            ax = figure.add_subplot(111)

            node_colors = [selected_graph.nodes[node].get('color', 'red') for node in selected_graph.nodes]
            edge_colors = [selected_graph.edges[edge].get('color', 'blue') for edge in selected_graph.edges]

            pos = nx.circular_layout(selected_graph)

            nx.draw_networkx_nodes(selected_graph, pos, ax=ax, node_color=node_colors, node_size=800)
            nx.draw_networkx_labels(selected_graph, pos, ax=ax, font_size=10, font_color='black')

            nx.draw_networkx_edges(selected_graph, pos, ax=ax, edgelist=selected_graph.edges(),
                                   edge_color=edge_colors, connectionstyle='arc3,rad=0.1', width=1.5, arrows=False)

            canvas = FigureCanvasTkAgg(figure, master=draw_window)
            canvas.draw()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

            toolbar = NavigationToolbar2Tk(canvas, draw_window)
            toolbar.update()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")


    def draw_combined_graph(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            draw_window = tk.Toplevel(self.master)
            draw_window.title("Draw Combined Graph")

            figure = Figure(figsize=(5, 5), dpi=100)
            ax = figure.add_subplot(111)

            node_colors = [selected_graph.nodes[node].get('color', 'red') for node in selected_graph.nodes]
            edge_colors = [selected_graph.edges[edge].get('color', 'blue') for edge in selected_graph.edges]

            pos = nx.spring_layout(selected_graph, seed=42)

            # Draw nodes
            nx.draw_networkx_nodes(selected_graph, pos, ax=ax, node_color=node_colors, node_size=800)
            nx.draw_networkx_labels(selected_graph, pos, ax=ax, font_size=10, font_color='black')

            # Draw edges
            for start, end in selected_graph.edges():
                edge_data = selected_graph.edges[start, end]
                directed = edge_data.get('directed', False)
                edge_color = edge_data.get('color', 'blue')

                if directed:
                    # Draw directed edge with arrow
                    nx.draw_networkx_edges(selected_graph, pos, edgelist=[(start, end)], ax=ax,
                                           edge_color=edge_color, width=1.5, arrows=True, connectionstyle='arc3,rad=0.1')
                else:
                    # Draw undirected edge without arrow
                    nx.draw_networkx_edges(selected_graph, pos, edgelist=[(start, end)], ax=ax,
                                           edge_color=edge_color, width=1.5, arrows=False)

            canvas = FigureCanvasTkAgg(figure, master=draw_window)
            canvas.draw()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

            toolbar = NavigationToolbar2Tk(canvas, draw_window)
            toolbar.update()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def draw_graph(self):
        if self.current_graph:
            edge_type = self.edge_type_var.get().lower()
            if edge_type == 'directed':
                self.draw_directed_graph()
            elif edge_type == 'undirected':
                self.draw_undirected_graph()
            else:
                tk.messagebox.showinfo("Error", "Invalid edge type. Please select 'Directed' or 'Undirected'.")
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
            start_node = simpledialog.askstring(addEdge, "Enter the start node:")
            end_node = simpledialog.askstring(addEdge, "Enter the end node:")

            # Запрос на ввод веса
            weight = simpledialog.askfloat(addEdge, "Enter the weight for the edge:")

            # Get the edge type from the selected option in the menu
            edge_type = self.edge_type_var.get().lower()

            if edge_type in ['directed', 'undirected']:
                # Передача веса при добавлении дуги
                self.graphs[self.current_graph].add_edge(start_node, end_node, weight=weight, directed=edge_type == 'directed')

                # After adding the edge, update the graph visualization
                self.draw_graph()
            else:
                tk.messagebox.showinfo("Error", "Invalid edge type. Please select 'Directed' or 'Undirected'.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")

    def remove_edge(self):
        if self.current_graph:
            start_node = simpledialog.askstring("Remove Edge", "Enter the start node:")
            end_node = simpledialog.askstring("Remove Edge", "Enter the end node:")
            if (start_node, end_node) in self.graphs[self.current_graph].edges:
                self.graphs[self.current_graph].remove_edge(start_node, end_node)
                self.graphs[self.current_graph].remove_edge(end_node,
                                                            start_node)  # Remove the reverse edge for an undirected graph
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
            else:
                tk.messagebox.showinfo("Error", f"Edge not found between nodes '{start_node}' and '{end_node}'.")
        else:
            tk.messagebox.showinfo("Error", "Please select a valid graph.")


if __name__ == "__main__":
    root = tk.Tk()
    app = GraphEditor(root)
    root.mainloop()