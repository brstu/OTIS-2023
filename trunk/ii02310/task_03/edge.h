#ifndef EDGE_H
#define EDGE_H
#include "vertex.h"
#include <QPainter>
class Edge : public QGraphicsItem
{
public:
    QColor getColor() const {
        return color;
    }
    double getWeight() const {
        return weight;
    }
    Vertex* getSource() const {
        return source;
    }

    Vertex* getDestination() const {
        return destination;
    }
    Edge(Vertex* source, Vertex* destination, double weight, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void adjust();
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
private:

    Vertex* source;
    Vertex* destination;
    double weight;
    QColor color;
    QPointF sourcePoint;
    QPointF destinationPoint;
};

Edge::Edge(Vertex *source, Vertex *destination, double weight, const QColor& color)
    : source(source), destination(destination), weight(weight), color(color)
{
    source->setTextOffset(QPointF(-25, -35));
    destination->setTextOffset(QPointF(-25, -35));
    adjust(); //
    setFlag(ItemIsSelectable);
}
QRectF Edge::boundingRect() const
{
    qreal extra = 10; // область отрисовки
    return QRectF(sourcePoint, QSizeF(destinationPoint.x() - sourcePoint.x(), destinationPoint.y() - sourcePoint.y())).normalized().adjusted(-extra, -extra, extra, extra);
}
void Edge::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QPointF textPos = (sourcePoint + destinationPoint) / 2;
    painter->setPen(Qt::black);
    painter->drawLine(sourcePoint, destinationPoint);
    painter->drawText(textPos, QString::number(weight));
}

void Edge::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    adjust(); // обновление позиции ребра
    if (MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window())) {
        mainWindow->updateEdges();
    }
    update();
}


void Edge::adjust()
{
    if (!source || !destination) {
        return;
    }

    sourcePoint = source->pos();
    destinationPoint = destination->pos();

    prepareGeometryChange();
}



#endif // EDGE_H
