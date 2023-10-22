#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <queue>
#include <algorithm>

struct Node {
    std::string name;
    std::string content;
    // Дополнительные свойства узла
};

struct Edge {
    Node* source;
    Node* target;
    bool directed;
    std::string color;
    // Дополнительные свойства дуги
};

class Graph {
private:
    std::string name;
    std::vector<Node*> nodes;
    std::vector<Edge*> edges;
    std::unordered_map<std::string, Node*> nodeLookup;

public:
    Graph(std::string name) : name(name) {}

    void addNode(std::string name) {
        Node* node = new Node{name};
        nodes.push_back(node);
        nodeLookup[name] = node;
    }

    void addEdge(std::string sourceName, std::string targetName, bool directed = false) {
        Node* source = nodeLookup[sourceName];
        Node* target = nodeLookup[targetName];
        Edge* edge = new Edge{source, target, directed};
        edges.push_back(edge);
    }

    std::vector<Node*> getNeighbors(Node* node) {
        std::vector<Node*> neighbors;
        for (Edge* edge : edges) {
            if (edge->source == node) {
                neighbors.push_back(edge->target);
            } else if (!edge->directed && edge->target == node) {
                neighbors.push_back(edge->source);
            }
        }
        return neighbors;
    }

    bool isConnected() {
        if (nodes.empty()) {
            return true; // Пустой граф считается связанным
        }

        std::unordered_map<Node*, bool> visited;
        dfs(nodes[0], visited);

        for (Node* node : nodes) {
            if (visited.find(node) == visited.end()) {
                return false;
            }
        }
        return true;
    }

    void dfs(Node* node, std::unordered_map<Node*, bool>& visited) {
        visited[node] = true;
        std::vector<Node*> neighbors = getNeighbors(node);
        for (Node* neighbor : neighbors) {
            if (visited.find(neighbor) == visited.end()) {
                dfs(neighbor, visited);
            }
        }
    }

    // Остальные операции над графом

    // Экспорт графа во внутренний формат программы
    void exportToInternalFormat(const std::string& filename) {
        std::ofstream outfile(filename);
        if (outfile.is_open()) {
            outfile << name << std::endl;
            outfile << nodes.size() << std::endl;
            for (Node* node : nodes) {
                outfile << node->name << " " << node->content << std::endl;
            }
            outfile << edges.size() << std::endl;
            for (Edge* edge : edges) {
                outfile << edge->source->name << " " << edge->target->name << " " << edge->directed << " " << edge->color << std::endl;
            }
            outfile.close();
            std::cout << "Graph exported to internal format: " << filename << std::endl;
        } else {
            std::cerr << "Unable to export graph to internal format." << std::endl;
        }
    }

    // Импорт графа из внутреннего формата программы
    static Graph importFromInternalFormat(const std::string& filename) {
        std::ifstream infile(filename);
        if (infile.is_open()) {
            std::string name;
            infile >> name;
            Graph graph(name);

            int numNodes;
            infile >> numNodes;
            for (int i = 0; i < numNodes; ++i) {
                std::string nodeName, nodeContent;
                infile >> nodeName >> nodeContent;
                graph.addNode(nodeName);
                Node* node = graph.nodeLookup[nodeName];
                node->content = nodeContent;
            }

            int numEdges;
            infile >> numEdges;
            for (int i = 0; i < numEdges; ++i) {
                std::string sourceName, targetName, color;
                bool directed;
                infile >> sourceName >> targetName >> directed >> color;
                graph.addEdge(sourceName, targetName, directed);
                Edge* edge = graph.edges.back();
                edge->color = color;
            }

            infile.close();
            std::cout << "Graph imported from internal format: " << filename << std::endl;

            return graph;
        } else {
            std::cerr << "Unable to import graph from internal format." << std::endl;
            return Graph("");
        }
    }

    // Экспорт графа в текстовый формат
    void exportToTextFormat(const std::string& filename) {
        std::ofstream outfile(filename);
        if (outfile.is_open()) {
            outfile << "Graph: " << name << std::endl;
            outfile << "Nodes:" << std::endl;
            for (Node* node : nodes) {
                outfile << "- Name: " << node->name << ", Content: " << node->content << std::endl;
            }
            outfile << "Edges:" << std::endl;
            for (Edge* edge : edges) {
                outfile << "- Source: " << edge->source->name << ", Target: " << edge->target->name << ", Directed: " << (edge->directed ? "true" : "false") << ", Color: " << edge->color << std::endl;
            }
            outfile.close();
            std::cout << "Graph exported to text format: " << filename << std::endl;
        } else {
            std::cerr << "Unable to export graph to text format." << std::endl;
        }
    }

