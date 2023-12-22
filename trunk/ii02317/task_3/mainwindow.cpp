#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QInputDialog>
#include <QPushButton>
#include <QFormLayout>
#include <QLineEdit>
#include <QDebug>
#include <QPainter>
#include <QIODevice>
#include <QLabel>
#include <QFileDialog>
#include <QColorDialog>
#include <QStack>
#include <algorithm>
#include "vertex.h"
#include "edge.h"
#include "euler.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_addVertexButton_clicked() {
        // Создаем диалоговое окно
        QDialog dialog;
        QFormLayout formLayout(&dialog);

        // Создаем поле для ввода имени вершины
        QLineEdit nameLineEdit;
        formLayout.addRow("Введи имя вершины", &nameLineEdit);

        // Создаем кнопку для добавления вершины
        QPushButton addButton("Добавить вершину");
        formLayout.addRow(&addButton);

        // Связываем событие клика по кнопке с лямбда-выражением
        connect(&addButton, &QPushButton::clicked, [&]() {
            // Получаем имя и цвет от пользователя
            QString name = nameLineEdit.text();
            QColor color = QColorDialog::getColor();

            // Создаем новый объект вершины и добавляем его на сцену
            Vertex* vertex = new Vertex(name, color);
            scene->addItem(vertex);
            vertices.append(vertex);

            // Закрываем диалоговое окно и обновляем ребра
            dialog.close();
            updateEdges();
        });

        // Отображаем диалоговое окно
        dialog.exec();
    }

