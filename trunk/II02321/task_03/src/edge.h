#ifndef EDGE_H
#define EDGE_H
#include "vertex.h"
#include <QPainter>
#include <QFont>
class Edge : public QGraphicsItem
{
public:
    QColor `() const {
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


#endif // EDGE_H
