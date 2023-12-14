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
#include "rebro.h"
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
        Vershina* vertex = new Vershina(name, color);
        scene->addItem(vertex);
        vershins.append(vertex);
        dialog.close();
        updateRebro();
    });

    dialog.exec();
}

void MainWindow::on_addEdgeButton_clicked()
{
    if (vershins.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);

    QLineEdit weightLineEdit;

    QLineEdit sourceVertexLineEdit;
    QLineEdit destinationVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vershins.length() - 1) + ")");
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vershins.length() - 1) + ")");
    form.addRow("Укажите вес ребра", &weightLineEdit);
    form.addRow("Начальная вершина", &sourceVertexLineEdit);
    form.addRow("Конечная вершина", &destinationVertexLineEdit);
    QPushButton addButton("Добавить ребро");
    form.addRow(&addButton);
    connect(&addButton, &QPushButton::clicked, [&]()
    {
        double weight = weightLineEdit.text().toInt();
        int sourceIndex = sourceVertexLineEdit.text().toInt();
        int destinationIndex = destinationVertexLineEdit.text().toInt();

        if (sourceIndex >= 0 && sourceIndex < vershins.length() && destinationIndex >= 0 && destinationIndex < vershins.length())
        {
            Vershina* sourceVertex = vershins.at(sourceIndex);
            Vershina* destinationVertex = vershins.at(destinationIndex);
            Rebro* edge = new Rebro(sourceVertex, destinationVertex, weight, QColorDialog::getColor());
            scene->addItem(edge);
            rebrs.append(edge);

            QFile file("graph.txt");
            if (file.open(QIODevice::Append | QIODevice::Text))
            {
                QTextStream out(&file);

                // Записываем информацию о ребре в файл
                out << sourceIndex << "                 " << destinationIndex << "                 " << weight << "\n";

                file.close();
            }
        }
        dialog.close();
    });

    dialog.exec();
}
void MainWindow::updateRebro()
{
    foreach (Rebro* edge, rebrs) {
        edge->adjust();
        edge->update();
    }
}
void MainWindow::updateFile(){
    QFile file("graph.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const Rebro* edge : rebrs) {
            int sourceIndex = vershins.indexOf(edge->getSourceR());
            int destinationIndex = vershins.indexOf(edge->getDestinationR());
            out << sourceIndex << "\t" << destinationIndex << "\t" << edge->getWeightR() << "\n";
        }
        file.close();
    }
}
void MainWindow::on_removeEdgeButton_clicked()
{
    if (rebrs.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit sourceVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vershins.length() - 1) + ")");
    QLineEdit destinationVertexLineEdit;
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vershins.length() - 1) + ")");
    form.addRow("Начальная вершина", &sourceVertexLineEdit);
    form.addRow("Конечная вершина", &destinationVertexLineEdit);
    QPushButton removeButton("Удалить ребро");
    form.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int sourceIndex = sourceVertexLineEdit.text().toInt();
        int destinationIndex = destinationVertexLineEdit.text().toInt();
        if (sourceIndex >= 0 && sourceIndex < vershins.length() && destinationIndex >= 0 && destinationIndex < vershins.length()) {
            Vershina* sourceVertex = vershins.at(sourceIndex);
            Vershina* destinationVertex = vershins.at(destinationIndex);


            for (int i = 0; i < rebrs.length(); i++) {
                Rebro* edge = rebrs.at(i);
                if (edge->getSourceR() == sourceVertex && edge->getDestinationR() == destinationVertex) {
                    scene->removeItem(edge);
                    rebrs.removeAt(i);
                    delete edge;
                    break;
                }
            }

            // Обновляем файл без удаленного ребра
            updateFile();
        }
        dialog.close();
    });

    dialog.exec();
}


