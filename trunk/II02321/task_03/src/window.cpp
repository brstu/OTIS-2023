#include "window.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QFormLayout>
#include <QLineEdit>
#include <QColorDialog>
#include <QtCore>
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include <QDoubleSpinBox>
#include <QIODevice>
#include <QFileDialog>
#include <QFile>
#include <QDialogButtonBox>
#include <QLabel>
#include <QComboBox>
#include "edge.h"
#include "vertex.h"
#include "algoritm.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), u(new Ui::MainWindow)
{
    u->setupUi(this);
    s = new QGraphicsScene(this);
    u->graphicsView->setScene(s);
}
MainWindow::~MainWindow()
{
    QFile::remove("graph.txt");
    delete u;
}
void MainWindow::uE()
{
    foreach (Edge* edge, e) {
        edge->adjust();
        edge->update();
    }
}

void MainWindow::on_rVB()
{
    if (v.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(v.length() - 1) + ")");
    form.addRow("Индекс вершины", &vertexIndexLineEdit);
    QPushButton removeButton("Удалить вершину");
    form.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        if (vertexIndex >= 0 && vertexIndex < v.length()) {
            Vertex* vertex = v.at(vertexIndex);

            // Удаление связанных ребер
            for (int i = e.length() - 1; i >= 0; --i) {
                Edge* edge = e.at(i);
                if (edge->getSourceVertex() == vertex || edge->getDestinationVertex() == vertex) {
                    s->removeItem(edge);
                    e.removeAt(i);
                    delete edge;
                }
            }


            s->removeItem(vertex);
            v.removeOne(vertex);
            delete vertex;

            // Обновление файла без удаленной вершины и связанных ребер
            QFile file("graph.txt");
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                for (const Edge* edge : e) {
                    int sourceIndex = v.indexOf(edge->getSourceVertex());
                    int destinationIndex = v.indexOf(edge->getDestinationVertex());
                    out << sourceIndex << "\t" << destinationIndex << "\t" << edge->getWeightEdge() << "\n";
                }
                file.close();
            }
        }
        dialog.close();
    });

    dialog.exec();
}

void MainWindow::uV()
{
    for (Vertex* vertex : v) {
        vertex->update();
    }
}


