#ifndef VERTEX_H
#define VERTEX_H
#include "mainwindow.h"
#include <QPainter>
#include <QGraphicsView>
class Vertex : public QGraphicsItem
{
public:
    QColor getColor() const {
        return color;
    }
    QString getName() const {
        return name;
    }
    void setColor(const QColor& newColor) {
        color = newColor;
    }
    void setName(const QString& newName) {
        name = newName;
    }
    Vertex(const QString& name, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void setTextOffset(const QPointF& offset);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    QString name;
    QColor color;
    QPointF textOffset;
};
Vertex::Vertex(const QString& name, const QColor& color) : name(name), color(color)
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
    painter->setBrush(color);
    painter->drawEllipse(-20, -20, 40, 40);
    painter->setPen(Qt::green);
    painter->setFont(QFont("Arial", 12));
    painter->drawText(QRectF(-20, -20, 40, 40), Qt::AlignCenter, name);
}

void Vertex::setTextOffset(const QPointF &offset)
{
    textOffset = offset;
}

void Vertex::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    if (MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window())) {
        mainWindow->updateEdges();
    }
    update();
}
#endif // VERTEX_H
