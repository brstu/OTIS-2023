#include "graphwindow.h"
#include "ui_graphwindow.h"
#include <QMainWindow>
#include <QMenu>
#include <QDebug>
#include <QFileDialog>
#include <QLabel>
#include <string>

GraphWindow::GraphWindow(QString name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphWindow)
{
    ui->setupUi(this);

    // Заполняем комбо-бокс доступными масштабами
    QStringList scales = {"1.0", "0.5", "1.5", "2.0"};
    ui->comboBox->addItems(scales);

    // Устанавливаем масштаб 1.0x при запуске
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    graphName = name;
    bool ok;
    QStringList items;
    items << "Orient" << "Unorient";
    while (!ok){
    key = QInputDialog::getItem(this, "Укажите вид графа", "", items, 0, false, &ok);
    }
    ui->graphicsView->setDragMode(QGraphicsView::RubberBandDrag);



}

GraphWindow::~GraphWindow()
{
    delete ui;
}

void GraphWindow::on_addVertPushButton_clicked()
{
    QString num = QString::number(verts.count());
    QString vertexName = QInputDialog::getText(this, "Введите название вершины", "Название:",QLineEdit::Normal,num);
    if (!vertexName.isEmpty()) {
    Vertice vert;
        // Создать вершину
        QGraphicsEllipseItem* vertex = new QGraphicsEllipseItem(0, 0, 25, 25);
        vertex->setData(0,"vert");
        vertex->setData(1, verts.count());
        vertex->setData(3, vertexName);
        vertex->setPos(rand()%200, rand()%200); // Пример начальной позиции
        vertex->setFlag(QGraphicsItem::ItemIsMovable);
        vertex->setFlag(QGraphicsItem::ItemIsSelectable);
        vertex->setBrush(QBrush(Qt::white));
        vertex->setZValue(1);
        // Создать текст
        QGraphicsTextItem* textItem = new QGraphicsTextItem(vertexName, vertex);

        // Получить границы текста
        QRectF textRect = textItem->boundingRect();

        // Установить позицию текста в центр вершины
        qreal xPos = (vertex->boundingRect().width() - textRect.width()) / 2.0;
        qreal yPos = (vertex->boundingRect().height() - textRect.height()) / 2.0;
        textItem->setPos(xPos, yPos);


        // Добавить вершину на сцену
        ui->graphicsView->scene()->addItem(vertex);
        vert.textvert = textItem;
        vert.vert = vertex;
        verts.append(vert);
    }
}

QGraphicsEllipseItem* GraphWindow::getSelectedVertex(){
    // Подготовка списка названий вершин
    QStringList vertexNames;
    for (const Vertice& vert : verts) {
        QGraphicsTextItem* textItem = vert.textvert;
        if (textItem) {
            vertexNames.append(textItem->toPlainText());
        }
    }

    // Вывод списка вершин и предложение выбрать первую вершину
    bool ok;
    QString selectedVertexName1 = QInputDialog::getItem(this, "Выбор вершины", "Выберите вершину для создания ребра:", vertexNames, 0, false, &ok);

    if (!ok) {
        // Пользователь отменил операцию
        return 0;
    }

    // Поиск соответствующей вершины по выбранному имени
    QGraphicsEllipseItem* selectedVertex1 = nullptr;
    for (const Vertice& vert : verts) {
        QGraphicsTextItem* textItem = vert.textvert;
        if (textItem && textItem->toPlainText() == selectedVertexName1) {
            selectedVertex1 = vert.vert;
            break;
        }
    }

    if (!selectedVertex1) {
        QMessageBox::warning(this, "Ошибка", "Не удалось найти выбранную первую вершину.");
        return 0;
    }
    return selectedVertex1;
}

