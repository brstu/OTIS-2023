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
#include "graph_LIB.h"

namespace Ui {
class GraphWindow;
}

class GraphWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GraphWindow(QString name, QWidget *parent = nullptr);
    ~GraphWindow();

protected:
    void keyPressEvent(QKeyEvent* event) override
    {
        if (event->matches(QKeySequence::Copy)) {
            copyObjects();
        } else if (event->matches(QKeySequence::Paste)) {
            pasteObjects();
        }
    }

private slots:
    void on_addVertPushButton_clicked();
    void on_addEdgePushButton_clicked();
    void updateEdgePosition();
    void updateOrEdgePosition();
    void updateLoopPosition(QGraphicsEllipseItem* loop, QGraphicsEllipseItem* vertex, QGraphicsTextItem *weight);
    void setColor(const QColor &color);
    void addActionWithColor(QMenu* menu, const QString& colorName, const QColor& color);
    void on_renamePushButton_clicked();
    void on_deletePushButton_clicked();
    void on_colorPushButton_clicked();
    void on_comboBox_currentIndexChanged(int index);
    void on_savePushButton_clicked();
    void on_loadPushButton_clicked();
    void on_comboBox_2_activated(int index);
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
        for (const auto& edge : loops) {
            // Получение индексов вершин
            int index1 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                   [edge](const Vertice& v) { return v.vert == edge.vertex1; }));
            // Установка значения в матрице
            adjacencyMatrix[index1][index1] = 1;
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
        for (const auto& edge : loops) {
            // Получение индексов вершин
            int index1 = std::distance(verts.begin(), std::find_if(verts.begin(), verts.end(),
                                                                   [edge](const Vertice& v) { return v.vert == edge.vertex1; }));
            // Установка значения в матрице
            QGraphicsTextItem* weightTextItem = edge.weight;
            QString weightString = weightTextItem->toPlainText();
            int weightValue = weightString.toInt();
            // Установка значения в матрице
            adjacencyMatrix[index1][index1] = weightValue;
        }
        return adjacencyMatrix;
    };
    std::vector<std::vector<int>> createIncidenceMatrix() {
        int numVertices = verts.size();
        int numEdges = edges.size() + or_edges.size() + loops.size(); // Total number of edges

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

        // Update the incidence matrix for loops
        for (const auto& edge : loops) {
            int vertex1Index = std::distance(verts.begin(),
                                             std::find_if(verts.begin(), verts.end(),
                                                          [edge](const Vertice& v) { return v.vert == edge.vertex1; }));

            incidenceMatrix[vertex1Index][edgeIndex] = 2; // For loops (both directions)

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

private:
    Ui::GraphWindow *ui;
    QGraphicsScene *scene;

    void copyObjects();
    void pasteObjects();
    void saveGraph(QJsonObject& json) const;
    void loadGraph(const QJsonObject& json);

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
    struct Loop {
        QGraphicsEllipseItem* vertex1;
        QGraphicsEllipseItem* loop;
        QGraphicsTextItem* weight;
        bool operator==(const Loop& other) const {
            return vertex1 == other.vertex1 && loop == other.loop;
        }

    };

    struct Vertice{
        QGraphicsEllipseItem* vert;
        QGraphicsTextItem* textvert;
    };

    QString graphName;
    QList<Vertice> verts;
    QList<Edge> edges;
    QList<Loop> loops;
    QList<OrEdge> or_edges;
    QString key;

    QList<Vertice> copiedVert;
    QList<Edge> copiedEdge;
    QList<OrEdge> copiedOrEdge;
    QList<Loop> copiedLoops;
};



#endif // GRAPHWINDOW_H
