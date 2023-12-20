#ifndef MY_VERTEX_H
#define MY_VERTEX_H

#include "mainwindow.h"
#include <QPainter>
#include <QGraphicsView>

class MyVertex : public QGraphicsItem
{
public:
    QColor getNodeColor() const {
        return nodeColor;
    }

    QString getNodeName() const {
        return nodeName;
    }

    void setNodeColor(const QColor& newColor) {
        nodeColor = newColor;
    }

    void setNodeName(const QString& newName) {
        nodeName = newName;
    }

    MyVertex(const QString& name, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void setTextOffset(const QPointF& offset);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    QString nodeName;
    QColor nodeColor;
    QPointF textOffset;
};

MyVertex::MyVertex(const QString& name, const QColor& color) : nodeName(name), nodeColor(color)
{
    setFlag(ItemIsMovable);
}

QRectF MyVertex::boundingRect() const
{
    return QRectF(-30, -30, 60, 60);
}

void MyVertex::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setPen(Qt::black);
    painter->setBrush(nodeColor);
    painter->drawEllipse(-25, -25, 50, 50);
    painter->setPen(Qt::blue);
    painter->setFont(QFont("Times", 14));
    painter->drawText(QRectF(-25, -25, 50, 50).translated(textOffset), Qt::AlignCenter, nodeName);
}

void MyVertex::setTextOffset(const QPointF& offset)
{
    textOffset = offset;
}

void MyVertex::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    if (MyMainWindow* mainWindow = qobject_cast<MyMainWindow*>(scene()->views().first()->window())) {
        mainWindow->updateEdges();
    }
    update();
}

#endif // MY_VERTEX_H
