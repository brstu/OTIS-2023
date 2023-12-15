#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

#include "ui_graphwindow.h"
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsView>
#include <QToolButton>
#include <QPixmap>
#include <QPainter>
#include <QGraphicsEllipseItem>
#include <QInputDialog>
#include <cmath>
#include <QMessageBox>
#include <QList>
#include <QGraphicsPathItem>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QKeyEvent>
#include <QGuiApplication>
#include <QMimeData>
#include <QClipboard>
#include <QIODevice>
#include <vector>
#include <QTableWidget>
#include <QMainWindow>
#include <QMenu>
#include <QDebug>
#include <QFileDialog>
#include <QLabel>
#include <string>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <set>

#define INT_MAX 2147483647

using VEC1 = std::vector<int>;
using VEC2 = std::vector<VEC1>;


class stack
{
private:
    VEC1 array;
    int head = -1;
public:
    // Pushes an element to the top of the stack
    void push(int x)
    {
        head++;
        array.push_back(x);
    }

    // Removes the top element of the stack
    void pop()
    {
        head--;
        array.pop_back();
    }

    // Returns the top element of the stack
    int front()
    {
        return array[head];
    }

    // Returns true if the stack is empty
    bool is_empty()
    {
        return head == -1;
    }

    // Prints the stack
    void print()
    {
        int l = array.size();
        for (int i = 0; i < l; i++)
        {
            std::cout << array[i];
        }
        std::cout << std::endl;
    }

    // [] operator overloading
    int operator[](int i)
    {
        return array[array.size() - i - 1];
    }
};

class queue
{
private:
    VEC1 array;
    int tail = 0;
public:
    // Pushes an element to the end of the queue
    void push(int x)
    {
        array.push_back(x);
        tail++;
    }

    // Removes the first element of the queue
    void pop()
    {
        array.erase(array.cbegin());
        tail--;
    }

    // Returns the first element of the queue
    int front()
    {
        return array[0];
    }

    // Returns true if the queue is empty
    bool is_empty()
    {
        return tail == 0;
    }

    // Prints the queue
    void print()
    {
        int l = array.size();
        for (int i = 0; i < l; i++)
        {
            std::cout << array[i];
        }
        std::cout << std::endl;
    }

    // swap two elements in the queue
    void swap(int i, int j)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    // [] operator overloading
    int operator[](int i)
    {
        return array[i];
    }
};

class alg
{
public:
    // Breadth-first search
    void BFS(VEC2 &adjacencyMatrix, VEC1 &visited, int start=0)
    {
        int max_node = adjacencyMatrix.size();
        queue q;
        q.push(start);
        while (!q.is_empty())
        {
            int v = q.front();
            q.pop();
            if (!visited[v])
            {
                visited[v] = 1;
                for (int i = 0; i < max_node; i++)
                {
                    if (adjacencyMatrix[v][i] && !visited[i])
                    {
                        q.push(i);
                    }
                }
            }
        }
    }

    // Depth-first search
    void DFS(VEC2 &adjacencyMatrix, VEC1 &visited, int start=0)
    {
        int max_node = adjacencyMatrix.size();
        stack s;
        s.push(start);
        while (!s.is_empty())
        {
            int v = s.front();
            s.pop();
            if (!visited[v])
            {
                visited[v] = 1;
                for (int i = 0; i < max_node; i++)
                {
                    if (adjacencyMatrix[v][i] && !visited[i])
                    {
                        s.push(i);
                    }
                }
            }
        }
    }

    bool hasCycle(const VEC2& adjacencyMatrix, VEC1& visited, int current, int parent) {
        visited[current] = 1;

        for (int neighbor = 0; neighbor < adjacencyMatrix.size(); ++neighbor) {
            if (adjacencyMatrix[current][neighbor]) {
                if (!visited[neighbor]) {
                    if (hasCycle(adjacencyMatrix, visited, neighbor, current)) {
                        return true;
                    }
                } else if (neighbor != parent) {
                    // If the neighbor is visited and not the parent, then a cycle is found
                    return true;
                }
            }
        }

        return false;
    }

    bool isEulerian(VEC2& adjacencyMatrix) {
        int numNodes = adjacencyMatrix.size();

        // Check if the graph is connected
        VEC1 visited(numNodes, 0);

        DFS(adjacencyMatrix, visited, 0);

        for (int i = 0; i < numNodes; ++i) {
            if (!visited[i]) {
                // The graph is not connected
                return false;
            }
        }

        // Count vertices with odd degree
        int oddDegreeCount = 0;
        for (int i = 0; i < numNodes; ++i) {
            int degree = 0;
            for (int j = 0; j < numNodes; ++j) {
                degree += adjacencyMatrix[i][j];
            }

            if (degree % 2 != 0) {
                ++oddDegreeCount;
            }
        }

        // Check Eulerian circuit or path conditions
        if (oddDegreeCount == 0 || oddDegreeCount == 2) {
            return true;
        } else {
            return false;
        }
    }

    bool isOrEulerian(VEC2& adjacencyMatrix) {
        int numNodes = adjacencyMatrix.size();

        // Check if the graph is strongly connected
        VEC1 visited(numNodes, 0);
        DFS(adjacencyMatrix, visited, 0);

        for (int i = 0; i < numNodes; ++i) {
            if (!visited[i]) {
                // The graph is not strongly connected
                return false;
            }
        }

        // Check in-degrees and out-degrees
        VEC1 inDegree(numNodes, 0);
        VEC1 outDegree(numNodes, 0);

        for (int i = 0; i < numNodes; ++i) {
            for (int j = 0; j < numNodes; ++j) {
                outDegree[i] += adjacencyMatrix[i][j];
                inDegree[j] += adjacencyMatrix[i][j];
            }
        }

        // Count vertices with unequal in-degrees and out-degrees
        int unequalDegrees = 0;
        for (int i = 0; i < numNodes; ++i) {
            if (inDegree[i] != outDegree[i]) {
                ++unequalDegrees;
            }
        }

        // Check Eulerian circuit or path conditions
        if (unequalDegrees == 0 || (unequalDegrees == 2 && inDegree[0] == outDegree[0] + 1 && outDegree[0] == inDegree[0] + 1)) {
            return true;
        } else {
            return false;
        }
    }


    // Find count of connected components by Breadth-first search
    int conCompBFS(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        int count = 0;
        VEC1 visited(max_node);
        for (int i = 0; i < max_node; i++)
        {
            visited[i] = 0;
        }
        for (int i = 0; i < max_node; i++)
        {
            if (!visited[i])
            {
                BFS(adjacencyMatrix, visited, i);
                count++;
            }
        }
        return count;
    }

    // Find count of connected components by Depth-first search
    int conCompDFS(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        int count = 0;
        VEC1 visited(max_node);
        for (int i = 0; i < max_node; i++)
        {
            visited[i] = 0;
        }
        for (int i = 0; i < max_node; i++)
        {
            if (!visited[i])
            {
                DFS(adjacencyMatrix, visited, i);
                count++;
            }
        }
        return count;
    }