void MainWindow::on_addEdgeButton_clicked() {
    if (vertices.isEmpty()) {
        return;
    }

    // Создаем диалоговое окно
    QDialog dialog;
    QFormLayout formLayout(&dialog);

    // Создаем поля для ввода веса и номеров начальной и конечной вершин
    QLineEdit weightLineEdit;
    QLineEdit sourceVertexLineEdit;
    QLineEdit destinationVertexLineEdit;

    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vertices.length() - 1) + ")");
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vertices.length() - 1) + ")");

    formLayout.addRow("Укажите вес ребра", &weightLineEdit);
    formLayout.addRow("Начальная вершина", &sourceVertexLineEdit);
    formLayout.addRow("Конечная вершина", &destinationVertexLineEdit);

    // Создаем кнопку для добавления ребра
    QPushButton addButton("Добавить ребро");
    formLayout.addRow(&addButton);

    // Связываем событие клика по кнопке с лямбда-выражением
    connect(&addButton, &QPushButton::clicked, [&]() {
        // Получаем введенные значения
        QString weightStr = weightLineEdit.text();
        QString sourceVertexStr = sourceVertexLineEdit.text();
        QString destinationVertexStr = destinationVertexLineEdit.text();

        // Преобразуем значения в числа
        bool ok;
        int weight = weightStr.toInt(&ok);
        int sourceVertex = sourceVertexStr.toInt(&ok);
        int destinationVertex = destinationVertexStr.toInt(&ok);

        // Проверяем, что числа введены корректно
        if (ok && weight >= 0 && sourceVertex >= 0 && sourceVertex < vertices.length() && destinationVertex >= 0 && destinationVertex < vertices.length()) {
            // Создаем ребро и добавляем его на сцену
            Edge* edge = new Edge(vertices[sourceVertex], vertices[destinationVertex], weight);
            scene->addItem(edge);
            edges.append(edge);
        } else {
            cerr << "Ошибка: недопустимые значения веса или вершин" << endl;
        }

        // Закрываем диалоговое окно
        dialog.close();
    });

    // Отображаем диалоговое окно
    dialog.exec();
}
    connect(&addButton, &QPushButton::clicked, [&]() {
        double weight = weightLineEdit.text().toInt();
        int sourceIndex = sourceVertexLineEdit.text().toInt();
        int destinationIndex = destinationVertexLineEdit.text().toInt();

        if (isValidVertexIndex(sourceIndex) && isValidVertexIndex(destinationIndex)) {
            Vertex* sourceVertex = vertices.at(sourceIndex);
            Vertex* destinationVertex = vertices.at(destinationIndex);
            Edge* edge = new Edge(sourceVertex, destinationVertex, weight, QColorDialog::getColor());
            scene->addItem(edge);
            edges.append(edge);

            saveEdgeToFile(sourceIndex, destinationIndex, weight);
        }
        dialog.close();
    });

    dialog.exec();
}

    void MainWindow::updateEdges() {
        for (Edge* edge : edges) {
            edge->adjust();
            edge->update();
        }
    }

    void MainWindow::updateFileGraph() {
        QFile file("graph.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            for (const Edge* edge : edges) {
                // Используем QPair для хранения пары индексов вершин
                QPair<int, int> vertexIndices = getVertexIndices(edge);
                out << vertexIndices.first << "\t" << vertexIndices.second << "\t" << edge->getWeight() << "\n";
            }
            file.close();
        }
    }

    void MainWindow::on_removeEdgeButton_clicked() {
        if (edges.isEmpty()) {
            return;
        }

        // Создаем диалоговое окно
        QDialog dialog;
        QFormLayout formLayout(&dialog);

        // Создаем поля для ввода номеров начальной и конечной вершин
        QLineEdit sourceVertexLineEdit;
        sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vertices.length() - 1) + ")");
        QLineEdit destinationVertexLineEdit;
        destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vertices.length() - 1) + ")");

        formLayout.addRow("Начальная вершина", &sourceVertexLineEdit);
        formLayout.addRow("Конечная вершина", &destinationVertexLineEdit);

        // Создаем кнопку для удаления ребра
        QPushButton removeButton("Удалить ребро");
        formLayout.addRow(&removeButton);

        // Связываем событие клика по кнопке с лямбда-выражением
        connect(&removeButton, &QPushButton::clicked, [&]() {
            // Получаем введенные значения
            int sourceIndex = sourceVertexLineEdit.text().toInt();
            int destinationIndex = destinationVertexLineEdit.text().toInt();

            // Проверяем, что введенные значения корректны
            if (sourceIndex >= 0 && sourceIndex < vertices.length() &&
                destinationIndex >= 0 && destinationIndex < vertices.length()) {
                // Удаляем ребро
                removeEdge(sourceIndex, destinationIndex);
            } else {
                cerr << "Ошибка: недопустимые значения вершин" << endl;
            }

            // Закрываем диалоговое окно
            dialog.close();
        });

        // Отображаем диалоговое окно
        dialog.exec();
    }

    // Вспомогательная функция для получения пары индексов вершин из ребра
    QPair<int, int> MainWindow::getVertexIndices(const Edge* edge) const {
        int sourceIndex = vertices.indexOf(edge->getSource());
        int destinationIndex = vertices.indexOf(edge->getDestination());
        return qMakePair(sourceIndex, destinationIndex);
    }

    // Вспомогательная функция для удаления ребра по индексам вершин
    void MainWindow::removeEdge(int sourceIndex, int destinationIndex) {
        auto it = std::remove_if(edges.begin(), edges.end(), [&](Edge* edge) {
            QPair<int, int> indices = getVertexIndices(edge);
            return indices.first == sourceIndex && indices.second == destinationIndex;
        });

        edges.erase(it, edges.end());
        updateEdges();
        updateFileGraph();
    }
        if (isValidVertexIndex(sourceIndex) && isValidVertexIndex(destinationIndex)) {
            removeEdge(sourceIndex, destinationIndex);
            updateFileGraph();
        }
        dialog.close();
    });

    dialog.exec();
}

void MainWindow::removeEdge(int sourceIndex, int destinationIndex) {
    Vertex* sourceVertex = vertices.at(sourceIndex);
    Vertex* destinationVertex = vertices.at(destinationIndex);

    for (int i = edges.length() - 1; i >= 0; --i) {
        Edge* edge = edges.at(i);
        if (edge->getSource() == sourceVertex && edge->getDestination() == destinationVertex) {
            scene->removeItem(edge);
            edges.removeAt(i);
            delete edge;
            break;
        }
    }
}

