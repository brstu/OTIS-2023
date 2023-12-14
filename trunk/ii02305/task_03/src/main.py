import tkinter as tk
from tkinter import messagebox, simpledialog, colorchooser


class Graph:
    def __init__(self):
        self.click_nums: int = 0
        self.id_of_edge_unique = 0
        self.text_of_button_first = "<Button-1>"
        self.num_vertexes = "number of vertex"
        self.id_text_global = "id text"
        self.text_vertex_global = "text on vertex"
        self.circle_id_num = None
        self.circle = []
        self.edges_array = []
        self.i = 0
        self.id_text = 0
        self.tag = 0
        self.x1, self.y1, self.x2, self.y2 = 0, 0, 0, 0
        self.object_edge_first = {'id_vertex1': [], 'id_vertex2': []}
        self.object_edge_second = {'id_edge_text': [], 'id_vertex1': [], 'id_vertex2': []}
        self.object_first = {'id': [], self.id_text_global: [], self.text_vertex_global: [], 'textID': [],
                             self.num_vertexes: [],
                             'coordinatesX': [], 'coordinatesY': []}
        self.array_size = len(self.object_first['id'])
        self.array = [[0] * self.array_size for _ in range(self.array_size)]
        self.root = tk.Tk()
        self.canvas = tk.Canvas(self.root, width=1920, height=1080)
        self.canvas.pack()

    def draw_vertex_handler(self):
        main_label.configure(text="You have chosen to draw vertices, click on the free space to draw the vertex")
        self.canvas.unbind(self.text_of_button_first)
        self.canvas.bind(self.text_of_button_first, self.draw_canvas_handler)

    def delete_canvas_handler(self, event):
        for x in self.circle:
            if self.canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                self.object_first[self.num_vertexes].remove(
                    self.object_first[self.num_vertexes][self.object_first['id'].index(x)])
                self.canvas.delete(self.object_first[self.id_text_global][self.object_first['id'].index(x)])
                self.object_first['textID'].remove(self.object_first['textID'][self.object_first['id'].index(x)])
                self.object_first[self.id_text_global].remove(
                    self.object_first[self.id_text_global][self.object_first['id'].index(x)])
                self.object_first["coordinatesX"].remove(
                    self.object_first['coordinatesX'][self.object_first['id'].index(x)])
                self.object_first["coordinatesY"].remove(
                    self.object_first['coordinatesY'][self.object_first['id'].index(x)])
                self.object_first[self.text_vertex_global].remove(
                    self.object_first[self.text_vertex_global][self.object_first['id'].index(x)])
                self.object_first['id'].remove(x)
                break

    def draw_edge_handler(self):
        main_label.configure(text="You have chosen to draw edges, click on the vertex to draw the edge")
        self.canvas.unbind(self.text_of_button_first)
        self.canvas.bind(self.text_of_button_first, self.draw_canvas_handler_second)

    def delete_vertex_handler(self):
        main_label.configure(text="You have chosen to delete a vertex or edge, click on the vertex or edge to delete")
        self.canvas.unbind(self.text_of_button_first)
        self.canvas.bind(self.text_of_button_first, self.delete_canvas_handler)

    def rename_vertex_handler(self):
        main_label.configure(text="You have chosen to rename a vertex, click on the vertex to rename it")
        self.canvas.unbind(self.text_of_button_first)
        self.canvas.bind(self.text_of_button_first, self.rename_handler)

    def edge_click_handler(self):
        print("Vertex")
        for key, value in self.object_first.items():
            print(key, value)
        print("Edge")
        for value in self.object_edge_first.values():
            print(value, end=", ")

    def change_color_handler(self):
        main_label.configure(
            text="You have chosen to change the color of the vertex, click on the vertex to change its color")
        self.canvas.unbind(self.text_of_button_first)
        self.canvas.bind(self.text_of_button_first, self.colour_handler)

    def change_text_color_handler(self):
        main_label.configure(
            text="You have chosen to change the color of the text, click on the vertex to change the color of its text")
        self.canvas.unbind(self.text_of_button_first)
        self.canvas.bind(self.text_of_button_first, self.text_colour_handler)

    def change_edge_color_handler(self):
        main_label.configure(text="You have chosen to change the color of the edges, click on the edge to change color")
        self.canvas.unbind(self.text_of_button_first)
        self.canvas.bind(self.text_of_button_first, self.edge_colour_handler)

    def rename_handler(self, event):
        for x in self.circle:
            if self.canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                new_name = simpledialog.askstring("Rename", "Enter new name")
                self.canvas.create_text(self.object_first['coordinatesX'][self.object_first['id'].index(x)],
                                        self.object_first['coordinatesY'][self.object_first['id'].index(x)],
                                        text=new_name, font="Arial 13",
                                        tags=(self.object_first['textID'][self.object_first['id'].index(x)]))

                self.object_first[self.text_vertex_global][self.object_first['id'].index(x)] = new_name
                break

    def draw_canvas_handler(self, event):
        self.id_text += 1
        self.i += 1
        itext = str(self.i)
        x, y = event.x, event.y
        tag = 'oval' + str(self.id_text)
        text: str = 'text' + str(self.id_text)

        self.object_first[self.num_vertexes].append(self.id_text)
        self.object_first[self.id_text_global].append(tag)
        self.object_first["coordinatesX"].append(x)
        self.object_first["coordinatesY"].append(y)

        self.circle_id_num = self.canvas.create_oval(x - 20, y - 20, x + 20, y + 20, fill='green', tags=tag)
        self.circle.append(self.circle_id_num)
        self.object_first['id'].append(self.circle_id_num)
        self.canvas.create_text(x, y, text=itext, font="Arial 14", tags=text)
        self.object_first['textID'].append(text)
        self.object_first[self.text_vertex_global].append(itext)

    def draw_canvas_handler_second(self, event):
        if self.click_nums == 0:
            for x in self.circle:
                if self.canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                    self.x1 = self.object_first['coordinatesX'][self.object_first['id'].index(x)]
                    self.y1 = self.object_first['coordinatesY'][self.object_first['id'].index(x)]
                    self.object_edge_second['id_vertex1'].append(x)
                    self.object_edge_first['id_vertex1'].append(x)
                    self.click_nums = 1
                    main_label.configure(text="Select the second vertex to draw the edge")
        elif self.click_nums == 1:
            # Select the second vertex and draw the edge
            for x in self.circle:
                if self.canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                    self.x2 = self.object_first['coordinatesX'][self.object_first['id'].index(x)]
                    self.y2 = self.object_first['coordinatesY'][self.object_first['id'].index(x)]
                    self.object_edge_second['id_vertex2'].append(x)
                    self.object_edge_first['id_vertex2'].append(x)
            tag_edge = 'edge' + str(self.id_of_edge_unique)
            line = self.canvas.create_line(self.x1, self.y1, self.x2, self.y2, width=4, tags=tag_edge)
            self.edges_array.append(self.id_of_edge_unique)
            self.object_edge_second['id_edge_text'].append(tag_edge)
            self.id_of_edge_unique += 1
            self.canvas.tag_lower(line)
            self.click_nums = 0
            main_label.configure(text="Select a vertex to draw an edge on")

    def colour_handler(self, event):
        for x in self.circle:
            if self.canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == x:
                new_colour = colorchooser.askcolor()
                color_hex = new_colour[1]
                self.canvas.itemconfig(x, fill=color_hex)
                break

    def text_colour_handler(self, event):
        for oval in self.circle:
            if self.canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == oval:
                new_colour = colorchooser.askcolor()
                color_hex = new_colour[1]
                self.canvas.itemconfig(self.object_first['textID'][self.object_first['id'].index(oval)], fill=color_hex)
                break

    def edge_colour_handler(self, event):
        for edge in self.edges_array:
            tag_edge = 'edge' + str(edge)
            if self.canvas.find_overlapping(event.x, event.y, event.x, event.y)[0] == \
                    self.canvas.find_withtag(tag_edge)[0]:
                new_colour = colorchooser.askcolor()
                color_hex = new_colour[1]
                self.canvas.itemconfig(tag_edge, fill=color_hex)
                break

    def fill_adjacency_matrix(self):
        for edge_index in range(len(self.object_edge_second['id_vertex1'])):
            vertex1_index = self.object_first['id'].index(self.object_edge_second['id_vertex1'][edge_index])
            vertex2_index = self.object_first['id'].index(self.object_edge_second['id_vertex2'][edge_index])
            self.array[vertex1_index][vertex2_index] = 1
            self.array[vertex2_index][vertex1_index] = 1

    def adjacency_matrix_handler(self):
        k = 0
        adj_matrix = tk.Tk()
        adj_matrix.title("Adjacency matrix")
        adj_matrix.geometry("250x250")

        self.fill_adjacency_matrix()
        for i3, val3 in enumerate(self.array):
            adj_matrix_label = tk.Label(adj_matrix, text=str(val3))
            adj_matrix_label.grid(row=k, column=0)
            i3 += 1
            print(i3)

    def incidence_matrix_handler(self):
        k = 0
        inc_matrix = tk.Tk()
        inc_matrix.title("Incidence matrix")
        inc_matrix.geometry("250x250")

        for index in range(len(self.object_edge_second['id_vertex1'])):
            self.array[self.object_first['id'].index(self.object_edge_second['id_vertex1'][index])][
                self.edges_array.index(self.object_edge_second['id_edge_text'].index(self.object_edge_second['id_edge_text'][index]))] = 1
            self.array[self.object_first['id'].index(self.object_edge_second['id_vertex2'][index])][
                self.edges_array.index(self.object_edge_second['id_edge_text'].index(self.object_edge_second['id_edge_text'][index]))] = 1
        for index2, value1 in enumerate(self.array):
            inc_matrix_label = tk.Label(inc_matrix, text=str(value1))
            inc_matrix_label.grid(row=k, column=0)
            k += 1
            index2 += 1
            print(index2)

    def dfs_handler(self):
        visited = [False] * len(self.circle)

        def dfs_rec_handler(vert):
            visited[vert] = True
            for u in range(len(self.circle)):
                if self.array[vert][u] == 1 and not visited[u]:
                    dfs_rec_handler(u)

        self.fill_adjacency_matrix()
        count = 0
        for v in range(len(self.circle)):
            if not visited[v]:
                dfs_rec_handler(v)
                count += 1
        messagebox.showinfo("DFS", "Graph is connected" if count == 1 else "Graph is not connected")

    def bfs_handler(self):
        visited = [False] * len(self.circle)

        def bfs_rec_handler(vert):
            visited[vert] = True
            for u in range(len(self.circle)):
                if self.array[vert][u] == 1 and not visited[u]:
                    bfs_rec_handler(u)

        self.fill_adjacency_matrix()
        count = 0
        for v in range(len(self.circle)):
            if not visited[v]:
                bfs_rec_handler(v)
                count += 1
        messagebox.showinfo("BFS", "Graph is connected" if count == 1 else "Graph is not connected")