void GraphWindow::on_addEdgePushButton_clicked()
{
    QGraphicsEllipseItem* selectedVertex1 = getSelectedVertex();
    if (!selectedVertex1) return;
    QGraphicsEllipseItem* selectedVertex2 = getSelectedVertex();
    if (!selectedVertex2) return;
    bool ok;
    double weight = QInputDialog::getInt(this, "Введите вес ребра", "Введите вес ребра:", 1, -2147483647, 2147483647, 2, &ok);
    if (!ok) {
    return;
    }

    qreal middleX = (selectedVertex1->scenePos().x() + selectedVertex2->scenePos().x()) / 2.0;
    qreal middleY = (selectedVertex1->scenePos().y() + selectedVertex2->scenePos().y()) / 2.0;

    // Если выбрана одна и та же вершина, создаем петлю
    if (selectedVertex1 == selectedVertex2) {
        QGraphicsEllipseItem* loop = new QGraphicsEllipseItem;
        //loop->setFlag(QGraphicsItem::ItemIsMovable);
        loop->setData(0,"loop");
        loop->setData(1,selectedVertex1->data(1));
        loop->setFlag(QGraphicsItem::ItemIsSelectable);
        //loop->setRect();
        QGraphicsTextItem* weightTextItem = new QGraphicsTextItem(QString::number(weight));
        weightTextItem->setPos(middleX, middleY);
        ui->graphicsView->scene()->addItem(weightTextItem);

        // Добавление петли на сцену
        ui->graphicsView->scene()->addItem(loop);

        Loop loop1;
        loop1.vertex1 = selectedVertex1;
        loop1.loop = loop;
        loop1.weight = weightTextItem;
        loops.append(loop1);

        connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
            updateLoopPosition(loop, selectedVertex1, weightTextItem);
        });
        return;
    }

    // Создание ребра
    if (key == "Unorient"){
    QGraphicsLineItem* edge = new QGraphicsLineItem;
    //edge->setFlag(QGraphicsItem::ItemIsMovable);

    edge->setFlag(QGraphicsItem::ItemIsSelectable);
    edge->setLine(selectedVertex1->scenePos().x() + 0, selectedVertex1->scenePos().y() + 0,
                  selectedVertex2->scenePos().x() + 0, selectedVertex2->scenePos().y() + 0);
    edge->setData(0,"edge");
    edge->setData(1,selectedVertex1->data(1));
    edge->setData(2,selectedVertex2->data(1));
    // Добавление ребра на сцену
    QGraphicsTextItem* weightTextItem = new QGraphicsTextItem(QString::number(weight));
    weightTextItem->setPos(middleX, middleY);
    ui->graphicsView->scene()->addItem(weightTextItem);
    ui->graphicsView->scene()->addItem(edge);
    Edge edge1;
    edge1.vertex1 = selectedVertex1;
    edge1.vertex2 = selectedVertex2;
    edge1.edgeItem = edge;
    edge1.weight = weightTextItem;
    edges.append(edge1);

    // Соединение сигнала изменения сцены с обновлением позиции ребра
    connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
        updateEdgePosition();
    });
    } else {
    // Создание ориентированного ребра
    QGraphicsLineItem* directedEdge = new QGraphicsLineItem;
    directedEdge->setFlag(QGraphicsItem::ItemIsSelectable);
    directedEdge->setData(1,selectedVertex1->data(1));
    directedEdge->setData(2,selectedVertex2->data(1));

    directedEdge->setLine(selectedVertex1->scenePos().x() + 25, selectedVertex1->scenePos().y() + 25,
                          selectedVertex2->scenePos().x() + 25, selectedVertex2->scenePos().y() + 25);
    directedEdge->setData(0,"edge");
    QGraphicsTextItem* weightTextItem = new QGraphicsTextItem(QString::number(weight));
    weightTextItem->setPos(middleX, middleY);
    ui->graphicsView->scene()->addItem(weightTextItem);
    // Добавление ориентированного ребра на сцену
    ui->graphicsView->scene()->addItem(directedEdge);

    // Draw an arrowhead at the end of the line
    double arrowSize = 10.0;
    double angle = atan2(directedEdge->line().dy(), directedEdge->line().dx());
    double x1 = directedEdge->line().x2() - arrowSize * cos(angle - M_PI / 6);
    double y1 = directedEdge->line().y2() - arrowSize * sin(angle - M_PI / 6);
    double x2 = directedEdge->line().x2() - arrowSize * cos(angle + M_PI / 6);
    double y2 = directedEdge->line().y2() - arrowSize * sin(angle + M_PI / 6);

    QGraphicsPolygonItem* arrowhead = new QGraphicsPolygonItem(QPolygonF() << directedEdge->line().p2() << QPointF(x1, y1) << QPointF(x2, y2));
    arrowhead->setBrush(Qt::black);
    ui->graphicsView->scene()->addItem(arrowhead);
    OrEdge directedEdge1;
    directedEdge1.vertex1 = selectedVertex1;
    directedEdge1.vertex2 = selectedVertex2;
    directedEdge1.edgeItem = directedEdge;
    directedEdge1.arrowItem = arrowhead;
    directedEdge1.weight = weightTextItem;
    or_edges.append(directedEdge1);
    connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
        updateOrEdgePosition();
    });
    }

}

void GraphWindow::updateEdgePosition()
{
    for (const Edge& edge : edges) {
        QGraphicsEllipseItem* vertex1 = edge.vertex1;
        QGraphicsEllipseItem* vertex2 = edge.vertex2;
        QGraphicsLineItem* edgeItem = edge.edgeItem;
        QGraphicsTextItem* weight = edge.weight;

        if (vertex1 && vertex2 && edgeItem) {
            edgeItem->setLine(vertex1->scenePos().x() + vertex1->boundingRect().width() / 2,
                          vertex1->scenePos().y() + vertex1->boundingRect().height() / 2,
                          vertex2->scenePos().x() + vertex2->boundingRect().width() / 2,
                          vertex2->scenePos().y() + vertex2->boundingRect().height() / 2);
        }
        qreal middleX = (vertex1->scenePos().x() + vertex2->scenePos().x()) / 2.0;
        qreal middleY = (vertex1->scenePos().y() + vertex2->scenePos().y()) / 2.0;
        weight -> setPos(middleX,middleY+5);

    }
}

void GraphWindow::updateOrEdgePosition() {
    for (OrEdge& directedEdge1 : or_edges) {
        QGraphicsEllipseItem* vertex1 = directedEdge1.vertex1;
        QGraphicsEllipseItem* vertex2 = directedEdge1.vertex2;
        QGraphicsLineItem* edgeItem = directedEdge1.edgeItem;
        QGraphicsPolygonItem* arrowItem = directedEdge1.arrowItem;
        QGraphicsTextItem* weight = directedEdge1.weight;
        if (vertex1 && vertex2 && edgeItem && arrowItem) {
            // Update the position of the edge
            edgeItem->setLine(vertex1->scenePos().x() + vertex1->boundingRect().width() / 2,
                              vertex1->scenePos().y() + vertex1->boundingRect().height() / 2,
                              vertex2->scenePos().x() + vertex2->boundingRect().width() / 2,
                              vertex2->scenePos().y() + vertex2->boundingRect().height() / 2);

            // Update the position and shape of the arrowhead
            double arrowSize = 10.0;
            double angle = atan2(edgeItem->line().dy(), edgeItem->line().dx());
            double x1 = edgeItem->line().x2() - arrowSize * cos(angle);
            double y1 = edgeItem->line().y2() - arrowSize * sin(angle);

            // Set the position of the arrowhead
            arrowItem->setPos(QPointF(x1, y1));

            // Calculate the coordinates for the other two points of the triangle
            double x2 = x1 - arrowSize * cos(angle - M_PI / 6);
            double y2 = y1 - arrowSize * sin(angle - M_PI / 6);
            double x3 = x1 - arrowSize * cos(angle + M_PI / 6);
            double y3 = y1 - arrowSize * sin(angle + M_PI / 6);

            // Update the shape of the arrowhead
            QPolygonF arrowheadPolygon(QPolygonF() << QPointF(0, 0) << QPointF(x2 - x1, y2 - y1) << QPointF(x3 - x1, y3 - y1));
            arrowItem->setPolygon(arrowheadPolygon);
        }
        qreal middleX = (vertex1->scenePos().x() + vertex2->scenePos().x()) / 2.0;
        qreal middleY = (vertex1->scenePos().y() + vertex2->scenePos().y()) / 2.0;
        weight -> setPos(middleX,middleY+5);
    }
}