void MainWindow::on_removeVertexButton_clicked() {
    if (vertices.isEmpty()) {
        return;
    }

    // Создаем диалоговое окно
    QDialog dialog;
    QFormLayout formLayout(&dialog);

    // Создаем поле для ввода индекса вершины
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vertices.length() - 1) + ")");
    formLayout.addRow("Индекс вершины", &vertexIndexLineEdit);

    // Создаем кнопку для удаления вершины
    QPushButton removeButton("Удалить вершину");
    formLayout.addRow(&removeButton);

    // Связываем событие клика по кнопке с лямбда-выражением
    connect(&removeButton, &QPushButton::clicked, [&]() {
        // Получаем введенное значение индекса
        int vertexIndex = vertexIndexLineEdit.text().toInt();

        // Проверяем, что введенное значение корректно
        if (isValidVertexIndex(vertexIndex)) {
            // Удаляем вершину и обновляем файл графа
            removeVertex(vertexIndex);
            updateFileGraph();
        } else {
            cerr << "Ошибка: недопустимый индекс вершины" << endl;
        }

        // Закрываем диалоговое окно
        dialog.close();
    });

    // Отображаем диалоговое окно
    dialog.exec();
}

// Вспомогательная функция для проверки корректности индекса вершины
bool MainWindow::isValidVertexIndex(int vertexIndex) const {
    return vertexIndex >= 0 && vertexIndex < vertices.length();
}

// Вспомогательная функция для удаления вершины по индексу
void MainWindow::removeVertex(int vertexIndex) {
    // Удаляем вершину
    Vertex* vertexToRemove = vertices.takeAt(vertexIndex);
    scene->removeItem(vertexToRemove);
    delete vertexToRemove;

    // Удаляем инцидентные ребра
    auto it = std::remove_if(edges.begin(), edges.end(), [vertexIndex](Edge* edge) {
        return vertices.indexOf(edge->getSource()) == vertexIndex || vertices.indexOf(edge->getDestination()) == vertexIndex;
    });

    edges.erase(it, edges.end());

    // Обновляем сцену
    updateEdges();
}

void MainWindow::removeVertex(int vertexIndex) {
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
}

void MainWindow::updateVertices() {
    for (Vertex* vertex : vertices) {
        vertex->update();
    }
}

