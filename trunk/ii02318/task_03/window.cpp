#include "window.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene> //a
#include <QGraphicsTextItem> //a
#include <QInputDialog> //a
#include <QPushButton> //a
#include <QFormLayout> //a
#include <QLineEdit> //a
#include <QColorDialog> //a
#include <QtCore> //a
#include <QDebug> //a
#include <QGraphicsSceneMouseEvent> //a
#include <QPainter> //a
#include <QDoubleSpinBox> //a
#include <QIODevice> //a
#include <QFileDialog> //a
#include <QFile> //a
#include <QDialogButtonBox> //a
#include <QLabel> //a
#include <QComboBox> //a
#include "Edgge.h" //a
#include "Vertexx.h" //a
#include "algoritm.h" //a

Window::Window(QWidget *parents)
    : QMainWindow(parents), uiui(new Ui::MainWindow)
{
    uiui->setupUi(this);
    scen = new QGraphicsScene(this);
    uiui->graphicsView->setScene(scen);
}

Window::~Window()
{
    delete uiui;
    QFile::remove("graph.txt");
}

void Window::addVertexx(const QString& name, const QColor& color, double x, double y)
{
    Vertexx* vertexx = new Vertexx(name, color);
    vertexx->setPos(x, y);
    scen->addItem(vertexx);
    vertexxs.append(vertexx);
}

void Window::addEdgge(int sourceInd, int destinationInd, double weigh, const QColor& col)
{
    if (sourceInd >= 0 && sourceInd < vertexxs.length() && destinationInd >= 0 && destinationInd < vertexxs.length())
    {
        Vertexx* sourceVertexx = vertexxs.at(sourceInd);
        Vertexx* destinationVertexx = vertexxs.at(destinationInd);
        Edgge* edgge = new Edgge(sourceVertexx, destinationVertexx, weigh, col);
        scen->addItem(edgge);
        edgges.append(edgge);

        QFile files("graphh.txt");
        if (files.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream outf(&files);
            outf << sourceInd << "\t" << destinationInd << "\t" << weigh << "\n";
            files.close();
        }
    }
}

void Window::updateEdgge()
{
    foreach (Edgge* edgge, edgges) {
        edgge->adjust();
        edgge->update();
    }
}

void Window::on_addVertexButton_clicked()
{
    QDialog dialogs;
    QFormLayout formss(&dialogs);
    QLineEdit nameLineEdit;
    formss.addRow("Введи имя вершины", &nameLineEdit);
    QPushButton addButtons("Добавить вершину");
    formss.addRow(&addButtons);

    connect(&addButtons, &QPushButton::clicked, [&]() {
        QString names = nameLineEdit.text();
        QColor col = QColorDialog::getColor();
        addVertexx(names, col, 0, 0);
        dialogs.close();
        updateEdgge();
    });

    dialogs.exec();
}