void GraphWindow::updateLoopPosition(QGraphicsEllipseItem* loop, QGraphicsEllipseItem* vertex, QGraphicsTextItem* weight)
{
    // Устанавливаем центр и размер круга для петли
    loop->setRect(vertex->scenePos().x()-12, vertex->scenePos().y()-12, 25, 25);  // Пример размеров для создания петли
    qreal middleX = (vertex->scenePos().x() + vertex->scenePos().x()) / 2.0;
    qreal middleY = (vertex->scenePos().y() + vertex->scenePos().y()) / 2.0;
    weight -> setPos(middleX-20,middleY-20);
}

void GraphWindow::on_renamePushButton_clicked()
{
    QGraphicsEllipseItem* selectedVertex = getSelectedVertex();
    if (!selectedVertex) return;
    for (const Vertice& vert : verts){
        if (selectedVertex == vert.vert){

            QString newName = QInputDialog::getText(this,"Введите новое имя вершины","Имя:");
            if (!newName.isEmpty()){
                vert.textvert->setPlainText(newName);
                QRectF textRect = vert.textvert->boundingRect();
                // Установить позицию текста в центр вершины
                qreal xPos = (vert.vert->boundingRect().width() - textRect.width()) / 2.0;
                qreal yPos = (vert.vert->boundingRect().height() - textRect.height()) / 2.0;
                vert.textvert->setPos(xPos, yPos);
                break;
            } else {QMessageBox::warning(this, "Ошибка", "Пустое название"); break;}

        }
        }
}

void GraphWindow::on_deletePushButton_clicked()
{
    // Disconnect signals to avoid unwanted updates during deletion
    //disconnect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, nullptr);

    // Collect items to be deleted
    QList<QGraphicsItem *> itemsToDelete;

    QList<QGraphicsItem *> selectedItems = ui->graphicsView->scene()->selectedItems();

    for (QGraphicsItem *item : selectedItems) {

        // Check if the item is an edge (QGraphicsLineItem) and disconnect its update slot
        if (QGraphicsLineItem* edgeItem = dynamic_cast<QGraphicsLineItem*>(item)) {
            for (const OrEdge& or_edge : or_edges){
            if (or_edge.edgeItem == edgeItem){
                itemsToDelete.append(or_edge.arrowItem);
                itemsToDelete.append(or_edge.weight);
            }
            }
            for (const Edge& edge : edges){
            if (edge.edgeItem == edgeItem){
                itemsToDelete.append(edge.weight);
            }
            }
            edges.erase(std::remove_if(edges.begin(), edges.end(),
                                       [edgeItem](const Edge& edge) { return edge.edgeItem == edgeItem; }),
                        edges.end());

            itemsToDelete.append(edgeItem);



            or_edges.erase(std::remove_if(or_edges.begin(), or_edges.end(),
                                       [edgeItem](const OrEdge& edge) { return edge.edgeItem == edgeItem; }),
                        or_edges.end());
            for (QGraphicsItem *item : itemsToDelete) {
            delete item;
            }
        }
        // Check if the item is a vertex (QGraphicsEllipseItem)
        else if (QGraphicsEllipseItem* vertex = dynamic_cast<QGraphicsEllipseItem*>(item)) {
            if (vertex->data(0).toString() == "loop"){
            for (const Loop& loop : loops){
                if (loop.loop == vertex){
                    itemsToDelete.append(loop.weight);
                }
            }
            loops.erase(std::remove_if(loops.begin(), loops.end(),
                                       [vertex](const Loop& loop) { return loop.loop == vertex; }),
                        loops.end());
            ui->graphicsView->scene()->removeItem(vertex);
            itemsToDelete.append(vertex);
            for (QGraphicsItem *item : itemsToDelete) {
                delete item;
            }
            }else if (QGraphicsEllipseItem* vertex = dynamic_cast<QGraphicsEllipseItem*>(item)){
            // Remove connected edges
            QList<QGraphicsLineItem*> connectedEdges;
            for (const Edge& edge : edges) {
                if (edge.vertex1 == vertex || edge.vertex2 == vertex) {
                    connectedEdges.append(edge.edgeItem);
                }
            }
            // Remove connected edges from the list and the scene
            for (QGraphicsLineItem* connectedEdge : connectedEdges) {
                for (const Edge& edge : edges){
                    if (edge.edgeItem == connectedEdge){
                        itemsToDelete.append(edge.weight);
                    }
                }
                itemsToDelete.append(connectedEdge);
                edges.erase(std::remove_if(edges.begin(), edges.end(),
                                           [connectedEdge](const Edge& edge) { return edge.edgeItem == connectedEdge; }),
                            edges.end());

                ui->graphicsView->scene()->removeItem(connectedEdge);

            }

            // Remove connected directed edges
            QList<QGraphicsLineItem*> connectedOrEdges;
            for (const OrEdge& edge : or_edges) {
                if (edge.vertex1 == vertex || edge.vertex2 == vertex) {
                    connectedOrEdges.append(edge.edgeItem);
                }
            }

            // Remove connected edges from the list and the scene
            for (QGraphicsLineItem*& connectedOrEdge : connectedOrEdges) {
                for (const OrEdge& or_edge : or_edges){
                    if (or_edge.edgeItem == connectedOrEdge){
                        itemsToDelete.append(or_edge.arrowItem);
                        itemsToDelete.append(or_edge.weight);
                    }
                }
                itemsToDelete.append(connectedOrEdge);
                or_edges.erase(std::remove_if(or_edges.begin(), or_edges.end(),
                                              [connectedOrEdge](const OrEdge& edge) { return edge.edgeItem == connectedOrEdge; }),
                               or_edges.end());
                ui->graphicsView->scene()->removeItem(connectedOrEdge);
            }

            // Remove connected loops
            QList<QGraphicsEllipseItem*> connectedLoops;
            for (const Loop& connectedLoop : loops) {
                if (connectedLoop.vertex1 == vertex) {
                    connectedLoops.append(connectedLoop.loop);
                }
            }

            // Remove connected loops from the list and the scene
            for (QGraphicsEllipseItem* connectedLoop : connectedLoops) {
                for (const Loop& loop : loops){
                    if (loop.loop == connectedLoop){
                        itemsToDelete.append(loop.weight);
                    }
                }
                loops.erase(std::remove_if(loops.begin(), loops.end(),
                                              [connectedLoop](const Loop& loop) { return loop.loop == connectedLoop; }),
                               loops.end());
                ui->graphicsView->scene()->removeItem(connectedLoop);
                itemsToDelete.append(connectedLoop);
            }

            // Remove the vertex from the list
            verts.erase(std::remove_if(verts.begin(), verts.end(),
                                          [vertex](const Vertice& vert) { return vert.vert == vertex; }),
                           verts.end());

            // Remove the vertex from the scene
            ui->graphicsView->scene()->removeItem(vertex);
            itemsToDelete.append(vertex);  // Store the item for deletion

            for (QGraphicsItem *item : itemsToDelete) {
                delete item;
            }
        }
        // ... (other item types remain the same)
        }
    }

    // Delete items after the iteration
}