    // Find Eulerian Cycle
    VEC1 findEulerianCycle(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        VEC1 cycle;
        int start = 0;
        stack s;
        s.push(start);
        while (!s.is_empty())
        {
            start = s.front();
            bool found_edge = false;
            for (int i = 0; i < max_node; i++)
            {
                if (adjacencyMatrix[start][i])
                {
                    s.push(i);
                    adjacencyMatrix[start][i] = 0;
                    adjacencyMatrix[i][start] = 0;
                    found_edge = true;
                    break;
                }
            }
            if (!found_edge)
            {
                s.pop();
                cycle.push_back(start);
            }
        }
        return cycle;
    }
    bool hasHamiltonianCycle(const VEC2& adjacencyMatrix) {
        int numVertices = adjacencyMatrix.size();

        // Check degree condition
        for (int i = 0; i < numVertices; ++i) {
            int degree = 0;
            for (int j = 0; j < numVertices; ++j) {
                degree += adjacencyMatrix[i][j];
            }

            if (degree < 2) {
                return false;  // Vertex with degree less than 2, no Hamiltonian cycle possible
            }
        }

        // Graph is connected (you may need to implement a connectivity check here)

        return true;
    }

    int bfsEccentricity(const VEC2& adjacencyMatrix, int source) {
        int numVertices = adjacencyMatrix.size();
        VEC1 distance(numVertices, INT_MAX);

        queue q;
        q.push(source);
        distance[source] = 0;

        while (!q.is_empty()) {
            int current = q.front();
            q.pop();

            for (int neighbor = 0; neighbor < numVertices; ++neighbor) {
                if (adjacencyMatrix[current][neighbor] && distance[neighbor] == INT_MAX) {
                    distance[neighbor] = distance[current] + 1;
                    q.push(neighbor);
                }
            }
        }

        // Find the maximum distance (eccentricity)
        int maxDistance = 0;
        for (int i = 0; i < numVertices; ++i) {
            if (distance[i] > maxDistance) {
                maxDistance = distance[i];
            }
        }

        return maxDistance;
    }

    // Function to calculate the diameter, radius, and center of the graph
    std::string calculateGraphParameters(const VEC2& adjacencyMatrix) {
        int numVertices = adjacencyMatrix.size();

        int diameter = 0;
        int radius = INT_MAX; // Initialize radius to infinity

        for (int i = 0; i < numVertices; ++i) {
            int eccentricity = bfsEccentricity(adjacencyMatrix, i);

            // Update diameter and radius
            if (eccentricity > diameter) {
                diameter = eccentricity;
            }
            if (eccentricity < radius) {
                radius = eccentricity;
            }
        }
        std::string a;
        a = a + "Diameter: " + std::to_string(diameter) + "\n";
        a = a + "Radius: " + std::to_string(radius) + "\n";
        a += "Center(s): ";
        for (int i = 0; i < numVertices; ++i) {
            if (bfsEccentricity(adjacencyMatrix, i) == radius) {
                a = a + std::to_string(i)+ " ";
            }
        }
        return a;
    }

    // Find Hamiltonian Cycle
    queue findHamiltonianCycle(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        queue q;
        for (int i = 0; i < max_node; i++)
        {
            q.push(i);
        }
        int i;
        for (int k = 0; k < max_node * (max_node - 1); k++)
        {
            if (adjacencyMatrix[q[0]][q[1]] != 1)
            {
                i = 1;
                while (adjacencyMatrix[q[0]][q[i]] != 1 || adjacencyMatrix[q[1]][q[i + 1]] != 1)
                {
                    i++;
                }
                for (int j = 0; 1 + j < i - j; j++)
                {
                    q.swap(1 + j, i - j);
                }
            }

            q.push(q.front());
            q.pop();
        }
        return q;
    }

    // Dejkstra algorithm which returns length of the path from start to each other node
    VEC1 Dejkstra(VEC2 &adjacencyMatrix, int start, VEC1 &path)
    {
        int max_node = adjacencyMatrix.size();
        VEC1 distance(max_node);
        VEC1 visited(max_node);
        for (int i = 0; i < max_node; i++)
        {
            distance[i] = INT_MAX;
            visited[i] = 0;
        }
        distance[start] = 0;
        for (int i = 0; i < max_node; i++)
        {
            int min = INT_MAX;
            int min_index = 0;
            for (int j = 0; j < max_node; j++)
            {
                if (visited[j] == 0 && distance[j] <= min)
                {
                    min = distance[j];
                    min_index = j;
                }
            }
            visited[min_index] = 1;

            for (int j = 0; j < max_node; j++)
            {
                if (visited[j] == 0
                    && adjacencyMatrix[min_index][j] != 0
                    && distance[min_index] != INT_MAX
                    && distance[min_index] + adjacencyMatrix[min_index][j] < distance[j])
                {
                    distance[j] = distance[min_index] + adjacencyMatrix[min_index][j];
                    path[j] = min_index;
                }
            }
        }

        path[start] = start;
        return distance;
    }

    // Find the path in vector from Dejkstra algorithm
    void thisIsTheWay(VEC1 &path, int start, int end, VEC1 &way)
    {
        do
        {
            way.push_back(end);
            end = path[end];
        }
        while (end != start);
        way.push_back(start);

        int n = way.size();
        for (int i = 0; i < n / 2; i++)
        {
            std::swap(way[i], way[n - 1 - i]);
        }
    }

    // Floyd-Warshall algorithm which returns length of the path from each node to each node
    VEC2 FloydWarshall(VEC2 &adjacencyMatrix, VEC2 &path)
    {
        int max_node = adjacencyMatrix.size();
        VEC2 distance(max_node, VEC1(max_node));
        for (int i = 0; i < max_node; i++)
        {
            for (int j = 0; j < max_node; j++)
            {
                if (adjacencyMatrix[i][j] == 0 && i != j)
                {
                    distance[i][j] = INT_MAX;
                }
                else
                {
                    distance[i][j] = adjacencyMatrix[i][j];
                }
            }
        }

        for (int k = 0; k < max_node; k++)
        {
            for (int i = 0; i < max_node; i++)
            {
                for (int j = 0; j < max_node; j++)
                {
                    if (distance[i][k] != INT_MAX
                        && distance[k][j] != INT_MAX
                        && distance[i][k] + distance[k][j] < distance[i][j])
                    {
                        distance[i][j] = distance[i][k] + distance[k][j];
                        path[i][j] = k;
                    }
                }
            }
        }

        for (int i = 0; i < max_node; i++)
        {
            path[i][i] = i;
        }
        for (int i = 0; i < max_node; i++)
        {
            for (int j = 0; j < max_node; j++)
            {
                if (path[i][j] == 0)
                {
                    path[i][j] = i;
                }
            }
        }
        return distance;
    }

    // Find the path in vector from Floyd-Warshall algorithm
    void thisIsTheWay(VEC2 &path, int start, int end, VEC1 &way)
    {
        do
        {
            way.push_back(end);
            end = path[start][end];
        }
        while (end != start);
        way.push_back(start);

        int n = way.size();
        for (int i = 0; i < n / 2; i++)
        {
            std::swap(way[i], way[n - 1 - i]);
        }
    }

