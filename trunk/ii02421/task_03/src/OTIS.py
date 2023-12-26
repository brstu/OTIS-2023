from tkinter import messagebox, Canvas, Label, Entry, Button, Tk
from tkinter.colorchooser import askcolor
from numpy.random import randint
from numpy import sqrt
import networkx as nx


# This function finds an Eulerian path in the graph.
def e_cycle():
    display_props("Нахождение эйлерова цикла", nx.algorithms.eulerian_path(graph))

# This function creates a circle on the canvas.
def create_circle(x, y, r, **kwargs):
    return canvas.create_oval(x - r, y - r, x + r, y + r, **kwargs)

# This function calculates the coordinates for a line that connects two points, but stops short of the points by a certain distance.
def connecting_line(x1, y1, x2, y2):
    connecting = sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)  # Calculate the distance between the two points
    x = x2 - x1  # Calculate the x-component of the distance
    y = y2 - y1  # Calculate the y-component of the distance
    dx = (connecting - 20) * x / connecting  # Calculate the x-component of the distance to stop short by
    dy = (connecting - 20) * y / connecting  # Calculate the y-component of the distance to stop short by
    return x2 - dx, y2 - dy, x1 + dx, y1 + dy  # Return the coordinates for the line

# This function creates a new vertex in the graph.
def create_vertex(entry_name, window):
    name = entry_name.get()  # Get the name of the new vertex from the entry field
    nodes.append(Node(name))  # Add the new vertex to the list of nodes
    window.destroy()  # Close the window



# This class represents a node in a graph.
class Node:
    # Initialize a new node with a name and random coordinates
    def __init__(self, name):
        self.name = name
        self.x = rng.integers(0, 700)
        self.y = rng.integers(0, 600)
        self.circle = create_circle(self.x, self.y, 20, fill=color_vertex)  # Create a circle for the node
        self.text = canvas.create_text(self.x, self.y, anchor='center', text=name, font="Arial 10", fill="black")  # Create text for the node
        graph.add_node(name)  # Add the node to the graph

    # Move the node to new coordinates
    def move(self, x, y):
        self.x = x
        self.y = y
        canvas.coords(self.circle, x - 20, y - 20, x + 20, y + 20)  # Update circle coordinates
        canvas.coords(self.text, x, y)  # Update text coordinates
        self.update_edges('move')  # Update edges connected to this node

    # Open a window to change the node's name
    def change(self):
        win = Tk()
        win.title("Редактирование имени")
        win.geometry(WINDOW_GEOMETRY)
        win.wm_attributes('-topmost', 3)
        win.resizable(False, False)
        label = Label(win, text="Введите новое имя")
        label.place(x=10, y=10)
        entry = Entry(win, width=10)
        entry.place(x=10, y=40)
        button = Button(win, text="Изменить", command=lambda: self.change_name(entry.get()))
        button.place(x=10, y=70)
        win.mainloop()

    # Change the node's name
    def change_name(self, name):
        graph._adj[name] = graph._adj.pop(self.name)  # Update the adjacency list of the graph
        self.name = name  # Update the name of the node
        canvas.itemconfig(self.text, text=name)  # Update the text displaying the node's name

    # Change the color of the node
    def change_color(self, color):
        canvas.itemconfig(self.circle, fill=color)  # Change the color of the circle representing the node

    # Delete the node
    def delete(self):
        canvas.delete(self.circle)  # Delete the circle representing the node
        canvas.delete(self.text)  # Delete the text displaying the node's name
        self.update_edges('delete')  # Delete edges connected to this node
        graph.remove_node(self.name)  # Remove the node from the graph

    # Update edges connected to the node
    def update_edges(self, action):
        for edge in edges:
            if edge.node1 == self or edge.node2 == self:  # If the edge is connected to this node
                if action == 'move':  # If the action is 'move'
                    edge.move()  # Move the edge
                elif action == 'delete':  # If the action is 'delete'
                    edge.delete()  # Delete the edge
                    edges.remove(edge)  # Remove the edge from the list of edges