    // Импорт графа из текстового формата
    static Graph importFromTextFormat(const std::string& filename) {
        std::ifstream infile(filename);
        if (infile.is_open()) {
            std::string line;
            std::getline(infile, line); // Пропускаем первую строку
            std::getline(infile, line); // Считываем имя графа
            std::string graphName = line.substr(line.find(":") + 2);
            Graph graph(graphName);

            std::getline(infile, line); // Пропускаем строку "Nodes:"
            while (std::getline(infile, line) && line != "Edges:") {
                if (line.empty()) continue;
                std::istringstream iss(line);
                std::string nodeName, nodeContent;
                std::string temp;
                iss >> temp >> nodeName >> temp >> nodeContent;
                graph.addNode(nodeName);
                Node* node = graph.nodeLookup[nodeName];
                node->content = nodeContent;
            }

            while (std::getline(infile, line)) {
                if (line.empty()) continue;
                std::istringstream iss(line);
                std::string sourceName, targetName, color;
                bool directed;
                std::string temp;
                iss >> temp >> sourceName >> temp >> targetName >> temp >> directed >> temp >> color;
                graph.addEdge(sourceName, targetName, directed);
                Edge* edge = graph.edges.back();
                edge->color = color;
            }

            infile.close();
            std::cout << "Graph imported from text format: " << filename << std::endl;

            return graph;
        } else {
            std::cerr << "Unable to import graph from text format." << std::endl;
            return Graph("");
        }
    }

    // Остальные операции над графом

    void printGraphInfo() {
        std::cout << "Graph: " << name << std::endl;
        std::cout << "Number of Nodes: " << nodes.size() << std::endl;
        std::cout << "Number of Edges: " << edges.size() << std::endl;

        // Печать степеней для всех вершин
        std::cout << "Degrees for all Nodes: " << std::endl;
        for (Node* node : nodes) {
            int degree = getDegree(node);
            std::cout << "- Node " << node->name << ": " << degree << std::endl;
        }

        // Печать матрицы инцидентности
        std::cout << "Incidence Matrix: " << std::endl;
        std::vector<std::vector<int>> incidenceMatrix(nodes.size(), std::vector<int>(edges.size(), 0));
        for (int i = 0; i < edges.size(); ++i) {
            Edge* edge = edges[i];
            incidenceMatrix[getIndex(edge->source)][i] = 1;
            if (!edge->directed) {
                incidenceMatrix[getIndex(edge->target)][i] = 1;
            }
        }
        for (const std::vector<int>& row : incidenceMatrix) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }

        // Печать матрицы смежности
        std::cout << "Adjacency Matrix: " << std::endl;
        std::vector<std::vector<int>> adjacencyMatrix(nodes.size(), std::vector<int>(nodes.size(), 0));
        for (Edge* edge : edges) {
            int sourceIndex = getIndex(edge->source);
            int targetIndex = getIndex(edge->target);
            adjacencyMatrix[sourceIndex][targetIndex] = 1;
            if (!edge->directed) {
                adjacencyMatrix[targetIndex][sourceIndex] = 1;
            }
        }
        for (const std::vector<int>& row : adjacencyMatrix) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }

    int getDegree(Node* node) {
        int degree = 0;
        for (Edge* edge : edges) {
            if (edge->source == node || (!edge->directed && edge->target == node)) {
                degree++;
            }
        }
        return degree;
    }

    int getIndex(Node* node) {
        for (int i = 0; i < nodes.size(); ++i) {
            if (nodes[i] == node) {
                return i;
            }
        }
        return -1; // Вершина не найдена
    }

    // Остальные операции над графом
};

int main() {
    Graph graph("MyGraph");
    graph.addNode("A");
    graph.addNode("B");
    graph.addNode("C");
    graph.addNode("D");
    graph.addEdge("A", "B");
    graph.addEdge("B", "C");
    graph.addEdge("C", "D");
    graph.addEdge("D", "A", true);

    graph.printGraphInfo();

    graph.exportToInternalFormat("graph.txt");
    Graph importedGraph = Graph::importFromInternalFormat("graph.txt");
    importedGraph.printGraphInfo();

    graph.exportToTextFormat("graph.txt");
    Graph importedTextGraph = Graph::importFromTextFormat("graph.txt");
    importedTextGraph.printGraphInfo();

    return 0;
}