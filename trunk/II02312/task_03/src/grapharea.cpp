#include "grapharea.h"
#include <QPainter>
#include <QMouseEvent>
#include <iostream>
#include<sstream>
#include <QFileDialog>
#include <fstream>
#include <unordered_set>

GraphArea::GraphArea(int x, int y, int w, int h, bool isDirected)
    : m_x(x), m_y(y), m_w(w), m_h(h), m_isDirected(isDirected)
{

}

GraphArea::~GraphArea()
{

}

void GraphArea::render(QPainter* painter)
{
    painter->setBrush(Qt::white);
    painter->drawRect(m_x, m_y, m_w, m_h);

    renderEdges(painter);

    for(auto& [text, vert] : m_vertices)
    {
        vert.render(painter);
    }

    renderGraphInfo(painter);
}

int GraphArea::countEdges()
{
    int count = 0;

    for(auto& [vertName, neighbours] : m_graph)
    {
        for(auto& neighbour : neighbours)
        {
            count++;
        }
    }

    if(!m_isDirected) count /= 2;

    return count;
}

void GraphArea::renderGraphInfo(QPainter* painter)
{
    painter->setBrush(Qt::white);

    QPoint Size = { 600, 230 };

    QPoint pos { m_x + m_w / 2 - Size.x() / 2, 10  };

    painter->drawRect(pos.x(), pos.y(), Size.x(), Size.y());

    QFont font("Arial", 15);
    QFontMetrics fontMetrics(font);

    painter->setFont(font);
    painter->setPen(Qt::black);

    int textX = pos.x() + Size.x() / 2 - fontMetrics.horizontalAdvance("Graph Info: ") / 2;

    painter->drawText(textX, pos.y() + 20, "GraphInfo");

    font = QFont("Arial", 10);
    fontMetrics = QFontMetrics(font);

    int textY = pos.y() + 50;

    painter->drawText(pos.x() + 10, textY, "Verticies: " + QString::number(m_graph.size()));
    textY += 20;
    painter->drawText(pos.x() + 10, textY, "Edges: " + QString::number(countEdges()));
    textY += 20;

    QString selectedVertName;
    QString degreeNumber;
    if(m_selectedVerticies.size() == 1)
    {
        selectedVertName = m_selectedVerticies[0];
        degreeNumber = QString::number(m_graph.at(m_selectedVerticies[0]).size());
    }

    painter->drawText(pos.x() + 10, textY, "Degree " + selectedVertName + ": " + degreeNumber);
    textY += 20;

    std::map<std::string, std::vector<std::string>> graphMap = getGraphFormatted();

    if(!m_isDirected)
    {
        painter->drawText(pos.x() + 10, textY, "Is Tree: " + QString((isTreeDFS(graphMap) ? "True" : "False")));
        textY += 20;
        painter->drawText(pos.x() + 10, textY, "Is Full: " + QString((isGraphFull(graphMap) ? "True" : "False")));
        textY += 20;
        painter->drawText(pos.x() + 10, textY, "Is Connected: " + QString((isConnected(graphMap) ? "True" : "False")));
        textY += 20;
        painter->drawText(pos.x() + 10, textY, "Is Eulerian: " + QString((isEulerian(graphMap) ? "True" : "False")));
    }


    font = QFont("Arial", 35);
    fontMetrics = QFontMetrics(font);

    painter->setFont(font);

    QString title = m_isDirected ? "Oriented" : "Unoriented";
    painter->drawText(pos.x() + 300 - fontMetrics.horizontalAdvance(title) / 2, 1050, title);
}

bool GraphArea::isEulerian(const std::map<std::string, std::vector<std::string>>& adjacencyList)
{
    if(adjacencyList.size() < 1) return false;

    if(!isConnected(adjacencyList)) return false;

    for(const auto&[name, neighbours] : adjacencyList)
    {
        if(neighbours.size() % 2 != 0) return false;
    }

    return true;
}

void GraphArea::drawArrowhead(QPainter* painter, QPoint start,  QPoint end) {
    static const double arrowSize = 20;

    double angle = std::atan2(end.y() - start.y(), end.x() - start.x());

    QPointF arrowPoint1 = end - arrowSize * QPointF(std::cos(angle + M_PI / 6), std::sin(angle + M_PI / 6));
    QPointF arrowPoint2 = end - arrowSize * QPointF(std::cos(angle - M_PI / 6), std::sin(angle - M_PI / 6));

    QPolygonF arrowhead;

    arrowhead << end << arrowPoint1 << arrowPoint2;

    painter->setBrush(QColor(90, 90, 90));
    painter->drawPolygon(arrowhead);
}
float GraphArea::vectorLength(const QPoint vector)
{
    return std::sqrt(vector.x() * vector.x() + vector.y() * vector.y());
}


