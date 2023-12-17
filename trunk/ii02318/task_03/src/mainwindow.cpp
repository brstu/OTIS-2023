#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QInputDialog>
#include <QPushButton>
#include <QFormLayout>
#include <QLineEdit>
#include <QColorDialog>
#include <QtCore>
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QDoubleSpinBox>
#include <QIODevice>
#include <QFileDialog>
#include <QFile>
#include <QDialogButtonBox>
#include <QLabel>
#include <QComboBox>
#include "Edgge.h"
#include "vershina"
#include "euler.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
    QFile::remove("graph.txt");
}

void MainWindow::addVertexx(const QString& name, const QColor& color, double x, double y)
{
    Vertexx* vertex = new Vertexx(name, color);
    vertex->setPos(x, y);
    scene->addItem(vertex);
    vertexxs.append(vertex);
}

void MainWindow::addEdgge(int sourceIndex, int destinationIndex, double weight, const QColor& color)
{
    if (sourceIndex >= 0 && sourceIndex < vertexxs.length() && destinationIndex >= 0 && destinationIndex < vertexxs.length())
    {
        Vertexx* sourceVertex = vertexxs.at(sourceIndex);
        Vertexx* destinationVertex = vertexxs.at(destinationIndex);
        Edgge* edge = new Edgge(sourceVertex, destinationVertex, weight, color);
        scene->addItem(edge);
        edgges.append(edge);

        QFile file("graph.txt");
        if (file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream out(&file);
            out << sourceIndex << "\t" << destinationIndex << "\t" << weight << "\n";
            file.close();
        }
    }
}

void MainWindow::updateEdgge()
{
    foreach (Edgge* edge, edgges) {
        edge->adjust();
        edge->update();
    }
}

void MainWindow::on_addVertexButton_clicked()
{
    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit nameLineEdit;
    form.addRow("Введи имя вершины", &nameLineEdit);
    QPushButton addButton("Добавить вершину");
    form.addRow(&addButton);

    connect(&addButton, &QPushButton::clicked, [&]() {
        QString name = nameLineEdit.text();
        QColor color = QColorDialog::getColor();
        addVertexx(name, color, 0, 0);
        dialog.close();
        updateEdgge();
    });

    dialog.exec();
}

void MainWindow::on_addEdgeButton_clicked()
{
    if (vertexxs.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout forms(&dialog);

    QLineEdit weightLineEdit;
    QLineEdit sourceVertexLineEdit;
    QLineEdit destinationVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vertexxs.length() - 1) + ")");
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vertexxs.length() - 1) + ")");
    forms.addRow("Укажите вес ребра", &weightLineEdit);
    forms.addRow("Начальная вершина", &sourceVertexLineEdit);
    forms.addRow("Конечная вершина", &destinationVertexLineEdit);
    QPushButton addButton("Добавить ребро");
    forms.addRow(&addButton);

    connect(&addButton, &QPushButton::clicked, [&]() {
        double weight = weightLineEdit.text().toInt();
        int sourceIndex = sourceVertexLineEdit.text().toInt();
        int destinationIndex = destinationVertexLineEdit.text().toInt();
        addEdgge(sourceIndex, destinationIndex, weight, QColorDialog::getColor());
        dialog.close();
    });

    dialog.exec();
}
/*
void MainWindow::updateRebro()
{
    foreach (Rebro* edge, rebrs) {
        edge->adjust();
        edge->update();
    }
}
*/
void MainWindow::updateFiles(){
    QFile file("graph.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const Edgge* edge : edgges) {
            int sourceIndex = vertexxs.indexOf(edge->getSourceEdgge());
            int destinationIndex = vertexxs.indexOf(edge->getDestinationEdgge());
            out << sourceIndex << "\t" << destinationIndex << "\t" << edge->getWeightEdgge() << "\n";
        }
        file.close();
    }
}
void MainWindow::on_removeEdgeButton_clicked()
{
    if (edgges.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout forms(&dialog);
    QLineEdit sourceVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vertexxs.length() - 1) + ")");
    QLineEdit destinationVertexLineEdit;
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vertexxs.length() - 1) + ")");
    forms.addRow("Начальная вершина", &sourceVertexLineEdit);
    forms.addRow("Конечная вершина", &destinationVertexLineEdit);
    QPushButton removeButton("Удалить ребро");
    forms.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int sourceIndex = sourceVertexLineEdit.text().toInt();
        int destinationIndex = destinationVertexLineEdit.text().toInt();
        if (sourceIndex >= 0 && sourceIndex < vertexxs.length() && destinationIndex >= 0 && destinationIndex < vertexxs.length()) {
            Vertexx* sourceVertex = vertexxs.at(sourceIndex);
            Vertexx* destinationVertex = vertexxs.at(destinationIndex);


            for (int i = 0; i < edgges.length(); i++) {
                Edgge* edge = edgges.at(i);
                if (edge->getSourceEdgge() == sourceVertex && edge->getDestinationEdgge() == destinationVertex) {
                    scene->removeItem(edge);
                    edgges.removeAt(i);
                    delete edge;
                    break;
                }
            }

            // Обновляем файл без удаленного ребра
            updateFiles();
        }
        dialog.close();
    });

    dialog.exec();
}


