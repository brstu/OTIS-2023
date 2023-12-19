#ifndef VERTEXX_H
#define VERTEXX_H
#include "window.h"
#include <QPainter>
#include <QGraphicsView>
class Vertexx : public QGraphicsItem
{
public:
    QColor getColorVertexx() const {
        return colorVertexx;
    }
    QString getNameVertexx() const {
        return nameVertexx;
    }
    void setColorVertexx(const QColor& newColorVertexx) {
        colorVertexx = newColorVertexx;
    }
    void setNameVertexx(const QString& newNameVertexx) {
        nameVertexx = newNameVertexx;
    }
    Vertexx(const QString& name, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painterVertexx, const QStyleOptionGraphicsItem *op, QWidget *wid) override;
    void setTextOffset(const QPointF& ofset);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *even) override;

private:
    QString nameVertexx;
    QColor colorVertexx;
    QPointF textOffsetVertexx;
};
Vertexx::Vertexx(const QString& nameV, const QColor& colorV) : nameVertexx(nameV), colorVertexx(colorV)
{
    setFlag(ItemIsMovable);
}

QRectF Vertexx::boundingRect() const
{
    return QRectF(-25, -25, 50, 50);
}

void Vertexx::paint(QPainter *painterVertexx, const QStyleOptionGraphicsItem *op, QWidget *wid)
{

    Q_UNUSED(op);
    Q_UNUSED(wid);

    painterVertexx->setPen(Qt::black);
    painterVertexx->setBrush(colorVertexx);
    painterVertexx->drawEllipse(-20, -20, 40, 40);
    painterVertexx->setPen(Qt::green);
    painterVertexx->setFont(QFont("Arial", 12));
    painterVertexx->drawText(QRectF(-20, -20, 40, 40), Qt::AlignCenter, nameVertexx);
}

void Vertexx::setTextOffset(const QPointF &ofset)
{
    textOffsetVertexx = ofset;
}

void Vertexx::mouseMoveEvent(QGraphicsSceneMouseEvent *even)
{
    QGraphicsItem::mouseMoveEvent(even);
    if (Window* Window = qobject_cast<Window*>(scene()->views().first()->window())) {
        Window->updateEdgge();
    }
    update();
}
#endif // VERTEXX_H