void Window::on_addEdgeButton_clicked()
{
    if (vertexxs.isEmpty()) {
        return;
    }

    QDialog dialogs;
    QFormLayout formss(&dialogs);

    QLineEdit weightLEdit;
    QLineEdit sourceVertexxLineEdit;
    QLineEdit destinationVertexxLineEdit;
    sourceVertexxLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vertexxs.length() - 1) + ")");
    destinationVertexxLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vertexxs.length() - 1) + ")");
    formss.addRow("Укажите вес ребра", &weightLEdit);
    formss.addRow("Начальная вершина", &sourceVertexxLineEdit);
    formss.addRow("Конечная вершина", &destinationVertexxLineEdit);
    QPushButton addButtons("Добавить ребро");
    formss.addRow(&addButtons);

    connect(&addButtons, &QPushButton::clicked, [&]() {
        double weigh = weightLEdit.text().toInt();
        int sourceInd = sourceVertexxLineEdit.text().toInt();
        int destinationInd = destinationVertexxLineEdit.text().toInt();
        addEdgge(sourceInd, destinationInd, weigh, QColorDialog::getColor());
        dialogs.close();
    });

    dialogs.exec();
}
void Window::updateFiles(){
    QFile files("graphh.txt");
    if (files.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&files);
        for (const Edgge* edge : edgges) {
            int sourceInd = vertexxs.indexOf(edge->getSourceEdgge());
            int destinationInd = vertexxs.indexOf(edge->getDestinationEdgge());
            out << sourceInd << "\t" << destinationInd << "\t" << edge->getWeightEdgge() << "\n";
        }
        files.close();
    }
}
void Window::on_removeEdgeButton_clicked()
{
    if (edgges.isEmpty()) {
        return;
    }

    QDialog dialogs;
    QFormLayout formss(&dialogs);
    QLineEdit sourceVertexLineEdit;
    sourceVertexLineEdit.setPlaceholderText("Начальная вершина (0 - " + QString::number(vertexxs.length() - 1) + ")");
    QLineEdit destinationVertexLineEdit;
    destinationVertexLineEdit.setPlaceholderText("Конечная вершина (0 - " + QString::number(vertexxs.length() - 1) + ")");
    formss.addRow("Начальная вершина", &sourceVertexLineEdit);
    formss.addRow("Конечная вершина", &destinationVertexLineEdit);
    QPushButton removeButton("Удалить ребро");
    formss.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int sourceIndex = sourceVertexLineEdit.text().toInt();
        int destinationIndex = destinationVertexLineEdit.text().toInt();
        if (sourceIndex >= 0 && sourceIndex < vertexxs.length() && destinationIndex >= 0 && destinationIndex < vertexxs.length()) {
            Vertexx* sourceVertex = vertexxs.at(sourceIndex);
            Vertexx* destinationVertex = vertexxs.at(destinationIndex);


            for (int i = 0; i < edgges.length(); i++) {
                Edgge* edge = edgges.at(i);
                if (edge->getSourceEdgge() == sourceVertex && edge->getDestinationEdgge() == destinationVertex) {
                    scen->removeItem(edge);
                    edgges.removeAt(i);
                    delete edge;
                    break;
                }
            }

            // Обновляем файл без удаленного ребра
            updateFiles();
        }
        dialogs.close();
    });

    dialogs.exec();
}


void Window::on_removeVertexButton_clicked()
{
    if (vertexxs.isEmpty()) {
        return;
    }

    QDialog dialog;
    QFormLayout formss(&dialog);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vertexxs.length() - 1) + ")");
    formss.addRow("Индекс вершины", &vertexIndexLineEdit);
    QPushButton removeButton("Удалить вершину");
    formss.addRow(&removeButton);

    connect(&removeButton, &QPushButton::clicked, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        if (vertexIndex >= 0 && vertexIndex < vertexxs.length()) {
            Vertexx* vertex = vertexxs.at(vertexIndex);

            // Удаление связанных ребер
            for (int i = edgges.length() - 1; i >= 0; --i) {
                Edgge* edge = edgges.at(i);
                if (edge->getSourceEdgge() == vertex || edge->getDestinationEdgge() == vertex) {
                    scen->removeItem(edge);
                    edgges.removeAt(i);
                    delete edge;
                }
            }


            scen->removeItem(vertex);
            vertexxs.removeOne(vertex);
            delete vertex;

            // Обновление файла без удаленной вершины и связанных ребер
            updateFiles();
        }
        dialog.close();
    });

    dialog.exec();
}

void Window::updateVertexx()
{
    for (Vertexx* vertex : vertexxs) {
        vertex->update();
    }
}


