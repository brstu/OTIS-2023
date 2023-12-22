#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>

class GraphManager {
public:
    GraphManager();

    void addNode();
    void addEdge();
    void removeNode();
    void removeEdge();
    void changeNodeColor();
    void changeNodeLabel();
    void inputEdgeWeight();
    void findEulerianCycle();
    void findHamiltonianCycle();

    const std::map<int, std::vector<int>>& getAdjacencyList() const { return adjacencyList; }

private:
    std::map<int, std::vector<int>> adjacencyList;
    std::map<std::pair<int, int>, bool> edges;
};

GraphManager::GraphManager() {}

void GraphManager::addNode() {
    int node;
    std::cout << "Enter node number: ";
    std::cin >> node;

    adjacencyList[node] = {};
}

void GraphManager::addEdge() {
    int node1, node2;
    std::cout << "Enter first node number: ";
    std::cin >> node1;

    std::cout << "Enter second node number: ";
    std::cin >> node2;

    adjacencyList[node1].push_back(node2);
    adjacencyList[node2].push_back(node1);

    edges[{node1, node2}] = true;
}

void GraphManager::removeNode() {
    int node;
    std::cout << "Enter node number to remove: ";
    std::cin >> node;

    adjacencyList.erase(node);

    for (auto& entry : adjacencyList) {
        entry.second.erase(std::remove(entry.second.begin(), entry.second.end(), node), entry.second.end());
    }

    std::vector<std::pair<int, int>> edgesToRemove;

    for (auto& edge : edges) {
        if (edge.first.first == node || edge.first.second == node) {
            edgesToRemove.push_back(edge.first);
        }
    }

    for (const auto& edge : edgesToRemove) {
        edges.erase(edge);
    }
}

void GraphManager::removeEdge() {
    int node1, node2;
    std::cout << "Enter first node number: ";
    std::cin >> node1;

    std::cout << "Enter second node number: ";
    std::cin >> node2;

    edges.erase({node1, node2});
    edges.erase({node2, node1});

    auto it1 = std::remove(adjacencyList[node1].begin(), adjacencyList[node1].end(), node2);
    adjacencyList[node1].erase(it1, adjacencyList[node1].end());

    auto it2 = std::remove(adjacencyList[node2].begin(), adjacencyList[node2].end(), node1);
    adjacencyList[node2].erase(it2, adjacencyList[node2].end());
}

void GraphManager::changeNodeColor() {
    // Implement changeNodeColor for console-based version
    std::cout << "Functionality not implemented for console version.\n";
}

void GraphManager::changeNodeLabel() {
    // Implement changeNodeLabel for console-based version
    std::cout << "Functionality not implemented for console version.\n";
}

void GraphManager::inputEdgeWeight() {
    // Implement inputEdgeWeight for console-based version
    std::cout << "Functionality not implemented for console version.\n";
}

std::vector<int> findEulerianCycle(const std::map<int, std::vector<int>>& adjacencyList) {
    std::vector<int> eulerCycle;
    std::stack<int> stack;
    std::map<int, std::set<int>> usedEdges;

    if (adjacencyList.empty()) {
        return eulerCycle; // Empty graph, no Eulerian cycle
    }

    stack.push(adjacencyList.begin()->first); // Start from the first node

    while (!stack.empty()) {
        int current = stack.top();

        if (!adjacencyList.at(current).empty()) {
            int next = adjacencyList.at(current).back();
            stack.push(next);
            adjacencyList[current].pop_back();
            usedEdges[current].insert(next);
        }
        else {
            eulerCycle.push_back(current);
            stack.pop();
        }
    }

    // Check if all edges are used
    for (const auto& entry : adjacencyList) {
        if (!entry.second.empty()) {
            return {}; // Not all edges are used, no Eulerian cycle
        }
    }

    return eulerCycle;
}

bool findHamiltonianCycle(const std::map<int, std::vector<int>>& adjacencyList, std::vector<int>& cycle) {
    // Implement findHamiltonianCycle for console-based version
    return false;
}

int main() {
    GraphManager graphManager;

    while (true) {
        std::cout << "\nOptions:\n";
        std::cout << "1. Add Node\n";
        std::cout << "2. Add Edge\n";
        std::cout << "3. Remove Node\n";
        std::cout << "4. Remove Edge\n";
        std::cout << "5. Find Eulerian Cycle\n";
        std::cout << "6. Find Hamiltonian Cycle\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter option: ";

        int option;
        std::cin >> option;

        switch (option) {
            case 1:
                graphManager.addNode();
                break;
            case 2:
                graphManager.addEdge();
                break;
            case 3:
                graphManager.removeNode();
                break;
            case 4:
                graphManager.removeEdge();
                break;
            case 5:
                graphManager.findEulerianCycle();
                break;
            case 6:
                graphManager.findHamiltonianCycle();
                break;
            case 7:
                return 0;
            default:
                std::cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
