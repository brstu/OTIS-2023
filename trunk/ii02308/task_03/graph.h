#ifndef GRAPH_H
#define GRAPH_H

#include <QMainWindow>
#include "ui_graph.h"
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsView>
#include <QToolButton>
#include <QPixmap>
#include <QPainter>
#include <QGraphicsEllipseItem>
#include <QInputDialog>
#include <cmath>
#include <QMessageBox>
#include <QList>
#include <QGraphicsPathItem>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QKeyEvent>
#include <QGuiApplication>
#include <QMimeData>
#include <QClipboard>
#include <QIODevice>
#include <vector>
#include <QTableWidget>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QMouseEvent>
#include <QColorDialog>

struct E{
    QGraphicsEllipseItem* v1;
    QGraphicsEllipseItem* v2;
    QGraphicsLineItem* eItem;
    QGraphicsTextItem* w;
    bool operator==(const E& other) const {
        return v1 == other.v1 && v2 == other.v2 && eItem == other.eItem;
    }
};

struct V{
    QGraphicsEllipseItem* v;
    QGraphicsTextItem* tv;
};

namespace Ui {
class graph;
}

class graph : public QMainWindow
{
    Q_OBJECT

public:
    explicit graph(QWidget *parent = nullptr);
    ~graph();

protected:
    void mousePressEvent(QMouseEvent* event) override
    {
        QString num = QString::number(vs.count());
        // Получаем координаты мыши


        V v;
        // Создаем объект (в данном случае прямоугольник) и добавляем его на сцену
        QGraphicsEllipseItem* vert = new QGraphicsEllipseItem(0, 0, 40, 40);
        vert->setPos(rand()%315, rand()%347);
        vert->setData(0,nv);
        nv++;
        vert->setFlag(QGraphicsItem::ItemIsMovable);
        vert->setFlag(QGraphicsItem::ItemIsSelectable);
        vert->setBrush(QBrush(Qt::blue));
        vert->setZValue(1);

        // Создать текст
        QGraphicsTextItem* textItem = new QGraphicsTextItem(num, vert);
        textItem->setDefaultTextColor(Qt::white);

        QRectF textRect = textItem->boundingRect();

        // Установить позицию текста в центр вершины
        qreal xPos = (vert->boundingRect().width() - textRect.width()) / 2.0;
        qreal yPos = (vert->boundingRect().height() - textRect.height()) / 2.0;
        textItem->setPos(xPos, yPos);

        // Добавить вершину на сцену
        ui->graphicsView->scene()->addItem(vert);
        v.tv = textItem;
        v.v = vert;
        vs.append(v);
    }

void contextMenuEvent(QContextMenuEvent *event) override
{
    // Получаем список всех выделенных объектов
    QList<QGraphicsItem*> selectedItems = ui->graphicsView->scene()->selectedItems();

    qDebug() << "Number of selected items:" << selectedItems.size();

    // Создаем контекстное меню
    QMenu contextMenu(this);

    // Если есть выделенные объекты
    if (!selectedItems.isEmpty())
    {
        // Добавляем действие для выбора цвета
        QAction* chooseColorAction = contextMenu.addAction("Выбрать цвет");

        // Соединяем сигнал выбора действия с обработчиком
        connect(chooseColorAction, &QAction::triggered, this, [=]() {
            QColor color = QColorDialog::getColor(Qt::white, this, "Выберите цвет", QColorDialog::DontUseNativeDialog);

            if (color.isValid())
            {
                // Применяем выбранный цвет ко всем выделенным объектам
                for (QGraphicsItem* item : selectedItems)
                {
                    QGraphicsEllipseItem* ellipseItem = dynamic_cast<QGraphicsEllipseItem*>(item);
                    if (ellipseItem)
                    {
                        ellipseItem->setBrush(QBrush(color));
                    }
                }
            }
        });
    }

    // Показываем контекстное меню
    contextMenu.exec(event->globalPos());

    QMainWindow::contextMenuEvent(event);
}


private slots:
    void on_addE_triggered();

    void updateEPos();
    void on_renameV_triggered();

    void on_deleteV_triggered();

    void on_save_triggered();

    void on_load_triggered();
    void save(QJsonObject& json) const;
    void load(const QJsonObject& json);
    void on_information_triggered();

    void on_euralian_triggered();

private:
    Ui::graph *ui;
    QGraphicsScene *scene;
    QString graphName;
    QList<V> vs;
    QList<E> es;
    int nv = 0;
    QGraphicsEllipseItem* getVNames();
};

#endif // GRAPH_H
