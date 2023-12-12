#ifndef EDGE_H
#define EDGE_H
#include "vertex.h"
#include <QPainter>
#include <QFont>
class Edge : public QGraphicsItem
{
public:
    QColor gCE() const {
        return colorEdge;
    }
    double gWE() const {
        return weightEdge;
    }
    Vertex* gSV() const {
        return sourceVertex;
    }

    Vertex* gDV() const {
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
    : sourceVertex(sourceVertex), destinationVertex(destination), weightEdge(weight), colorEdge(color)
{
    sourceVertex->setTextOffset(QPointF(-25, -35));
    destination->setTextOffset(QPointF(-25, -35));
    adjust(); //
    setFlag(ItemIsSelectable);
}
QRectF Edge::boundingRect() const
{
    qreal extra = 10;
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
    font.setPixelSize(20);
    painter->setFont(font);
    painter->drawText(textPos, QString::number(weightEdge));
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