void MainWindow::on_removeVertexButton_clicked()
{
    if (vertexxs.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout forms(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vertexxs.length() - 1) + ")");
    forms.addRow("Индекс вершины", &vertexIndexLineEdit);
    QPushButton removeButton("Удалить вершину");
    forms.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        if (vertexIndex >= 0 && vertexIndex < vertexxs.length()) {
            Vertexx* vertex = vertexxs.at(vertexIndex);

            // Удаление связанных ребер
            for (int i = edgges.length() - 1; i >= 0; --i) {
                Edgge* edge = edgges.at(i);
                if (edge->getSourceEdgge() == vertex || edge->getDestinationEdgge() == vertex) {
                    scene->removeItem(edge);
                    edgges.removeAt(i);
                    delete edge;
                }
            }


            scene->removeItem(vertex);
            vertexxs.removeOne(vertex);
            delete vertex;

            // Обновление файла без удаленной вершины и связанных ребер
            updateFiles();
        }
        dialog.close();
    });

    dialog.exec();
}

void MainWindow::updateVertexx()
{
    for (Vertexx* vertex : vertexxs) {
        vertex->update();
    }
}


void MainWindow::on_changeVertexButton_clicked()
{
    if (vertexxs.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout forms(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vertexxs.length() - 1) + ")");
    QLineEdit vertexNameLineEdit;
    vertexNameLineEdit.setPlaceholderText("Новое название вершины");
    forms.addRow("Индекс вершины", &vertexIndexLineEdit);
    forms.addRow("Новое название", &vertexNameLineEdit);
    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    forms.addRow(&buttonBox);

    connect(&buttonBox, &QDialogButtonBox::accepted, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        QString newName = vertexNameLineEdit.text();
        if (vertexIndex >= 0 && vertexIndex < vertexxs.length()) {
            Vertexx* vertex = vertexxs.at(vertexIndex);
            vertex->setName(newName);
            QColor color = QColorDialog::getColor();
            vertex->setColorV(color);
            vertex->update();
            updateVertexx();
        }
        dialog.close();
    });

    connect(&buttonBox, &QDialogButtonBox::rejected, [&]() {
        dialog.close();
    });

    dialog.exec();

}
bool MainWindow::isConnected()
{

    if (vertexxs.isEmpty()) {
        return false;
    }


    QVector<bool> visited(vertexxs.length(), false); // Массив для отслеживания посещенных вершин
    QStack<Vertexx*> stack;
    stack.push(vertexxs[0]);

    while (!stack.isEmpty()) {
        Vertexx* current = stack.pop();
        int currentIdx = vertexxs.indexOf(current);
        visited[currentIdx] = true;

        // Перебираем ребра, инцидентные текущей вершине
        foreach (Edgge* edge, edgges) {
            if (edge->getSourceEdgge() == current || edge->getDestinationEdgge() == current) {
                Vertexx* adjacent = (edge->getSourceEdgge() == current) ? edge->getDestinationEdgge() : edge->getSourceEdgge();
                int adjacentIdx = vertexxs.indexOf(adjacent);
                if (!visited[adjacentIdx]) {
                    stack.push(adjacent);
                }
            }
        }
    }

    // Проверка, что все вершины были достигнуты
    for (int i = 0; i < visited.length(); ++i) {
        if (!visited[i]) {
            return false; // Найдена непосещенная вершина, граф не связный
        }
    }

    return true; // Все вершины достижимы, граф связный
}
QString MainWindow::getECycle() {

    QString eulerCycle;
    Graphh g(vertexxs.length());
    for (Edgge* edge : edgges) {
        int src = vertexxs.indexOf(edge->getSourceEdgge());
        int dest = vertexxs.indexOf(edge->getDestinationEdgge());
        g.addEdgge(src, dest);
    }
    vector<int> eulerPath;
    g.fcycle(0, eulerPath);
    for (int vertex : eulerPath) {
        eulerCycle += QString::number(vertex) + " ";
    }
    return eulerCycle;
}
int MainWindow::getVIndex(const QString& vertexName) const {
    for (int i = 0; i < vertexxs.length(); i++) {
        if (vertexxs[i]->getName() == vertexName) {
            return i;
        }
    }
    return -1; // Вершина не найдена
}
bool MainWindow::compleGraphh(){
    int numVertices = vertexxs.length();
    int numEdges = edgges.length();
    if(numVertices*(numVertices-1)/2 != numEdges){return false;}else{return true;}
}

