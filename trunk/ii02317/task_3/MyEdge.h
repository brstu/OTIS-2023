#ifndef MY_EDGE_H
#define MY_EDGE_H

#include "vertex.h"
#include <QPainter>

class MyEdge : public QGraphicsItem
{
public:
    QColor getLineColor() const {
        return lineColor;
    }

    double getEdgeWeight() const {
        return edgeWeight;
    }

    MyVertex* getStartVertex() const {
        return startVertex;
    }

    MyVertex* getEndVertex() const {
        return endVertex;
    }

    MyEdge(MyVertex* startVertex, MyVertex* endVertex, double edgeWeight, const QColor& lineColor);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void adjust();
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    MyVertex* startVertex;
    MyVertex* endVertex;
    double edgeWeight;
    QColor lineColor;
    QPointF startVertexPoint;
    QPointF endVertexPoint;
};

MyEdge::MyEdge(MyVertex* startVertex, MyVertex* endVertex, double edgeWeight, const QColor& lineColor)
    : startVertex(startVertex), endVertex(endVertex), edgeWeight(edgeWeight), lineColor(lineColor)
{
    startVertex->setTextOffset(QPointF(-20, -40));
    endVertex->setTextOffset(QPointF(-20, -40));
    adjust();
    setFlag(ItemIsSelectable);
}

QRectF MyEdge::boundingRect() const
{
    qreal extra = 15; // область отрисовки
    return QRectF(startVertexPoint, QSizeF(endVertexPoint.x() - startVertexPoint.x(), endVertexPoint.y() - startVertexPoint.y())).normalized().adjusted(-extra, -extra, extra, extra);
}

void MyEdge::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QPointF textPos = (startVertexPoint + endVertexPoint) / 2;
    painter->setPen(lineColor);
    painter->drawLine(startVertexPoint, endVertexPoint);
    painter->drawText(textPos, QString::number(edgeWeight));
}

void MyEdge::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    adjust();
    if (MyMainWindow* mainWindow = qobject_cast<MyMainWindow*>(scene()->views().first()->window())) {
        mainWindow->updateEdges();
    }
    update();
}

void MyEdge::adjust()
{
    if (!startVertex || !endVertex) {
        return;
    }

    startVertexPoint = startVertex->pos();
    endVertexPoint = endVertex->pos();

    prepareGeometryChange();
}

#endif // MY_EDGE_H
