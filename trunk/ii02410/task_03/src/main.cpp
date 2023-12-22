
#include <vector>
#include <set>
#include <algorithm>
class GraphManager : public QWidget {
    Q_OBJECT

public:
    GraphManager(QWidget* parent = nullptr);

public slots:
    void addNode();
    void addEdge();
    void removeNode();
    void removeEdge();
    void changeNodeColor();
    void changeNodeLabel();
    void inputEdgeWeight();
    void findEulerianCycle();
    void findHamiltonianCycle();

private:
    QGraphicsScene* scene;
    QMap<int, QGraphicsEllipseItem*> nodes;
    QMap<QPair<int, int>, QGraphicsLineItem*> edges;
};

GraphManager::GraphManager(QWidget* parent)
    : QWidget(parent) {

    scene = new QGraphicsScene(this);

    QGraphicsView* view = new QGraphicsView(scene);
    view->setRenderHint(QPainter::Antialiasing, true);

    QPushButton* addNodeButton = new QPushButton("Add Node", this);
    connect(addNodeButton, &QPushButton::clicked, this, &GraphManager::addNode);

    QPushButton* addEdgeButton = new QPushButton("Add Edge", this);
    connect(addEdgeButton, &QPushButton::clicked, this, &GraphManager::addEdge);

    QPushButton* removeNodeButton = new QPushButton("Remove Node", this);
    connect(removeNodeButton, &QPushButton::clicked, this, &GraphManager::removeNode);

    QPushButton* removeEdgeButton = new QPushButton("Remove Edge", this);
    connect(removeEdgeButton, &QPushButton::clicked, this, &GraphManager::removeEdge);

    QPushButton* changeNodeColorButton = new QPushButton("Change Node Color", this);
    connect(changeNodeColorButton, &QPushButton::clicked, this, &GraphManager::changeNodeColor);

    QPushButton* changeNodeLabelButton = new QPushButton("Change Node Label", this);
    connect(changeNodeLabelButton, &QPushButton::clicked, this, &GraphManager::changeNodeLabel);

    QPushButton* inputEdgeWeightButton = new QPushButton("Input Edge Weight", this);
    connect(inputEdgeWeightButton, &QPushButton::clicked, this, &GraphManager::inputEdgeWeight);

    QPushButton* findEulerianCycleButton = new QPushButton("Find Eulerian Cycle", this);
    connect(findEulerianCycleButton, &QPushButton::clicked, this, &GraphManager::findEulerianCycle);

    QPushButton* findHamiltonianCycleButton = new QPushButton("Find Hamiltonian Cycle", this);
    connect(findHamiltonianCycleButton, &QPushButton::clicked, this, &GraphManager::findHamiltonianCycle);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(view);
    layout->addWidget(addNodeButton);
    layout->addWidget(addEdgeButton);
    layout->addWidget(removeNodeButton);
    layout->addWidget(removeEdgeButton);
    layout->addWidget(changeNodeColorButton);
    layout->addWidget(changeNodeLabelButton);
    layout->addWidget(inputEdgeWeightButton);
    layout->addWidget(findEulerianCycleButton);
    layout->addWidget(findHamiltonianCycleButton);

    setLayout(layout);
}

void GraphManager::addNode() {
    bool ok;
    int node = QInputDialog::getInt(this, "Add Node", "Enter node number:", 1, 1, 100, 1, &ok);
    if (ok) {
        QGraphicsEllipseItem* ellipse = new QGraphicsEllipseItem(0, 0, 30, 30);
        ellipse->setPos(qrand() % 300, qrand() % 300); // random position for simplicity
        scene->addItem(ellipse);
        nodes[node] = ellipse;
    }
}

void GraphManager::addEdge() {
    bool ok;
    int node1 = QInputDialog::getInt(this, "Add Edge", "Enter first node number:", 1, 1, 100, 1, &ok);
    if (!ok) return;

    int node2 = QInputDialog::getInt(this, "Add Edge", "Enter second node number:", 1, 1, 100, 1, &ok);
    if (!ok) return;

    if (!nodes.contains(node1) || !nodes.contains(node2)) return;

    QGraphicsEllipseItem* ellipse1 = nodes[node1];
    QGraphicsEllipseItem* ellipse2 = nodes[node2];

    if (edges.contains(qMakePair(node1, node2)) || edges.contains(qMakePair(node2, node1))) return;

    QGraphicsLineItem* line = scene->addLine(ellipse1->pos().x() + 15, ellipse1->pos().y() + 15,
        ellipse2->pos().x() + 15, ellipse2->pos().y() + 15);
    edges[qMakePair(node1, node2)] = line;
}

void GraphManager::removeNode() {
    bool ok;
    int node = QInputDialog::getInt(this, "Remove Node", "Enter node number to remove:", 1, 1, 100, 1, &ok);
    if (ok && nodes.contains(node)) {
        QGraphicsEllipseItem* ellipse = nodes[node];
        scene->removeItem(ellipse);
        delete ellipse;
        nodes.remove(node);

        // Remove associated edges
        QList<QPair<int, int>> keysToRemove;
        for (const auto& edge : edges.keys()) {
            if (edge.first == node || edge.second == node) {
                keysToRemove.append(edge);
            }
        }
        for (const auto& key : keysToRemove) {
            QGraphicsLineItem* line = edges[key];
            scene->removeItem(line);
            delete line;
            edges.remove(key);
        }
    }
}

