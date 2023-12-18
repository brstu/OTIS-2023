#include "graph.h"
#include "ui_graph.h"
#include <QFileDialog>
graph::graph(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::graph)
{
    ui->setupUi(this);

    scene = new QGraphicsScene;

    ui->graphicsView->setScene(scene);

}

graph::~graph()
{
    delete ui;
}

QGraphicsEllipseItem* graph::getVNames(){
    QStringList vNames;
    for (const V& v : vs) {
        QGraphicsTextItem* textItem = v.tv;
        if (textItem) {
            vNames.append(textItem->toPlainText());
        }
    }

    bool ok;
    QString selectedVertexName1 = QInputDialog::getItem(this, "Выбор вершины", "Выберите вершину для создания ребра:", vNames, 0, false, &ok);

    if (!ok) {
        return 0;
    }

    QGraphicsEllipseItem* selectedV1 = nullptr;
    for (const V& v : vs) {
        QGraphicsTextItem* textItem = v.tv;
        if (textItem && textItem->toPlainText() == selectedVertexName1) {
            selectedV1 = v.v;
            break;
        }
    }

    if (!selectedV1) {
        QMessageBox::warning(this, "Ошибка", "Не удалось найти выбранную первую вершину.");
        return 0;
    }
    return selectedV1;
}
void graph::on_addE_triggered()
{
    QGraphicsEllipseItem* selectedV1 = getVNames();
    if (!selectedV1) return;
    QGraphicsEllipseItem* selectedV2 = getVNames();
    if (!selectedV2) return;
    bool ok;
    double weight = QInputDialog::getInt(this, "Введите вес ребра", "Введите вес ребра:", 1, -2147483647, 2147483647, 2, &ok);
                                                            if (!ok) {
                                                                return;
                                                            }

                                                            qreal middleX = (selectedV1->scenePos().x() + selectedV2->scenePos().x()) / 2.0;
        qreal middleY = (selectedV1->scenePos().y() + selectedV2->scenePos().y()) / 2.0;

                                                            QGraphicsLineItem* e = new QGraphicsLineItem;
                                                            //edge->setFlag(QGraphicsItem::ItemIsMovable);

                                                            e->setFlag(QGraphicsItem::ItemIsSelectable);
                                                            e->setLine(selectedV1->scenePos().x() + 0, selectedV1->scenePos().y() + 0,
                                                                          selectedV2->scenePos().x() + 0, selectedV2->scenePos().y() + 0);

                                                            e->setData(1,selectedV1->data(0));
                                                            e->setData(2,selectedV2->data(0));
                                                            // Добавление ребра на сцену
                                                            QGraphicsTextItem* weightTextItem = new QGraphicsTextItem(QString::number(weight));
                                                            weightTextItem->setPos(middleX, middleY);
                                                            ui->graphicsView->scene()->addItem(weightTextItem);
                                                            ui->graphicsView->scene()->addItem(e);
                                                            E e1;
                                                            e1.v1 = selectedV1;
                                                            e1.v2 = selectedV2;
                                                            e1.eItem = e;
                                                            e1.w = weightTextItem;
                                                            es.append(e1);

                                                            // Соединение сигнала изменения сцены с обновлением позиции ребра
                                                            connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
                                                                updateEPos();
                                                            });
}

void graph::updateEPos()
{
                                                            for (const E& e : es) {
                                                                QGraphicsEllipseItem* v1 = e.v1;
                                                                QGraphicsEllipseItem* v2 = e.v2;
                                                                QGraphicsLineItem* eItem = e.eItem;
                                                                QGraphicsTextItem* w = e.w;

                                                                if (v1 && v2 && eItem) {
            eItem->setLine(v1->scenePos().x() + v1->boundingRect().width() / 2,
                       v1->scenePos().y() + v1->boundingRect().height() / 2,
                       v2->scenePos().x() + v2->boundingRect().width() / 2,
                       v2->scenePos().y() + v2->boundingRect().height() / 2);
                                                                }
                                                                qreal middleX = (v1->scenePos().x() + v2->scenePos().x()) / 2.0;
                                                                qreal middleY = (v1->scenePos().y() + v2->scenePos().y()) / 2.0;
                                                                w -> setPos(middleX,middleY+5);

                                                            }
}


void graph::on_renameV_triggered()
{
                                                            QGraphicsEllipseItem* selectedV1 = getVNames();
                                                            if (!selectedV1) return;

                                                            for (const V& v : vs){
                                                                if (selectedV1 == v.v){

            QString newName = QInputDialog::getText(this,"Введите новое имя вершины","Имя:");
            if (!newName.isEmpty()){
                v.tv->setPlainText(newName);
                break;
            }}}
}