void GraphWindow::setColor(const QColor &color)
{
    // Получаем список всех выделенных элементов
    QList<QGraphicsItem*> selectedItems = scene->selectedItems();
    // Идентификация и изменение цвета для каждого выделенного элемента
    for (QGraphicsItem *item : selectedItems) {
        QString ItemType = item->data(0).toString();
        // Проверка, является ли элемент вершиной
        QGraphicsEllipseItem *vertexItem = qgraphicsitem_cast<QGraphicsEllipseItem*>(item);
        if (vertexItem) {
            if (ItemType == "vert"){
                vertexItem->setBrush(QBrush(color));
            } else if (ItemType == "loop"){
                vertexItem->setPen(QPen(color, 2));
            }
        }

        // Проверка, является ли элемент ребром
        QGraphicsLineItem *edgeItem = qgraphicsitem_cast<QGraphicsLineItem*>(item);
        if (edgeItem) {
            edgeItem->setPen(QPen(color, 2)); // Пример установки цвета для ребра
        }
    }
}

void GraphWindow::on_colorPushButton_clicked()
{
QMenu* colorMenu = new QMenu(this);

    // Добавляем цветные квадраты как иконки к действиям
    addActionWithColor(colorMenu, "Красный", Qt::red);
    addActionWithColor(colorMenu, "Зеленый", Qt::green);
    addActionWithColor(colorMenu, "Синий", Qt::blue);
    addActionWithColor(colorMenu, "Желтый", Qt::yellow);
    addActionWithColor(colorMenu, "Фиолетовый", Qt::magenta);
    addActionWithColor(colorMenu, "Голубой", Qt::cyan);
    addActionWithColor(colorMenu, "Серый", Qt::gray);
    addActionWithColor(colorMenu, "Черный", Qt::black);
    addActionWithColor(colorMenu, "Белый", Qt::white);

    // Отображаем меню относительно глобальной позиции кнопки
    colorMenu->exec(ui->colorPushButton->mapToGlobal(QPoint(0, ui->colorPushButton->height())));
}

void GraphWindow::addActionWithColor(QMenu* menu, const QString& colorName, const QColor& color)
{
    QPixmap colorIcon(20, 20);
    colorIcon.fill(color);
    QAction* action = menu->addAction(QIcon(colorIcon), colorName);

    connect(action, &QAction::triggered, this, [this, color]() {
        setColor(color);
    });
}

void GraphWindow::on_comboBox_currentIndexChanged(int index)
{
    qreal scaleFactor = ui->comboBox->itemText(index).toDouble();
    ui->graphicsView->setRenderHint(QPainter::Antialiasing, false);
    ui->graphicsView->resetTransform();
    ui->graphicsView->scale(scaleFactor, scaleFactor);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
}