void MainWindow::on_cVB()
{
    if (v.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(v.length() - 1) + ")");
    QLineEdit vertexNameLineEdit;
    vertexNameLineEdit.setPlaceholderText("Новое название вершины");
    form.addRow("Индекс вершины", &vertexIndexLineEdit);
    form.addRow("Новое название", &vertexNameLineEdit);
    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    form.addRow(&buttonBox);

    connect(&buttonBox, &QDialogButtonBox::accepted, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        QString newName = vertexNameLineEdit.text();
        if (vertexIndex >= 0 && vertexIndex < v.length()) {
            Vertex* vertex = v.at(vertexIndex);
            vertex->setNameVertex(newName);
            QColor color = QColorDialog::getColor();
            vertex->setColorVertex(color);
            vertex->update();
            uV();
        }
        dialog.close();
    });

    connect(&buttonBox, &QDialogButtonBox::rejected, [&]() {
        dialog.close();
    });

    dialog.exec();

}
bool MainWindow::iGC()
{

    if (v.isEmpty()) {
        return false;
    }


    QVector<bool> visited(v.length(), false); // Массив для отслеживания посещенных вершин
    QStack<Vertex*> stack;
    stack.push(v[0]);

    while (!stack.isEmpty()) {
        Vertex* current = stack.pop();
        int currentIdx = v.indexOf(current);
        visited[currentIdx] = true;

        // Перебираем ребра, инцидентные текущей вершине
        foreach (Edge* edge, e) {
            if (edge->getSourceVertex() == current || edge->getDestinationVertex() == current) {
                Vertex* adjacent = (edge->getSourceVertex() == current) ? edge->getDestinationVertex() : edge->getSourceVertex();
                int adjacentIdx = v.indexOf(adjacent);
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
QString MainWindow::gEC() {

    QString eulerCycle;
    Gr g(v.length());
    for (Edge* edge : e) {
        int src = v.indexOf(edge->getSourceVertex());
        int dest = v.indexOf(edge->getDestinationVertex());
        g.aE(src, dest);
    }
    vector<int> eulerPath;
    g.fc(0, eulerPath);
    for (int vertex : eulerPath) {
        eulerCycle += QString::number(vertex) + " ";
    }
    return eulerCycle;
}
int MainWindow::gV(const QString& vertexName) const {
    for (int i = 0; i < v.length(); i++) {
        if (v[i]->getNameVertex() == vertexName) {
            return i;
        }
    }
    return -1; // Вершина не найдена
}
bool MainWindow::cG(){
    int numVertices = v.length();
    int numEdges = e.length();
    if(numVertices*(numVertices-1)/2 != numEdges){return false;}else{return true;}
}

void MainWindow::sGI()
{
    // Количество вершин и ребер
    int numVertices = v.length();
    int numEdges = e.length();

    // Строка с информацией о количестве вершин и ребер
    QString infoText = QString("Количество вершин: %1\nКоличество ребер: %2\n\n").arg(numVertices).arg(numEdges);

    // Строка со степенями вершин
QString degreesText = "Степени вершин:\n";
    bool eulertrue = true;
    bool treetrue = true;
    foreach (Vertex* vertex, v) {
        int degree = 0;
        foreach (Edge* edge, e) {
            if (edge->getSourceVertex() == vertex || edge->getDestinationVertex() == vertex) {
                degree++;
            }
        }
        degreesText += QString("Вершина %1: %2\n").arg(vertex->getNameVertex()).arg(degree);
    if(degree % 2 != 0){ eulertrue = false;}
    if(degree > 1){ treetrue = false;}
    }

    // Матрица инцидентности
    QString incidenceMatrixText = "Матрица инцидентности:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numEdges; j++) {
            if (e[j]->getSourceVertex() == v[i] || e[j]->getDestinationVertex() == v[i]) {
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
            foreach (Edge* edge, e) {
                if ((edge->getSourceVertex() == v[i] && edge->getDestinationVertex() == v[j]) ||
                    (edge->getSourceVertex() == v[j] && edge->getDestinationVertex() == v[i])) {
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
    if (eulertrue && iGC()) {
        eulerCycleText = gEC();
    } else {
        eulerCycleText = "Эйлеровый цикл не существует.";
    }

    QVector<QVector<int>> distances(numVertices, QVector<int>(numVertices, INT_MAX));

    for (int i = 0; i < numEdges; i++) {
        int sourceIndex = gV(e[i]->getSourceVertex()->getNameVertex());
        int destinationIndex = gV(e[i]->getDestinationVertex()->getNameVertex());
        int weight = e[i]->getWeightEdge();

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
            if (i != j && distances[i][j] != INT_MAX) {
                shortestPathsText += QString("(%1,%2): %3\n").arg(i).arg(j).arg(distances[i][j]);
            }
        }
    }
    QString completeGraph;
    if(cG()){completeGraph = "Граф является полным";}
    else {completeGraph = "Граф не является полным";};
    QString connected;
    if(iGC()){
        connected = "Граф является связным";
    } else {
            connected = "Граф не является связным";
    };
    // Формирование окна с информацией о графе
    QString tree;
    if(iGC() && treetrue){ tree = "Граф является деревом";} else {tree = "Граф не является деревом";};
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
    QLabel shortestPathsLabel(shortestPathsText);
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
void MainWindow::on_aIB()
{
    sGI();
}

void MainWindow::on_aCB()
{
    s->clear();
    v.clear();
    e.clear();
}
void MainWindow::eTTF(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для записи: " << file.errorString();
            return;
    }


    QTextStream out(&file);

    for (int i = 0; i < v.length(); ++i)
    {
            Vertex* vertex = v[i];
            out << "Vertex;" << vertex->getNameVertex() << ";" << vertex->getColorVertex().name() << ";"
                << vertex->scenePos().x() << ";" << vertex->scenePos().y() << "\n";
    }


    for (int i = 0; i < e.length(); ++i)
    {
            Edge* edge = e[i];
            out << "Edge;" << v.indexOf(edge->getSourceVertex()) << ";" << v.indexOf(edge->getDestinationVertex()) << ";"
                << edge->getWeightEdge() << ";" << edge->getColorEdge().name() << "\n";
    }

    file.close();
}
// Функция импорта данных из текстового файла в сцену
void MainWindow::iFTF(const QString& fileName)
{

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для чтения: " << file.errorString();
            return;
    }


    s->clear();
    v.clear();
    e.clear();


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
            v.append(vertex);
            s->addItem(vertex);
            }
            else if (parts[0] == "Edge")
            {
            int sourceVertexIndex = parts[1].toInt();
            int destVertexIndex = parts[2].toInt();
            double weight = parts[3].toDouble();
            QColor color(parts[4]);

            if (sourceVertexIndex >= 0 && sourceVertexIndex < v.length() &&
                destVertexIndex >= 0 && destVertexIndex < v.length())
            {
                Vertex* sourceVertex = v[sourceVertexIndex];
                Vertex* destVertex = v[destVertexIndex];
                Edge* edge = new Edge(sourceVertex, destVertex, weight, color);
                e.append(edge);
                s->addItem(edge);
            }
            }
    }
    file.close();
    s->update();
}
void MainWindow::on_export_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Экспорт в файл");
    if (!fileName.isEmpty())
    {
            eTTF(fileName);
    }
}

void MainWindow::on_import_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Импорт из файла");
    if (!fileName.isEmpty())
    {
            iFTF(fileName);
    }
}


void MainWindow::addVertex(const QString& name, const QColor& color, double x, double y)
{
    Vertex* vertex = new Vertex(name, color);
    vertex->setPos(x, y);
    s->addItem(vertex);
    v.append(vertex);
}

void MainWindow::addEdge(double weight, int sourceIndex, int destinationIndex)
{
    if (sourceIndex >= 0 && sourceIndex < v.length() && destinationIndex >= 0 && destinationIndex < v.length())
    {
        Vertex* sourceVertex = v.at(sourceIndex);
        Vertex* destinationVertex = v.at(destinationIndex);
        Edge* edge = new Edge(sourceVertex, destinationVertex, weight, QColorDialog::getColor());
        s->addItem(edge);
        e.append(edge);

        QFile file("graph.txt");
        if (file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream out(&file);

            // Записываем информацию о ребре в файл
            out << sourceIndex << "                 " << destinationIndex << "                 " << weight << "\n";

            file.close();
        }
    }
}

void MainWindow::removeEdge(Vertex* sourceVertex, Vertex* destinationVertex)
{
    for (int i = 0; i < e.length(); i++) {
        Edge* edge = e.at(i);
        if (edge->getSourceVertex() == sourceVertex && edge->getDestinationVertex() == destinationVertex) {
            s->removeItem(edge);
            e.removeAt(i);
            delete edge;
            break;
        }
    }

    // Обновляем файл без удаленного ребра
    QFile file("graph.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const Edge* edge : e) {
            int sourceIndex = v.indexOf(edge->getSourceVertex());
            int destinationIndex = v.indexOf(edge->getDestinationVertex());
            out << sourceIndex << "\t" << destinationIndex << "\t" << edge->getWeightEdge() << "\n";
        }
        file.close();
    }
}