void MainWindow::on_removeVertexButton_clicked()
{
    if (vershins.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vershins.length() - 1) + ")");
    form.addRow("Индекс вершины", &vertexIndexLineEdit);
    QPushButton removeButton("Удалить вершину");
    form.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        if (vertexIndex >= 0 && vertexIndex < vershins.length()) {
            Vershina* vertex = vershins.at(vertexIndex);

            // Удаление связанных ребер
            for (int i = rebrs.length() - 1; i >= 0; --i) {
                Rebro* edge = rebrs.at(i);
                if (edge->getSourceR() == vertex || edge->getDestinationR() == vertex) {
                    scene->removeItem(edge);
                    rebrs.removeAt(i);
                    delete edge;
                }
            }


            scene->removeItem(vertex);
            vershins.removeOne(vertex);
            delete vertex;

            // Обновление файла без удаленной вершины и связанных ребер
            updateFile();
        }
        dialog.close();
    });

    dialog.exec();
}

void MainWindow::updateVershins()
{
    for (Vershina* vertex : vershins) {
        vertex->update();
    }
}


void MainWindow::on_changeVertexButton_clicked()
{
    if (vershins.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vershins.length() - 1) + ")");
    QLineEdit vertexNameLineEdit;
    vertexNameLineEdit.setPlaceholderText("Новое название вершины");
    form.addRow("Индекс вершины", &vertexIndexLineEdit);
    form.addRow("Новое название", &vertexNameLineEdit);
    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    form.addRow(&buttonBox);

    connect(&buttonBox, &QDialogButtonBox::accepted, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        QString newName = vertexNameLineEdit.text();
        if (vertexIndex >= 0 && vertexIndex < vershins.length()) {
            Vershina* vertex = vershins.at(vertexIndex);
            vertex->setName(newName);
            QColor color = QColorDialog::getColor();
            vertex->setColorV(color);
            vertex->update();
            updateVershins();
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

    if (vershins.isEmpty()) {
        return false;
    }


    QVector<bool> visited(vershins.length(), false); // Массив для отслеживания посещенных вершин
    QStack<Vershina*> stack;
    stack.push(vershins[0]);

    while (!stack.isEmpty()) {
        Vershina* current = stack.pop();
        int currentIdx = vershins.indexOf(current);
        visited[currentIdx] = true;

        // Перебираем ребра, инцидентные текущей вершине
        foreach (Rebro* edge, rebrs) {
            if (edge->getSourceR() == current || edge->getDestinationR() == current) {
                Vershina* adjacent = (edge->getSourceR() == current) ? edge->getDestinationR() : edge->getSourceR();
                int adjacentIdx = vershins.indexOf(adjacent);
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
    Grph g(vershins.length());
    for (Rebro* edge : rebrs) {
        int src = vershins.indexOf(edge->getSourceR());
        int dest = vershins.indexOf(edge->getDestinationR());
        g.addEdge(src, dest);
    }
    vector<int> eulerPath;
    g.findcycle(0, eulerPath);
    for (int vertex : eulerPath) {
        eulerCycle += QString::number(vertex) + " ";
    }
    return eulerCycle;
}
int MainWindow::getVIndex(const QString& vertexName) const {
    for (int i = 0; i < vershins.length(); i++) {
        if (vershins[i]->getName() == vertexName) {
            return i;
        }
    }
    return -1; // Вершина не найдена
}
bool MainWindow::compleGraph(){
    int numVertices = vershins.length();
    int numEdges = rebrs.length();
    if(numVertices*(numVertices-1)/2 != numEdges){return false;}else{return true;}
}

void MainWindow::showGInfo()
{
    // Количество вершин и ребер
    int numVertices = vershins.length();
    int numEdges = rebrs.length();

    // Строка с информацией о количестве вершин и ребер
    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);

    // Строка со степенями вершин
QString degreesText = "Степени вершин:\n";
    bool eulertrue = true;
    bool treetrue = true;
    foreach (Vershina* vertex, vershins) {
        int degree = 0;
        foreach (Rebro* edge, rebrs) {
            if (edge->getSourceR() == vertex || edge->getDestinationR() == vertex) {
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
            if (rebrs[j]->getSourceR() == vershins[i] || rebrs[j]->getDestinationR() == vershins[i]) {
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
            foreach (Rebro* edge, rebrs) {
                if ((edge->getSourceR() == vershins[i] && edge->getDestinationR() == vershins[j]) ||
                    (edge->getSourceR() == vershins[j] && edge->getDestinationR() == vershins[i])) {
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
        int sourceIndex = getVIndex(rebrs[i]->getSourceR()->getName());
        int destinationIndex = getVIndex(rebrs[i]->getDestinationR()->getName());
        int weight = rebrs[i]->getWeightR();

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
                            if(compleGraph()&& isConnected()){completeGraph = "Граф является полным";}
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
    QVBoxLayout layout(&dialog);
    QLabel infoLabel(infoText);
    QLabel degreesLabel(degreesText);
    QLabel incidenceMatrixLabel(incidenceMatrixText);
    QLabel adjacencyMatrixLabel(adjacencyMatrixText);
    QLabel GraphConnectedLabel(connected);
    QLabel Tree(tree);
    QLabel CompleteGraphLabel(completeGraph);
    QLabel eulerCycleLabel("Эйлеровый цикл:\n" + eulerCycleText); // Обновлено
    QLabel shortestPathsLabel(fullText);
    layout.addWidget(&infoLabel);
    layout.addWidget(&degreesLabel);
    layout.addWidget(&incidenceMatrixLabel);
    layout.addWidget(&adjacencyMatrixLabel);
    layout.addWidget(&GraphConnectedLabel);
    layout.addWidget(&Tree);
    layout.addWidget(&CompleteGraphLabel);
    layout.addWidget(&eulerCycleLabel);
    layout.addWidget(&shortestPathsLabel);
    dialog.exec();
}
void MainWindow::on_addInformationButton_clicked()
{
    showGInfo();
}

void MainWindow::on_addClearsceneButton_clicked()
{
    scene->clear();
    vershins.clear();
    rebrs.clear();
}
void MainWindow::exportFile(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для записи: " << file.errorString();
            return;
    }


    QTextStream out(&file);

    for (int i = 0; i < vershins.length(); ++i)
    {
            Vershina* vertex = vershins[i];
            out << "Vertex;" << vertex->getName() << ";" << vertex->getColorV().name() << ";"
                << vertex->scenePos().x() << ";" << vertex->scenePos().y() << "\n";
    }


    for (int i = 0; i < rebrs.length(); ++i)
    {
            Rebro* edge = rebrs[i];
            out << "Edge;" << vershins.indexOf(edge->getSourceR()) << ";" << vershins.indexOf(edge->getDestinationR()) << ";"
                << edge->getWeightR() << ";" << edge->getColorR().name() << "\n";
    }

    file.close();
}
// Функция импорта данных из текстового файла в сцену
void MainWindow::importFile(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для чтения: " << file.errorString();
            return;
    }


    scene->clear();
    vershins.clear();
    rebrs.clear();


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

            Vershina* vertex = new Vershina(name, color);
            vertex->setPos(x, y);
            vershins.append(vertex);
            scene->addItem(vertex);
            }
            else if (parts[0] == "Edge")
            {
            int sourceVertexIndex = parts[1].toInt();
            int destVertexIndex = parts[2].toInt();
            double weight = parts[3].toDouble();
            QColor color(parts[4]);

            if (sourceVertexIndex >= 0 && sourceVertexIndex < vershins.length() &&
                destVertexIndex >= 0 && destVertexIndex < vershins.length())
            {
                Vershina* sourceVertex = vershins[sourceVertexIndex];
                Vershina* destVertex = vershins[destVertexIndex];
                Rebro* edge = new Rebro(sourceVertex, destVertex, weight, color);
                rebrs.append(edge);
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
            exportFile(fileName);
    }
}



void MainWindow::on_import_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Импорт из файла");
    if (!fileName.isEmpty())
    {
            importFile(fileName);
    }
}


