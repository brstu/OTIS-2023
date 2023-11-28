import matplotlib.pyplot as plt

# Чтение данных из файлов
def read_file(filename):
    x = []
    y = []
    with open(filename, 'r') as file:
        for line in file:
            data = line.split()
            x.append(float(data[0]))
            y.append(float(data[1]))
    return x, y

# Чтение данных для первого графика
x1, y1 = read_file('lin.txt')

# Чтение данных для второго графика
x2, y2 = read_file('nonlin.txt')

# Построение графиков
plt.scatter(x1, y1, color='blue', label='График 1')
plt.scatter(x2, y2, color='red', label='График 2')

# Настройки графика
plt.title('Два графика на одном')
plt.xlabel('Ось X')
plt.ylabel('Ось Y')
plt.legend()

# Отображение графика
plt.show()
