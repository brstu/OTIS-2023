#ifndef ALG_H
#define ALG_H
#include "mainwindow.h"
#include <QFile>
bool MainWindow::isGraphConnected()
{
    // Открываем файл для чтения
    QFile file("graph.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    QTextStream in(&file);

    // Считываем количество вершин и количество ребер
    int numVertices = in.readLine().toInt();
    int numEdges = in.readLine().toInt();

    // Создаем список смежности для хранения ребер графа
    QVector<QVector<int>> adjacencyList(numVertices);

    // Считываем ребра и заполняем список смежности
    for (int i = 0; i < numEdges; ++i) {
        QString line = in.readLine();
        QStringList columns = line.split("\t");
        if (columns.length() >= 2) {
            int sourceIndex = columns[0].toInt();
            int destinationIndex = columns[1].toInt();
            if (sourceIndex >= 0 && sourceIndex < numVertices && destinationIndex >= 0 && destinationIndex < numVertices) {
                adjacencyList[sourceIndex].append(destinationIndex);
                adjacencyList[destinationIndex].append(sourceIndex);
            }
        }
    }

    file.close();

    // Используем обход в глубину для проверки связности графа
    QVector<bool> visited(numVertices, false);
    dfs(0, adjacencyList, visited);

    // Проверяем, были ли все вершины посещены в обходе
    for (bool v : visited) {
        if (!v) {
            return false;
        }
    }

    return true;
}

void MainWindow::dfs(int vertex, const QVector<QVector<int>>& adjacencyList, QVector<bool>& visited)
{
    visited[vertex] = true;
    for (int neighbor : adjacencyList[vertex]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adjacencyList, visited);
        }
    }
}

#endif // ALG_H