void MainWindow::showGInf()
{
    // Количество вершин и ребер
    int numVertices = vertexxs.length();
    int numEdges = edgges.length();

    // Строка с информацией о количестве вершин и ребер
    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);

    // Строка со степенями вершин
QString degreesText = "Степени вершин:\n";
    bool eulertrue = true;
    bool treetrue = true;
    foreach (Vertexx* vertex, vertexxs) {
        int degree = 0;
        foreach (Edgge* edge, edgges) {
            if (edge->getSourceEdgge() == vertex || edge->getDestinationEdgge() == vertex) {
                degree++;
            }
        }
        degreesText += QString("Вершина %1: %2\n").arg(vertex->getName()).arg(degree);
    if(degree % 2 != 0){ eulertrue = false;}
    if(degree > 1){ treetrue = false;}
    }

    // Матрица инцидентности
    QString incidenceMatrixText = "Матрица инцидентности:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numEdges; j++) {
            if (edgges[j]->getSourceEdgge() == vertexxs[i] || edgges[j]->getDestinationEdgge() == vertexxs[i]) {
                incidenceMatrixText += "1 ";
            } else {
                incidenceMatrixText += "0 ";
            }
        }
        incidenceMatrixText += "\n";
    }

    // Матрица смежности
    QString adjacencyMatrixText = "Матрица смежности:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            bool isAdjacent = false;
            foreach (Edgge* edge, edgges) {
                if ((edge->getSourceEdgge() == vertexxs[i] && edge->getDestinationEdgge() == vertexxs[j]) ||
                    (edge->getSourceEdgge() == vertexxs[j] && edge->getDestinationEdgge() == vertexxs[i])) {
                    isAdjacent = true;
                    break;
                }
            }
            if (isAdjacent) {
                adjacencyMatrixText += "1 ";
            } else {
                adjacencyMatrixText += "0 ";
            }
        }
        adjacencyMatrixText += "\n";
    }
    QString eulerCycleText;
    if (eulertrue && isConnected()) {
        eulerCycleText = getECycle();
    } else {
        eulerCycleText = "Эйлеровый цикл не существует.";
    }

    QVector<QVector<int>> distances(numVertices, QVector<int>(numVertices, INT_MAX));

    int diameter = 0; // Инициализация диаметра графа
    int radius = INT_MAX; // Инициализация радиуса графа

    for (int i = 0; i < numEdges; i++) {
        int sourceIndex = getVIndex(edgges[i]->getSourceEdgge()->getName());
        int destinationIndex = getVIndex(edgges[i]->getDestinationEdgge()->getName());
        int weight = edgges[i]->getWeightEdgge();

        distances[sourceIndex][destinationIndex] = weight;
        distances[destinationIndex][sourceIndex] = weight;
    }

    for (int k = 0; k < numVertices; k++) {
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                if (distances[i][k] != INT_MAX && distances[k][j] != INT_MAX) {
                    distances[i][j] = qMin(distances[i][j], distances[i][k] + distances[k][j]);
                }
            }
        }
    }

    QString shortestPathsText = "Кратчайшие пути:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            if (i != j && distances[i][j] != INT_MAX) {
                shortestPathsText += QString("(%1,%2): %3\n").arg(i).arg(j).arg(distances[i][j]);

                diameter = qMax(diameter, distances[i][j]);
                radius = qMin(radius, distances[i][j]);
            }
        }
    }

    QString graphInfoText = QString("Радиус графа: %1\nДиаметр графа: %2\n").arg(radius).arg(diameter);
                                QString fullText;
                            if(isConnected()){
         fullText = graphInfoText + shortestPathsText;}
                            else{ fullText = shortestPathsText;}
    QString completeGraph;
                            if(compleGraphh()&& isConnected()){completeGraph = "Граф является полным";}
    else {completeGraph = "Граф не является полным";};
    QString connected;
    if(isConnected()){
        connected = "Граф является связным";
    } else {
            connected = "Граф не является связным";
    };
    // Формирование окна с информацией о графе
    QString tree;
    if(isConnected() && treetrue){ tree = "Граф является деревом";} else {tree = "Граф не является деревом";};
    QDialog dialog;
    QVBoxLayout layouts(&dialog);
    QLabel infoLabel(infoText);
    QLabel degreesLabel(degreesText);
    QLabel incidenceMatrixLabel(incidenceMatrixText);
    QLabel adjacencyMatrixLabel(adjacencyMatrixText);
    QLabel GraphConnectedLabel(connected);
    QLabel Tree(tree);
    QLabel CompleteGraphLabel(completeGraph);
    QLabel eulerCycleLabel("Эйлеровый цикл:\n" + eulerCycleText); // Обновлено
    QLabel shortestPathsLabel(fullText);
    layouts.addWidget(&infoLabel);
    layouts.addWidget(&degreesLabel);
    layouts.addWidget(&incidenceMatrixLabel);
    layouts.addWidget(&adjacencyMatrixLabel);
    layouts.addWidget(&GraphConnectedLabel);
    layouts.addWidget(&Tree);
    layouts.addWidget(&CompleteGraphLabel);
    layouts.addWidget(&eulerCycleLabel);
    layouts.addWidget(&shortestPathsLabel);
    dialog.exec();
}
void MainWindow::on_addInformationButton_clicked()
{
    showGInf();
}

