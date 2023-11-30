#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QInputDialog>
#include <QPushButton>
#include <QFormLayout>
#include <QLineEdit>
#include <QColorDialog>
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QDoubleSpinBox>
#include <QIODevice>
#include <QFile>
#include <QDialogButtonBox>
#include <QLabel>
#include <QComboBox>
#include <QFontMetrics>
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

            // Удаление вершины
            scene->removeItem(vertex);
            vertices.removeOne(vertex);
            delete vertex;

            // Обновление файла без удаленной вершины и связанных ребер
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
void MainWindow::showGraphInfo()
{
    // Количество вершин и ребер
    int numVertices = vertices.length();
    int numEdges = edges.length();

    // Строка с информацией о количестве вершин и ребер
    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);

    // Строка со степенями вершин
    QString degreesText = "Степени вершин:\n";
    foreach (Vertex* vertex, vertices) {
        int degree = 0;
        foreach (Edge* edge, edges) {
            if (edge->getSource() == vertex && edge->getDestination() == vertex) {
                degree++;
            }
        }
        degreesText += QString("Вершина %1: %2\n").arg(vertex->getName()).arg(degree);
    }

    // Матрица инцидентности
    QString incidenceMatrixText = "Матрица инцидентности:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numEdges; j++) {
            if (edges[j]->getSource() == vertices[i] && edges[j]->getDestination() == vertices[i]) {
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

    // Нахождение кратчайших путей
    QVector<QVector<int>> distances(numVertices, QVector<int>(numVertices, INT_MAX));

    for (int i = 0; i < numEdges; i++) {
        int sourceIndex = getVertexIndex(edges[i]->getSource()->getName());
        int destinationIndex = getVertexIndex(edges[i]->getDestination()->getName());
        int weight = edges[i]->getWeight();

        distances[sourceIndex][destinationIndex] = weight;
        distances[destinationIndex][sourceIndex] = weight;
    }

    for (int k = 0; k < numVertices; k++) {
        for (int i = 0; i < numVertices; i++) {for (int j = 0; j < numVertices; j++) {
                if (distances[i][k] != INT_MAX && distances[k][j] != INT_MAX) {
                    distances[i][j] = qMin(distances[i][j], distances[i][k] + distances[k][j]);
                }
            }
        }
    }

    QString shortestPathsText = "Кратчайшие пути:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            if (distances[i][j] != INT_MAX) {
                shortestPathsText += QString("(%1,%2): %3\n").arg(i).arg(j).arg(distances[i][j]);
            }
        }
    }

    QString eulerCycleText = getEulerCycle();

    // Формирование окна с информацией о графе
    QDialog dialog;
    QVBoxLayout layout(&dialog);
    QLabel infoLabel(infoText);
    QLabel degreesLabel(degreesText);
    QLabel incidenceMatrixLabel(incidenceMatrixText);
    QLabel adjacencyMatrixLabel(adjacencyMatrixText);
    QLabel eulerCycleLabel("Эйлеровый цикл:\n" + eulerCycleText);
    QLabel shortestPathsLabel(shortestPathsText);
    layout.addWidget(&infoLabel);
    layout.addWidget(&degreesLabel);
    layout.addWidget(&incidenceMatrixLabel);
    layout.addWidget(&adjacencyMatrixLabel);
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
    QFile::remove("graph.txt");
}