void graph::on_deleteV_triggered()
{
                                                            QGraphicsEllipseItem* v = getVNames();

                                                            for (const E& e:es){
                                                                if (e.v1 == v || e.v2 == v){
             ui->graphicsView->scene()->removeItem(e.eItem);
            ui->graphicsView->scene()->removeItem(e.w);
                                                                }

                                                            }
                                                            // Удаляем ребра, связанные с вершиной v
                                                            es.erase(std::remove_if(es.begin(), es.end(), [v](const E& e) {
                                                                         return (e.v1 == v || e.v2 == v);
                                                                     }), es.end());


                                                            // Удаляем вершину v из сцены
                                                            vs.erase(std::remove_if(vs.begin(), vs.end(), [v](const V& vert) {
                                                                         return (vert.v == v );
                                                                     }), vs.end());
ui->graphicsView->scene()->removeItem(v);
}




void graph::on_save_triggered()
{
QJsonObject json;
save(json);
QJsonDocument saveDoc(json);
QString fileName = QFileDialog::getSaveFileName(this, tr("Save Graph"), "", tr("Graph Files (*.json)"));
QFileInfo fileInfo(fileName);
QFile saveFile(fileName);
if (saveFile.open(QIODevice::WriteOnly)) {
                                                                saveFile.write(saveDoc.toJson());
                                                                saveFile.close();
} else {
                                                                // Handle error in opening the file
}
}


void graph::on_load_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Load Graph"), "", tr("Graph Files (*.json)"));
if (!fileName.isEmpty()) {
            QFile loadFile(fileName);
            if (loadFile.open(QIODevice::ReadOnly)) {
            QByteArray loadData = loadFile.readAll();
            QJsonDocument loadDoc(QJsonDocument::fromJson(loadData));
            es.clear();
            vs.clear();
            load(loadDoc.object());
            loadFile.close();
     } else {
   }
}
}

void graph::save(QJsonObject& json) const {

// Save graph data to the QJsonObject
json["name"] = graphName;

// Save vertices
QJsonArray verticesArray;
for (const V& v : vs) {
   QJsonObject vertObject;
   vertObject["nameVert"] = v.tv->toPlainText();
   vertObject["xPos"] = v.v->x();
   vertObject["yPos"] = v.v->y();
   vertObject["data1"] = v.v->data(0).toInt();
   verticesArray.append(vertObject);
}
json["vertices"] = verticesArray;
//save edges
QJsonArray edgesArray;
for(const E& e: es){
   QJsonObject edgeObject;
   edgeObject["vert1"] = e.eItem->data(1).toInt();
   edgeObject["vert2"] = e.eItem->data(2).toInt();
   edgeObject["weight"] = e.w->toPlainText();
   edgesArray.append(edgeObject);
}
json["edges"] = edgesArray;
}

void graph::load(const QJsonObject& json){

graphName = json["name"].toString();
this -> setWindowTitle(graphName);
// Load vertices
QJsonArray verticesArray = json["vertices"].toArray();
for (const QJsonValue& vertValue : verticesArray) {
   QJsonObject vO = vertValue.toObject();
   QGraphicsEllipseItem* newVItem = new QGraphicsEllipseItem(0,0,40,40);
   QGraphicsTextItem* newTItem = new QGraphicsTextItem(vO["nameVert"].toString(), newVItem);
   newVItem->setData(0,vs.count());
   newVItem->setPos(vO["xPos"].toInt(),vO["yPos"].toInt()); // Пример начальной позиции
   newVItem->setFlag(QGraphicsItem::ItemIsMovable);
   newVItem->setFlag(QGraphicsItem::ItemIsSelectable);
   newVItem->setBrush(QBrush(Qt::blue));
   newVItem->setZValue(1);
   QRectF textRect = newTItem->boundingRect();

   // Установить позицию текста в центр вершины
   qreal xPos = (newVItem->boundingRect().width() - textRect.width()) / 2.0;
   qreal yPos = (newVItem->boundingRect().height() - textRect.height()) / 2.0;
   newTItem->setPos(xPos, yPos);


   // Добавить вершину на сцену
   ui->graphicsView->scene()->addItem(newVItem);
   V v1;
   v1.tv = newTItem;
   v1.v = newVItem;
   vs.append(v1);
}

QJsonArray edgesArray = json["edges"].toArray();
for (const QJsonValue& edgeValue : edgesArray){
   QJsonObject edgeObject = edgeValue.toObject();
   for (const V& v1: vs){
            for (const V& v2 : vs){
                if (edgeObject["vert1"].toInt() == v1.v->data(0).toInt() && edgeObject["vert2"].toInt() == v2.v->data(0).toInt()){
                    E e;
                    QGraphicsTextItem* text = new QGraphicsTextItem;
                    text->setPlainText(edgeObject["weight"].toString());
                    text->setDefaultTextColor(Qt::white);
                    e.w = text;
                    QGraphicsLineItem* e1 = new QGraphicsLineItem;
                    //edge->setFlag(QGraphicsItem::ItemIsMovable);
                    QGraphicsTextItem* w = new QGraphicsTextItem;
                    ui->graphicsView->scene()->addItem(w);
                    w->setPlainText(e.w->toPlainText());
                    e1->setFlag(QGraphicsItem::ItemIsSelectable);
                    e1->setData(1,v1.v->data(1));
                    e1->setData(2,v2.v->data(1));
                    // Добавление ребра на сцену
                    ui->graphicsView->scene()->addItem(e1);
                    E e2;
                    e2.v1 = v1.v;
                    e2.v2 = v2.v;
                    e2.eItem = e1;
                    e2.w = w;
                    es.append(e2);

                    // Соединение сигнала изменения сцены с обновлением позиции ребра
                    connect(ui->graphicsView->scene(), &QGraphicsScene::changed, this, [=]() {
                        updateEPos();
                    });
                }
            }
   }
}
}



