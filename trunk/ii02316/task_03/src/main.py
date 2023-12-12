import tkinter as tk
from tkinter import ttk, messagebox, simpledialog, colorchooser
import networkx as nx
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk
from tkinter import filedialog
import json
import numpy as np

addEdge = "Add Edge"
GraphInfo = "Graph Info"
DrawGraph = "Draw Graph"
Directed = "Directed"
Undirected = "Undirected"
RemoveEdge = "Remove Edge"
EditNodeContent = "Edit Node Content"
ColorNode = "Color Node"
ColorEdge = "Color Edge"
FindPaths = "Find Paths"
ShortestPath = "Shortest Path"
CalculateDistance = "Calculate Distance"
AdvancedGraphInfo = "Advanced Graph Info"
Pleaseselectavalidgraph = "Please select a valid graph."
GraphName = "Graph Name"
Graphwiththisnamealreadyexists = "Graph with this name already exists."
Enterthestartnode = "Enter the start node:"
Pleaseentervalidstartandendnodes = "Please enter valid start and end nodes."
Entertheendnode = "Enter the end node:"
style = 'arc3,rad=0.1'
class MDIGraphEditor:
    def __init__(self, master):
        self.master = master
        self.master.title("MDI Graph Editor")

        self.notebook = ttk.Notebook(self.master)
        self.notebook.pack(fill=tk.BOTH, expand=True)

        self.graph_editors = {}

        self.new_tab_button = tk.Button(self.master, text="New Graph Tab", command=self.create_new_tab)
        self.new_tab_button.pack()

    def create_new_tab(self):
        new_tab = ttk.Frame(self.notebook)
        graph_name = f"Graph {len(self.graph_editors) + 1}"

        # Добавлена проверка на существование вкладки
        if new_tab not in self.graph_editors:
            graph_editor = GraphEditor(new_tab, graph_name)
            self.graph_editors[new_tab] = graph_editor
            self.notebook.add(new_tab, text=graph_name)
            self.notebook.select(new_tab)  # Сделать новую вкладку текущей

    def on_closing(self):
        for graph_editor in self.graph_editors.values():
            graph_editor.save_on_exit()
        self.master.destroy()

    def run(self):
        self.master.protocol("WM_DELETE_WINDOW", self.on_closing)
        self.master.mainloop()

