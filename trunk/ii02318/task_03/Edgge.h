#ifndef EDGGE_H
#define EDGGE_H
#include "Vertexx.h"
#include <QPainter>
class Edgge : public QGraphicsItem
{
public:
    QColor getColorEdgge() const {
        return colorEdgge;
    }
    double getWeightEdgge() const {
        return weightEdgge;
    }
    Vertexx* getSourceEdgge() const {
        return sourceEdgge;
    }
    
    Vertexx* getDestinationEdgge() const {
        return destinationEdgge;
    }
    Edgge(Vertexx* source, Vertexx* destination, double weight, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void adjust();
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
private:
    
    Vertexx* sourceEdgge;
    Vertexx* destinationEdgge;
    double weightEdgge;
    QColor colorEdgge;
    QPointF sourcePointEdgge;
    QPointF destinationPointEdgge;
};

Edgge::Edgge(Vertexx *source, Vertexx *destination, double weight, const QColor& color)
    : sourceEdgge(source), destinationEdgge(destination), weightEdgge(weight), colorEdgge(color)
{
    source->setTextOffset(QPointF(-25, -35));
    destination->setTextOffset(QPointF(-25, -35));
    adjust(); //
    setFlag(ItemIsSelectable);
}
QRectF Edgge::boundingRect() const
{
    qreal extra = 10; // область отрисовки
    return QRectF(sourcePointEdgge, QSizeF(destinationPointEdgge.x() - sourcePointEdgge.x(), destinationPointEdgge.y() - sourcePointEdgge.y())).normalized().adjusted(-extra, -extra, extra, extra);
}
void Edgge::paint(QPainter *painterR, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QPointF textPos = (sourcePointEdgge + destinationPointEdgge) / 2;
    painterR->setPen(Qt::black);
    painterR->drawLine(sourcePointEdgge, destinationPointEdgge);
    painterR->drawText(textPos, QString::number(weightEdgge));
}

void Edgge::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    adjust(); // обновление позиции ребра
    if (Window* mainWindow = qobject_cast<Window*>(scene()->views().first()->window())) {
        mainWindow->updateEdgge();
    }
    update();
}


void Edgge::adjust()
{
    if (!sourceEdgge || !destinationEdgge) {
        return;
    }

    sourcePointEdgge = sourceEdgge->pos();
    destinationPointEdgge = destinationEdgge->pos();

    prepareGeometryChange();
}



#endif // EDGGE_H
