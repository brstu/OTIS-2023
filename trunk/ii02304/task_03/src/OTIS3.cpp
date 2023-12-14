#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

class Vertex {
public:
    int id;
    vector<int> neighbors;

    explicit Vertex(int _id) : id(_id) {}
};

class Graph {
public:
    vector<Vertex> vertices;

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
        std::erase(srcNeighbors, dest);
        std::erase(destNeighbors, src);
    }

    void visualize() const {
        ofstream file("graph.dot");
        if (!file) {
            cout << "Ошибка при открытии файла." << endl;
            return;
        }

        file << "graph {" << endl;
        for (const auto& vertex : vertices) {
            file << "\t" << vertex.id << endl;
            for (int neighbor : vertex.neighbors) {
                if (vertex.id < neighbor) {
                    file << "\t" << vertex.id << " -- " << neighbor << endl;
                }
            }
        }
        file << "}" << endl;
        file.close();

        system("dot -Tpng graph.dot -o graph.png");
        cout << "Граф визуализирован в файле graph.png" << endl;
    }

    bool isEulerian() const {
        if (std::ranges::none_of(vertices, [](const auto& vertex) { return vertex.neighbors.size() % 2 != 0; })) {
            return true;
        }
        return false;
    }

    bool isHamiltonianCycle(const vector<int>& cycle) {
        if (cycle.size() != vertices.size() + 1) {
            return false;
        }

        vector<bool> visited(vertices.size(), false);
        for (int i = 0; i < cycle.size() - 1; ++i) {
            int src = cycle[i];
            if (int dest = cycle[i + 1]; std::ranges::find(vertices[src].neighbors, dest) == vertices[src].neighbors.end()) {
                return false;
            }
            visited[src] = true;
        }
        // Uncovered code
        if (std::ranges::any_of(visited.begin(), visited.end(), { return !v; })) {
            return false;
        }


    vector<int> findEulerianCycle() {
        vector<int> cycle;
        if (!isEulerian()) {
            return cycle;
        }

        vector<Vertex> tempVertices = vertices;
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

    vector<int> findHamiltonianCycle() {
        vector<int> cycle;
        vector<bool> visited(vertices.size(), false);

        findHamiltonianCycleRecursive(0, cycle, visited);

        return cycle;
    }

    bool findHamiltonianCycleRecursive(int currentVertex, vector<int>& cycle, vector<bool>& visited) {
        visited[currentVertex] = true;
        cycle.push_back(currentVertex);

        if (cycle.size() == vertices.size()) {
            if (std::ranges::find(vertices[currentVertex].neighbors, cycle[0]) != vertices[currentVertex].neighbors.end()) {
                cycle.push_back(cycle[0]);
                return true;
            }
            else {
                visited[currentVertex] = false;
                cycle.pop_back();
                return false;
            }
        }

        for (int neighbor : vertices[currentVertex].neighbors) {
            if (!visited[neighbor] && findHamiltonianCycleRecursive(neighbor, cycle, visited)) {
                return true;
            }
        }

        visited[currentVertex] = false;
        cycle.pop_back();
        return false;
    }

    Graph constructSpanningTree() {
        Graph spanningTree;
        spanningTree.vertices = vertices;

        vector<bool> visited(vertices.size(), false);
        vector<int> queue;

        visited[0] = true;
        queue.push_back(0);

        while (!queue.empty()) {
            int currentNode = queue.front();
            queue.erase(queue.begin());

            for (int neighbor : vertices[currentNode].neighbors) {
                if (!visited[neighbor]) {
                    spanningTree.addEdge(currentNode, neighbor);
                    visited[neighbor] = true;
                    queue.push_back(neighbor);
                }
            }
        }

        return spanningTree;
    }
};

int main() {
    Graph graph;

    graph.addVertex(0);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);
    graph.addVertex(4);

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.addEdge(4, 0);

    graph.visualize();

    if (vector<int> eulerianCycle = graph.findEulerianCycle(); !eulerianCycle.empty()) {
        cout << "Эйлеров цикл: ";
        for (int vertex : eulerianCycle) {
            cout << vertex << " ";
        }
        cout << endl;
    }
    else {
        cout << "Граф не содержит Эйлерова цикла." << endl;
    }

    vector<int> hamiltonianCycle = graph.findHamiltonianCycle();
    if (vector<int> newHamiltonianCycle = graph.findHamiltonianCycle(); !newHamiltonianCycle.empty()) {
        cout << "Гамильтонов цикл: ";
        for (int vertex : hamiltonianCycle) {
            cout << vertex << " ";
        }
        cout << endl;
    }
    else {
        cout << "Граф не содержит Гамильтонова цикла." << endl;
    }
    Graph spanningTree = graph.constructSpanningTree();
    spanningTree.visualize();
    return 0;
}
