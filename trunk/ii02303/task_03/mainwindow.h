#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QtGui>
#include <QList>
#include <QStringListModel>
#include <QInputDialog>
#include "graph.h"

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT
  
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
private slots:

    void on_pushButtonEding_clicked();
    void on_pushButtonInformation_clicked();
    void on_listView_clicked(const QModelIndex &index);

  void on_actionAlgo_1_triggered();
  void on_actionAlgo_2_triggered();
  void on_pushButtonClearMarking_clicked();
  void checkListViewChanged();

  void on_pushButtonRandomGraph_clicked();

private:
  void displayGraphInformation();
  void displayVertexInformation(int vertexIndex);

  QMap<int, QColor> vertexColors; // Хранение цвета для каждой вершины
  QMap<int, QString> vertexNames; // Хранение названия для каждой вершины

  int getRadius() {return 15;}
    QColor getBackgroundColor() { return QColor(173, 216, 230); }
  QColor getVertexColor() {return QColor(0xff66ff);}
  QColor getMarkedVertexColor() {return Qt::green;}
  QColor getEdgeColor() {return Qt::black;}
  QColor getMarkedEdgeColor() {return Qt::yellow;}
  int getPenWidth() {return 3;}

  void paintEvent(QPaintEvent*);
  void mousePressEvent(QMouseEvent* event);
  void mouseMoveEvent(QMouseEvent* event);
  void mouseReleaseEvent(QMouseEvent* event);

  Graph G;

  bool addingAnEdge;
  int startVertex;
  QPoint mousePosition;
  bool movingAVertex;
  int curVertex;

  QVector<bool> marked;
  QStringListModel model;

  QList<QList<int> > listOfPaths;
  QTimer timerListChanged;
  int currentListViewIdx;

  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
