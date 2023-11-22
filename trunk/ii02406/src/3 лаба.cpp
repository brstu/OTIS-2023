#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

// Класс, представляющий вершину графа
class Vertex {
public:
    int id;
    std::vector<int> neighbors;

    Vertex(int _id) : id(_id) {}
};

// Класс, представляющий граф
class Graph {
public:
    std::vector<Vertex> vertices;

    void addVertex(int id) {
        vertices.emplace_back(id);
    }

    void addEdge(int src, int dest) {
        vertices[src].neighbors.push_back(dest);
        vertices[dest].neighbors.push_back(src);
    }

    void removeEdge(int src, int dest) {
        auto& srcNeighbors = vertices[src].neighbors;
        auto& destNeighbors = vertices[dest].neighbors;
        srcNeighbors.erase(std::remove(srcNeighbors.begin(), srcNeighbors.end(), dest), srcNeighbors.end());
        destNeighbors.erase(std::remove(destNeighbors.begin(), destNeighbors.end(), src), destNeighbors.end());
    }

    void visualize() {
        std::ofstream file("graph.dot");
        if (!file) {
            std::cout << "Ошибка при открытии файла." << std::endl;
            return;
        }

        file << "graph {" << std::endl;
        for (const auto& vertex : vertices) {
            file << "\t" << vertex.id << std::endl;
            for (int neighbor : vertex.neighbors) {
                if (vertex.id < neighbor) {
                    file << "\t" << vertex.id << " -- " << neighbor << std::endl;
                }
            }
        }
        file << "}" << std::endl;
        file.close();

        // Визуализация графа с помощью Graphviz
        system("dot -Tpng graph.dot -o graph.png");
        std::cout << "Граф визуализирован в файле graph.png" << std::endl;
    }

    bool isEulerian() {
        for (const auto& vertex : vertices) {
            if (vertex.neighbors.size() % 2 != 0) {
                return false;
            }
        }
        return true;
    }

    bool isHamiltonianCycle(const std::vector<int>& cycle) {
        if (cycle.size() != vertices.size() + 1) {
            return false;
        }

        std::vector<bool> visited(vertices.size(), false);
        for (int i = 0; i < cycle.size() - 1; ++i) {
            int src = cycle[i];
            int dest = cycle[i+1];

            if (std::find(vertices[src].neighbors.begin(), vertices[src].neighbors.end(), dest) == vertices[src].neighbors.end()) {
                return false;
            }

            visited[src] = true;
        }

        for (bool v : visited) {
            if (!v) {
                return false;
            }
        }

        return true;
    }

    std::vector<int> findEulerianCycle() {
        std::vector<int> cycle;
        if (!isEulerian()) {
            return cycle;
        }

        std::vector<Vertex> tempVertices = vertices;
        int startVertex = 0;
        cycle.push_back(startVertex);

        while (!tempVertices[startVertex].neighbors.empty()) {
            int nextVertex = tempVertices[startVertex].neighbors.front();
            cycle.push_back(nextVertex);
            removeEdge(startVertex, nextVertex);
            startVertex = nextVertex;
        }

        return cycle;
    }

    std::vector<int> findHamiltonianCycle() {
        std::vector<int> cycle;
        std::vector<bool> visited(vertices.size(), false);

        findHamiltonianCycleRecursive(0, cycle, visited);

        return cycle;
    }

    bool findHamiltonianCycleRecursive(int currentVertex, std::vector<int>& cycle, std::vector<bool>& visited) {
        visited[currentVertex] = true;
        cycle.push_back(currentVertex);

        if (cycle.size() == vertices.size()) {
            if (std::find(vertices[currentVertex].neighbors.begin(), vertices[currentVertex].neighbors.end(), cycle[0]) != vertices[currentVertex].neighbors.end()) {
                cycle.push_back(cycle[0]);
                return true;
            } else {
                visited[currentVertex] = false;
                cycle.pop_back();
                return false;
            }
        }

        for (int neighbor : vertices[currentVertex].neighbors) {
            if (!visited[neighbor]) {
                if (findHamiltonianCycleRecursive(neighbor, cycle, visited)) {
                    return true;
               }
            }
        }

        visited[currentVertex] = false;
        cycle.pop_back();
        return false;
    }

    Graph constructSpanningTree() {
        Graph spanningTree;
        std::vector<bool> visited(vertices.size(), false);
        std::vector<int> stack;

        // Начнем с первой вершины
        stack.push_back(0);

        while (!stack.empty()) {
            int currentVertex = stack.back();
            stack.pop_back();

            if (visited[currentVertex]) {
                continue;
            }

            visited[currentVertex] = true;
            spanningTree.addVertex(currentVertex);

            for (int neighbor : vertices[currentVertex].neighbors) {
                if (!visited[neighbor]) {
                    spanningTree.addVertex(neighbor);
                    spanningTree.addEdge(currentVertex, neighbor);
                    stack.push_back(neighbor);
                }
            }
        }

        return spanningTree;
    }
};

int main() {
    Graph graph;

    // Добавление вершин
    graph.addVertex(0);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);

    // Добавление ребер
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0);

    // Визуализация графа
    graph.visualize();

    // Проверка, является ли граф эйлеровым
    if (graph.isEulerian()) {
        std::cout << "Граф является эйлеровым." << std::endl;

        // Поиск эйлерова цикла
        std::vector<int> eulerCycle = graph.findEulerianCycle();
        if (!eulerCycle.empty()) {
            std::cout << "Эйлеров цикл: ";
            for (int vertex : eulerCycle) {
                std::cout << vertex << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "В графе нет эйлерова цикла." << std::endl;
        }
    } else {
        std::cout << "Граф не является эйлеровым." << std::endl;
    }

    // Поиск гамильтонова цикла
    std::vector<int> hamiltonCycle = graph.findHamiltonianCycle();
    if (!hamiltonCycle.empty()) {
        std::cout << "Гамильтонов цикл: ";
        for (int vertex : hamiltonCycle) {
            std::cout << vertex << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "В графе нет гамильтонова цикла." << std::endl;
    }

    // Построение остовного дерева графа
    Graph spanningTree = graph.constructSpanningTree();
    std::cout << "Остовное дерево графа:" << std::endl;
    spanningTree.visualize();

    return 0;
}