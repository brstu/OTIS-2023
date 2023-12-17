#ifndef VERTEXX_H
#define VERTEXX_H
#include "mainwindow.h"
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
    void setNameV(const QString& newNameVertexx) {
        nameVertexx = newNameVertexx;
    }
    Vertexx(const QString& name, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painterVertexx, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void setTextOffset(const QPointF& offset);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    QString nameVertexx;
    QColor colorVertexx;
    QPointF textOffsetV;
};
Vertexx::Vertexx(const QString& nameV, const QColor& colorV) : nameVertexx(nameV), colorVertexx(colorV)
{
    setFlag(ItemIsMovable);
}

QRectF Vertexx::boundingRect() const
{
    return QRectF(-25, -25, 50, 50);
}

void Vertexx::paint(QPainter *painterVertexx, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    Q_UNUSED(option);
    Q_UNUSED(widget);

    painterVertexx->setPen(Qt::black);
    painterVertexx->setBrush(colorVertexx);
    painterVertexx->drawEllipse(-20, -20, 40, 40);
    painterVertexx->setPen(Qt::green);
    painterVertexx->setFont(QFont("Arial", 12));
    painterVertexx->drawText(QRectF(-20, -20, 40, 40), Qt::AlignCenter, nameVertexx);
}

void Vertexx::setTextOffset(const QPointF &offset)
{
    textOffsetV = offset;
}

void Vertexx::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    if (MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window())) {
        mainWindow->updateEdgge();
    }
    update();
}
#endif // VERTEXX_H