class GraphEditor:
    def __init__(self, master, graph_name):
        self.master = master
        self.top_level = tk.Toplevel(master)  # Изменено: использование Toplevel вместо Frame
        self.top_level.title(f"Graph Editor - {graph_name}")
        self.graph_name = graph_name

        #self.master.title("Graph Editor")

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

        self.info_button = tk.Button(self.info_draw_frame, text=GraphInfo, command=self.display_graph_info)
        self.info_button.pack(side=tk.LEFT)

        self.draw_graph_button = tk.Button(self.info_draw_frame, text=DrawGraph, command=self.draw_graph)
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

        self.edge_type_menu = tk.OptionMenu(self.master, self.edge_type_var, Directed, Undirected)
        self.edge_type_menu.pack(pady=5)

        self.add_edge_button = tk.Button(self.master, text=addEdge, command=self.add_edge)
        self.add_edge_button.pack(pady=5)

        self.remove_edge_button = tk.Button(self.master, text=RemoveEdge, command=self.remove_edge)
        self.remove_edge_button.pack(pady=5)

        self.edit_node_button = tk.Button(self.master, text=EditNodeContent, command=self.edit_node_content)
        self.edit_node_button.pack(pady=5)

        self.color_node_button = tk.Button(self.master, text=ColorNode, command=self.color_node)
        self.color_node_button.pack(pady=5)

        self.color_edge_button = tk.Button(self.master, text=ColorEdge, command=self.color_edge)
        self.color_edge_button.pack(pady=5)

        self.find_paths_button = tk.Button(self.master, text=FindPaths, command=self.show_find_paths_dialog)
        self.find_paths_button.pack(pady=5)

        self.find_shortest_path_button = tk.Button(self.master, text=ShortestPath, command=self.show_find_shortest_path_dialog)
        self.find_shortest_path_button.pack(pady=5)

        self.calculate_distance_button = tk.Button(self.master, text=CalculateDistance,
                                                   command=self.calculate_distance_between_nodes)
        self.calculate_distance_button.pack(pady=5)

        self.calculate_metrics_button = tk.Button(self.master, text="Calculate Metrics", command=self.calculate_diameter_radius_center)
        self.calculate_metrics_button.pack(pady=5)

        self.find_eulerian_cycles_button = tk.Button(self.master, text="Find Eulerian Cycles", command=self.find_eulerian_cycles)
        self.find_eulerian_cycles_button.pack(pady=5)

        # Additional button for displaying advanced graph information
        self.advanced_info_button = tk.Button(self.info_draw_frame, text=AdvancedGraphInfo,
                                              command=self.display_advanced_graph_info)
        self.advanced_info_button.pack(side=tk.LEFT, padx=5)

        self.export_button = tk.Button(self.master, text="Export Graph", command=self.show_export_dialog)
        self.export_button.pack(side=tk.LEFT, padx=5)

        self.import_button = tk.Button(self.master, text="Import Graph", command=self.show_import_dialog)
        self.import_button.pack(side=tk.LEFT, padx=5)

    def export_graph(self, file_path):
        if self.current_graph:
            graph_data = nx.node_link_data(self.graphs[self.current_graph])
            with open(file_path, 'w') as file:
                json.dump(graph_data, file)
            tk.messagebox.showinfo("Export Successful", "Graph exported successfully.")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def import_graph(self, file_path):
        try:
            with open(file_path, 'r') as file:
                graph_data = json.load(file)
                graph_name = simpledialog.askstring(GraphName, "Enter a name for the loaded graph:")

                if graph_name:
                    if graph_name not in self.graphs:
                        new_graph = nx.node_link_graph(graph_data)
                        self.graphs[graph_name] = new_graph
                        self.current_graph = graph_name
                        self.graph_dropdown['values'] = list(self.graphs.keys())
                        self.graph_dropdown.set(graph_name)
                        self.draw_graph()
                    else:
                        tk.messagebox.showinfo("Error", Graphwiththisnamealreadyexists)
        except Exception as e:
            tk.messagebox.showinfo("Error", f"Error during graph import: {e}")

    def show_export_dialog(self):
        if self.current_graph:
            file_path = filedialog.asksaveasfilename(defaultextension=".txt", filetypes=[("Text files", "*.txt")])
            if file_path:
                self.export_graph(file_path)
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def show_import_dialog(self):
        file_path = filedialog.askopenfilename(filetypes=[("Text files", "*.txt")])
        if file_path:
            self.import_graph(file_path)
    def on_closing(self):
        self.top_level.withdraw()

    def run(self):
        self.top_level.protocol("WM_DELETE_WINDOW", self.on_closing)

    def save_on_exit(self):
        print(f"Saving graph data for {self.graph_name}")

    def display_advanced_graph_info(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            # Number of vertices and edges
            num_vertices = selected_graph.number_of_nodes()
            num_edges = selected_graph.number_of_edges()

            # Degrees for all vertices
            degrees = [selected_graph.degree(node) for node in selected_graph.nodes]

            # Degree for the selected vertex
            selected_vertex = simpledialog.askstring(AdvancedGraphInfo, "Enter the vertex to get degree:")
            if selected_vertex is not None:
                if selected_vertex in selected_graph:
                    selected_vertex_degree = selected_graph.degree(selected_vertex)
                else:
                    tk.messagebox.showinfo("Error", f"Vertex '{selected_vertex}' not found in the graph.")
                    return
            else:
                selected_vertex_degree = None

            # Incidence matrix
            incidence_matrix = nx.incidence_matrix(selected_graph).toarray()

            # Adjacency matrix
            adjacency_matrix = nx.to_numpy_array(selected_graph, dtype=int)

            # Properties: tree, complete, connected, eulerian
            is_tree = nx.is_tree(selected_graph)
            is_complete = self.is_complete(selected_graph)
            is_connected = nx.is_weakly_connected(selected_graph) if selected_graph.is_directed() else nx.is_connected(
                selected_graph)
            is_eulerian = nx.is_eulerian(selected_graph) if not selected_graph.is_directed() else False

            info_window = tk.Toplevel(self.master)
            info_window.title("AdvancedGraphInformation")

            info_str = (
                f"Number of Vertices: {num_vertices}\n"
                f"Number of Edges: {num_edges}\n"
                f"Degrees: {degrees}\n\n"
                f"Degree of Selected Vertex '{selected_vertex}': {selected_vertex_degree}\n\n"
                f"Incidence Matrix:\n{np.array2string(incidence_matrix, separator=', ')}\n\n"
                f"Adjacency Matrix:\n{np.array2string(adjacency_matrix, separator=', ')}\n\n"
                f"Is Tree: {is_tree}\n"
                f"Is Complete: {is_complete}\n"
                f"Is Connected: {is_connected}\n"
                f"Is Eulerian: {is_eulerian}"
            )

            info_label = tk.Label(info_window, text=info_str, justify=tk.LEFT)
            info_label.pack(padx=10, pady=10)
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def is_complete(self, graph):
        if graph.is_directed():
            return False  # Directed graph cannot be complete
        else:
            num_nodes = graph.number_of_nodes()
            num_possible_edges = num_nodes * (num_nodes - 1) // 2
            return graph.number_of_edges() == num_possible_edges

    def calculate_distance_between_nodes(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            start_node = simpledialog.askstring(CalculateDistance, Enterthestartnode)
            end_node = simpledialog.askstring(CalculateDistance, Entertheendnode)

            if start_node is not None and end_node is not None:
                try:
                    distance = nx.shortest_path_length(selected_graph, source=start_node, target=end_node)
                    tk.messagebox.showinfo("Distance", f"Distance between {start_node} and {end_node}: {distance}")
                except nx.NetworkXNoPath:
                    tk.messagebox.showinfo("Error", "No path found between the specified nodes.")
            else:
                tk.messagebox.showinfo("Error", Pleaseentervalidstartandendnodes)
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def create_distance_button(self):
                self.calculate_distance_button = tk.Button(self.master, text="Calculate Distance Between Nodes",
                                                           command=self.calculate_distance_between_nodes)
                self.calculate_distance_button.pack(pady=5)

    def split_path_inout(self):
        path_iter = iter(self)
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
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)
    def show_find_shortest_path_dialog(self):
        start_node = simpledialog.askstring(ShortestPath, Enterthestartnode)
        end_node = simpledialog.askstring(ShortestPath, Entertheendnode)
        if start_node and end_node:
            self.find_shortest_path(start_node, end_node)
        else:
            tk.messagebox.showinfo("Error", Pleaseentervalidstartandendnodes)

    def show_find_paths_dialog(self):
        start_node = simpledialog.askstring(FindPaths, Enterthestartnode)
        end_node = simpledialog.askstring(FindPaths, Entertheendnode)
        if start_node and end_node:
            self.find_all_paths(start_node, end_node)
        else:
            tk.messagebox.showinfo("Error", Pleaseentervalidstartandendnodes)

    def find_all_paths(self, start_node, end_node):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            all_paths = list(nx.all_simple_paths(selected_graph, source=start_node, target=end_node))
            tk.messagebox.showinfo("All Paths", f"All paths from {start_node} to {end_node}:\n{all_paths}")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def find_shortest_path(self, start_node, end_node):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            shortest_path = nx.shortest_path(selected_graph, source=start_node, target=end_node)
            shortest_distance = nx.shortest_path_length(selected_graph, source=start_node, target=end_node)
            tk.messagebox.showinfo(ShortestPath, f"Shortest path from {start_node} to {end_node}:\n{shortest_path}\n"
                                                    f"Shortest distance: {shortest_distance}")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def calculate_diameter_radius_center(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            diameter = nx.diameter(selected_graph)
            radius = nx.radius(selected_graph)
            center = nx.center(selected_graph)
            tk.messagebox.showinfo("Graph Metrics", f"Diameter: {diameter}\nRadius: {radius}\nCenter: {center}")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def find_eulerian_cycles(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            try:
                eulerian_cycles = list(nx.eulerian_circuit(selected_graph))
                tk.messagebox.showinfo("Eulerian Cycles", f"Eulerian cycles:\n{eulerian_cycles}")
            except nx.NetworkXError:
                tk.messagebox.showinfo("Error", "Graph does not have an Eulerian circuit.")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)
    def create_graph(self):
        graph_name = simpledialog.askstring(GraphName, "Enter a name for the graph:")
        if graph_name:
            if graph_name not in self.graphs:
                self.graphs[graph_name] = nx.DiGraph()  # Use DiGraph for a directed graph
                self.current_graph = graph_name
                self.graph_dropdown['values'] = list(self.graphs.keys())
                self.graph_dropdown.set(graph_name)
            else:
                tk.messagebox.showinfo("Error", Graphwiththisnamealreadyexists)

    def set_graph_name(self):
        if self.current_graph:
            new_name = simpledialog.askstring(GraphName, "Enter a new name for the graph:")
            if new_name:
                if new_name not in self.graphs:
                    self.graphs[new_name] = self.graphs.pop(self.current_graph)
                    self.current_graph = new_name
                    self.graph_dropdown['values'] = list(self.graphs.keys())
                    self.graph_dropdown.set(new_name)
                else:
                    tk.messagebox.showinfo("Error", Graphwiththisnamealreadyexists)
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def save_graph(self):
        if self.current_graph:
            file_path = filedialog.asksaveasfilename(defaultextension=".json", filetypes=[("JSON files", "*.json")])
            if file_path:
                with open(file_path, 'w') as file:
                    json.dump(nx.node_link_data(self.graphs[self.current_graph]), file)
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def load_graph(self):
        file_path = filedialog.askopenfilename(filetypes=[("JSON files", "*.json")])
        if file_path:
            with open(file_path, 'r') as file:
                data = json.load(file)
                new_graph = nx.node_link_graph(data)
                graph_name = simpledialog.askstring(GraphName, "Enter a name for the loaded graph:")
                if graph_name:
                    if graph_name not in self.graphs:
                        self.graphs[graph_name] = new_graph
                        self.current_graph = graph_name
                        self.graph_dropdown['values'] = list(self.graphs.keys())
                        self.graph_dropdown.set(graph_name)
                    else:
                        tk.messagebox.showinfo("Error", Graphwiththisnamealreadyexists)

    def display_graph_info(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]
            num_nodes = selected_graph.number_of_nodes()
            num_edges = selected_graph.number_of_edges()
            degrees = [selected_graph.degree(node) for node in selected_graph.nodes]

            info_str = f"Graph Info:\nNumber of Nodes: {num_nodes}\nNumber of Edges: {num_edges}\nDegrees: {degrees}"
            tk.messagebox.showinfo("Graph Info", info_str)
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

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
                                   connectionstyle=style, arrows=True, width=1.5, arrowstyle='->')
            nx.draw_networkx_edge_labels(selected_graph, pos, edge_labels=edge_labels, ax=ax)

            canvas = FigureCanvasTkAgg(figure, master=draw_window)
            canvas.draw()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

            toolbar = NavigationToolbar2Tk(canvas, draw_window)
            toolbar.update()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

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
                                   edge_color=edge_colors, connectionstyle=style, width=1.5, arrows=False)

            canvas = FigureCanvasTkAgg(figure, master=draw_window)
            canvas.draw()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

            toolbar = NavigationToolbar2Tk(canvas, draw_window)
            toolbar.update()
            canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)


    def draw_combined_graph(self):
        if self.current_graph:
            selected_graph = self.graphs[self.current_graph]

            draw_window = tk.Toplevel(self.master)
            draw_window.title("Draw Combined Graph")

            figure = Figure(figsize=(5, 5), dpi=100)
            ax = figure.add_subplot(111)

            node_colors = [selected_graph.nodes[node].get('color', 'red') for node in selected_graph.nodes]

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
                                           edge_color=edge_color, width=1.5, arrows=True, connectionstyle=style)
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
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

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
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def add_node(self):
        if self.current_graph:
            node_content = self.node_content.get()
            self.graphs[self.current_graph].add_node(node_content)
            tk.messagebox.showinfo("Node Added", f"Node '{node_content}' added to the graph.")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def remove_node(self):
        if self.current_graph:
            node_content = self.node_content.get()
            if node_content in self.graphs[self.current_graph]:
                self.graphs[self.current_graph].remove_node(node_content)
                tk.messagebox.showinfo("Node Removed", f"Node '{node_content}' removed from the graph.")
            else:
                tk.messagebox.showinfo("Error", f"Node '{node_content}' not found in the graph.")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def add_edge(self):
        if self.current_graph:
            start_node = simpledialog.askstring(addEdge, Enterthestartnode)
            end_node = simpledialog.askstring(addEdge, Entertheendnode)

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
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def remove_edge(self):
        if self.current_graph:
            start_node = simpledialog.askstring(RemoveEdge, Enterthestartnode)
            end_node = simpledialog.askstring(RemoveEdge, Entertheendnode)
            if (start_node, end_node) in self.graphs[self.current_graph].edges:
                self.graphs[self.current_graph].remove_edge(start_node, end_node)
                self.graphs[self.current_graph].remove_edge(end_node,
                                                            start_node)  # Remove the reverse edge for an undirected graph
                tk.messagebox.showinfo("Edge Removed", f"Edge removed between nodes '{start_node}' and '{end_node}'.")
            else:
                tk.messagebox.showinfo("Error", f"Edge not found between nodes '{start_node}' and '{end_node}'.")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def edit_node_content(self):
        if self.current_graph:
            old_content = self.node_content.get()
            new_content = simpledialog.askstring(EditNodeContent, f"Enter new content for node '{old_content}':")
            if new_content is not None:
                if old_content in self.graphs[self.current_graph]:
                    self.graphs[self.current_graph].remove_node(old_content)
                    self.graphs[self.current_graph].add_node(new_content)
                    tk.messagebox.showinfo("Node Content Edited", f"Content of node '{old_content}' edited to '{new_content}'.")
                else:
                    tk.messagebox.showinfo("Error", f"Node '{old_content}' not found in the graph.")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def color_node(self):
        if self.current_graph:
            node_content = simpledialog.askstring(ColorNode, "Enter the node to color:")
            if node_content in self.graphs[self.current_graph]:
                color = colorchooser.askcolor()[1]
                self.graphs[self.current_graph].nodes[node_content]['color'] = color
            else:
                tk.messagebox.showinfo("Error", f"Node '{node_content}' not found in the graph.")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)

    def color_edge(self):
        if self.current_graph:
            start_node = simpledialog.askstring(ColorEdge, Enterthestartnode)
            end_node = simpledialog.askstring(ColorEdge, Entertheendnode)
            if (start_node, end_node) in self.graphs[self.current_graph].edges:
                color = colorchooser.askcolor()[1]
                self.graphs[self.current_graph].edges[start_node, end_node]['color'] = color
            else:
                tk.messagebox.showinfo("Error", f"Edge not found between nodes '{start_node}' and '{end_node}'.")
        else:
            tk.messagebox.showinfo("Error", Pleaseselectavalidgraph)


if __name__ == "__main__":
    root = tk.Tk()
    mdi_app = MDIGraphEditor(root)
    mdi_app.run()