void MainWindow::on_changeVertexButton_clicked() {
    if (vertices.isEmpty()) {
        return;
    }

    // Создаем диалоговое окно
    QDialog dialog;
    QFormLayout formLayout(&dialog);

    // Создаем поля для ввода индекса вершины и нового названия
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vertices.length() - 1) + ")");

    QLineEdit vertexNameLineEdit;
    vertexNameLineEdit.setPlaceholderText("Новое название вершины");

    formLayout.addRow("Индекс вершины", &vertexIndexLineEdit);
    formLayout.addRow("Новое название", &vertexNameLineEdit);

    // Создаем кнопки "Ок" и "Отмена"
    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    formLayout.addRow(&buttonBox);

    // Связываем событие нажатия кнопки "Ок" с лямбда-выражением
    connect(&buttonBox, &QDialogButtonBox::accepted, [&]() {
        // Получаем введенные значения
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        QString newName = vertexNameLineEdit.text();

        // Проверяем, что введенные значения корректны
        if (isValidVertexIndex(vertexIndex)) {
            // Обновляем вершину с новыми значениями
            Vertex* vertex = vertices.at(vertexIndex);
            vertex->setName(newName);
            QColor color = QColorDialog::getColor();
            vertex->setColor(color);
            vertex->update();
            updateVertices();
        } else {
            cerr << "Ошибка: недопустимый индекс вершины" << endl;
        }

        // Закрываем диалоговое окно
        dialog.close();
    });

    // Связываем событие нажатия кнопки "Отмена" с лямбда-выражением
    connect(&buttonBox, &QDialogButtonBox::rejected, [&]() {
        // Закрываем диалоговое окно
        dialog.close();
    });

    // Отображаем диалоговое окно
    dialog.exec();
}
bool MainWindow::isGraphConnected() {
    if (vertices.isEmpty()) {
        return false;
    }

    QVector<bool> visited(vertices.length(), false);
    QQueue<Vertex*> queue;
    queue.enqueue(vertices[0]);

    while (!queue.isEmpty()) {
        Vertex* current = queue.dequeue();
        int currentIdx = vertices.indexOf(current);
        visited[currentIdx] = true;

        for (Edge* edge : edges) {
            if (edge->getSource() == current || edge->getDestination() == current) {
                Vertex* adjacent = (edge->getSource() == current) ? edge->getDestination() : edge->getSource();
                int adjacentIdx = vertices.indexOf(adjacent);

                if (!visited[adjacentIdx]) {
                    queue.enqueue(adjacent);
                }
            }
        }
    }

    return visited.count(true) == vertices.length();
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
    g.findEulerCycle(eulerPath);

    QString MainWindow::formatEulerCycle(const vector<int>& eulerPath) {
        QString eulerCycle;
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
        return -1;
    }

    bool MainWindow::isCompleteGraph() const {
        int numVertices = vertices.length();
        int numEdges = edges.length();
        return (numVertices * (numVertices - 1) / 2 == numEdges);
    }
        
void MainWindow::showGraphInfo() {
    int numVertices = vertices.length();
    int numEdges = edges.length();

    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);
    QString degreesText = "Степени вершин:\n";
    bool eulerTrue = true;
    bool treeTrue = true;

    for (Vertex* vertex : vertices) {
        int degree = 0;
        foreach (Edge* edge, edges) {
            if (edge->getSource() == vertex || edge->getDestination() == vertex) {
                degree++;
            }
        }
        degreesText += QString("Вершина %1: %2\n").arg(vertex->getName()).arg(degree);

        if (degree % 2 != 0) {
            eulerTrue = false;
        }
        if (degree > 1) {
            treeTrue = false;
        }
    }

    QString incidenceMatrixText = "Матрица инцидентности:\n";
    QString adjacencyMatrixText = "Матрица смежности:\n";
    QString eulerCycleText;

    QString eulerCycleText;
    if (eulerTrue && isGraphConnected()) {
        eulerCycleText = getEulerCycle();
    } else {
        eulerCycleText = "Эйлеровый цикл не существует.";
    }

    QVector<QVector<int>> distances(numVertices, QVector<int>(numVertices, INT_MAX));

    // Заполнение матрицы расстояний
    for (const auto& edge : edges) {
        int sourceIndex = getVertexIndex(edge->getSource()->getName());
        int destinationIndex = getVertexIndex(edge->getDestination()->getName());
        int weight = edge->getWeight();
        distances[sourceIndex][destinationIndex] = weight;
        distances[destinationIndex][sourceIndex] = weight;
    }

    // Алгоритм Флойда-Уоршелла для поиска кратчайших путей
    for (int intermediate = 0; intermediate < numVertices; intermediate++) {
        for (int source = 0; source < numVertices; source++) {
            for (int destination = 0; destination < numVertices; destination++) {
                if (distances[source][intermediate] != INT_MAX &&
                    distances[intermediate][destination] != INT_MAX) {
                    distances[source][destination] = qMin(distances[source][destination],
                                                            distances[source][intermediate] + distances[intermediate][destination]);
                }
            }
        }
    }

    // Формирование текста кратчайших путей
    QString shortestPathsText = "Кратчайшие пути:\n";
    int diameter = 0;
    int radius = INT_MAX;

    for (int source = 0; source < numVertices; source++) {
        for (int destination = 0; destination < numVertices; destination++) {
            if (source != destination && distances[source][destination] != INT_MAX) {
                shortestPathsText += QString("(%1,%2): %3\n").arg(source).arg(destination).arg(distances[source][destination]);
                diameter = qMax(diameter, distances[source][destination]);
                radius = qMin(radius, distances[source][destination]);
            }
        }
    }

    QString graphInfoText = QString("Радиус графа: %1\nДиаметр графа: %2\n").arg(radius).arg(diameter);
    QString fullText;



    if (isGraphConnected()) {
        fullText = graphInfoText + shortestPathsText;
    } else {
        fullText = shortestPathsText;
    }

    QString completeGraph;
    if (complGraph() && isGraphConnected()) {
        completeGraph = "Граф является полным";
    } else {
        completeGraph = "Граф не является полным";
    }

    QString connected;
    if (isGraphConnected()) {
        connected = "Граф является связным";
    } else {
        connected = "Граф не является связным";
    }

    QString tree;
    if (isGraphConnected() && treetrue) {
        tree = "Граф является деревом";
    } else {
        tree = "Граф не является деревом";
    }

    QDialog dialog;
    QVBoxLayout layout(&dialog);

    QLabel infoLabel(infoText);
    QLabel degreesLabel(degreesText);
    QLabel incidenceMatrixLabel(incidenceMatrixText);
    QLabel adjacencyMatrixLabel(adjacencyMatrixText);
    QLabel GraphConnectedLabel(connected);
    QLabel TreeLabel(tree);
    QLabel CompleteGraphLabel(completeGraph);
    QLabel eulerCycleLabel("Эйлеровый цикл:\n" + eulerCycleText);
    QLabel shortestPathsLabel(fullText);

    layout.addWidget(&infoLabel);
    layout.addWidget(&degreesLabel);
    layout.addWidget(&incidenceMatrixLabel);
    layout.addWidget(&adjacencyMatrixLabel);
    layout.addWidget(&GraphConnectedLabel);
    layout.addWidget(&TreeLabel);
    layout.addWidget(&CompleteGraphLabel);
    layout.addWidget(&eulerCycleLabel);
    layout.addWidget(&shortestPathsLabel);

    dialog.exec();

void MainWindow::on_addInformationButton_clicked() {
    showGraphInfo();
}

void MainWindow::on_addClearsceneButton_clicked() {
    clearScene();
}

void MainWindow::clearScene() {
    scene->clear();
    vertices.clear();
    edges.clear();
}

void MainWindow::exportToTextFile(const QString &fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Не удается открыть файл для записи: " << file.errorString();
        return;
    }

    QTextStream out(&file);

    out << "Graph\n";

    for (int i = 0; i < vertices.length(); ++i) {
        Vertex *vertex = vertices[i];
        out << "Vertex;" << vertex->getName() << ";" << vertex->getColor().name() << ";"
            << vertex->scenePos().x() << ";" << vertex->scenePos().y() << "\n";
    }

    for (int i = 0; i < edges.length(); ++i) {
        Edge *edge = edges[i];
        out << "Edge;" << vertices.indexOf(edge->getSource()) << ";" << vertices.indexOf(edge->getDestination()) << ";"
            << edge->getWeight() << ";" << edge->getColor().name() << "\n";
    }

    file.close();
}

