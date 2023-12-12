#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <Qstring>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class Vertex;
class Edge;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    bool cG();
    void iFTF(const QString& fileName);
    void eTTF(const QString& fileName);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void uE();
    void uV();
    void sGI();
    void sI();
    int gNOV() {
        return v.length();
    }
    int gNOE() {
        return e.length();
    }
    QString gEC();
    bool iGC();
    int gV(const QString& vertexName) const;
private slots:
    void on_addVB();
    void on_addEB();
    void on_rEB();
    void on_rVB();
    void on_cVB();
    void on_aIB();
    void on_aCB();
    void on_export_2_clicked();
    void on_import_2_clicked();

    void addVertex(const QString& name, const QColor& color, double x, double y);
    void addEdge(double weight, int sourceIndex, int destinationIndex);
    void removeEdge(Vertex* sourceVertex, Vertex* destinationVertex);
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

    QGraphicsEllipseItem* getSelectedVertex();
    void addEdge(Vertice vert1, Vertice vert2,Edge edge);
    void addOrEdge(Vertice vert1, Vertice vert2,OrEdge edge);

private:
    Ui::MainWindow *u;
    QGraphicsScene *s;
    QList<Vertex*> v;
    QList<Edge*> e;
};
#endif // WINDOW_H
