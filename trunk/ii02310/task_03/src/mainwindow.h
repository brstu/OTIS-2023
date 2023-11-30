#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <Qstring>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class Vertex;
class Edge;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateEdges();
    void updateVertices();
    void showGraphInfo();
    void showeulerInfo();
    int getNumberOfVertices() {
        return vertices.length();
    }
    int getNumberOfEdges() {
        return edges.length();
    }
    QString getEulerCycle();
    int getVertexIndex(const QString& vertexName) const;
private slots:
    void on_addVertexButton_clicked();
    void on_addEdgeButton_clicked();

    void on_removeEdgeButton_clicked();

    void on_removeVertexButton_clicked();

    void on_changeVertexButton_clicked();

    void on_addInformationButton_clicked();

    void on_addClearsceneButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QList<Vertex*> vertices;
    QList<Edge*> edges;
};
#endif // MAINWINDOW_H