if __name__ == "__main__":
    root = tk.Tk()
    tk.Tk.geometry(root, "800x600")
    root.title("Graph")
    main_label = tk.Label(root, text="Select an action")
    main_label.pack(side=tk.BOTTOM)

    menubar = tk.Menu(root)
    root.config(menu=menubar)
    graphmenu = tk.Menu(menubar, tearoff=0)
    menubar.add_cascade(label="Graph", menu=graphmenu)

    graphmenu.add_command(label="Draw a vertex", command=Graph.draw_vertex_handler)
    graphmenu.add_command(label="Draw an edge", command=Graph.draw_edge_handler)
    graphmenu.add_command(label="Removing vertices or edges", command=Graph.delete_vertex_handler)

    redmenu = tk.Menu(menubar, tearoff=0)
    menubar.add_cascade(label="Editing", menu=redmenu)
    redmenu.add_command(label="Rename a vertex", command=Graph.rename_vertex_handler)
    redmenu.add_command(label="Repaint the vertex", command=Graph.change_color_handler)
    redmenu.add_command(label="Recolor text", command=Graph.change_text_color_handler)
    redmenu.add_command(label="Repaint an edge", command=Graph.change_edge_color_handler)

    algmenu = tk.Menu(menubar, tearoff=0)
    menubar.add_cascade(label="Algorithms", menu=algmenu)
    algmenu.add_command(label="Output the adjacency matrix", command=Graph.adjacency_matrix_handler)
    algmenu.add_command(label="Output the incidence matrix", command=Graph.incidence_matrix_handler)
    algmenu.add_command(label="Search in depth", command=Graph.dfs_handler)
    algmenu.add_command(label="Search in width", command=Graph.bfs_handler)

    root.mainloop()
