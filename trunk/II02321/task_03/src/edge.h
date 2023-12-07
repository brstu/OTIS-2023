#ifndef EDGE_H
#define EDGE_H
#include "vertex.h"
#include <QPainter>
#include <QFont>
class Edge : public QGraphicsItem
{
public:
    QColor getColorEdge() const {
        return colorEdge;
    }
    double getWeightEdge() const {
        return weightEdge;
    }
    Vertex* getSourceVertex() const {
        return sourceVertex;
    }

    Vertex* getDestinationVertex() const {
        return destinationVertex;
    }
    Edge(Vertex* sourceVertex, Vertex* destination, double weight, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void adjust();
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
private:

    Vertex* sourceVertex;
    Vertex* destinationVertex;
    double weightEdge;
    QColor colorEdge;
    QPointF sourcePoint;
    QPointF destinationPoint;
};

Edge::Edge(Vertex *sourceVertex, Vertex *destination, double weight, const QColor& color)
    : sourceVertex(sourceVertex), destinationVertex(destinationVertex), weightEdge(weightEdge), colorEdge(colorEdge)
{
    sourceVertex->setTextOffset(QPointF(-25, -35));
    destination->setTextOffset(QPointF(-25, -35));
    adjust(); //
    setFlag(ItemIsSelectable);
}
QRectF Edge::boundingRect() const
{
    qreal extra = 10; // добавим дополнительный зазор для отрисовки
    return QRectF(sourcePoint, QSizeF(destinationPoint.x() - sourcePoint.x(), destinationPoint.y() - sourcePoint.y())).normalized().adjusted(-extra, -extra, extra, extra);
}
void Edge::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QPointF textPos = (sourcePoint + destinationPoint) / 2;
    painter->setPen(Qt::black);
    painter->drawLine(sourcePoint, destinationPoint);
    QFont font;
    font.setPixelSize(20); // Установка размера шрифта
    painter->setFont(font);
    painter->drawText(textPos, QString::number(weightEdge));
}

void Edge::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    adjust(); // обновите позицию ребра в соответствии с новыми позициями вершин
    if (MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window())) {
        mainWindow->updateEdges();
    }
    update();
}


void Edge::adjust()
{
    if (!sourceVertex || !destinationVertex) {
        return;
    }

    sourcePoint = sourceVertex->pos();
    destinationPoint = destinationVertex->pos();

    prepareGeometryChange();
}



#endif // EDGE_H