QPointF GraphArea::toUnitVector(QPoint p1, QPoint p2)
{
    QPoint origin = p2 - p1;

    float length = vectorLength(origin);

    QPointF unit = { origin.x() / length, origin.y() / length  };

    return unit;

}

bool GraphArea::hasNeighbour(QString vertex, QString neighbourName)
{
    QVector<Neighbour>& vert1N = m_graph.at(vertex);

    auto it = std::find_if(vert1N.begin(), vert1N.end(), [&neighbourName](const Neighbour& neighbour)
    {
        return neighbour.vertName == neighbourName;
    });

    return it != vert1N.end();
}

bool GraphArea::isDirectedVertex(QString vert1, QString vert2)
{
    return hasNeighbour(vert1, vert2) && !hasNeighbour(vert2, vert1);
}

void GraphArea::renderWeight(QPoint pos, QPainter* painter, int weight)
{
    QPen oldPen = painter->pen();

    painter->setBrush(QColor(40, 40, 40));

    QPoint rectSize = { 40, 35 };
    QPoint pTopLeft = pos - rectSize / 2;

    painter->drawRect(pTopLeft.x(), pTopLeft.y(), rectSize.x(), rectSize.y());

    int fontSize = 15;

    QFont font("Arial", fontSize);
    QFontMetrics fontMetrics(font);

    painter->setFont(font);
    painter->setPen(Qt::yellow);

    QString weightStr = QString::number(weight);

    int textX = pos.x() - fontMetrics.horizontalAdvance(weightStr) / 2;
    int textY = pos.y() + fontSize / 2;

    painter->drawText(textX, textY, weightStr);


    painter->setPen(oldPen);
}

void GraphArea::renderEdges(QPainter* painter)
{
    QPen oldPen = painter->pen();
    int Radius = Diameter / 2;

    for(auto& [vertName, neighbours] : m_graph)
    {
        for(auto& neighbour : neighbours)
        {
            Vertex& vert1 = m_vertices.at(vertName);
            Vertex& vert2 = m_vertices.at(neighbour.vertName);

            QPoint p1 = QPoint(vert1.getX() + Radius, vert1.getY() + Radius);
            QPoint p2 = QPoint(vert2.getX() + Radius, vert2.getY() + Radius);
            QPointF unit = toUnitVector(p1, p2);
            float newLength = vectorLength(p2 - p1) - Radius * 2;

            QPointF newP1 = p1 + unit * Radius;
            p1 = {(int)newP1.x(), (int)newP1.y()};

            QPointF newP2 = p1 + unit * newLength;
            p2 = { (int)newP2.x(), (int)newP2.y() };

            painter->setPen(QPen(Qt::gray, 6));
            painter->drawLine(p1, p2);
            painter->setPen(oldPen);

            if(isDirectedVertex(vertName, neighbour.vertName))
            {
                drawArrowhead(painter, p1, p2);
            }

            if(neighbour.hasWeight)
            {
                QPointF weightPosF = p1 + unit * (newLength * 0.5f);
                QPoint weightPos = {(int)weightPosF.x(), (int)weightPosF.y()};

                renderWeight(weightPos, painter, neighbour.weight);
            }
        }
    }

    painter->setPen(oldPen);
}

void GraphArea::update()
{

}

QString GraphArea::getIntersectingVertex(int x, int y, QString except)
{
    for(auto& [text, vert] : m_vertices)
    {
        if(except == text)
        {
            continue;
        }
        int x2 = vert.getX() + Diameter / 2;
        int y2 = vert.getY() + Diameter / 2;

        if(circlesIntersect(x, y, x2, y2)) return text;
    }

    return QString();
}

void GraphArea::deleteVertexAtPosition(int x, int y)
{
    QString vertexName = getIntersectingVertex(x, y);

    if(vertexName.length() == 0) return;

    for(auto& [vertName, neighbours] : m_graph)
    {
        for(QVector<Neighbour>::ConstIterator it = neighbours.begin(); it != neighbours.end(); it++)
        {
            if(it->vertName == vertexName)
            {
                neighbours.erase(it);
                break;
            }
        }
    }

    m_vertices.erase(vertexName);
    m_graph.erase(vertexName);
    m_selectedVerticies.erase(std::remove(m_selectedVerticies.begin(), m_selectedVerticies.end(), vertexName), m_selectedVerticies.end());
}