    // Prim algorithm which returns adjancy matrix of the tree
    VEC2 Prim(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        VEC2 tree(max_node, VEC1(max_node));
        VEC1 key(max_node);
        VEC1 parent(max_node);
        VEC1 visited(max_node);
        for (int i = 0; i < max_node; i++)
        {
            key[i] = INT_MAX;
            visited[i] = 0;
        }
        key[0] = 0;
        parent[0] = -1;
        for (int i = 0; i < max_node - 1; i++)
        {
            int min = INT_MAX;
            int min_index = 0;
            for (int j = 0; j < max_node; j++)
            {
                if (visited[j] == 0 && key[j] < min)
                {
                    min = key[j];
                    min_index = j;
                }
            }
            visited[min_index] = 1;
            for (int j = 0; j < max_node; j++)
            {
                if (visited[j] == 0
                    && adjacencyMatrix[min_index][j]
                    && adjacencyMatrix[min_index][j] < key[j])
                {
                    parent[j] = min_index;
                    key[j] = adjacencyMatrix[min_index][j];
                }
            }
        }
        for (int i = 1; i < max_node; i++)
        {
            tree[i][parent[i]] = adjacencyMatrix[i][parent[i]];
            tree[parent[i]][i] = adjacencyMatrix[i][parent[i]];
        }
        return tree;
    }

    // Prim algorithm which returns adjancy matrix of the tree
    VEC2 Kruskal(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        VEC2 tree(max_node, VEC1(max_node));
        std::set<std::set<int>> nodes;
        VEC2 edges;
        for (int i = 0; i < max_node; i++)
        {
            for (int j = i + 1; j < max_node; j++)
            {
                if (adjacencyMatrix[i][j])
                {
                    edges.push_back({ adjacencyMatrix[i][j], i, j });
                }
            }
        }
        std::sort(edges.begin(), edges.end());

        for (int i = 0; i < max_node; i++)
        {
            nodes.insert(std::set<int>{i});
        }

        for (int i = 0; i < edges.size(); i++)
        {
            std::set<int> node1;
            std::set<int> node2;
            for (auto it = nodes.begin(); it != nodes.end(); it++)
            {
                if (it->find(edges[i][1]) != it->end())
                {
                    node1 = *it;
                }
                if (it->find(edges[i][2]) != it->end())
                {
                    node2 = *it;
                }
            }
            if (node1 != node2)
            {
                nodes.erase(node1);
                nodes.erase(node2);
                node1.insert(node2.begin(), node2.end());
                nodes.insert(node1);
                tree[edges[i][1]][edges[i][2]] = edges[i][0];
                tree[edges[i][2]][edges[i][1]] = edges[i][0];
            }
        }
        return tree;
    }

};

struct Edge {
    QGraphicsEllipseItem* vertex1;
    QGraphicsEllipseItem* vertex2;
    QGraphicsLineItem* edgeItem;
    QGraphicsTextItem* weight;
    bool operator==(const Edge& other) const {
        return vertex1 == other.vertex1 && vertex2 == other.vertex2 && edgeItem == other.edgeItem;
    }

};

struct OrEdge {
    QGraphicsEllipseItem* vertex1;
    QGraphicsEllipseItem* vertex2;
    QGraphicsLineItem* edgeItem;
    QGraphicsPolygonItem* arrowItem;
    QGraphicsTextItem* weight;
    bool operator==(const OrEdge& other) const {
        return vertex1 == other.vertex1 && vertex2 == other.vertex2 && edgeItem == other.edgeItem && arrowItem==other.arrowItem;
    }

};

struct Vertice{
    QGraphicsEllipseItem* vert;
    QGraphicsTextItem* textvert;
};
namespace Ui {
class GraphWindow;
}

class GraphWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GraphWindow(QString name, QWidget *parent = nullptr);
    ~GraphWindow();