void GraphWindow::copyObjects()
{
    copiedVert.clear();
    copiedEdge.clear();
    copiedOrEdge.clear();
    copiedLoops.clear();


    // Iterate over selected items and copy them
    for (QGraphicsItem*& selectedItem : scene->selectedItems()) {
        //if vert

        if (selectedItem->data(0).toString() == "vert"){
            for (const Vertice& vert : verts){
                if (vert.vert == selectedItem){
                    copiedVert.append(vert);
                    break;
                }
            }
        }
        //if edge
        if (selectedItem->data(0).toString() == "edge"){
            if (key == "Unorient"){
                for (const Edge& edge : edges){
                    if (edge.edgeItem == selectedItem){
                        copiedEdge.append(edge);
                        break;
                    }
                }
            } else {
                for (const OrEdge& edge : or_edges){
                    if (edge.edgeItem == selectedItem){
                        copiedOrEdge.append(edge);
                        break;
                    }
                }
            }
        }
        if (selectedItem->data(0).toString() == "loop"){
            for (const Loop& loop : loops){
                if (loop.loop == selectedItem){
                    copiedLoops.append(loop);
                    break;
                }
            }
        }
    }
}

void GraphWindow::addEdge(Vertice vert1, Vertice vert2,Edge edge){
    QGraphicsLineItem* edge1 = new QGraphicsLineItem;
    //edge->setFlag(QGraphicsItem::ItemIsMovable);
    QGraphicsTextItem* weight = new QGraphicsTextItem;
    ui->graphicsView->scene()->addItem(weight);
    weight->setPlainText(edge.weight->toPlainText());
    edge1->setFlag(QGraphicsItem::ItemIsSelectable);
    //edge->setLine(selectedVertex1->scenePos().x() + 25, selectedVertex1->scenePos().y() + 25,
    // selectedVertex2->scenePos().x() + 25, selectedVertex2->scenePos().y() + 25);
    edge1->setData(0,"edge");
    edge1->setData(1,vert1.vert->data(1));
    edge1->setData(2,vert2.vert->data(1));
    // Добавление ребра на сцену
    ui->graphicsView->scene()->addItem(edge1);
    Edge edge2;
    edge2.vertex1 = vert1.vert;
    edge2.vertex2 = vert2.vert;
    edge2.edgeItem = edge1;
    edge2.weight = weight;
    edges.append(edge2);

    // Соединение сигнала изменения сцены с обновлением позиции ребра
    connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
        updateEdgePosition();
    });
}

void GraphWindow::addOrEdge(Vertice vert1, Vertice vert2,OrEdge edge){
    QGraphicsLineItem* directedEdge = new QGraphicsLineItem;
    QGraphicsTextItem* weight = new QGraphicsTextItem;
    ui->graphicsView->scene()->addItem(weight);
    weight->setPlainText(edge.weight->toPlainText());
    directedEdge->setFlag(QGraphicsItem::ItemIsSelectable);
    directedEdge->setData(1,vert1.vert->data(1));
    directedEdge->setData(2,vert2.vert->data(1));


    directedEdge->setData(0,"edge");
    // Добавление ориентированного ребра на сцену
    ui->graphicsView->scene()->addItem(directedEdge);



    QGraphicsPolygonItem* arrowhead = new QGraphicsPolygonItem(QPolygonF()) ;
    arrowhead->setBrush(Qt::black);
    ui->graphicsView->scene()->addItem(arrowhead);
    OrEdge directedEdge1;
    directedEdge1.vertex1 = vert1.vert;
    directedEdge1.vertex2 = vert2.vert;
    directedEdge1.edgeItem = directedEdge;
    directedEdge1.arrowItem = arrowhead;
    directedEdge1.weight = weight;
    or_edges.append(directedEdge1);
    connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
        updateOrEdgePosition();
    });
}