void MainWindow::importFromTextFile(const QString &fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Не удается открыть файл для чтения: " << file.errorString();
        return;
    }

    clearScene();

    QTextStream in(&file);
    QString line = in.readLine().trimmed();

    if (line != "Graph") {
        qDebug() << "Файл не является файлом графа";
        file.close();
        return;
    }

    while (!in.atEnd()) {
        line = in.readLine().trimmed();
        QStringList parts = line.split(";");

        if (parts[0] == "Vertex") {
            QString name = parts[1];
            QColor color(parts[2]);
            double x = parts[3].toDouble();
            double y = parts[4].toDouble();

            Vertex *vertex = new Vertex(name, color);
            vertex->setPos(x, y);
            vertices.append(vertex);
            scene->addItem(vertex);
        } else if (parts[0] == "Edge") {
            int sourceVertexIndex = parts[1].toInt();
            int destVertexIndex = parts[2].toInt();
            double weight = parts[3].toDouble();
            QColor color(parts[4]);

            if (sourceVertexIndex >= 0 && sourceVertexIndex < vertices.length() &&
                destVertexIndex >= 0 && destVertexIndex < vertices.length()) {
                Vertex *sourceVertex = vertices[sourceVertexIndex];
                Vertex *destVertex = vertices[destVertexIndex];
                Qt::Edge *edge = new Qt::Edge(sourceVertex, destVertex, weight, color);
                edges.append(edge);
                scene->addItem(edge);
            }
        }
    }

    file.close();

    scene->update();
}

void MainWindow::on_export_2_clicked() {
    QString fileName = QFileDialog::getSaveFileName(this, "Экспорт в файл");
    if (!fileName.isEmpty()) {
        exportToTextFile(fileName);
    }
}

void MainWindow::on_import_2_clicked() {
    QString fileName = QFileDialog::getOpenFileName(this, "Импорт из файла");
    if (!fileName.isEmpty()) {
        importFromTextFile(fileName);
    }
}

