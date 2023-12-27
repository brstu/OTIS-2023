#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

// Класс, представляющий вершину графа
class Top {
public:
    int id;
    vector<int> around;

    explicit Top(int _id) : id(_id) {}
};

// Класс, представляющий граф
class MyGraph {
public:
    vector<Top> tops;

    void addTop(int id) {
        tops.emplace_back(id);
    }

    void addEdge(int src, int dest) {
        tops[src].around.push_back(dest);
        tops[dest].around.push_back(src);
    }

    void removeEdge(int src, int dest) {
        auto& srcArounds = tops[src].around;
        auto& destArounds = tops[dest].around;
        srcArounds.erase(remove(srcArounds.begin(), srcArounds.end(), dest), srcArounds.end());
        destArounds.erase(remove(destArounds.begin(), destArounds.end(), src), destArounds.end());
    }

    void  vizual() const {
        ofstream file("graph.dot");
        if (!file) {
            cout << "Ошибка при открытии файла." << endl;
            return;
        }

        file << "graph {" << endl;
        for (const auto& top : tops) {
            file << "\t" << top.id << endl;
            for (int arounds : top.around) {
                if (top.id < arounds) {
                    file << "\t" << top.id << " -- " << arounds << endl;
                }
            }
        }
        file << "}" << endl;
        file.close();

        // Визуализация графа с помощью Graphviz
        system("dot -Tpng graph.dot -o graph.png");
        cout << "Граф визуализирован в файле graph.png" << endl;
    }

    bool  isEulerian() const {
        for (const auto& top : tops) {
            if (top.around.size() % 2 != 0) {
                return false;
            }
        }
        return true;
    }

    bool isHamiltonianCycle(const vector<int>& cycle) {
        if (cycle.size() != tops.size() + 1) {
            return false;
        }

        vector<bool> visited(tops.size(), false);
        for (int i = 0; i < cycle.size() - 1; ++i) {
            int src = cycle[i];
            int dest = cycle[i + 1];

            if (find(tops[src].around.begin(), tops[src].around.end(), dest) == tops[src].around.end()) {
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

    vector<int> findEulerianCycle() {
        vector<int> cycle;
        if (!isEulerian()) {
            return cycle;
        }

        vector<Top> tempTops = tops;
        int startTops = 0;
        cycle.push_back(startTops);

        while (!tempTops[startTops].around.empty()) {
            int nextTops = tempTops[startTops].around.front();
            cycle.push_back(nextTops);
            removeEdge(startTops, nextTops);
            startTops = nextTops;
        }

        return cycle;
    }

    vector<int> findHamiltonianCycle() {
        vector<int> cycle;
        vector<bool> visited(tops.size(), false);

        findHamiltonianCycleRecursive(0, cycle, visited);

        return cycle;
    }

    bool findHamiltonianCycleRecursive(int currentTops, vector<int>& cycle, vector<bool>& visited) {
        visited[currentTops] = true;
        cycle.push_back(currentTops);

        if (cycle.size() == tops.size()) {
            if (find(tops[currentTops].around.begin(), tops[currentTops].around.end(), cycle[0]) != tops[currentTops].around.end()) {
                cycle.push_back(cycle[0]);
                return true;
            }
            else {
                visited[currentTops] = false;
                cycle.pop_back();
                return false;
            }
        }

        for (int around : tops[currentTops].around) {
            if (!visited[around]) {
                if (findHamiltonianCycleRecursive(around, cycle, visited)) {
                    return true;
                }
            }
        }

        visited[currentTops] = false;
        cycle.pop_back();
        return false;
    }

    MyGraph constructSpanningTree() {
        MyGraph spanningTree;
        spanningTree.tops = tops;

        vector<bool> visited(tops.size(), false);
        vector<int> queue;

        visited[0] = true;
        queue.push_back(0);

        while (!queue.empty()) {
            int currentNode = queue.front();
            queue.erase(queue.begin());

            for (int neighbor : tops[currentNode].around) {
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
    setlocale(LC_ALL, "rus");
    // Создание графа
    MyGraph Mygraph;

    // Добавление вершин
    Mygraph.addTop(0);
    Mygraph.addTop(1);
    Mygraph.addTop(2);
    Mygraph.addTop(3);
    Mygraph.addTop(4);

    // Добавление ребер
    Mygraph.addEdge(0, 1);
    Mygraph.addEdge(1, 2);
    Mygraph.addEdge(2, 3);
    Mygraph.addEdge(3, 4);
    Mygraph.addEdge(4, 0);

    // Визуализация графа
    Mygraph.vizual();

    // Поиск Эйлерова цикла
    vector<int> eulerianCycle = Mygraph.findEulerianCycle();
    if (!eulerianCycle.empty()) {
        cout << "Эйлеров цикл: ";
        for (int vertex : eulerianCycle) {
            cout << vertex << " ";
        }
        cout << endl;
    }
    else {
        cout << "Граф не содержит Эйлерова цикла." << endl;
    }

    // Поиск Гамильтонова цикла
    vector<int> hamiltonianCycle = Mygraph.findHamiltonianCycle();
    if (!hamiltonianCycle.empty()) {
        cout << "Гамильтонов цикл: ";
        for (int vertex : hamiltonianCycle) {
            cout << vertex << " ";
        }
        cout << endl;
    }
    else {
        cout << "Граф не содержит Гамильтонова цикла." << endl;
    }

    // Построение остовного дерева
    MyGraph spanningTree = Mygraph.constructSpanningTree();
    spanningTree.vizual();

    return 0;
}