void GraphWindow::pasteObjects()
{
    QList<Vertice> pastedVert;
    for (const Vertice& vert : copiedVert){
        QGraphicsEllipseItem* newVertexItem = new QGraphicsEllipseItem(0,0,25,25);
        QGraphicsTextItem* newTextItem = new QGraphicsTextItem(vert.textvert->toPlainText(), newVertexItem);
        newVertexItem->setData(0,"vert");
        newVertexItem->setData(1, verts.count());
        newVertexItem->setData(2,vert.vert->data(1));
        newVertexItem->setPos(vert.vert->scenePos().x()+50,vert.vert->scenePos().y()+50); // Пример начальной позиции
        newVertexItem->setFlag(QGraphicsItem::ItemIsMovable);
        newVertexItem->setFlag(QGraphicsItem::ItemIsSelectable);
        newVertexItem->setBrush(QBrush(Qt::white));
        newVertexItem->setZValue(1);
        QRectF textRect = vert.textvert->boundingRect();

        // Установить позицию текста в центр вершины
        qreal xPos = (vert.vert->boundingRect().width() - textRect.width()) / 2.0;
        qreal yPos = (vert.vert->boundingRect().height() - textRect.height()) / 2.0;
        newTextItem->setPos(xPos, yPos);


        // Добавить вершину на сцену
        ui->graphicsView->scene()->addItem(newVertexItem);
        Vertice vert1;
        vert1.textvert = newTextItem;
        vert1.vert = newVertexItem;
        verts.append(vert1);
        pastedVert.append(vert1);
    }
    for (const Loop& loops1: copiedLoops){
        for (const Vertice& vert : pastedVert){
            if( loops1.loop->data(1) == vert.vert->data(2)){
                QGraphicsEllipseItem* loop = new QGraphicsEllipseItem;
                QGraphicsTextItem* weight = loops1.weight;
                //loop->setFlag(QGraphicsItem::ItemIsMovable);
                loop->setData(0,"loop");
                loop->setData(1,vert.vert->data(1));
                loop->setFlag(QGraphicsItem::ItemIsSelectable);
                //loop->setRect();

                // Добавление петли на сцену
                ui->graphicsView->scene()->addItem(weight);
                ui->graphicsView->scene()->addItem(loop);

                Loop loop1;
                loop1.vertex1 = vert.vert;
                loop1.loop = loop;
                loop1.weight = weight;

                loops.append(loop1);

                connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
                    updateLoopPosition(loop, vert.vert, weight);
                });
            }
        }
    }
    for (const Edge& edge : copiedEdge){
        for (const Vertice& vert1 : pastedVert){
            for (const Vertice& vert2 : pastedVert){
                if (edge.edgeItem->data(1) == vert1.vert->data(2) && edge.edgeItem->data(2) == vert2.vert->data(2)){
                    addEdge(vert1,vert2,edge);
                }
            }
        }
    }

    for (const OrEdge& edge : copiedOrEdge){
        for (const Vertice& vert1 : pastedVert){
            for (const Vertice& vert2 : pastedVert){
                if (edge.edgeItem->data(1) == vert1.vert->data(2) && edge.edgeItem->data(2) == vert2.vert->data(2)){
                    addOrEdge(vert1,vert2,edge);
                }
            }
        }
    }
}
void GraphWindow::on_savePushButton_clicked()
{
    QJsonObject json;
    saveGraph(json);

    QJsonDocument saveDoc(json);
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Graph"), "", tr("Graph Files (*.json)"));
    QFileInfo fileInfo(fileName);
    QString basePath = fileInfo.path();
    QString baseName = fileInfo.baseName();
    QString txtFilePath = QDir(basePath).filePath(baseName + ".txt");
    if (!fileName.isEmpty()) {
        QFile file(txtFilePath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);

            // Export graph header
            out << graphName << " : " << (key == "Orient" ? "ORIENT" : "UNORIENT") << " ;\n";

            // Export vertex names
            out << " ";
            for (const Vertice &vertice : verts) {
                out << vertice.textvert->toPlainText() << ", ";
            }
            out.seek(out.pos() - 2);  // Remove the last comma and space
            out << " ;\n";

            // Export edges
            for (const Edge &edge : edges) {

                out << " " << edge.vertex1->data(3).toString() << " -> " << edge.vertex2->data(3).toString() << ";";
            }
            for (const OrEdge &edge : or_edges) {

                out << " " << edge.vertex1->data(3).toString() << " -> " << edge.vertex2->data(3).toString() << ";";
            }
            for (const Loop &edge : loops) {

                out << " " << edge.vertex1->data(3).toString() << " -> " << edge.vertex1->data(3).toString() << ";";
            }
            file.close();
        }
        QFile saveFile(fileName);
        if (saveFile.open(QIODevice::WriteOnly)) {
            saveFile.write(saveDoc.toJson());
            saveFile.close();
        } else {
            // Handle error in opening the file
        }
    }
}

void GraphWindow::on_loadPushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Load Graph"), "", tr("Graph Files (*.json)"));
    if (!fileName.isEmpty()) {
        QFile loadFile(fileName);
        if (loadFile.open(QIODevice::ReadOnly)) {
            QByteArray loadData = loadFile.readAll();
            QJsonDocument loadDoc(QJsonDocument::fromJson(loadData));
            scene->clear();
            loops.clear();
            edges.clear();
            or_edges.clear();
            verts.clear();
            loadGraph(loadDoc.object());
            // Optionally, clear existing graph before loading
            // scene->clear();

            loadFile.close();
        } else {
            // Handle error in opening the file
        }
    }
}

void GraphWindow::saveGraph(QJsonObject& json) const {

    // Save graph data to the QJsonObject
    json["name"] = graphName;
    json["key"] = key;

    // Save vertices
    QJsonArray verticesArray;
    for (const Vertice& vertice : verts) {
        QJsonObject vertObject;
        vertObject["nameVert"] = vertice.textvert->toPlainText();
        vertObject["xPos"] = vertice.vert->x();
        vertObject["yPos"] = vertice.vert->y();
        vertObject["data1"] = vertice.vert->data(1).toInt();
        verticesArray.append(vertObject);
    }
    json["vertices"] = verticesArray;
    //save loops
    QJsonArray loopsArray;
    for (const Loop& loop : loops) {
        QJsonObject loopObject;
        loopObject["vert1"] = loop.loop->data(1).toInt();
        loopObject["weight"] = loop.weight->toPlainText();
        loopsArray.append(loopObject);
    }
    json["loops"] = loopsArray;
    //save edges
    QJsonArray edgesArray;
    for(const Edge& edge: edges){
        QJsonObject edgeObject;
        edgeObject["vert1"] = edge.edgeItem->data(1).toInt();
        edgeObject["vert2"] = edge.edgeItem->data(2).toInt();
        edgeObject["weight"] = edge.weight->toPlainText();
        edgesArray.append(edgeObject);
    }
    json["edges"] = edgesArray;
    QJsonArray orEdgesArray;
    for(const OrEdge& edge: or_edges){
        QJsonObject edgeObject;
        edgeObject["vert1"] = edge.edgeItem->data(1).toInt();
        edgeObject["vert2"] = edge.edgeItem->data(2).toInt();
        edgeObject["weight"] = edge.weight->toPlainText();
        orEdgesArray.append(edgeObject);
    }
    json["orEdges"] = orEdgesArray;
}