bool GraphArea::circlesIntersect(int x1, int y1, int x2, int y2)
{
    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    return distance <= 3 * Diameter / 2;
}

bool GraphArea::isValidVertexPosition(int x, int y)
{
    int step = Diameter / 1.5;
    int radius = Diameter / 2;

    bool isOut = x - step < m_x || x + step > m_x + m_w || y - step < m_y || y < m_y || y + step > m_y + m_h;

    return !isOut;
}

void GraphArea::selectVertex(QString vertexName, int weight, bool hasWeight)
{
    m_vertices.at(vertexName).select();

    m_selectedVerticies.append(vertexName);

    if(m_selectedVerticies.size() >= 2)
    {
        m_vertices.at(m_selectedVerticies[0]).unSelect();
        m_vertices.at(m_selectedVerticies[1]).unSelect();

        connectVerticies(m_selectedVerticies[0], m_selectedVerticies[1], weight, hasWeight);

        m_selectedVerticies.clear();
    }
}

void GraphArea::connectVerticies(QString vert1, QString vert2, int weight, bool hasWeight)
{
    if(vert1 == vert2)
    {
        m_selectedVerticies.clear();
        return;
    }

    if(hasNeighbour(vert1, vert2) || hasNeighbour(vert2, vert1) && !m_isDirected) return;

    m_graph.at(vert1).append(Neighbour(vert2, weight, hasWeight));

    if(!m_isDirected)
    {
        m_graph.at(vert2).append(Neighbour(vert1, weight, hasWeight));
    }
}

void GraphArea::onMousePressed(QMouseEvent *event, int textComboIndex, int weight, bool hasWeight)
{
    int x = event->pos().x();
    int y = event->pos().y();
    int radius =  Diameter / 2;

    if(!isValidVertexPosition(x,y)) return;

    QString intersectingVertex = getIntersectingVertex(x,y);

    if(intersectingVertex.length() > 0)
    {
        if(event->button() == Qt::RightButton)
        {
            selectVertex(intersectingVertex, weight, hasWeight);
        }
        else if(event->button() == Qt::MiddleButton)
        {
            deleteVertexAtPosition(x, y);
        }
        return;
    }

    QString toAdd;

    if(textComboIndex == 0)
    {
        toAdd = "1";
        while(m_graph.find(toAdd) != m_graph.end())
        {
            toAdd = QString::number(toAdd.toInt() + 1);
        }
    }
    else if(textComboIndex == 1)
    {
        toAdd = "A";

        while(m_graph.find(toAdd) != m_graph.end())
        {
            toAdd = QChar(toAdd[0].toLatin1() + 1);
        }
    }

    m_vertices.insert({ toAdd, Vertex(x - radius, y - radius, toAdd)});
    m_graph.insert({ toAdd, {  }});
}

void GraphArea::onMouseMoved(QMouseEvent *event)
{
    int x = event->pos().x();
    int y = event->pos().y();
    int radius = Diameter / 2;


    for(auto& [text, vert] : m_vertices)
    {
        int x2 = vert.getX() + radius;
        int y2 = vert.getY() + radius;

        double distance = std::sqrt(std::pow(x - x2, 2) + std::pow(y - y2, 2));

        if(distance <= radius)
        {
            QString intersectingVertexName = getIntersectingVertex(x, y, text);
            bool isValidPos = isValidVertexPosition(x, y);

            if(intersectingVertexName.length() > 0 || !isValidPos) return;

            vert.setX(x - radius);
            vert.setY(y - radius);
        }
    }
}

void GraphArea::setGraphName(QString newName)
{
    m_graphName = newName;
}



void GraphArea::exportGraphData()
{
    QString filePath = QFileDialog::getSaveFileName(nullptr, "Save File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");

    if (!filePath.isEmpty())
    {
        std::ofstream out(filePath.toStdString());

        out << *this;

        out.close();
    }
}

void GraphArea::importGraph()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Save File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");

    if (!filePath.isEmpty())
    {
        clear();

        std::ifstream in(filePath.toStdString());

        in >> *this;

        in.close();
    }

}

QString GraphArea::getGraphName() const
{
    return m_graphName;
}

Vertex::Vertex(int x, int y, QString text)
    : m_x(x), m_y(y), m_text(text), m_isSelected(false)
{

}

