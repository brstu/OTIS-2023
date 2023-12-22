from tkinter import Button

def create_buttons(root, canvas, menu_add_vertex, menu_add_edge_window, eulerian_cycle_search_function, shortest_path):
    # List of Buttons
    addVertexButton = Button(root, text="Добавить вершину", anchor="w", command=menu_add_vertex, font=('Arial', 9), width=15, bg='lightblue', fg='black')
    addEdgesButton = Button(root, text="Добавить ребро", anchor="w", command=menu_add_edge_window, font=('Arial', 9), width=15, bg='lightblue', fg='black')
    eulerCycleFindButton = Button(root, text="Эйлеров цикл", anchor="w", command=eulerian_cycle_search_function, font=('Arial', 9), width=15, bg='lightblue', fg='black')
    shortestWayFindButton = Button(root, text="Кратчайший путь", anchor="w", command=shortest_path, font=('Arial', 9), width=15, bg='lightblue', fg='black')
    info = Button(root, text="Информация о графе", anchor="w", command=lambda: None, font=('Arial', 9), width=15, bg='lightblue', fg='black')
    impirt = Button(root, text="Импорт", anchor="w", command=lambda: None, font=('Arial', 9), width=15, bg='lightblue', fg='black')
    export = Button(root, text="Экспорт", anchor="w", command=lambda: None, font=('Arial', 9), width=15, bg='lightblue', fg='black')

    addVertexButton.grid(row=1, column=0, sticky="ew", padx=10, pady=5)
    addEdgesButton.grid(row=2, column=0, sticky="ew", padx=10, pady=5)
    eulerCycleFindButton.grid(row=3, column=0, sticky="ew", padx=10, pady=5)
    shortestWayFindButton.grid(row=4, column=0, sticky="ew", pady=5, padx=10)
    info.grid(row=5, column=0, sticky="ew", pady=30, padx=10)
    impirt.grid(row=6, column=0, sticky="ew", pady=5, padx=10)
    export.grid(row=7, column=0, sticky="ew", pady=5, padx=10)

# Canvas Binds

def bind_canvas(root, canvas, node_movement_function, change_name_weight_function, color_change_function, delete):
    canvas.bind('<B1-Motion>', node_movement_function)
    canvas.bind('<Button-2>', change_name_weight_function)
    canvas.bind('<Button-3>', color_change_function)
    root.bind('<B3-Motion>', delete)
