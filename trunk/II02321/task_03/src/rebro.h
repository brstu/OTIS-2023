#ifndef REBRO_H
#define REBRO_H
#include "vershina"
#include <QPainter>
class Rebro : public QGraphicsItem
{
public:
    QColor getColorR() const {
        return colorR;
    }
    double getWeightR() const {
        return weightR;
    }
    Vershina* getSourceR() const {
        return sourceR;
    }

    Vershina* getDestinationR() const {
        return destinationR;
    }
    Rebro(Vershina* source, Vershina* destination, double weight, const QColor& color);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void adjust();
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
private:

    Vershina* sourceR;
    Vershina* destinationR;
    double weightR;
    QColor colorR;
    QPointF sourcePointR;
    QPointF destinationPointR;
};

Rebro::Rebro(Vershina *source, Vershina *destination, double weight, const QColor& color)
    : sourceR(source), destinationR(destination), weightR(weight), colorR(color)
{
    source->setTextOffset(QPointF(-25, -35));
    destination->setTextOffset(QPointF(-25, -35));
    adjust(); //
    setFlag(ItemIsSelectable);
}
QRectF Rebro::boundingRect() const
{
    qreal extra = 10; // область отрисовки
    return QRectF(sourcePointR, QSizeF(destinationPointR.x() - sourcePointR.x(), destinationPointR.y() - sourcePointR.y())).normalized().adjusted(-extra, -extra, extra, extra);
}
void Rebro::paint(QPainter *painterR, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QPointF textPos = (sourcePointR + destinationPointR) / 2;
    painterR->setPen(Qt::black);
    painterR->drawLine(sourcePointR, destinationPointR);
    painterR->drawText(textPos, QString::number(weightR));
}

void Rebro::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);
    adjust(); // обновление позиции ребра
    if (MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window())) {
        mainWindow->updateRebro();
    }
    update();
}


void Rebro::adjust()
{
    if (!sourceR || !destinationR) {
        return;
    }

    sourcePointR = sourceR->pos();
    destinationPointR = destinationR->pos();

    prepareGeometryChange();
}



#endif // REBRO_H