void MainWindow::on_addClearsceneButton_clicked()
{
    scene->clear();
    vertexxs.clear();
    edgges.clear();
}
void MainWindow::exportFiles(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для записи: " << file.errorString();
            return;
    }


    QTextStream out(&file);

    for (int i = 0; i < vertexxs.length(); ++i)
    {
            Vertexx* vertex = vertexxs[i];
            out << "Vertex;" << vertex->getName() << ";" << vertex->getColorVertexx().name() << ";"
                << vertex->scenePos().x() << ";" << vertex->scenePos().y() << "\n";
    }


    for (int i = 0; i < edgges.length(); ++i)
    {
            Edgge* edge = edgges[i];
            out << "Edge;" << vertexxs.indexOf(edge->getSourceEdgge()) << ";" << vertexxs.indexOf(edge->getDestinationEdgge()) << ";"
                << edge->getWeightEdgge() << ";" << edge->getColorEdgge().name() << "\n";
    }

    file.close();
}
// Функция импорта данных из текстового файла в сцену
void MainWindow::importFiles(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для чтения: " << file.errorString();
            return;
    }


    scene->clear();
    vertexxs.clear();
    edgges.clear();


    QTextStream in(&file);
    while (!in.atEnd())
    {
            QString line = in.readLine();
            QStringList parts = line.split(";");

            if (parts[0] == "Vertex")
            {
            QString name = parts[1];
            QColor color(parts[2]);
            double x = parts[3].toDouble();
            double y = parts[4].toDouble();
            
            Vertexx* vertex = new Vertexx(name, color);
            vertex->setPos(x, y);
            vertexxs.append(vertex);
            scene->addItem(vertex);
            }
            else if (parts[0] == "Edge")
            {
            int sourceVertexIndex = parts[1].toInt();
            int destVertexIndex = parts[2].toInt();
            double weight = parts[3].toDouble();
            QColor color(parts[4]);

            if (sourceVertexIndex >= 0 && sourceVertexIndex < vertexxs.length() &&
                destVertexIndex >= 0 && destVertexIndex < vertexxs.length())
            {
                Vertexx* sourceVertex = vertexxs[sourceVertexIndex];
                Vertexx* destVertex = vertexxs[destVertexIndex];
                Edgge* edge = new Edgge(sourceVertex, destVertex, weight, color);
                edgges.append(edge);
                scene->addItem(edge);
            }
            }
    }

    file.close();


    scene->update();
}



void MainWindow::on_export_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Экспорт в файл");
    if (!fileName.isEmpty())
    {
            exportFiles(fileName);
    }
}



void MainWindow::on_import_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Импорт из файла");
    if (!fileName.isEmpty())
    {
            importFiles(fileName);
    }
}