void Vertex::render(QPainter* painter)
{
    painter->setBrush(m_isSelected ? QColor(150, 35, 27) :  QColor(90, 90, 90) );
    painter->drawEllipse(m_x, m_y, Diameter, Diameter);

    int fontSize = 20;

    QFont font("Arial", fontSize);
    QFontMetrics fontMetrics(font);

    painter->setFont(font);
    painter->setPen(Qt::yellow);

    int textX = m_x + Diameter / 2 - fontMetrics.horizontalAdvance(m_text) / 2;
    int textY = m_y + Diameter / 2 + fontSize / 2;

    painter->drawText(textX, textY, m_text);

    painter->setPen(Qt::black);
}

void Vertex::select()
{
    m_isSelected = true;
}

void Vertex::unSelect()
{
     m_isSelected = false;
}

bool Vertex::isSelected()
{
    return m_isSelected;
}

int Vertex::getX()
{
    return m_x;
}

int Vertex::getY()
{
    return m_y;
}

void Vertex::setX(int x)
{
    m_x = x;
}

void Vertex::setY(int y)
{
    m_y = y;
}

QString Vertex::getText()
{
    return m_text;
}

GraphArea::Neighbour::Neighbour(QString vertName, int weight, bool hasWeight)
    : vertName(vertName), weight(weight), hasWeight(hasWeight)
{

}

std::map<std::string, std::vector<std::string>> GraphArea::getGraphFormatted()
{
    std::map<std::string, std::vector<std::string>> graphMap;

    for(const auto&[name, neighbours] : m_graph)
    {
        std::string nameStr = name.toStdString();
        graphMap.insert({nameStr, {}});

        for(const auto& neighbour : neighbours)
        {
            graphMap.at(nameStr).push_back(neighbour.vertName.toStdString());

        }
    }

    return graphMap;
}

void GraphArea::exportMatricies()
{
    QString filePath = QFileDialog::getSaveFileName(nullptr, "Save File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");

    if (!filePath.isEmpty())
    {
        std::ofstream out(filePath.toStdString());

        std::map<std::string, std::vector<std::string>> graphMap = getGraphFormatted();

        std::vector<std::vector<int>> matrix = convertToAdjacencyMatrix(graphMap);

        out << "AdjacencyMatrix: \n";

        for(const auto& vec : matrix)
        {
            for(const auto& n : vec)
            {
                out << n << " ";
            }
            out << '\n';
        }

        out.close();
    }
}

std::ostream& operator<<(std::ostream& os, GraphArea& g)
{
    os << g.m_graphName.toStdString() << '\n';
    os << g.m_graph.size() << '\n';

    for(const auto&[name, neighbours] : g.m_graph)
    {
        os << name.toStdString() << " ";
        for(const auto& neighbour : neighbours)
        {
            os << neighbour.vertName.toStdString() << " " << neighbour.weight << " " << neighbour.hasWeight << " ";

        }
        os << '\n';
    }

    for(auto&[name, vertex] : g.m_vertices)
    {
        os << name.toStdString() << " " << vertex.getText().toStdString()
           << " " << vertex.isSelected() << " " << vertex.getX() - g.m_x << " " << vertex.getY() - g.m_y << "\n";
    }

    return os;
}

void GraphArea::clear()
{
    m_graph.clear();
    m_vertices.clear();
    m_selectedVerticies.clear();
}

std::vector<std::vector<int>> GraphArea::convertToAdjacencyMatrix(const std::map<std::string, std::vector<std::string>>& adjacencyList)
{
    if(adjacencyList.size() < 1) return {};

    std::unordered_map<std::string, int> vertexMap;
    int index = 0;
    for (const auto& pair : adjacencyList)
    {
        std::string vertex = pair.first;
        if (vertexMap.find(vertex) == vertexMap.end())
        {
            vertexMap[vertex] = index++;
        }

        for (std::string neighbor : pair.second) {
            if (vertexMap.find(neighbor) == vertexMap.end())
            {
                vertexMap[neighbor] = index++;
            }
        }
    }

    int numNodes = vertexMap.size();

    std::vector<std::vector<int>> adjacencyMatrix(numNodes, std::vector<int>(numNodes, 0));

    for (const auto& pair : adjacencyList)
    {
        std::string vertex = pair.first;
        int i = vertexMap[vertex];

        for (std::string neighbor : pair.second)
        {
            int j = vertexMap[neighbor];
            adjacencyMatrix[i][j] = 1;
        }
    }

    return adjacencyMatrix;
}

