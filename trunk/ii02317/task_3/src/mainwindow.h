#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "graphscene.h"
#include "vertex.h"
#include "edge.h"
#include "euler.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addVertexButton_clicked();
    void on_addEdgeButton_clicked();
    void on_removeEdgeButton_clicked();
    void on_removeVertexButton_clicked();
    void on_changeVertexButton_clicked();
    void on_addInformationButton_clicked();
    void on_addClearsceneButton_clicked();
    void on_exportButton_clicked();
    void on_importButton_clicked();

private:
    Ui::MainWindow *ui;
    GraphScene *scene;
    QVector<MyVertex*> vertices;
    QVector<MyEdge*> edges;

    void updateEdges();
    void updateFileGraph();
    void updateVertices();
    bool isGraphConnected();
    QString getEulerCycle();
    int getVertexIndex(const QString& vertexName) const;
    bool complGraph();
    void showGraphInfo();
    void exportToTextFile(const QString& fileName);
    void importFromTextFile(const QString& fileName);
};

#endif // MAINWINDOW_H