void Window::on_changeVertexButton_clicked()
{
    if (vertexxs.isEmpty()) {
        return;
    }

    QDialog dialogs;
    QFormLayout formss(&dialogs);
    QLineEdit vertexIndexLineEdit;
    vertexIndexLineEdit.setPlaceholderText("Индекс вершины (0 - " + QString::number(vertexxs.length() - 1) + ")");
    QLineEdit vertexNameLineEdit;
    vertexNameLineEdit.setPlaceholderText("Новое название вершины");
    formss.addRow("Индекс вершины", &vertexIndexLineEdit);
    formss.addRow("Новое название", &vertexNameLineEdit);
    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    formss.addRow(&buttonBox);

    connect(&buttonBox, &QDialogButtonBox::accepted, [&]() {
        int vertexIndex = vertexIndexLineEdit.text().toInt();
        QString newName = vertexNameLineEdit.text();
        if (vertexIndex >= 0 && vertexIndex < vertexxs.length()) {
            Vertexx* vertex = vertexxs.at(vertexIndex);
            vertex->setNameVertexx(newName);
            QColor color = QColorDialog::getColor();
            vertex->setColorVertexx(color);
            vertex->update();
            updateVertexx();
        }
        dialogs.close();
    });

    connect(&buttonBox, &QDialogButtonBox::rejected, [&]() {
        dialogs.close();
    });

    dialogs.exec();

}
bool Window::isConect()
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
        foreach (Edgge* edgge, edgges) {
            if (edgge->getSourceEdgge() == current || edgge->getDestinationEdgge() == current) {
                Vertexx* adjacent = (edgge->getSourceEdgge() == current) ? edgge->getDestinationEdgge() : edgge->getSourceEdgge();
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
QString Window::getCycle() {

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
int Window::getVertexxIndex(const QString& vertexName) const {
    for (int i = 0; i < vertexxs.length(); i++) {
        if (vertexxs[i]->getNameVertexx() == vertexName) {
            return i;
        }
    }
    return -1; // Вершина не найдена
}
bool Window::compleGraphh(){
    int numVertices = vertexxs.length();
    int numEdges = edgges.length();
    if(numVertices*(numVertices-1)/2 != numEdges){return false;}else{return true;}
}

void Window::showGInf()
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
        degreesText += QString("Вершина %1: %2\n").arg(vertex->getNameVertexx()).arg(degree);
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
    if (eulertrue && isConect()) {
        eulerCycleText = getCycle();
    } else {
        eulerCycleText = "Эйлеровый цикл не существует.";
    }

    QVector<QVector<int>> distances(numVertices, QVector<int>(numVertices, INT_MAX));

    int diameter = 0; // Инициализация диаметра графа
    int radius = INT_MAX; // Инициализация радиуса графа

    for (int i = 0; i < numEdges; i++) {
        int sourceIndex = getVertexxIndex(edgges[i]->getSourceEdgge()->getNameVertexx());
        int destinationIndex = getVertexxIndex(edgges[i]->getDestinationEdgge()->getNameVertexx());
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
                            if(isConect()){
         fullText = graphInfoText + shortestPathsText;}
                            else{ fullText = shortestPathsText;}
    QString completeGraph;
                            if(compleGraphh()&& isConect()){completeGraph = "Граф является полным";}
    else {completeGraph = "Граф не является полным";};
    QString connected;
    if(isConect()){
        connected = "Граф является связным";
    } else {
            connected = "Граф не является связным";
    };
    // Формирование окна с информацией о графе
    QString tree;
    if(isConect() && treetrue){ tree = "Граф является деревом";} else {tree = "Граф не является деревом";};
    QDialog dialog;
    QVBoxLayout layoutss(&dialog);
    QLabel infoLabel(infoText);
    QLabel degreesLabel(degreesText);
    QLabel incidenceMatrixLabel(incidenceMatrixText);
    QLabel adjacencyMatrixLabel(adjacencyMatrixText);
    QLabel GraphConnectedLabel(connected);
    QLabel Tree(tree);
    QLabel CompleteGraphLabel(completeGraph);
    QLabel eulerCycleLabel("Эйлеровый цикл:\n" + eulerCycleText); // Обновлено
    QLabel shortestPathsLabel(fullText);
    layoutss.addWidget(&infoLabel);
    layoutss.addWidget(&degreesLabel);
    layoutss.addWidget(&incidenceMatrixLabel);
    layoutss.addWidget(&adjacencyMatrixLabel);
    layoutss.addWidget(&GraphConnectedLabel);
    layoutss.addWidget(&Tree);
    layoutss.addWidget(&CompleteGraphLabel);
    layoutss.addWidget(&eulerCycleLabel);
    layoutss.addWidget(&shortestPathsLabel);
    dialog.exec();
}
void Window::on_addInformationButton_clicked()
{
    showGInf();
}

void Window::on_addClearsceneButton_clicked()
{
    scen->clear();
    vertexxs.clear();
    edgges.clear();
}
void Window::exportFiles(const QString& fileName)
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
            out << "Vertex;" << vertex->getNameVertexx() << ";" << vertex->getColorVertexx().name() << ";"
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
void Window::importFiles(const QString& fileName)
{

    QFile files(fileName);
    if (!files.open(QIODevice::ReadOnly | QIODevice::Text))
    {

            qDebug() << "Не удается открыть файл для чтения: " << files.errorString();
            return;
    }


    scen->clear();
    vertexxs.clear();
    edgges.clear();


    QTextStream in(&files);
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
            scen->addItem(vertex);
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
                scen->addItem(edge);
            }
            }
    }

    files.close();


    scen->update();
}



void Window::on_export_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Экспорт в файл");
    if (!fileName.isEmpty())
    {
            exportFiles(fileName);
    }
}



void Window::on_import_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Импорт из файла");
    if (!fileName.isEmpty())
    {
            importFiles(fileName);
    }
}