bool GraphArea::dfs(const std::string& vertex, const std::string& parent, const std::map<std::string, std::vector<std::string>>& adjacencyList, std::unordered_set<std::string>& visited, std::unordered_set<std::string>& inStack) {
    visited.insert(vertex);
    inStack.insert(vertex);

    for (const std::string& neighbor : adjacencyList.at(vertex))
    {
        if (visited.find(neighbor) == visited.end())
        {
            if (!dfs(neighbor, vertex, adjacencyList, visited, inStack))
            {
                return false;
            }
        }
        else if (inStack.find(neighbor) != inStack.end() && neighbor != parent)
        {
            return false;
        }
    }

    inStack.erase(vertex);
    return true;
}

void GraphArea::dfs(const std::string& vertex, const std::map<std::string, std::vector<std::string>>& adjacencyList, std::unordered_set<std::string>& visited)
{
    visited.insert(vertex);

    for (const std::string& neighbor : adjacencyList.at(vertex)) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(neighbor, adjacencyList, visited);
        }
    }
}

bool GraphArea::isConnected(const std::map<std::string, std::vector<std::string>>& adjacencyList)
{
    if(adjacencyList.size() < 1) return false;

    std::unordered_set<std::string> visited;

    const std::string& startVertex = adjacencyList.begin()->first;
    dfs(startVertex, adjacencyList, visited);

    return visited.size() == adjacencyList.size();
}

bool GraphArea::isGraphFull(const std::map<std::string, std::vector<std::string>>& adjacencyList)
{
    if(adjacencyList.size() < 1) return false;

    int edgesCount = countEdges();
    int vertexCount = m_graph.size();

    return edgesCount == vertexCount * (vertexCount - 1) / 2;
}


bool GraphArea::isTreeDFS(const std::map<std::string, std::vector<std::string>>& adjacencyList) {
    if(adjacencyList.size() < 1) return false;

    std::unordered_set<std::string> visited;
    std::unordered_set<std::string> inStack;

    const std::string& startVertex = adjacencyList.begin()->first;
    if (!dfs(startVertex, "", adjacencyList, visited, inStack))
    {
        return false;
    }

    return visited.size() == adjacencyList.size();
}


std::istream& operator>>(std::istream& in, GraphArea& g)
{
    std::string GraphName;
    std::stringstream ss;
    int GraphSize = 0;
    std::string line;
    std::getline(in, line);
    ss << line;
    ss >> GraphName;
    ss = std::stringstream();
    std::getline(in, line);
    ss << line;
    ss >> GraphSize;
    ss = std::stringstream();

    for(int i = 0; i < GraphSize; i++)
    {
        std::string nameStr;
        std::getline(in, line);
        std::stringstream ss;

        ss << line;
        ss >> nameStr;
        QString name = nameStr.c_str();

        g.m_graph.insert({name, QVector<GraphArea::Neighbour>()});

        std::string weightStr;
        std::string hasWeightStr;

        while(ss >> nameStr >> weightStr >> hasWeightStr)
        {
            QString neighbour = nameStr.c_str();
            int weight = QString(weightStr.c_str()).toInt();
            bool hasWeight = QString(hasWeightStr.c_str()).toInt();

            g.m_graph.at(name).push_back(GraphArea::Neighbour(neighbour, weight, hasWeight));
        }

        ss = std::stringstream();
    }

    g.setGraphName(QString(GraphName.c_str()));
    ss = std::stringstream();

    for(int i = 0; i < GraphSize; i++)
    {
        std::string nameStr;
        std::getline(in, line);
        std::stringstream ss;

        ss << line;
        ss >> nameStr;
        QString name = nameStr.c_str();

        std::string vertexTextS;
        std::string isSelcectedStr;
        std::string xStr;
        std::string yStr;

        if(!(ss >> vertexTextS >> isSelcectedStr >> xStr >> yStr)) return in;

        QString vertexText = vertexTextS.c_str();
        bool isSelected = QString(isSelcectedStr.c_str()).toInt();
        int x = QString(xStr.c_str()).toInt() + g.m_x;
        int y = QString(yStr.c_str()).toInt() + g.m_y;

        g.m_vertices.insert({name,  Vertex(x, y, vertexText)});

        if(isSelected)
        {
            g.m_vertices.at(name).select();
            g.m_selectedVerticies.append(name);
        }

        ss = std::stringstream();
    }

    return in;
}