class Edge:
    def __init__(self, node1: 'Node', node2: 'Node', weight: int):
        self._initialize_edge(node1, node2, weight)
        self._create_line()
        self._create_text_label()
        self._add_edge_to_graph()

    def _initialize_edge(self, node1: 'Node', node2: 'Node', weight: int):
        self.weight = weight
        self.node1 = node1
        self.node2 = node2

    def _create_line(self):
        self.line = canvas.create_line(self._connecting_line(),
                                       width=2, fill="black")

    def _create_text_label(self):
        self.text = canvas.create_text(self._text_label_position(),
                                       anchor='center', text=self.weight, font="Arial 20", fill="white")

    def _add_edge_to_graph(self):
        graph.add_edge(self.node1.name, self.node2.name, weight=self.weight)

    @staticmethod
    def _connecting_line():
        return self.node1.x, self.node1.y, self.node2.x, self.node2.y

    def _text_label_position(self):
        return (self.node1.x + self.node2.x) / 2, (self.node1.y + self.node2.y) / 2 - 5

    def change(self):
        self._open_change_window()

    def _open_change_window(self):
        win = Tk()
        win.title("Edit Edge Weight")
        win.geometry("190x120+1050+250")
        win.wm_attributes('-topmost', 3)
        win.resizable(False, False)
        
        self._create_gui_elements(win)
        
        win.mainloop()

    def _create_gui_elements(self, win):
        label = Label(win, text="Enter the new weight")
        label.place(x=10, y=10)
        entry = Entry(win, width=10)
        entry.place(x=10, y=40)
        button = Button(win, text="Edit", command=lambda: self.change_weight(entry.get()))
        button.place(x=10, y=70)

    def change_weight(self, weight):
        self._update_weight(weight)
        self._update_text_label()
        self._update_edge_in_graph()

    def _update_weight(self, weight):
        self.weight = int(weight)

    def _update_text_label(self):
        canvas.itemconfig(self.text, text=self.weight)

    def _update_edge_in_graph(self):
        graph.remove_edge(self.node1.name, self.node2.name)
        graph.add_edge(self.node1.name, self.node2.name, weight=self.weight)

    def change_color(self, color):
        canvas.itemconfig(self.line, fill=color)

    def move(self):
        self._move_line()
        self._move_text()

    def _move_line(self):
        canvas.coords(self.line, self._connecting_line())

    def _move_text(self):
        canvas.coords(self.text, self._text_label_position())

    def delete(self):
        self._delete_from_canvas()
        self._delete_from_graph()

    def _delete_from_canvas(self):
        canvas.delete(self.line)
        canvas.delete(self.text)

    def _delete_from_graph(self):
        graph.remove_edge(self.node1.name, self.node2.name)




def chose_color(color_lable):
    global color_vertex
    rgb, hx = askcolor()
    print(rgb)
    color_vertex = hx
    color_lable.config(bg=color_vertex)

def create_add_vertex_window():
    add_window = Tk()
    add_window.title("Add Vertex")
    add_window.geometry("190x120+1050+250")
    add_window.wm_attributes('-topmost', 3)
    add_window.resizable(False, False)
    return add_window

def create_gui_elements(add_window):
    label = Label(add_window, text="Enter vertex name")
    entry_name = Entry(add_window)
    add_button = Button(add_window, text="Choose Color", command=lambda: chose_color(color_lable))
    color_button = Button(add_window, text="Add Vertex", command=lambda: create_vertex(entry_name, add_window))
    color_lable = Label(add_window, width=2, bg="white")
    return label, entry_name, add_button, color_button, color_lable