private slots:
    void on_addVertPushButton_clicked(){
        //считаем кол-во вершин для подсказки названия
        QString num = QString::number(verts.count());
        //запрпашиваем альтернвтивное имя вершины
        QString vertexName = QInputDialog::getText(this, "Введите название вершины", "Название:",QLineEdit::Normal,num);
        if (!vertexName.isEmpty()) {
            Vertice vert;
            // Создать вершину
            QGraphicsEllipseItem* vertex = new QGraphicsEllipseItem(0, 0, 25, 25);
            vertex->setData(0,"vert");
            vertex->setData(1, verts.count());
            vertex->setData(3, vertexName);
            vertex->setPos(rand()%200, rand()%200); // Пример начальной позиции
            vertex->setFlag(QGraphicsItem::ItemIsMovable);
            vertex->setFlag(QGraphicsItem::ItemIsSelectable);
            vertex->setBrush(QBrush(Qt::blue));
            vertex->setZValue(1);
            // Создать текст
            QGraphicsTextItem* textItem = new QGraphicsTextItem(vertexName, vertex);

            // Получить границы текста
            QRectF textRect = textItem->boundingRect();

            // Установить позицию текста в центр вершины
            qreal xPos = (vertex->boundingRect().width() - textRect.width()) / 2.0;
            qreal yPos = (vertex->boundingRect().height() - textRect.height()) / 2.0;
            textItem->setPos(xPos, yPos);
            textItem->setDefaultTextColor(QColor(Qt::yellow));


            // Добавить вершину на сцену
            ui->graphicsView->scene()->addItem(vertex);
            vert.textvert = textItem;
            vert.vert = vertex;
            verts.append(vert);
        }
    };
    void on_addEdgePushButton_clicked(){
    QGraphicsEllipseItem* selectedVertex1 = getSelectedVertex();
    if (!selectedVertex1) return;
    QGraphicsEllipseItem* selectedVertex2 = getSelectedVertex();
    if (!selectedVertex2) return;
    bool ok;
    double weight = QInputDialog::getInt(this, "Введите вес ребра", "Введите вес ребра:", 1, -2147483647, 2147483647, 2, &ok);
    if (!ok) {
    return;
    }

    qreal middleX = (selectedVertex1->scenePos().x() + selectedVertex2->scenePos().x()) / 2.0;
    qreal middleY = (selectedVertex1->scenePos().y() + selectedVertex2->scenePos().y()) / 2.0;

    // Если выбрана одна и та же вершина, создаем петлю
    if (selectedVertex1 == selectedVertex2) {
    QMessageBox::warning(this,"Ошибка","Нельзя указывать одну и ту же вершину");
        return;
    }

    // Создание ребра
    if (key == "Unorient"){
    QGraphicsLineItem* edge = new QGraphicsLineItem;
    //edge->setFlag(QGraphicsItem::ItemIsMovable);

    edge->setFlag(QGraphicsItem::ItemIsSelectable);
    edge->setLine(selectedVertex1->scenePos().x() + 0, selectedVertex1->scenePos().y() + 0,
                  selectedVertex2->scenePos().x() + 0, selectedVertex2->scenePos().y() + 0);
    edge->setData(0,"edge");
    edge->setData(1,selectedVertex1->data(1));
    edge->setData(2,selectedVertex2->data(1));
    // Добавление ребра на сцену
    QGraphicsTextItem* weightTextItem = new QGraphicsTextItem(QString::number(weight));
    weightTextItem->setPos(middleX, middleY);
    ui->graphicsView->scene()->addItem(weightTextItem);
    ui->graphicsView->scene()->addItem(edge);
    Edge edge1;
    edge1.vertex1 = selectedVertex1;
    edge1.vertex2 = selectedVertex2;
    edge1.edgeItem = edge;
    edge1.weight = weightTextItem;
    edges.append(edge1);

    // Соединение сигнала изменения сцены с обновлением позиции ребра
    connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
        updateEdgePosition();
    });
    } else {
    // Создание ориентированного ребра
    QGraphicsLineItem* directedEdge = new QGraphicsLineItem;
    directedEdge->setFlag(QGraphicsItem::ItemIsSelectable);
    directedEdge->setData(1,selectedVertex1->data(1));
    directedEdge->setData(2,selectedVertex2->data(1));

    directedEdge->setLine(selectedVertex1->scenePos().x() + 25, selectedVertex1->scenePos().y() + 25,
                          selectedVertex2->scenePos().x() + 25, selectedVertex2->scenePos().y() + 25);
    directedEdge->setData(0,"edge");
    QGraphicsTextItem* weightTextItem = new QGraphicsTextItem(QString::number(weight));
    weightTextItem->setPos(middleX, middleY);
    ui->graphicsView->scene()->addItem(weightTextItem);
    // Добавление ориентированного ребра на сцену
    ui->graphicsView->scene()->addItem(directedEdge);

    // Draw an arrowhead at the end of the line
    double arrowSize = 10.0;
    double angle = atan2(directedEdge->line().dy(), directedEdge->line().dx());
    double x1 = directedEdge->line().x2() - arrowSize * cos(angle - M_PI / 6);
    double y1 = directedEdge->line().y2() - arrowSize * sin(angle - M_PI / 6);
    double x2 = directedEdge->line().x2() - arrowSize * cos(angle + M_PI / 6);
    double y2 = directedEdge->line().y2() - arrowSize * sin(angle + M_PI / 6);

    QGraphicsPolygonItem* arrowhead = new QGraphicsPolygonItem(QPolygonF() << directedEdge->line().p2() << QPointF(x1, y1) << QPointF(x2, y2));
    arrowhead->setBrush(Qt::black);
    ui->graphicsView->scene()->addItem(arrowhead);
    OrEdge directedEdge1;
    directedEdge1.vertex1 = selectedVertex1;
    directedEdge1.vertex2 = selectedVertex2;
    directedEdge1.edgeItem = directedEdge;
    directedEdge1.arrowItem = arrowhead;
    directedEdge1.weight = weightTextItem;
    or_edges.append(directedEdge1);
    connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
        updateOrEdgePosition();
    });
    }

    };

    void updateEdgePosition(){
    for (const Edge& edge : edges) {
    QGraphicsEllipseItem* vertex1 = edge.vertex1;
    QGraphicsEllipseItem* vertex2 = edge.vertex2;
    QGraphicsLineItem* edgeItem = edge.edgeItem;
    QGraphicsTextItem* weight = edge.weight;

    if (vertex1 && vertex2 && edgeItem) {
        edgeItem->setLine(vertex1->scenePos().x() + vertex1->boundingRect().width() / 2,
                          vertex1->scenePos().y() + vertex1->boundingRect().height() / 2,
                          vertex2->scenePos().x() + vertex2->boundingRect().width() / 2,
                          vertex2->scenePos().y() + vertex2->boundingRect().height() / 2);
    }
    qreal middleX = (vertex1->scenePos().x() + vertex2->scenePos().x()) / 2.0;
    qreal middleY = (vertex1->scenePos().y() + vertex2->scenePos().y()) / 2.0;
    weight -> setPos(middleX,middleY+5);

    }
    };
    void updateOrEdgePosition(){
    for (OrEdge& directedEdge1 : or_edges) {
    QGraphicsEllipseItem* vertex1 = directedEdge1.vertex1;
    QGraphicsEllipseItem* vertex2 = directedEdge1.vertex2;
    QGraphicsLineItem* edgeItem = directedEdge1.edgeItem;
    QGraphicsPolygonItem* arrowItem = directedEdge1.arrowItem;
    QGraphicsTextItem* weight = directedEdge1.weight;
    if (vertex1 && vertex2 && edgeItem && arrowItem) {
        // Update the position of the edge
        edgeItem->setLine(vertex1->scenePos().x() + vertex1->boundingRect().width() / 2,
                          vertex1->scenePos().y() + vertex1->boundingRect().height() / 2,
                          vertex2->scenePos().x() + vertex2->boundingRect().width() / 2,
                          vertex2->scenePos().y() + vertex2->boundingRect().height() / 2);

        // Update the position and shape of the arrowhead
        double arrowSize = 10.0;
        double angle = atan2(edgeItem->line().dy(), edgeItem->line().dx());
        double x1 = edgeItem->line().x2() - arrowSize * cos(angle);
        double y1 = edgeItem->line().y2() - arrowSize * sin(angle);

        // Set the position of the arrowhead
        arrowItem->setPos(QPointF(x1, y1));

        // Calculate the coordinates for the other two points of the triangle
        double x2 = x1 - arrowSize * cos(angle - M_PI / 6);
        double y2 = y1 - arrowSize * sin(angle - M_PI / 6);
        double x3 = x1 - arrowSize * cos(angle + M_PI / 6);
        double y3 = y1 - arrowSize * sin(angle + M_PI / 6);

        // Update the shape of the arrowhead
        QPolygonF arrowheadPolygon(QPolygonF() << QPointF(0, 0) << QPointF(x2 - x1, y2 - y1) << QPointF(x3 - x1, y3 - y1));
        arrowItem->setPolygon(arrowheadPolygon);
    }
    qreal middleX = (vertex1->scenePos().x() + vertex2->scenePos().x()) / 2.0;
    qreal middleY = (vertex1->scenePos().y() + vertex2->scenePos().y()) / 2.0;
    weight -> setPos(middleX,middleY+5);
    }
    };

    void setColor(const QColor &color){
    // Получаем список всех выделенных элементов
    QList<QGraphicsItem*> selectedItems = scene->selectedItems();
    // Идентификация и изменение цвета для каждого выделенного элемента
    for (QGraphicsItem *item : selectedItems) {
    QString ItemType = item->data(0).toString();
    // Проверка, является ли элемент вершиной
    QGraphicsEllipseItem *vertexItem = qgraphicsitem_cast<QGraphicsEllipseItem*>(item);
    if (vertexItem) {
        if (ItemType == "vert"){
            vertexItem->setBrush(QBrush(color));
        } else if (ItemType == "loop"){
            vertexItem->setPen(QPen(color, 2));
        }
    }

    // Проверка, является ли элемент ребром
    QGraphicsLineItem *edgeItem = qgraphicsitem_cast<QGraphicsLineItem*>(item);
    if (edgeItem) {
        edgeItem->setPen(QPen(color, 2)); // Пример установки цвета для ребра
    }
    }
    };
    void addActionWithColor(QMenu* menu, const QString& colorName, const QColor& color){
    QPixmap colorIcon(20, 20);
    colorIcon.fill(color);
    QAction* action = menu->addAction(QIcon(colorIcon), colorName);

    connect(action, &QAction::triggered, this, [this, color]() {
        setColor(color);
    });
    };

    void on_renamePushButton_clicked(){
    QGraphicsEllipseItem* selectedVertex = getSelectedVertex();
    if (!selectedVertex) return;
    for (const Vertice& vert : verts){
    if (selectedVertex == vert.vert){

        QString newName = QInputDialog::getText(this,"Введите новое имя вершины","Имя:");
        if (!newName.isEmpty()){
            vert.textvert->setPlainText(newName);
            QRectF textRect = vert.textvert->boundingRect();
            // Установить позицию текста в центр вершины
            qreal xPos = (vert.vert->boundingRect().width() - textRect.width()) / 2.0;
            qreal yPos = (vert.vert->boundingRect().height() - textRect.height()) / 2.0;
            vert.textvert->setPos(xPos, yPos);
            break;
        } else {QMessageBox::warning(this, "Ошибка", "Пустое название"); break;}

    }
    }
    };
    void on_deletePushButton_clicked(){
    QList<QGraphicsItem *> itemsToDelete;
    QList<QGraphicsItem *> selectedItems = ui->graphicsView->scene()->selectedItems();
    for (QGraphicsItem *item : selectedItems) {
    if (QGraphicsLineItem* edgeItem = dynamic_cast<QGraphicsLineItem*>(item)) {
        for (const OrEdge& or_edge : or_edges){
            if (or_edge.edgeItem == edgeItem){
                itemsToDelete.append(or_edge.arrowItem);
                itemsToDelete.append(or_edge.weight);
            }
        }
        for (const Edge& edge : edges){
            if (edge.edgeItem == edgeItem){
                itemsToDelete.append(edge.weight);
            }
        }
        edges.erase(std::remove_if(edges.begin(), edges.end(),
                                   [edgeItem](const Edge& edge) { return edge.edgeItem == edgeItem; }),
                    edges.end());

        itemsToDelete.append(edgeItem);



        or_edges.erase(std::remove_if(or_edges.begin(), or_edges.end(),
                                      [edgeItem](const OrEdge& edge) { return edge.edgeItem == edgeItem; }),
                       or_edges.end());
        for (QGraphicsItem *item : itemsToDelete) {
            delete item;
        }

    }else if (QGraphicsEllipseItem* vertex = dynamic_cast<QGraphicsEllipseItem*>(item)){
        // Remove connected edges
        QList<QGraphicsLineItem*> connectedEdges;
        for (const Edge& edge : edges) {
            if (edge.vertex1 == vertex || edge.vertex2 == vertex) {
                connectedEdges.append(edge.edgeItem);
            }
        }
        // Remove connected edges from the list and the scene
        for (QGraphicsLineItem* connectedEdge : connectedEdges) {
            for (const Edge& edge : edges){
                if (edge.edgeItem == connectedEdge){
                    itemsToDelete.append(edge.weight);
                }
            }
            itemsToDelete.append(connectedEdge);
            edges.erase(std::remove_if(edges.begin(), edges.end(),
                                       [connectedEdge](const Edge& edge) { return edge.edgeItem == connectedEdge; }),
                        edges.end());

            ui->graphicsView->scene()->removeItem(connectedEdge);

        }

        // Remove connected directed edges
        QList<QGraphicsLineItem*> connectedOrEdges;
        for (const OrEdge& edge : or_edges) {
            if (edge.vertex1 == vertex || edge.vertex2 == vertex) {
                connectedOrEdges.append(edge.edgeItem);
            }
        }

        // Remove connected edges from the list and the scene
        for (QGraphicsLineItem*& connectedOrEdge : connectedOrEdges) {
            for (const OrEdge& or_edge : or_edges){
                if (or_edge.edgeItem == connectedOrEdge){
                    itemsToDelete.append(or_edge.arrowItem);
                    itemsToDelete.append(or_edge.weight);
                }
            }
            itemsToDelete.append(connectedOrEdge);
            or_edges.erase(std::remove_if(or_edges.begin(), or_edges.end(),
                                          [connectedOrEdge](const OrEdge& edge) { return edge.edgeItem == connectedOrEdge; }),
                           or_edges.end());
            ui->graphicsView->scene()->removeItem(connectedOrEdge);
        }

        // Remove the vertex from the list
        verts.erase(std::remove_if(verts.begin(), verts.end(),
                                   [vertex](const Vertice& vert) { return vert.vert == vertex; }),
                    verts.end());

        // Remove the vertex from the scene
        ui->graphicsView->scene()->removeItem(vertex);
        itemsToDelete.append(vertex);  // Store the item for deletion

        for (QGraphicsItem *item : itemsToDelete) {
            delete item;
        }

    }
    }
    };

    void on_colorPushButton_clicked(){
QMenu* colorMenu = new QMenu(this);

    // Добавляем цветные квадраты как иконки к действиям
    addActionWithColor(colorMenu, "Красный", Qt::red);
    addActionWithColor(colorMenu, "Зеленый", Qt::green);
    addActionWithColor(colorMenu, "Синий", Qt::blue);
    addActionWithColor(colorMenu, "Желтый", Qt::yellow);
    addActionWithColor(colorMenu, "Фиолетовый", Qt::magenta);
    addActionWithColor(colorMenu, "Голубой", Qt::cyan);
    addActionWithColor(colorMenu, "Серый", Qt::gray);
    addActionWithColor(colorMenu, "Черный", Qt::black);
    addActionWithColor(colorMenu, "Белый", Qt::white);

    // Отображаем меню относительно глобальной позиции кнопки
    colorMenu->exec(ui->colorPushButton->mapToGlobal(QPoint(0, ui->colorPushButton->height())));
};



    void on_savePushButton_clicked(){
    QJsonObject json;
    saveGraph(json);

    QJsonDocument saveDoc(json);
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Graph"), "", tr("Graph Files (*.json)"));
    QFileInfo fileInfo(fileName);
    QString basePath = fileInfo.path();
    QString baseName = fileInfo.baseName();
    QString txtFilePath = QDir(basePath).filePath(baseName + ".txt");
    if (!fileName.isEmpty()) {
    QFile file(txtFilePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        // Export graph header
        out << graphName << " : " << (key == "Orient" ? "ORIENT" : "UNORIENT") << " ;\n";

        // Export vertex names
        out << " ";
        for (const Vertice &vertice : verts) {
            out << vertice.textvert->toPlainText() << ", ";
        }
        out.seek(out.pos() - 2);  // Remove the last comma and space
        out << " ;\n";

        // Export edges
        for (const Edge &edge : edges) {

            out << " " << edge.vertex1->data(3).toString() << " -> " << edge.vertex2->data(3).toString() << ";";
        }
        for (const OrEdge &edge : or_edges) {

            out << " " << edge.vertex1->data(3).toString() << " -> " << edge.vertex2->data(3).toString() << ";";
        }

        file.close();
    }
    QFile saveFile(fileName);
    if (saveFile.open(QIODevice::WriteOnly)) {
        saveFile.write(saveDoc.toJson());
        saveFile.close();
    } else {
        // Handle error in opening the file
    }
    }
    };
    void on_loadPushButton_clicked(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Load Graph"), "", tr("Graph Files (*.json)"));
    if (!fileName.isEmpty()) {
    QFile loadFile(fileName);
    if (loadFile.open(QIODevice::ReadOnly)) {
        QByteArray loadData = loadFile.readAll();
        QJsonDocument loadDoc(QJsonDocument::fromJson(loadData));
        scene->clear();
        edges.clear();
        or_edges.clear();
        verts.clear();
        loadGraph(loadDoc.object());
        // Optionally, clear existing graph before loading
        // scene->clear();

        loadFile.close();
    }
    }
    };

    void on_comboBox_2_activated(int index){
    switch (index) {
    case 1:{
    int numVertices = verts.length();
        int numEdges;
        if (key == "Unorient")
{
            numEdges = edges.length();}
        else
        {
            numEdges = or_edges.length();
        }
        if (numVertices == 0) break;

    // Строка с информацией о количестве вершин и ребер
    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);

    // Строка со степенями вершин
QString degreesText = "Степени вершин:\n";
    bool eulertrue = true;
    bool treetrue = true;
    if (key == "Unorient"){
    foreach (Vertice vertex, verts) {
        int degree = 0;
        foreach (Edge edge, edges) {
            if (edge.vertex1 == vertex.vert || edge.vertex2 == vertex.vert) {
                degree++;
            }
        }

        degreesText += QString("Вершина %1: %2\n").arg(vertex.textvert->toPlainText()).arg(degree);
    if(degree % 2 != 0){ eulertrue = false;}
    if(degree > 2){ treetrue = false;}
    }}else{
    foreach (Vertice vertex, verts) {
    int degree = 0;
    foreach (OrEdge edge, or_edges) {
            if (edge.vertex1 == vertex.vert || edge.vertex2 == vertex.vert) {
                degree++;
            }
    }

    degreesText += QString("Вершина %1: %2\n").arg(vertex.textvert->toPlainText()).arg(degree);
        if(degree % 2 != 0){ eulertrue = false;}
        if(degree > 1){ treetrue = false;}
    }}



    // Матрица инцидентности
    QString incidenceMatrixText = "Матрица инцидентности:\n";
    std::vector<std::vector<int>> matrix = createIncidenceMatrix();
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numEdges; j++) {
            if (matrix[i][j] == 1) {
                incidenceMatrixText += "1 ";
            } else if (matrix[i][j]==-1) {
                incidenceMatrixText += "-1 ";
            } else{
                incidenceMatrixText += "0 ";
            }
        }
        incidenceMatrixText += "\n";
    }

    // Матрица смежности
    QString adjacencyMatrixText = "Матрица смежности:\n";
    matrix = createAdjacencyMatrix();
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {

            if (matrix[i][j]) {
                adjacencyMatrixText += "1 ";
            } else {
                adjacencyMatrixText += "0 ";
            }
        }
        adjacencyMatrixText += "\n";
    }

    QString completeGraph;
    if((numVertices*(numVertices-1))/2 == numEdges){completeGraph = "Граф является полным";}
    else {completeGraph = "Граф не является полным";};
    QString connected;
    if(complGraph()){
        connected = "Граф является связным";
    } else {
            connected = "Граф не является связным";
    };
    // Формирование окна с информацией о графе
    QString tree;
    if(isTree(matrix)){ tree = "Граф является деревом";} else {tree = "Граф не является деревом";};
    QString eur;
    alg alg;
    if(alg.isEulerian(matrix) || alg.isOrEulerian(matrix)){ eur = "Граф является эйлеровым";} else {eur = "Граф не является эйлеровым";};
    QDialog dialog;
    QVBoxLayout layout(&dialog);
    QLabel infoLabel(infoText);
    QLabel degreesLabel(degreesText);
    QLabel incidenceMatrixLabel(incidenceMatrixText);
    QLabel adjacencyMatrixLabel(adjacencyMatrixText);
    QLabel GraphConnectedLabel(connected);
    QLabel Tree(tree);
    QLabel CompleteGraphLabel(completeGraph);
    QLabel Eur(eur);
    layout.addWidget(&infoLabel);
    layout.addWidget(&degreesLabel);
    layout.addWidget(&incidenceMatrixLabel);
    layout.addWidget(&adjacencyMatrixLabel);
    layout.addWidget(&GraphConnectedLabel);
    layout.addWidget(&Tree);
    layout.addWidget(&CompleteGraphLabel);
    layout.addWidget(&Eur);
    dialog.exec();
    break;
    }
    case 2:{
    alg alg;
    VEC2 matrix = createAdjacencyMatrix();
    VEC1 cucle;
    QString cucl;
    if (alg.isEulerian(matrix)){
            cucle = alg.findEulerianCycle(matrix);
            for (auto cuc: cucle){
            cucl =cucl+ QString::number(cuc)+" ";
            }
            QDialog dialog;
            QVBoxLayout layout(&dialog);
            QLabel Cucl(cucl);
            layout.addWidget(&Cucl);
            dialog.exec();
    } else if (alg.isOrEulerian(matrix)){
            QMessageBox::warning(this,"Простите","Пока этот алгоритм работает только для неориентированного графа");
    } else {
            QMessageBox::warning(this,"Не существует эйлерового цикла","Не существует эйлерового цикла");
    }
        break;
    }
    case 3:{
        alg alg;
        VEC2 matrix = createAdjacencyMatrix();
        queue cucle;
        QString cucl;
        if (alg.hasHamiltonianCycle(matrix)){
            cucle = alg.findHamiltonianCycle(matrix);
            while (!cucle.is_empty()){
            cucl =cucl+ QString::number(cucle.front())+" ";
            cucle.pop();
            }
            QDialog dialog;
            QVBoxLayout layout(&dialog);
            QLabel Cucl(cucl);
            layout.addWidget(&Cucl);
            dialog.exec();
        } else if (key == "Orient"){
            QMessageBox::warning(this,"Простите","Пока этот алгоритм работает только для неориентированного графа");
        } else {
            QMessageBox::warning(this,"Не существует эйлерового цикла","Не существует эйлерового цикла");
        }
        break;
    }
    case 4:
    {
        alg alg;
        VEC2 matrix = createAdjacencyMatrix();
        QString param = QString::fromStdString(alg.calculateGraphParameters(matrix));
        QDialog dialog;
        QVBoxLayout layout(&dialog);
        QLabel Param(param);
        //QLabel Cucl(cucl);
        layout.addWidget(&Param);
        dialog.exec();
        break;
    }
    case 5:{
        alg search;
        int start = 0;
        VEC1 distance;
        VEC1 path(verts.length());
        VEC2 matrix = createWeightMatrix();
        distance = search.Dejkstra(matrix, start, path);

        VEC1 way;

        // Создаем строку с результатами
        QString result;
        QTextStream stream(&result);

        for (int i = 0; i < verts.length(); i++) {
            stream << "\n" << start << "->" << i << " : " << distance[i];
            stream << "\tPath:";

            search.thisIsTheWay(path, start, i, way);
            for (int j = 0; j < way.size(); j++) {
            stream << way[j];
            }
            way.clear();
        }

        // Создаем и отображаем диалоговое окно
        QDialog dialog;
        QVBoxLayout layout(&dialog);
        QLabel Result(result);
        layout.addWidget(&Result);
        dialog.exec();

        break;
    }

    default:
        break;
    }
};
    std::vector<std::vector<int>> createAdjacencyMatrix(){
        int numVertices = verts.size();
        std::vector<std::vector<int>> adjacencyMatrix(numVertices, std::vector<int>(numVertices, 0));

        for (const auto& edge : edges) {
            // Получение индексов вершин
            int index1 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                      [edge](const Vertice& v) { return v.vert == edge.vertex1; }));
            int index2 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                      [edge](const Vertice& v) { return v.vert == edge.vertex2; }));

            // Установка значения в матрице
            adjacencyMatrix[index1][index2] = 1;
            adjacencyMatrix[index2][index1] = 1; // Если граф неориентированный
        }
        for (const auto& edge : or_edges) {
            // Получение индексов вершин
            int index1 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                   [edge](const Vertice& v) { return v.vert == edge.vertex1; }));
            int index2 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                   [edge](const Vertice& v) { return v.vert == edge.vertex2; }));

            // Установка значения в матрице
            adjacencyMatrix[index1][index2] = 1;
        }
        return adjacencyMatrix;
    };
    std::vector<std::vector<int>> createWeightMatrix(){
        int numVertices = verts.size();
        std::vector<std::vector<int>> adjacencyMatrix(numVertices, std::vector<int>(numVertices, 0));

        for (const auto& edge : edges) {
            // Получение индексов вершин
            int index1 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                   [edge](const Vertice& v) { return v.vert == edge.vertex1; }));
            int index2 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                   [edge](const Vertice& v) { return v.vert == edge.vertex2; }));
            QGraphicsTextItem* weightTextItem = edge.weight;
            QString weightString = weightTextItem->toPlainText();
            int weightValue = weightString.toInt();
            // Установка значения в матрице
            adjacencyMatrix[index1][index2] = weightValue;
            adjacencyMatrix[index2][index1] = weightValue; // Если граф неориентированный
        }
        for (const auto& edge : or_edges) {
            // Получение индексов вершин
            int index1 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                   [edge](const Vertice& v) { return v.vert == edge.vertex1; }));
            int index2 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                   [edge](const Vertice& v) { return v.vert == edge.vertex2; }));
            QGraphicsTextItem* weightTextItem = edge.weight;
            QString weightString = weightTextItem->toPlainText();
            int weightValue = weightString.toInt();
            // Установка значения в матрице
            adjacencyMatrix[index1][index2] = weightValue;
        }

        return adjacencyMatrix;
    };
    std::vector<std::vector<int>> createIncidenceMatrix() {
        int numVertices = verts.size();
        int numEdges = edges.size() + or_edges.size(); // Total number of edges

        // Initialize the incidence matrix
        std::vector<std::vector<int>> incidenceMatrix(numVertices, std::vector<int>(numEdges, 0));

        int edgeIndex = 0;

        // Update the incidence matrix for normal edges
        for (const auto& edge : edges) {
            int vertex1Index = std::distance(verts.begin(),
                                             std::find_if(verts.begin(), verts.end(),
                                                          [edge](const Vertice& v) { return v.vert == edge.vertex1; }));
            int vertex2Index = std::distance(verts.begin(),
                                             std::find_if(verts.begin(), verts.end(),
                                                          [edge](const Vertice& v) { return v.vert == edge.vertex2; }));

            incidenceMatrix[vertex1Index][edgeIndex] = 1;
            incidenceMatrix[vertex2Index][edgeIndex] = 1;

            ++edgeIndex;
        }

        // Update the incidence matrix for oriented edges
        for (const auto& edge : or_edges) {
            int vertex1Index = std::distance(verts.begin(),
                                             std::find_if(verts.begin(), verts.end(),
                                                          [edge](const Vertice& v) { return v.vert == edge.vertex1; }));
            int vertex2Index = std::distance(verts.begin(),
                                             std::find_if(verts.begin(), verts.end(),
                                                          [edge](const Vertice& v) { return v.vert == edge.vertex2; }));

            incidenceMatrix[vertex1Index][edgeIndex] = 1;
            incidenceMatrix[vertex2Index][edgeIndex] = -1; // For oriented edges

            ++edgeIndex;
        }

        return incidenceMatrix;
    }

    bool complGraph(){
        VEC2 matrix = createAdjacencyMatrix();
        alg a;
        int ans = a.conCompBFS(matrix);
        if (ans == 1){
            return 1;
        } else {
            return 0;
        }
    }

    bool isTree(const VEC2& adjacencyMatrix, int start = 0) {
        int numNodes = adjacencyMatrix.size();
        VEC1 visited(numNodes, 0);
        alg alg;
        if (alg.hasCycle(adjacencyMatrix, visited, start, -1)) {
            // The graph has a cycle, so it's not a tree
            return false;
        }

        // Check if all nodes are visited (graph is connected)
        for (int i = 0; i < numNodes; ++i) {
            if (!visited[i]) {
                // The graph is not connected, so it's not a tree
                return false;
            }
        }

        // The graph is connected and acyclic, so it's a tree
        return true;
    }

    QGraphicsEllipseItem* getSelectedVertex(){
        // Подготовка списка названий вершин
        QStringList vertexNames;
        for (const Vertice& vert : verts) {
            QGraphicsTextItem* textItem = vert.textvert;
            if (textItem) {
                vertexNames.append(textItem->toPlainText());
            }
        }

        // Вывод списка вершин и предложение выбрать первую вершину
        bool ok;
        QString selectedVertexName1 = QInputDialog::getItem(this, "Выбор вершины", "Выберите вершину для создания ребра:", vertexNames, 0, false, &ok);

        if (!ok) {
            // Пользователь отменил операцию
            return 0;
        }

        // Поиск соответствующей вершины по выбранному имени
        QGraphicsEllipseItem* selectedVertex1 = nullptr;
        for (const Vertice& vert : verts) {
            QGraphicsTextItem* textItem = vert.textvert;
            if (textItem && textItem->toPlainText() == selectedVertexName1) {
                selectedVertex1 = vert.vert;
                break;
            }
        }

        if (!selectedVertex1) {
            QMessageBox::warning(this, "Ошибка", "Не удалось найти выбранную первую вершину.");
            return 0;
        }
        return selectedVertex1;
    };
    void addEdge(Vertice vert1, Vertice vert2,Edge edge){
        QGraphicsLineItem* edge1 = new QGraphicsLineItem;
        //edge->setFlag(QGraphicsItem::ItemIsMovable);
        QGraphicsTextItem* weight = new QGraphicsTextItem;
        ui->graphicsView->scene()->addItem(weight);
        weight->setPlainText(edge.weight->toPlainText());
        edge1->setFlag(QGraphicsItem::ItemIsSelectable);
        //edge->setLine(selectedVertex1->scenePos().x() + 25, selectedVertex1->scenePos().y() + 25,
        // selectedVertex2->scenePos().x() + 25, selectedVertex2->scenePos().y() + 25);
        edge1->setData(0,"edge");
        edge1->setData(1,vert1.vert->data(1));
        edge1->setData(2,vert2.vert->data(1));
        // Добавление ребра на сцену
        ui->graphicsView->scene()->addItem(edge1);
        Edge edge2;
        edge2.vertex1 = vert1.vert;
        edge2.vertex2 = vert2.vert;
        edge2.edgeItem = edge1;
        edge2.weight = weight;
        edges.append(edge2);

        // Соединение сигнала изменения сцены с обновлением позиции ребра
        connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
            updateEdgePosition();
        });
    };
    void addOrEdge(Vertice vert1, Vertice vert2,OrEdge edge){
        QGraphicsLineItem* directedEdge = new QGraphicsLineItem;
        QGraphicsTextItem* weight = new QGraphicsTextItem;
        ui->graphicsView->scene()->addItem(weight);
        weight->setPlainText(edge.weight->toPlainText());
        directedEdge->setFlag(QGraphicsItem::ItemIsSelectable);
        directedEdge->setData(1,vert1.vert->data(1));
        directedEdge->setData(2,vert2.vert->data(1));


        directedEdge->setData(0,"edge");
        // Добавление ориентированного ребра на сцену
        ui->graphicsView->scene()->addItem(directedEdge);



        QGraphicsPolygonItem* arrowhead = new QGraphicsPolygonItem(QPolygonF()) ;
        arrowhead->setBrush(Qt::black);
        ui->graphicsView->scene()->addItem(arrowhead);
        OrEdge directedEdge1;
        directedEdge1.vertex1 = vert1.vert;
        directedEdge1.vertex2 = vert2.vert;
        directedEdge1.edgeItem = directedEdge;
        directedEdge1.arrowItem = arrowhead;
        directedEdge1.weight = weight;
        or_edges.append(directedEdge1);
        connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
            updateOrEdgePosition();
        });
    };

