#ifndef GRAPHAREA_H
#define GRAPHAREA_H

#include <QMainWindow>
#include <QVector>
#include <QPainter>
#include<QTimer>
#include <unordered_set>

#define Diameter 65

class Vertex
{
public:
    Vertex(int x, int y, QString text);
    Vertex() = default;
    void render(QPainter* painter);

    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    void unSelect();
    void select();
    bool isSelected();
    QString getText();

private:
    QString m_text;
    bool m_isSelected;
    int m_x;
    int m_y;
};

class GraphArea
{
public:
    GraphArea(int x, int y, int w, int h, bool isDirected);
    ~GraphArea();
    void render(QPainter* painter);
    void update();
    void clear();

    void onMousePressed(QMouseEvent *event, int textComboIndex, int weight, bool hasWeight);
    void onMouseMoved(QMouseEvent *event);
    void setGraphName(QString name);
    void exportGraphData();
    void importGraph();
    QString getGraphName() const;
    void exportMatricies();

private:

    bool m_isDirected;
    QString m_graphName;

    struct Neighbour
    {
        Neighbour(QString vertName, int weight, bool hasWeight);
        Neighbour() = default;
        QString vertName;
        int weight;
        bool hasWeight;
    };


    std::map<QString, QVector<Neighbour>> m_graph;
    std::map<QString, Vertex> m_vertices;
    QVector<QString> m_selectedVerticies;

    int m_x;
    int m_y;
    int m_w;
    int m_h;

    QString getIntersectingVertex(int x, int y, QString except = QString());
    bool isValidVertexPosition(int x, int y);
    void selectVertex(QString vertexName, int weight, bool hasWeight);
    bool circlesIntersect(int x1, int y1, int x2, int y2);
    void deleteVertexAtPosition(int x, int y);
    void connectVerticies(QString vert1, QString vert2, int weight, bool hasWeight);
    void renderEdges(QPainter* painter);
    float vectorLength(const QPoint vector);
    QPoint getPointOnCircle(int x, int y, int Radius, double angle);
    QPointF toUnitVector(QPoint p1, QPoint p2);
    bool isDirectedVertex(QString vert1, QString vert2);
    bool hasNeighbour(QString vertex, QString neighbour);
    void renderWeight(QPoint pos, QPainter* painter, int weight);
    void drawArrowhead(QPainter* painter, QPoint start,  QPoint end);
    void renderGraphInfo(QPainter* painter);
    int countEdges();
    std::vector<std::vector<int>> convertToAdjacencyMatrix(const std::map<std::string, std::vector<std::string>>& adjacencyList);
    bool isGraphFull(const std::map<std::string, std::vector<std::string>>& adjacencyList);

    std::map<std::string, std::vector<std::string>> getGraphFormatted();
    bool isTreeDFS(const std::map<std::string, std::vector<std::string>>& adjacencyList);
    bool dfs(const std::string& vertex, const std::string& parent,
    const std::map<std::string, std::vector<std::string>>& adjacencyList,
             std::unordered_set<std::string>& visited, std::unordered_set<std::string>& inStack);
    void dfs(const std::string& vertex, const std::map<std::string, std::vector<std::string>>& adjacencyList, std::unordered_set<std::string>& visited);
    bool isConnected(const std::map<std::string, std::vector<std::string>>& adjacencyList);
    bool isEulerian(const std::map<std::string, std::vector<std::string>>& adjacencyList);
    friend std::ostream& operator<<(std::ostream& os, GraphArea& g);
    friend std::istream& operator>>(std::istream& os, GraphArea& g);
};

#endif
