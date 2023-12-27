#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>

class GraphManager {
public:
     std::vector<int> findEulerianCycle(const std::map<int, std::vector<int>>& adjacencyList);
    bool findHamiltonianCycle(const std::map<int, std::vector<int>>& adjacencyList, std::vector<int>& cycle);

    GraphManager();

    void addNode();
    void addEdge();
    void removeNode();
    void removeEdge();
    void changeNodeColor();  // Not implemented for console version
    void changeNodeLabel();  // Not implemented for console version
    void inputEdgeWeight();  // Not implemented for console version
    void findEulerianCycle();
    void findHamiltonianCycle();

    const std::map<int, std::vector<int>>& getAdjacencyList() const { return adjacencyList; }

private:
    bool isCyclicUtil(int v, std::vector<bool>& visited, std::vector<int>& path, const std::map<int, std::vector<int>>& adjacencyList);
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
std::vector<int> GraphManager::findEulerianCycle(const std::map<int, std::vector<int>>& adjacencyList) {
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

            // Avoid modifying the adjacencyList since it's a const reference
            std::vector<int> temp = adjacencyList.at(current);
            temp.pop_back();
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

bool GraphManager::findHamiltonianCycle(const std::map<int, std::vector<int>>& adjacencyList, std::vector<int>& cycle) {
    int vertices = adjacencyList.size();
    std::vector<bool> visited(vertices, false);
    cycle.clear();

    // Hamiltonian cycle starts from the first node
    auto iter = visited.begin();
    iter->second = true;
    cycle.push_back(iter->first);

    if (isCyclicUtil(iter->first, visited, cycle, adjacencyList)) {
        return true;
    }

    cycle.clear();
    return false;
}

bool GraphManager::isCyclicUtil(int v, std::vector<bool>& visited, std::vector<int>& path, const std::map<int, std::vector<int>>& adjacencyList) {
    int vertices = adjacencyList.size();

    // Base case: if all nodes are visited, return true
    if (path.size() == vertices) {
        // Check if the last node is connected to the first
        if (adjacencyList.at(path.back()).front() == path.front()) {
            return true;
        }
        return false;
    }

    for (int i = 0; i < vertices; ++i) {
        if (adjacencyList.at(v)[i] == 1 && !visited[i]) {
            visited[i] = true;
            path.push_back(i);

            if (isCyclicUtil(i, visited, path, adjacencyList)) {
                return true;
            }

            visited[i] = false;
            path.pop_back();
        }
    }

    return false;
}



int main() {
    GraphManager graphManager;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Node\n";
        std::cout << "2. Add Edge\n";
        std::cout << "3. Remove Node\n";
        std::cout << "4. Remove Edge\n";
        std::cout << "5. Change Node Color (Not implemented)\n";
        std::cout << "6. Change Node Label (Not implemented)\n";
        std::cout << "7. Input Edge Weight (Not implemented)\n";
        std::cout << "8. Find Eulerian Cycle\n";
        std::cout << "9. Find Hamiltonian Cycle\n";
        std::cout << "10. Exit\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
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
                graphManager.changeNodeColor();
                break;
            case 6:
                graphManager.changeNodeLabel();
                break;
            case 7:
                graphManager.inputEdgeWeight();
                break;
            case 8:
                graphManager.findEulerianCycle();
                break;
            case 9:
                graphManager.findHamiltonianCycle();
                break;
            case 10:
                return 0;
            default:
                std::cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}
