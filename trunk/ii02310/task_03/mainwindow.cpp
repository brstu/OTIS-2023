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
#include "edge.h"
#include "vertex.h"
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
        Vertex* vertex = new Vertex(name, color);
        scene->addItem(vertex);
        vertices.append(vertex);
        dialog.close();
        updateEdges();
    });

    dialog.exec();
}

void MainWindow::on_addEdgeButton_clicked()
{
    if (vertices.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);

    QLineEdit weightLineEdit;

    QLineEdit sourceVertexLineEdit;
    QLineEdit destinationVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vertices.length() - 1) + ")");
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vertices.length() - 1) + ")");
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

        if (sourceIndex >= 0 && sourceIndex < vertices.length() && destinationIndex >= 0 && destinationIndex < vertices.length())
        {
            Vertex* sourceVertex = vertices.at(sourceIndex);
            Vertex* destinationVertex = vertices.at(destinationIndex);
            Edge* edge = new Edge(sourceVertex, destinationVertex, weight, QColorDialog::getColor());
            scene->addItem(edge);
            edges.append(edge);

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
void MainWindow::updateEdges()
{
    foreach (Edge* edge, edges) {
        edge->adjust();
        edge->update();
    }
}
void MainWindow::updateFileGraph(){
    QFile file("graph.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const Edge* edge : edges) {
            int sourceIndex = vertices.indexOf(edge->getSource());
            int destinationIndex = vertices.indexOf(edge->getDestination());
            out << sourceIndex << "\t" << destinationIndex << "\t" << edge->getWeight() << "\n";
        }
        file.close();
    }
}
void MainWindow::on_removeEdgeButton_clicked()
{
    if (edges.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit sourceVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vertices.length() - 1) + ")");
    QLineEdit destinationVertexLineEdit;
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vertices.length() - 1) + ")");
    form.addRow("Начальная вершина", &sourceVertexLineEdit);
    form.addRow("Конечная вершина", &destinationVertexLineEdit);
    QPushButton removeButton("Удалить ребро");
    form.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int sourceIndex = sourceVertexLineEdit.text().toInt();
        int destinationIndex = destinationVertexLineEdit.text().toInt();
        if (sourceIndex >= 0 && sourceIndex < vertices.length() && destinationIndex >= 0 && destinationIndex < vertices.length()) {
            Vertex* sourceVertex = vertices.at(sourceIndex);
            Vertex* destinationVertex = vertices.at(destinationIndex);


            for (int i = 0; i < edges.length(); i++) {
                Edge* edge = edges.at(i);
                if (edge->getSource() == sourceVertex && edge->getDestination() == destinationVertex) {
                    scene->removeItem(edge);
                    edges.removeAt(i);
                    delete edge;
                    break;
                }
            }

            // Обновляем файл без удаленного ребра
            updateFileGraph();
        }
        dialog.close();
    });

    dialog.exec();
}


void MainWindow::on_removeVertexButton_clicked()
{
    if (vertices.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vertices.length() - 1) + ")");
    form.addRow("Индекс вершины", &vertexIndexLineEdit);
    QPushButton removeButton("Удалить вершину");
    form.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        if (vertexIndex >= 0 && vertexIndex < vertices.length()) {
            Vertex* vertex = vertices.at(vertexIndex);

            // Удаление связанных ребер
            for (int i = edges.length() - 1; i >= 0; --i) {
                Edge* edge = edges.at(i);
                if (edge->getSource() == vertex || edge->getDestination() == vertex) {
                    scene->removeItem(edge);
                    edges.removeAt(i);
                    delete edge;
                }
            }


            scene->removeItem(vertex);
            vertices.removeOne(vertex);
            delete vertex;

            // Обновление файла без удаленной вершины и связанных ребер
            updateFileGraph();
        }
        dialog.close();
    });

    dialog.exec();
}

void MainWindow::updateVertices()
{
    for (Vertex* vertex : vertices) {
        vertex->update();
    }
}


