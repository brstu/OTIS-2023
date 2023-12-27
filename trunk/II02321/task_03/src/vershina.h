#ifndef VERSHINA_H
#define VERSHINA_H
#include "mainwindow.h"
#include <QPainter>
#include <QGraphicsView>
class Vershina : public QGraphicsItem
{
public:
    QColor getColorV() const {
        return colorV;
    }
    QString getNameV() const {
        return nameV;
    }
    void setColorV(const QColor& newColor) {
        colorV = newColor;
    }
    void setNameV(const QString& newName) {
        nameV = newName;
    }
    Vershina(const QString& name, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painterV, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void setTextOffset(const QPointF& offset);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    QString nameV;
    QColor colorV;
    QPointF textOffsetV;
};
Vershina::Vershina(const QString& nameV, const QColor& colorV) : nameV(nameV), colorV(colorV)
{
    setFlag(ItemIsMovable);
}

QRectF Vershina::boundingRect() const
{
    return QRectF(-25, -25, 50, 50);
}

void Vershina::paint(QPainter *painterV, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    Q_UNUSED(option);
    Q_UNUSED(widget);

    painterV->setPen(Qt::black);
    painterV->setBrush(colorV);
    painterV->drawEllipse(-20, -20, 40, 40);
    painterV->setPen(Qt::green);
    painterV->setFont(QFont("Arial", 12));
    painterV->drawText(QRectF(-20, -20, 40, 40), Qt::AlignCenter, nameV);
}

void Vershina::setTextOffset(const QPointF &offset)
{
    textOffsetV = offset;
}

void Vershina::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    if (MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window())) {
        mainWindow->updateRebro();
    }
    update();
}
#endif // VERSHINA_H