void graph::on_information_triggered()
{
    int numVertices = vs.length();
    int numEdges = es.length();
    if (numEdges == 0) return;
    // Строка с информацией о количестве вершин и ребер
    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);

    // Строка со степенями вершин
QString degreesText = "Степени вершин:\n";
    bool eulertrue = true;
    bool treetrue = true;
    foreach (V v, vs) {
        int degree = 0;
        foreach (E e, es) {
            if (e.v1 == v.v|| e.v2 == v.v) {
                degree++;
            }
        }
        degreesText += QString("Вершина %1: %2\n").arg(v.tv->toPlainText()).arg(degree);
    if(degree % 2 != 0){ eulertrue = false;}
    if(degree > 2){ treetrue = false;}
    }


    // Матрица инцидентности
    QString incidenceMatrixText = "Матрица инцидентности:\n";
    std::vector<std::vector<int>> incidenceMatrix(numVertices, std::vector<int>(numEdges, 0));

    int edgeIndex = 0;

    // Update the incidence matrix for normal edges
    for (const auto& e : es) {
    int vertex1Index = std::distance(vs.begin(),
                                     std::find_if(vs.begin(), vs.end(),
                                                  [e](const V& v) { return v.v == e.v1; }));
    int vertex2Index = std::distance(vs.begin(),
                                     std::find_if(vs.begin(), vs.end(),
                                                  [e](const V& v) { return v.v == e.v2; }));

    incidenceMatrix[vertex1Index][edgeIndex] = 1;
    incidenceMatrix[vertex2Index][edgeIndex] = 1;

    ++edgeIndex;
    }
    std::vector<std::vector<int>> matrix = incidenceMatrix;
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
    std::vector<std::vector<int>> adjacencyMatrix(numVertices, std::vector<int>(numVertices, 0));

    for (const auto& e : es) {
        // Получение индексов вершин
        int index1 = std::distance(vs.begin(), std::find_if(vs.begin(), vs.end(),
                                                               [e](const V& v) { return v.v == e.v1; }));
        int index2 = std::distance(vs.begin(), std::find_if(vs.begin(), vs.end(),
                                                               [e](const V& v) { return v.v == e.v2; }));

        // Установка значения в матрице
        adjacencyMatrix[index1][index2] = 1;
        adjacencyMatrix[index2][index1] = 1; // Если граф неориентированный
    }
    matrix = adjacencyMatrix;
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
    QDialog dialog;
    QVBoxLayout layout(&dialog);
    QLabel infoLabel(infoText);
    QLabel degreesLabel(degreesText);
    QLabel incidenceMatrixLabel(incidenceMatrixText);
    QLabel adjacencyMatrixLabel(adjacencyMatrixText);
    QLabel GraphConnectedLabel(connected);
    QLabel CompleteGraphLabel(completeGraph);
    layout.addWidget(&infoLabel);
    layout.addWidget(&degreesLabel);
    layout.addWidget(&incidenceMatrixLabel);
    layout.addWidget(&adjacencyMatrixLabel);
    layout.addWidget(&GraphConnectedLabel);
    layout.addWidget(&CompleteGraphLabel);
    dialog.exec();
}