void MainWindow::on_changeVertexButton_clicked()
{
    if (vertices.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vertices.length() - 1) + ")");
    QLineEdit vertexNameLineEdit;
    vertexNameLineEdit.setPlaceholderText("Новое название вершины");
    form.addRow("Индекс вершины", &vertexIndexLineEdit);
    form.addRow("Новое название", &vertexNameLineEdit);
    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    form.addRow(&buttonBox);

    connect(&buttonBox, &QDialogButtonBox::accepted, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        QString newName = vertexNameLineEdit.text();
        if (vertexIndex >= 0 && vertexIndex < vertices.length()) {
            Vertex* vertex = vertices.at(vertexIndex);
            vertex->setName(newName);
            QColor color = QColorDialog::getColor();
            vertex->setColor(color);
            vertex->update();
            updateVertices();
        }
        dialog.close();
    });

    connect(&buttonBox, &QDialogButtonBox::rejected, [&]() {
        dialog.close();
    });

    dialog.exec();

}
bool MainWindow::isGraphConnected()
{

    if (vertices.isEmpty()) {
        return false;
    }


    QVector<bool> visited(vertices.length(), false); // Массив для отслеживания посещенных вершин
    QStack<Vertex*> stack;
    stack.push(vertices[0]);

    while (!stack.isEmpty()) {
        Vertex* current = stack.pop();
        int currentIdx = vertices.indexOf(current);
        visited[currentIdx] = true;

        // Перебираем ребра, инцидентные текущей вершине
        foreach (Edge* edge, edges) {
            if (edge->getSource() == current || edge->getDestination() == current) {
                Vertex* adjacent = (edge->getSource() == current) ? edge->getDestination() : edge->getSource();
                int adjacentIdx = vertices.indexOf(adjacent);
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
QString MainWindow::getEulerCycle() {

    QString eulerCycle;
    Graph g(vertices.length());
    for (Edge* edge : edges) {
        int src = vertices.indexOf(edge->getSource());
        int dest = vertices.indexOf(edge->getDestination());
        g.addEdge(src, dest);
    }
    vector<int> eulerPath;
    g.findcycle(0, eulerPath);
    for (int vertex : eulerPath) {
        eulerCycle += QString::number(vertex) + " ";
    }
    return eulerCycle;
}
int MainWindow::getVertexIndex(const QString& vertexName) const {
    for (int i = 0; i < vertices.length(); i++) {
        if (vertices[i]->getName() == vertexName) {
            return i;
        }
    }
    return -1; // Вершина не найдена
}
bool MainWindow::complGraph(){
    int numVertices = vertices.length();
    int numEdges = edges.length();
    if(numVertices*(numVertices-1)/2 != numEdges){return false;}else{return true;}
}

void MainWindow::showGraphInfo()
{
    // Количество вершин и ребер
    int numVertices = vertices.length();
    int numEdges = edges.length();

    // Строка с информацией о количестве вершин и ребер
    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);

    // Строка со степенями вершин
QString degreesText = "Степени вершин:\n";
    bool eulertrue = true;
    bool treetrue = true;
    foreach (Vertex* vertex, vertices) {
        int degree = 0;
        foreach (Edge* edge, edges) {
            if (edge->getSource() == vertex || edge->getDestination() == vertex) {
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
            if (edges[j]->getSource() == vertices[i] || edges[j]->getDestination() == vertices[i]) {
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
            foreach (Edge* edge, edges) {
                if ((edge->getSource() == vertices[i] && edge->getDestination() == vertices[j]) ||
                    (edge->getSource() == vertices[j] && edge->getDestination() == vertices[i])) {
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
    if (eulertrue && isGraphConnected()) {
        eulerCycleText = getEulerCycle();
    } else {
        eulerCycleText = "Эйлеровый цикл не существует.";
    }

    QVector<QVector<int>> distances(numVertices, QVector<int>(numVertices, INT_MAX));

    int diameter = 0; // Инициализация диаметра графа
    int radius = INT_MAX; // Инициализация радиуса графа

    for (int i = 0; i < numEdges; i++) {
        int sourceIndex = getVertexIndex(edges[i]->getSource()->getName());
        int destinationIndex = getVertexIndex(edges[i]->getDestination()->getName());
        int weight = edges[i]->getWeight();

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
                            if(isGraphConnected()){
         fullText = graphInfoText + shortestPathsText;}
                            else{ fullText = shortestPathsText;}
    QString completeGraph;
    if(complGraph()&& isGraphConnected()){completeGraph = "Граф является полным";}
    else {completeGraph = "Граф не является полным";};
    QString connected;
    if(isGraphConnected()){
        connected = "Граф является связным";
    } else {
            connected = "Граф не является связным";
    };
    // Формирование окна с информацией о графе
    QString tree;
    if(isGraphConnected() && treetrue){ tree = "Граф является деревом";} else {tree = "Граф не является деревом";};
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
    showGraphInfo();
}

void MainWindow::on_addClearsceneButton_clicked()
{
    scene->clear();
    vertices.clear();
    edges.clear();
}
void MainWindow::exportToTextFile(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для записи: " << file.errorString();
            return;
    }


    QTextStream out(&file);

    for (int i = 0; i < vertices.length(); ++i)
    {
            Vertex* vertex = vertices[i];
            out << "Vertex;" << vertex->getName() << ";" << vertex->getColor().name() << ";"
                << vertex->scenePos().x() << ";" << vertex->scenePos().y() << "\n";
    }


    for (int i = 0; i < edges.length(); ++i)
    {
            Edge* edge = edges[i];
            out << "Edge;" << vertices.indexOf(edge->getSource()) << ";" << vertices.indexOf(edge->getDestination()) << ";"
                << edge->getWeight() << ";" << edge->getColor().name() << "\n";
    }

    file.close();
}
// Функция импорта данных из текстового файла в сцену
void MainWindow::importFromTextFile(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для чтения: " << file.errorString();
            return;
    }


    scene->clear();
    vertices.clear();
    edges.clear();


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

            Vertex* vertex = new Vertex(name, color);
            vertex->setPos(x, y);
            vertices.append(vertex);
            scene->addItem(vertex);
            }
            else if (parts[0] == "Edge")
            {
            int sourceVertexIndex = parts[1].toInt();
            int destVertexIndex = parts[2].toInt();
            double weight = parts[3].toDouble();
            QColor color(parts[4]);

            if (sourceVertexIndex >= 0 && sourceVertexIndex < vertices.length() &&
                destVertexIndex >= 0 && destVertexIndex < vertices.length())
            {
                Vertex* sourceVertex = vertices[sourceVertexIndex];
                Vertex* destVertex = vertices[destVertexIndex];
                Edge* edge = new Edge(sourceVertex, destVertex, weight, color);
                edges.append(edge);
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
            exportToTextFile(fileName);
    }
}



void MainWindow::on_import_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Импорт из файла");
    if (!fileName.isEmpty())
    {
            importFromTextFile(fileName);
    }
}


