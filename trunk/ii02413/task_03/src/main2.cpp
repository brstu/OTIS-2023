#include <QApplication>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <QGraphicsTextItem>
#include <QInputDialog>
#include <QColorDialog>
#include <QMessageBox>
#include <QRandomGenerator>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

class GraphNode;
class GraphEdge;

QGraphicsScene *scene;
std::vector<GraphNode*> nodes;
std::vector<GraphEdge*> edges;
QColor colorVertex("#fff");
std::unordered_map<std::string, std::unordered_map<std::string, int>> adjacencyList;

class GraphNode {
public:
    explicit GraphNode(const std::string& nodeName) : name(nodeName) {
        QRandomGenerator generator;
        x = generator.bounded(636);
        y = generator.bounded(596);
        circle = createCircle(x, y, 20, colorVertex);
        text = scene->addText(QString::fromStdString(nodeName), QFont("Arial", 10));
        text->setPos(x, y);
        adjacencyList[nodeName] = {};
    }

    void move(int newX, int newY) {
        x = newX;
        y = newY;
        circle->setRect(x - 20, y - 20, 40, 40);
        text->setPos(x, y);

        for (GraphEdge* edge : edges) {
            if (edge->node1 == this || edge->node2 == this) {
                edge->move();
            }
        }
    }

    void change() {
        bool ok;
        QString newName = QInputDialog::getText(nullptr, "Изменение имени", "Введите новое имя:", QLineEdit::Normal, QString::fromStdString(name), &ok);
        if (ok && !newName.isEmpty()) {
            changeName(newName.toStdString());
        }
    }

    void changeName(const std::string& newName) {
        adjacencyList[newName] = adjacencyList[name];
        adjacencyList.erase(name);
        name = newName;
        text->setPlainText(QString::fromStdString(name));
    }

    void changeColor(const QColor& newColor) {
        colorVertex = newColor;
        circle->setBrush(QBrush(colorVertex));
    }

    void remove() {
        scene->removeItem(circle);
        scene->removeItem(text);

        auto it = std::remove_if(edges.begin(), edges.end(), [this](GraphEdge* edge) {
            return edge->node1 == this || edge->node2 == this;
        });

        edges.erase(it, edges.end());

        adjacencyList.erase(name);
        delete this;
    }

private:
    QGraphicsEllipseItem* circle;
    QGraphicsTextItem* text;
    std::string name;
    int x;
    int y;

    QGraphicsEllipseItem* createCircle(int x, int y, int r, const QColor& color) {
        QGraphicsEllipseItem* newCircle = scene->addEllipse(x - r, y - r, 2 * r, 2 * r, QPen(Qt::black), QBrush(color));
        return newCircle;
    }
};

class GraphEdge {
public:
    GraphEdge(GraphNode* node1, GraphNode* node2, int weight) : node1(node1), node2(node2), weight(weight) {
        line = scene->addLine(node1->x, node1->y, node2->x, node2->y, QPen(Qt::black, 2));
        text = scene->addText(QString::number(weight), QFont("Arial", 20), QBrush(Qt::white));
        text->setPos((node1->x + node2->x) / 2, (node1->y + node2->y) / 2 - 5);
        adjacencyList[node1->name][node2->name] = weight;
        adjacencyList[node2->name][node1->name] = weight;
    }

    void change() {
        bool ok;
        QString newWeight = QInputDialog::getText(nullptr, "Изменение веса", "Введите новый вес:", QLineEdit::Normal, QString::number(weight), &ok);
        if (ok && !newWeight.isEmpty()) {
            changeWeight(newWeight.toInt());
        }
    }

    void changeWeight(int newWeight) {
        weight = newWeight;
        text->setPlainText(QString::number(weight));

        adjacencyList[node1->name][node2->name] = weight;
        adjacencyList[node2->name][node1->name] = weight;
    }

    void changeColor(const QColor& newColor) {
        line->setPen(QPen(newColor, 2));
    }

    void move() {
        QLineF newLine(node1->x, node1->y, node2->x, node2->y);
        line->setLine(newLine);
        text->setPos((node1->x + node2->x) / 2, (node1->y + node2->y) / 2 - 5);
    }

    void remove() {
        scene->removeItem(line);
        scene->removeItem(text);
        adjacencyList[node1->name].erase(node2->name);
        adjacencyList[node2->name].erase(node1->name);
        delete this;
    }

private:
    QGraphicsLineItem* line;
    QGraphicsTextItem* text;
    GraphNode* node1;
    GraphNode* node2;
    int weight;
};

void addVertex() {
    bool ok;
    QString vertexName = QInputDialog::getText(nullptr, "Добавление вершины", "Введите имя вершины:", QLineEdit::Normal, "", &ok);
    if (ok && !vertexName.isEmpty()) {
        GraphNode* newNode = new GraphNode(vertexName.toStdString());
        nodes.push_back(newNode);
    }
}