def place_gui_elements_on_grid(elements):
    label, entry_name, add_button, color_button, color_lable = elements
    label.grid(row=0, column=0, sticky="ew")
    entry_name.grid(row=1, column=0, sticky="ewns")
    add_button.grid(row=2, column=0, sticky="ewns")
    color_button.grid(row=3, column=0, sticky="ewns")
    color_lable.grid(row=1, column=1)

def start_window_main_loop(add_window):
    add_window.mainloop()

# добавления вершин
def menu_add_vertex():
    # Ensure the global color_vertex variable is used within this function.
    global color_vertex
    
    add_window = create_add_vertex_window()
    gui_elements = create_gui_elements(add_window)
    place_gui_elements_on_grid(gui_elements)
    start_window_main_loop(add_window)



def get_weight(entry_weight):
    try:
        return int(entry_weight.get())
    except ValueError:
        messagebox.showerror("Error", "Edge weight must be a number")
        return None

def get_node(entry_node, nodes):
    node_name = entry_node.get()
    for vertex in nodes:
        if vertex.name == node_name:
            return vertex
    return None

def add_edge_to_list(node1, node2, weight, edges):
    edges.append(Edge(node1, node2, weight))

def create_edge(entry_weight, entry_node1, entry_node2, window):
    weight = get_weight(entry_weight)
    if weight is not None:
        node1 = get_node(entry_node1, nodes)
        node2 = get_node(entry_node2, nodes)
        if node1 is not None and node2 is not None:
            add_edge_to_list(node1, node2, weight, edges)
            window.destroy()



# This function creates a menu for adding edges to a graph.
def menu_add_edge():
    # Create a new tkinter window for adding an edge.
    add_window = Tk()
    add_window.title("Add Edge")  # Set the title of the window
    add_window.geometry("220x220+1050+250")  # Set the size and position of the window
    add_window.wm_attributes('-topmost', 3)  # Set the window to always be on top
    add_window.resizable(False, False)  # Make the window non-resizable

    # Create GUI elements for entering edge information.
    label = Label(add_window, text="Starting node")  # Label for the starting node entry field
    entry_node1 = Entry(add_window, text="Starting node")  # Entry field for the starting node
    label2 = Label(add_window, text="Ending node")  # Label for the ending node entry field
    entry_node2 = Entry(add_window, text="Ending node")  # Entry field for the ending node
    label3 = Label(add_window, text="Edge weight")  # Label for the edge weight entry field
    entry_weight = Entry(add_window)  # Entry field for the edge weight
    add_button = Button(add_window, text="Choose Color", command=lambda: chose_color(color_lable))  # Button for choosing the edge color
    color_button = Button(add_window, text="Add Edge", command=lambda: create_edge(entry_weight, entry_node1, entry_node2, add_window))  # Button for adding the edge
    color_lable = Label(add_window, width=2, bg="white")  # Label for displaying the chosen color

    # Place GUI elements on the window grid.
    label.grid(row=0, column=0, sticky="ew")
    entry_weight.grid(row=1, column=0, sticky="n")
    label2.grid(row=2, column=0, sticky="ew")
    entry_node1.grid(row=3, column=0, sticky="n")
    label3.grid(row=4, column=0, sticky="ew")
    entry_node2.grid(row=5, column=0, sticky="n")
    add_button.grid(row=6, column=0, sticky="n")
    color_button.grid(row=7, column=0, sticky="n")
    color_lable.grid(row=1, column=1)

    # Start the window main loop.
    add_window.mainloop()


def move_node(event):
    # Iterate over each node in the nodes list
    for node in nodes:
        # If the event (mouse click) occurred within the boundaries of the node
        if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
            node.move(event.x, event.y)  # Move the node to the new location
            break  # Exit the loop after moving the node