private:
    Ui::GraphWindow *ui;
    QGraphicsScene *scene;
    void saveGraph(QJsonObject& json) const {

        // Save graph data to the QJsonObject
        json["name"] = graphName;
        json["key"] = key;

        // Save vertices
        QJsonArray verticesArray;
        for (const Vertice& vertice : verts) {
            QJsonObject vertObject;
            vertObject["nameVert"] = vertice.textvert->toPlainText();
            vertObject["xPos"] = vertice.vert->x();
            vertObject["yPos"] = vertice.vert->y();
            vertObject["data1"] = vertice.vert->data(1).toInt();
            verticesArray.append(vertObject);
        }
        json["vertices"] = verticesArray;
        //save edges
        QJsonArray edgesArray;
        for(const Edge& edge: edges){
            QJsonObject edgeObject;
            edgeObject["vert1"] = edge.edgeItem->data(1).toInt();
            edgeObject["vert2"] = edge.edgeItem->data(2).toInt();
            edgeObject["weight"] = edge.weight->toPlainText();
            edgesArray.append(edgeObject);
        }
        json["edges"] = edgesArray;
        QJsonArray orEdgesArray;
        for(const OrEdge& edge: or_edges){
            QJsonObject edgeObject;
            edgeObject["vert1"] = edge.edgeItem->data(1).toInt();
            edgeObject["vert2"] = edge.edgeItem->data(2).toInt();
            edgeObject["weight"] = edge.weight->toPlainText();
            orEdgesArray.append(edgeObject);
        }
        json["orEdges"] = orEdgesArray;
    };
    void loadGraph(const QJsonObject& json){

        graphName = json["name"].toString();
        this -> setWindowTitle(graphName);
        key = json["key"].toString();

        // Load vertices
        QJsonArray verticesArray = json["vertices"].toArray();
        for (const QJsonValue& vertValue : verticesArray) {
            QJsonObject vertObject = vertValue.toObject();

            QGraphicsEllipseItem* newVertexItem = new QGraphicsEllipseItem(0,0,25,25);
            QGraphicsTextItem* newTextItem = new QGraphicsTextItem(vertObject["nameVert"].toString(), newVertexItem);
            newVertexItem->setData(0,"vert");
            newVertexItem->setData(1, verts.count());
            newVertexItem->setPos(vertObject["xPos"].toInt(),vertObject["yPos"].toInt()); // Пример начальной позиции
            newVertexItem->setFlag(QGraphicsItem::ItemIsMovable);
            newVertexItem->setFlag(QGraphicsItem::ItemIsSelectable);
            newVertexItem->setBrush(QBrush(Qt::white));
            newVertexItem->setZValue(1);
            QRectF textRect = newTextItem->boundingRect();

            // Установить позицию текста в центр вершины
            qreal xPos = (newVertexItem->boundingRect().width() - textRect.width()) / 2.0;
            qreal yPos = (newVertexItem->boundingRect().height() - textRect.height()) / 2.0;
            newTextItem->setPos(xPos, yPos);


            // Добавить вершину на сцену
            ui->graphicsView->scene()->addItem(newVertexItem);
            Vertice vert1;
            vert1.textvert = newTextItem;
            vert1.vert = newVertexItem;
            verts.append(vert1);
        }
        QJsonArray loopsArray = json["loops"].toArray();

        QJsonArray edgesArray = json["edges"].toArray();
        for (const QJsonValue& edgeValue : edgesArray){
            QJsonObject edgeObject = edgeValue.toObject();
            for (const Vertice& vert1: verts){
                for (const Vertice& vert2 : verts){
            if (edgeObject["vert1"].toInt() == vert1.vert->data(1).toInt() && edgeObject["vert2"].toInt() == vert2.vert->data(1).toInt()){
                Edge edge;
                QGraphicsTextItem* text = new QGraphicsTextItem;
                text->setPlainText(edgeObject["weight"].toString());
                edge.weight = text;
                addEdge(vert1,vert2,edge);
            }
                }
            }
        }

        QJsonArray orEdgesArray = json["orEdges"].toArray();
        for (const QJsonValue& edgeValue : orEdgesArray){
            QJsonObject edgeObject = edgeValue.toObject();
            for (const Vertice& vert1: verts){
                for (const Vertice& vert2 : verts){
            if (edgeObject["vert1"].toInt() == vert1.vert->data(1).toInt() && edgeObject["vert2"].toInt() == vert2.vert->data(1).toInt()){
                OrEdge edge;
                QGraphicsTextItem* text = new QGraphicsTextItem;
                text->setPlainText(edgeObject["weight"].toString());
                edge.weight = text;
                addOrEdge(vert1,vert2,edge);
            }
                }
            }
        }

    };

    QString graphName;
    QList<Vertice> verts;
    QList<Edge> edges;
    QList<OrEdge> or_edges;
    QString key;
    QList<Vertice> copiedVert;
    QList<Edge> copiedEdge;
    QList<OrEdge> copiedOrEdge;
};


#endif // GRAPHWINDOW_H