void MainWindow::on_addVB()
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
        addVertex(name, color,50,50);
        dialog.close();
        uE();
    });

    dialog.exec();
}

void MainWindow::on_addEB()
{
    if (v.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout form(&dialog);

    QLineEdit weightLineEdit;
    QLineEdit sourceVertexLineEdit;
    QLineEdit destinationVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(v.length() - 1) + ")");
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(v.length() - 1) + ")");
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
        addEdge(weight, sourceIndex, destinationIndex);
        dialog.close();
    });

    dialog.exec();
}

void MainWindow::on_rEB()
{
    if (e.isEmpty()) {
        return;
    }


    QDialog dialog;
    QFormLayout form(&dialog);
    QLineEdit sourceVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(v.length() - 1) + ")");
    QLineEdit destinationVertexLineEdit;
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(v.length() - 1) + ")");
    form.addRow("Начальная вершина", &sourceVertexLineEdit);
    form.addRow("Конечная вершина", &destinationVertexLineEdit);
    QPushButton removeButton("Удалить ребро");
    form.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int sourceIndex = sourceVertexLineEdit.text().toInt();
        int destinationIndex = destinationVertexLineEdit.text().toInt();
        if (sourceIndex >= 0 && sourceIndex < v.length() && destinationIndex >= 0 && destinationIndex < v.length()) {
            Vertex* sourceVertex = v.at(sourceIndex);
            Vertex* destinationVertex = v.at(destinationIndex);
            removeEdge(sourceVertex, destinationVertex);
        }
        dialog.close();
    });

    dialog.exec();
}