def change_name_or_weight(event):
    x, y = event.x, event.y  # Get the x and y coordinates of the event (mouse click)

    # Iterate over each edge in the edges list
    for edge in edges:
        print(2)  # Print 2 for debugging purposes

        # Calculate the sum of the distances from the event to each node of the edge
        legs_sum = sqrt((x - edge.node1.x) ** 2 + (y - edge.node1.y) ** 2) + sqrt(
            (x - edge.node2.x) ** 2 + (y - edge.node2.y) ** 2)

        # Calculate the length of the edge plus 10
        gipotenusa = sqrt((edge.node2.x - edge.node1.x) ** 2 + (edge.node2.y - edge.node1.y) ** 2) + 10

        # If the sum of the distances is less than or equal to the length of the edge
        if legs_sum <= gipotenusa:
            edge.change()  # Change the name or weight of the edge
            break  # Exit the loop
    else:
        # If no edge was found, iterate over each node in the nodes list
        for node in nodes:
            # If the event occurred within the boundaries of the node
            if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
                node.change()  # Change the name or weight of the node
                break  # Exit the loop


def change_color(event):
    x, y = event.x, event.y  # Get the x and y coordinates of the event (mouse click)

    # Iterate over each node in the nodes list
    for node in nodes:
        # If the event occurred within the boundaries of the node
        if node.x - 25 < event.x < node.x + 25 and node.y - 25 < event.y < node.y + 25:
            node.change_color(askcolor()[1])  # Change the color of the node
            break  # Exit the loop
    else:
        # If no node was found, iterate over each edge in the edges list
        for edge in edges:
            # Calculate the sum of the distances from the event to each node of the edge
            legs_sum = sqrt((x - edge.node1.x) ** 2 + (y - edge.node1.y) ** 2) + sqrt(
                (x - edge.node2.x) ** 2 + (y - edge.node2.y) ** 2)

            # Calculate the length of the edge plus 10
            gipotenusa = sqrt((edge.node2.x - edge.node1.x) ** 2 + (edge.node2.y - edge.node1.y) ** 2) + 10

            # If the sum of the distances is less than or equal to the length of the edge
            if legs_sum <= gipotenusa:
                edge.change_color(askcolor()[1])  # Change the color of the edge
                break  # Exit the loop


def delete(event):
    x, y = event.x, event.y  # Get the x and y coordinates of the event (mouse click)

    # Iterate over each node in the nodes list
    for node in nodes:
        # If the event occurred within the boundaries of the node
        if node.x - 25 < x < node.x + 25 and node.y - 25 < y < node.y + 25:
            node.delete()  # Delete the node
            nodes.remove(node)  # Remove the node from the nodes list
            print(1)  # Print 1 for debugging purposes
            break  # Exit the loop
    else:
        # If no node was found, iterate over each edge in the edges list
        for edge in edges:
            print(2)  # Print 2 for debugging purposes

            # Calculate the sum of the distances from the event to each node of the edge
            legs_sum = sqrt((x - edge.node1.x) ** 2 + (y - edge.node1.y) ** 2) + sqrt(
                (x - edge.node2.x) ** 2 + (y - edge.node2.y) ** 2)

            # Calculate the length of the edge plus 10
            gipotenusa = sqrt((edge.node2.x - edge.node1.x) ** 2 + (edge.node2.y - edge.node1.y) ** 2) + 10

            # If the sum of the distances is less than or equal to the length of the edge
            if legs_sum <= gipotenusa:
                edge.delete()  # Delete the edge
                edges.remove(edge)  # Remove the edge from the edges list
                break  # Exit the loop