void addEdge() {
    if (nodes.size() < 2) {
        QMessageBox::warning(nullptr, "Ошибка", "Должно быть создано как минимум две вершины!");
        return;
    }

    bool ok;
    QString vertex1 = QInputDialog::getItem(nullptr, "Добавление ребра", "Выберите первую вершину:", getNodeNames(), 0, false, &ok);
    if (!ok) return;

    QString vertex2 = QInputDialog::getItem(nullptr, "Добавление ребра", "Выберите вторую вершину:", getNodeNames(), 0, false, &ok);
    if (!ok) return;

    if (vertex1 == vertex2) {
        QMessageBox::warning(nullptr, "Ошибка", "Выберите разные вершины!");
        return;
    }

    int weight = QInputDialog::getInt(nullptr, "Добавление ребра", "Введите вес ребра:", 1, 1, INT_MAX, 1, &ok);
    if (ok) {
        GraphNode* node1 = findNode(vertex1.toStdString());
        GraphNode* node2 = findNode(vertex2.toStdString());

        if (!edgeExists(node1, node2)) {
            GraphEdge* newEdge = new GraphEdge(node1, node2, weight);
            edges.push_back(newEdge);
        } else {
            QMessageBox::warning(nullptr, "Ошибка", "Ребро уже существует!");
        }
    }
}

void eulerianCycle() {
    // Реализация поиска эйлерова цикла
    // ...
}

void shortestPath() {
    // Реализация поиска кратчайшего пути
    // ...
}

void moveNode(int x, int y) {
    for (GraphNode* node : nodes) {
        if (node->circle->isUnderMouse()) {
            node->move(x, y);
            break;
        }
    }
}

void changeNameOrWeight() {
    for (GraphNode* node : nodes) {
        if (node->circle->isUnderMouse()) {
            node->change();
            return;
        }
    }

    for (GraphEdge* edge : edges) {
        if (edge->line->isUnderMouse()) {
            edge->change();
            return;
        }
    }
}

void changeColor() {
    QColor newColor = QColorDialog::getColor(colorVertex, nullptr, "Выберите цвет вершины");
    if (newColor.isValid()) {
        colorVertex = newColor;

        for (GraphNode* node : nodes) {
            if (node->circle->isUnderMouse()) {
                node->changeColor(colorVertex);
            }
        }

        for (GraphEdge* edge : edges) {
            if (edge->line->isUnderMouse()) {
                edge->changeColor(colorVertex);
            }
        }
    }
}

void deleteItem() {
    for (GraphNode* node : nodes) {
        if (node->circle->isUnderMouse()) {
            node->remove();
            return;
        }
    }

    for (GraphEdge* edge : edges) {
        if (edge->line->isUnderMouse()) {
            edge->remove();
            return;
        }
    }
}

std::vector<QString> getNodeNames() {
    std::vector<QString> nodeNames;
    for (const auto& pair : adjacencyList) {
        nodeNames.push_back(QString::fromStdString(pair.first));
    }
    return nodeNames;
}

GraphNode* findNode(const std::string& nodeName) {
    for (GraphNode* node : nodes) {
        if (node->name == nodeName) {
            return node;
        }
    }
    return nullptr;
}

bool edgeExists(GraphNode* node1, GraphNode* node2) {
    return adjacencyList[node1->name].find(node2->name) != adjacencyList[node1->name].end();
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QMainWindow mainWindow;

    scene = new QGraphicsScene(&mainWindow);
    scene->setSceneRect(0, 0, 636, 596);

    QGraphicsView* view = new QGraphicsView(scene, &mainWindow);
    view->setRenderHint(QPainter::Antialiasing, true);
    view->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

    QPushButton* button1 = new QPushButton("Добавить вершину", &mainWindow);
    QPushButton* button2 = new QPushButton("Добавить ребро", &mainWindow);
    QPushButton* button3 = new QPushButton("Эйлеров цикл", &mainWindow);
    QPushButton* button4 = new QPushButton("Кратчайший путь", &mainWindow);

    QObject::connect(button1, &QPushButton::clicked, addVertex);
    QObject::connect(button2, &QPushButton::clicked, addEdge);
    QObject::connect(button3, &QPushButton::clicked, eulerianCycle);
    QObject::connect(button4, &QPushButton::clicked, shortestPath);

    mainWindow.setCentralWidget(view);
    mainWindow.setGeometry(500, 150, 800, 600);

    button1->setGeometry(0, 0, 160, 30);
    button2->setGeometry(0, 30, 160, 30);
    button3->setGeometry(0, 60, 160, 30);
    button4->setGeometry(0, 90, 160, 30);

    view->setMouseTracking(true);
    view->setDragMode(QGraphicsView::ScrollHandDrag);

    QObject::connect(view, &QGraphicsView::mouseMoveEvent, moveNode);
    QObject::connect(view, &QGraphicsView::customContextMenuRequested, changeNameOrWeight);

    mainWindow.show();

    return a.exec();
}