void GraphWindow::loadGraph(const QJsonObject& json){

    graphName = json["name"].toString();
    this -> setWindowTitle(graphName);
    key = json["key"].toString();

    // Load vertices
    QJsonArray verticesArray = json["vertices"].toArray();
    for (const QJsonValue& vertValue : verticesArray) {
        QJsonObject vertObject = vertValue.toObject();

        QGraphicsEllipseItem* newVertexItem = new QGraphicsEllipseItem(0,0,25,25);
        QGraphicsTextItem* newTextItem = new QGraphicsTextItem(vertObject["nameVert"].toString(), newVertexItem);
        newVertexItem->setData(0,"vert");
        newVertexItem->setData(1, verts.count());
        newVertexItem->setPos(vertObject["xPos"].toInt(),vertObject["yPos"].toInt()); // Пример начальной позиции
        newVertexItem->setFlag(QGraphicsItem::ItemIsMovable);
        newVertexItem->setFlag(QGraphicsItem::ItemIsSelectable);
        newVertexItem->setBrush(QBrush(Qt::white));
        newVertexItem->setZValue(1);
        QRectF textRect = newTextItem->boundingRect();

        // Установить позицию текста в центр вершины
        qreal xPos = (newVertexItem->boundingRect().width() - textRect.width()) / 2.0;
        qreal yPos = (newVertexItem->boundingRect().height() - textRect.height()) / 2.0;
        newTextItem->setPos(xPos, yPos);


        // Добавить вершину на сцену
        ui->graphicsView->scene()->addItem(newVertexItem);
        Vertice vert1;
        vert1.textvert = newTextItem;
        vert1.vert = newVertexItem;
        verts.append(vert1);
    }
    QJsonArray loopsArray = json["loops"].toArray();
    for (const QJsonValue& loopValue : loopsArray) {
        QJsonObject loopObject = loopValue.toObject();
        for (const Vertice& vert: verts){
            if (loopObject["vert1"].toInt() == vert.vert->data(1).toInt()){
                QGraphicsEllipseItem* loop = new QGraphicsEllipseItem;
                QGraphicsTextItem* weight = new QGraphicsTextItem;
                weight->setPlainText(loopObject["weight"].toString());
                ui->graphicsView->scene()->addItem(weight);
                //loop->setFlag(QGraphicsItem::ItemIsMovable);
                loop->setData(0,"loop");
                loop->setData(1,vert.vert->data(1));
                loop->setFlag(QGraphicsItem::ItemIsSelectable);
                //loop->setRect();

                // Добавление петли на сцену
                ui->graphicsView->scene()->addItem(loop);

                Loop loop1;
                loop1.vertex1 = vert.vert;
                loop1.loop = loop;
                loop1.weight = weight;

                loops.append(loop1);

                connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
                    updateLoopPosition(loop, vert.vert, weight);
                });
            }
        }
    }
    QJsonArray edgesArray = json["edges"].toArray();
    for (const QJsonValue& edgeValue : edgesArray){
        QJsonObject edgeObject = edgeValue.toObject();
        for (const Vertice& vert1: verts){
            for (const Vertice& vert2 : verts){
                if (edgeObject["vert1"].toInt() == vert1.vert->data(1).toInt() && edgeObject["vert2"].toInt() == vert2.vert->data(1).toInt()){
                    Edge edge;
                    QGraphicsTextItem* text = new QGraphicsTextItem;
                    text->setPlainText(edgeObject["weight"].toString());
                    edge.weight = text;
                    addEdge(vert1,vert2,edge);
                }
            }
        }
    }

    QJsonArray orEdgesArray = json["orEdges"].toArray();
    for (const QJsonValue& edgeValue : orEdgesArray){
        QJsonObject edgeObject = edgeValue.toObject();
        for (const Vertice& vert1: verts){
            for (const Vertice& vert2 : verts){
                if (edgeObject["vert1"].toInt() == vert1.vert->data(1).toInt() && edgeObject["vert2"].toInt() == vert2.vert->data(1).toInt()){
                    OrEdge edge;
                    QGraphicsTextItem* text = new QGraphicsTextItem;
                    text->setPlainText(edgeObject["weight"].toString());
                    edge.weight = text;
                    addOrEdge(vert1,vert2,edge);
                }
            }
        }
    }

}


