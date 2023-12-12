#ifndef VERTEX_H
#define VERTEX_H
#include "window.h"
#include <QPainter>
#include <QGraphicsView>
class Vertex : public QGraphicsItem
{
public:
    QColor getColorVertex() const {
        return colorVertex;
    }
    QString getNameVertex() const {
        return nameVertex;
    }
    void setColorVertex(const QColor& newColorVertex) {
        colorVertex = newColorVertex;
    }
    void setNameVertex(const QString& newNameVertex) {
        nameVertex = newNameVertex;
    }
    Vertex(const QString& nameVertex, const QColor& colorVertex);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void setTextOffset(const QPointF& offset);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    QString nameVertex;
    QColor colorVertex;
    QPointF textOffset;
};
Vertex::Vertex(const QString& nameVertex, const QColor& colorVertex) : nameVertex(nameVertex), colorVertex(colorVertex)
{
    setFlag(ItemIsMovable);
}

QRectF Vertex::boundingRect() const
{
    return QRectF(-25, -25, 50, 50);
}

void Vertex::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setPen(Qt::black);
    painter->setBrush(colorVertex);
    painter->drawEllipse(-20, -20, 40, 40);
    painter->setPen(Qt::green);
    painter->setFont(QFont("Arial", 12));
    painter->drawText(QRectF(-20, -20, 40, 40), Qt::AlignCenter, nameVertex);
}

void Vertex::setTextOffset(const QPointF &offset)
{
    textOffset = offset;
}

void Vertex::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    if (MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window())) {
        mainWindow->uE();
    }
    update();
}
#endif // VERTEX_H