def shortest_path():
    enter = []  # Initialize an empty list to store the vertices selected by the user

    win = Tk()  # Create a new tkinter root window
    win.title("Выбор вершин")  # Set the title of the window
    win.geometry("200x120+1050+250")  # Set the size and position of the window
    win.resizable(False, False)  # Make the window non-resizable

    # Create a label and an entry field for the first vertex
    label = Label(win, text="Выберите первую вершину")
    label.grid(row=0, column=0, sticky="ew")
    entry1 = Entry(win)
    entry1.grid(row=1, column=0, sticky="ewns")

    # Create a label and an entry field for the second vertex
    label2 = Label(win, text="Выберите вторую вершину")
    label2.grid(row=2, column=0, sticky="ew")
    entry2 = Entry(win)
    entry2.grid(row=3, column=0, sticky="ewns")

    # Create a button that will call the func function when clicked
    button = Button(win, text="Выбрать", command=lambda: func(enter, win))
    button.grid(row=4, column=0, sticky="ewns")

    def func(arr, win):
        # Add the vertices entered by the user to the arr list
        arr += [entry1.get(), entry2.get()]
        win.destroy()  # Close the window

        # Display the shortest path between the two vertices
        display_props("Кратчайший путь", nx.algorithms.shortest_path(graph, arr[0], arr[1]))

    win.mainloop()  # Start the tkinter event loop

    return enter  # Return the list of vertices entered by the user


def display_props(title, props):
    string = ''  # Initialize an empty string
    for prop in props:  # Iterate over each property in the provided list
        string += str(prop) + ' '  # Convert the property to string and append it to the string variable with a space

    win = Tk()  # Create a new tkinter root window
    win.title(title)  # Set the title of the window with the provided title
    win.geometry("500x500")  # Set the size of the window

    label = Label(win, text=string)  # Create a label with the concatenated string of properties
    label.pack()  # Add the label to the window

    win.mainloop()  # Start the tkinter event loop

FONT_ARIAL_BOLD = ("Arial Bold", 10)

nodes = []  # List of vertices
edges = []  # List of edges
color_vertex = "azure2"  # Default color for vertices
graph = nx.Graph()  # Create an empty graph

root = Tk()  # Create a new tkinter root window
root.title("Графовый редактор")  # Set the title of the window

# Create labels with instructions for the user
lbl1 = Label(root, text="Для удаления элемента кликните дважды", font=FONT_ARIAL_BOLD)
lbl2 = Label(root, text="Для изменения параметров элемента кликните левой кнопкой мыши", font=FONT_ARIAL_BOLD)
lbl3 = Label(root, text="Для изменения цвета кликните правой кнопкой мыши", font=FONT_ARIAL_BOLD)

# Place the labels on the grid
lbl1.grid(column=0, row=4)
lbl2.grid(column=0, row=5)
lbl3.grid(column=0, row=6)

root.geometry("900x900")  # Set the size of the window

# Create a canvas for drawing the graph
canvas = Canvas(root, width=700, height=900, bg="lavender")
canvas.place(x=600, y=0)

# Create buttons for various actions
button1 = Button(root, text="Новая вершина", anchor="w", command=menu_add_vertex, font=("Courier", 12), bg="thistle2")
button2 = Button(root, text="Создать ребро", anchor="w", command=menu_add_edge, font=("Courier", 12), bg="light cyan")
button3 = Button(root, text="Нахождение кратчайший путь", anchor="w", command=e_cycle, font=("Courier", 12), bg="light blue")
button4 = Button(root, text="Построение эйлерова цикл", anchor="w", command=shortest_path, font=("Courier", 12), bg="MistyRose2")

# Place the buttons on the grid
button1.grid(row=0, column=0, stick="ew")
button2.grid(row=1, column=0, stick="ew")
button3.grid(row=2, column=0, stick="ew")
button4.grid(row=3, column=0, stick="ew")

# Bind various events to their respective handlers
canvas.bind('<B1-Motion>', move_node)  # Move node on left mouse button drag
canvas.bind('<Button-2>', change_name_or_weight)  # Change name or weight on middle mouse button click
canvas.bind('<Button-3>', change_color)  # Change color on right mouse button click
canvas.bind('<Double-Button>', delete)  # Delete on double click
root.bind('<B3-Motion>', delete)  # Delete on right mouse button drag

root.mainloop()  # Start the tkinter event loop