void GraphWindow::on_comboBox_2_activated(int index)
{
    switch (index) {
    case 1:{
    int numVertices = verts.length();
        int numEdges;
        if (key == "Unorient")
{
            numEdges = edges.length();}
        else
        {
            numEdges = or_edges.length();
        }
        if (numVertices == 0) break;

    // Строка с информацией о количестве вершин и ребер
    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);

    // Строка со степенями вершин
QString degreesText = "Степени вершин:\n";
    bool eulertrue = true;
    bool treetrue = true;
    if (key == "Unorient"){
    foreach (Vertice vertex, verts) {
        int degree = 0;
        foreach (Edge edge, edges) {
            if (edge.vertex1 == vertex.vert || edge.vertex2 == vertex.vert) {
                degree++;
            }
        }
        foreach (Loop loop, loops) {
            if (loop.vertex1 == vertex.vert) {
                degree++;
            }
        }
        degreesText += QString("Вершина %1: %2\n").arg(vertex.textvert->toPlainText()).arg(degree);
    if(degree % 2 != 0){ eulertrue = false;}
    if(degree > 2){ treetrue = false;}
    }}else{
    foreach (Vertice vertex, verts) {
    int degree = 0;
    foreach (OrEdge edge, or_edges) {
            if (edge.vertex1 == vertex.vert || edge.vertex2 == vertex.vert) {
                degree++;
            }
    }
    foreach (Loop loop, loops) {
            if (loop.vertex1 == vertex.vert) {
                degree++;
            }
    }
    degreesText += QString("Вершина %1: %2\n").arg(vertex.textvert->toPlainText()).arg(degree);
        if(degree % 2 != 0){ eulertrue = false;}
        if(degree > 1){ treetrue = false;}
    }}



    // Матрица инцидентности
    QString incidenceMatrixText = "Матрица инцидентности:\n";
    std::vector<std::vector<int>> matrix = createIncidenceMatrix();
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numEdges; j++) {
            if (matrix[i][j] == 1) {
                incidenceMatrixText += "1 ";
            } else if (matrix[i][j]==-1) {
                incidenceMatrixText += "-1 ";
            } else{
                incidenceMatrixText += "0 ";
            }
        }
        incidenceMatrixText += "\n";
    }

    // Матрица смежности
    QString adjacencyMatrixText = "Матрица смежности:\n";
    matrix = createAdjacencyMatrix();
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {

            if (matrix[i][j]) {
                adjacencyMatrixText += "1 ";
            } else {
                adjacencyMatrixText += "0 ";
            }
        }
        adjacencyMatrixText += "\n";
    }

    QString completeGraph;
    if((numVertices*(numVertices-1))/2 == numEdges){completeGraph = "Граф является полным";}
    else {completeGraph = "Граф не является полным";};
    QString connected;
    if(complGraph()){
        connected = "Граф является связным";
    } else {
            connected = "Граф не является связным";
    };
    // Формирование окна с информацией о графе
    QString tree;
    if(isTree(matrix)){ tree = "Граф является деревом";} else {tree = "Граф не является деревом";};
    QString eur;
    alg alg;
    if(alg.isEulerian(matrix) || alg.isOrEulerian(matrix)){ eur = "Граф является эйлеровым";} else {eur = "Граф не является эйлеровым";};
    QDialog dialog;
    QVBoxLayout layout(&dialog);
    QLabel infoLabel(infoText);
    QLabel degreesLabel(degreesText);
    QLabel incidenceMatrixLabel(incidenceMatrixText);
    QLabel adjacencyMatrixLabel(adjacencyMatrixText);
    QLabel GraphConnectedLabel(connected);
    QLabel Tree(tree);
    QLabel CompleteGraphLabel(completeGraph);
    QLabel Eur(eur);
    layout.addWidget(&infoLabel);
    layout.addWidget(&degreesLabel);
    layout.addWidget(&incidenceMatrixLabel);
    layout.addWidget(&adjacencyMatrixLabel);
    layout.addWidget(&GraphConnectedLabel);
    layout.addWidget(&Tree);
    layout.addWidget(&CompleteGraphLabel);
    layout.addWidget(&Eur);
    dialog.exec();
    break;
    }
    case 2:{
    alg alg;
    VEC2 matrix = createAdjacencyMatrix();
    VEC1 cucle;
    QString cucl;
    if (alg.isEulerian(matrix)){
            cucle = alg.findEulerianCycle(matrix);
            for (auto cuc: cucle){
            cucl =cucl+ QString::number(cuc)+" ";
            }
            QDialog dialog;
            QVBoxLayout layout(&dialog);
            QLabel Cucl(cucl);
            layout.addWidget(&Cucl);
            dialog.exec();
    } else if (alg.isOrEulerian(matrix)){
            QMessageBox::warning(this,"Простите","Пока этот алгоритм работает только для неориентированного графа");
    } else {
            QMessageBox::warning(this,"Не существует эйлерового цикла","Не существует эйлерового цикла");
    }
        break;
    }
    case 3:{
        alg alg;
        VEC2 matrix = createAdjacencyMatrix();
        queue cucle;
        QString cucl;
        if (alg.hasHamiltonianCycle(matrix)){
            cucle = alg.findHamiltonianCycle(matrix);
            while (!cucle.is_empty()){
            cucl =cucl+ QString::number(cucle.front())+" ";
            cucle.pop();
            }
            QDialog dialog;
            QVBoxLayout layout(&dialog);
            QLabel Cucl(cucl);
            layout.addWidget(&Cucl);
            dialog.exec();
        } else if (key == "Orient"){
            QMessageBox::warning(this,"Простите","Пока этот алгоритм работает только для неориентированного графа");
        } else {
            QMessageBox::warning(this,"Не существует эйлерового цикла","Не существует эйлерового цикла");
        }
        break;
    }
    case 4:
    {
        alg alg;
        VEC2 matrix = createAdjacencyMatrix();
        QString param = QString::fromStdString(alg.calculateGraphParameters(matrix));
        QDialog dialog;
        QVBoxLayout layout(&dialog);
        QLabel Param(param);
        //QLabel Cucl(cucl);
        layout.addWidget(&Param);
        dialog.exec();
        break;
    }
    case 5:{
        alg search;
        int start = 0;
        VEC1 distance;
        VEC1 path(verts.length());
        VEC2 matrix = createWeightMatrix();
        distance = search.Dejkstra(matrix, start, path);

        VEC1 way;

        // Создаем строку с результатами
        QString result;
        QTextStream stream(&result);

        for (int i = 0; i < verts.length(); i++) {
            stream << "\n" << start << "->" << i << " : " << distance[i];
            stream << "\tPath:";

            search.thisIsTheWay(path, start, i, way);
            for (int j = 0; j < way.size(); j++) {
            stream << way[j];
            }
            way.clear();
        }

        // Создаем и отображаем диалоговое окно
        QDialog dialog;
        QVBoxLayout layout(&dialog);
        QLabel Result(result);
        layout.addWidget(&Result);
        dialog.exec();

        break;
    }

    default:
        break;
    }
}