void GraphManager::removeEdge() {
    bool ok;
    int node1 = QInputDialog::getInt(this, "Remove Edge", "Enter first node number:", 1, 1, 100, 1, &ok);
    if (!ok) return;

    int node2 = QInputDialog::getInt(this, "Remove Edge", "Enter second node number:", 1, 1, 100, 1, &ok);
    if (!ok) return;

    if (!nodes.contains(node1) || !nodes.contains(node2)) return;

    QGraphicsEllipseItem* ellipse1 = nodes[node1];
    QGraphicsEllipseItem* ellipse2 = nodes[node2];

    if (edges.contains(qMakePair(node1, node2))) {
        QGraphicsLineItem* line = edges[qMakePair(node1, node2)];
        scene->removeItem(line);
        delete line;
        edges.remove(qMakePair(node1, node2));
    }
    else if (edges.contains(qMakePair(node2, node1))) {
        QGraphicsLineItem* line = edges[qMakePair(node2, node1)];
        scene->removeItem(line);
        delete line;
        edges.remove(qMakePair(node2, node1));
    }
}

void GraphManager::changeNodeColor() {
    bool ok;
    int node = QInputDialog::getInt(this, "Change Node Color", "Enter node number:", 1, 1, 100, 1, &ok);
    if (ok && nodes.contains(node)) {
        QGraphicsEllipseItem* ellipse = nodes[node];
        QColor color = QColorDialog::getColor(Qt::white, this, "Select Color");
        if (color.isValid()) {
            ellipse->setBrush(QBrush(color));
        }
    }
}

void GraphManager::changeNodeLabel() {
    bool ok;
    int node = QInputDialog::getInt(this, "Change Node Label", "Enter node number:", 1, 1, 100, 1, &ok);
    if (ok && nodes.contains(node)) {
        QGraphicsEllipseItem* ellipse = nodes[node];
        QString label = QInputDialog::getText(this, "Change Node Label", "Enter node label:");
        ellipse->setToolTip(label);
    }
}

void GraphManager::inputEdgeWeight() {
    bool ok;
    int node1 = QInputDialog::getInt(this, "Input Edge Weight", "Enter first node number:", 1, 1, 100, 1, &ok);
    if (!ok) return;

    int node2 = QInputDialog::getInt(this, "Input Edge Weight", "Enter second node number:", 1, 1, 100, 1, &ok);
    if (!ok) return;

    double weight = QInputDialog::getDouble(this, "Input Edge Weight", "Enter edge weight:", 1.0, -1000.0, 1000.0, 2, &ok);
    if (ok) {
        if (edges.contains(qMakePair(node1, node2))) {
            edges[qMakePair(node1, node2)]->setToolTip(QString::number(weight));
        }
        else if (edges.contains(qMakePair(node2, node1))) {
            edges[qMakePair(node2, node1)]->setToolTip(QString::number(weight));
        }
    }
}

// Функция для поиска эйлерова цикла в графе
std::vector<int> findEulerianCycle(const std::map<int, std::vector<int>>& adjacencyList) {
    std::vector<int> eulerCycle;
    std::stack<int> stack;
    std::map<int, std::set<int>> usedEdges;

    if (adjacencyList.empty()) {
        return eulerCycle; // Empty graph, no Eulerian cycle
    }

    stack.push(adjacencyList.begin()->first); // Начнем с первой вершины

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

    // Проверим, использованы ли все ребра
    for (const auto& entry : adjacencyList) {
        if (!entry.second.empty()) {
            return {}; // Не все ребра использованы, нет эйлерова цикла
        }
    }

    return eulerCycle;
}


bool findHamiltonianCycle(const std::vector<std::vector<int>>& adjacencyMatrix, std::vector<int>& cycle) {
    int vertices = adjacencyMatrix.size();
    std::vector<bool> visited(vertices, false);
    cycle.clear();

    // Гамильтонов цикл начинается с первой вершины
    visited[0] = true;
    cycle.push_back(0);

    if (isCyclicUtil(0, visited, cycle, adjacencyMatrix)) {
        return true;
    }

    cycle.clear();
    return false;
}


bool isCyclicUtil(int v, std::vector<bool>& visited, std::vector<int>& path, const std::vector<std::vector<int>>& adjacencyMatrix) {
    int vertices = adjacencyMatrix.size();

    // Базовый случай: если все вершины посещены, вернем true
    if (path.size() == vertices) {
        // Проверим, связана ли последняя вершина с первой
        if (adjacencyMatrix[path.back()][path.front()] == 1) {
            return true;
        }
        return false;
    }

    for (int i = 0; i < vertices; ++i) {
        if (adjacencyMatrix[v][i] == 1 && !visited[i]) {
            visited[i] = true;
            path.push_back(i);

            if (isCyclicUtil(i, visited, path, adjacencyMatrix)) {
                return true;
            }

            visited[i] = false;
            path.pop_back();
        }
    }

    return false;
}

void GraphManager::findHamiltonianCycle() {
    // Implement finding Hamiltonian cycle in the graph
}

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    GraphManager graphManager;
    graphManager.resize(400, 400);
    graphManager.show();

    // Добавим вызовы функций поиска эйлерова и гамильтонова цикла
    std::vector<int> eulerCycle = findEulerianCycle(graphManager.getAdjacencyList());
    std::vector<int> hamiltonianCycle;
    if (findHamiltonianCycle(graphManager.getAdjacencyMatrix(), hamiltonianCycle)) {
         
    }
    else {
        return 0;
    }

   
    if (eulerCycle.empty()) {
        std::cout << "No Eulerian cycle found.\n";
    }
    else {
        std::cout << "Eulerian cycle: ";
        for (int node : eulerCycle) {
            std::cout << node << " ";
        }
        std::cout << "\n";
    }

    return app.exec();
}
