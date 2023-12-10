#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QList>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QInputDialog>

#include "graph.h"
#include "mainwindow.h"

#define FIND_NEAREST_FOR_PACEMENT

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    addingAnEdge = movingAVertex = false;

    QPalette palette;
    palette.setColor(backgroundRole(), getBackgroundColor());
    setPalette(palette);

    timerListChanged.setInterval(40);
    connect(&timerListChanged, SIGNAL(timeout()), this, SLOT(checkListViewChanged()));
    timerListChanged.start();
    currentListViewIdx = -1;

    ui->setupUi(this);
}

void MainWindow::on_pushButtonEding_clicked() {
  if (ui->radioEditing->isChecked()) {
      bool ok;
      int vertexIndex = QInputDialog::getInt(this, "Edit Vertex", "Enter index of the vertex to edit", 0, 0, G.getCountOfVerteces() - 1, 1, &ok);
      if (ok) {
          // Открываем диалог для редактирования вершины
          QColor color = QColorDialog::getColor(vertexColors.value(vertexIndex, Qt::white), this, "Select Color", QColorDialog::DontUseNativeDialog);
          QString name = QInputDialog::getText(this, "Edit Vertex", "Enter name for the vertex", QLineEdit::Normal, vertexNames.value(vertexIndex));

          // Сохраняем цвет и название вершины
          vertexColors[vertexIndex] = color;
          vertexNames[vertexIndex] = name;
          update();
      }
  }
}
void MainWindow::displayGraphInformation() {
  // Вывести информацию о графе, например, количество вершин и рёбер
  int numVertices = G.getCountOfVerteces();
  int numEdges = G.getCountOfEdges();

  QMessageBox::information(this, "Graph Information",
                           QString("Number of vertices: %1\nNumber of edges: %2").arg(numVertices).arg(numEdges));
}

void MainWindow::displayVertexInformation(int vertexIndex) {
  QColor vertexColor = G.getVertexColor(vertexIndex);
  QString vertexName = G.getVertexName(vertexIndex);

  // Показываем диалог выбора цвета
  QColor chosenColor = QColorDialog::getColor(vertexColor, this, "Choose Vertex Color", QColorDialog::DontUseNativeDialog);

  if (chosenColor.isValid()) {
      // Если цвет выбран, обновляем цвет вершины
      G.setVertexColor(vertexIndex, chosenColor);
  }

  // Показываем диалог ввода имени
  QString newName = QInputDialog::getText(this, "Enter Vertex Name", "Vertex Name:", QLineEdit::Normal, vertexName);

  if (!newName.isEmpty()) {
      // Если имя введено, обновляем имя вершины
      G.setVertexName(vertexIndex, newName);
  }

  update();  // Обновляем отображение
}

// В файл .cpp
void MainWindow::on_pushButtonInformation_clicked() {
  displayGraphInformation();
}

void MainWindow::on_listView_clicked(const QModelIndex &index) {
  if (ui->radioEditing->isChecked()) {
      int vertexIndex = index.row();
      displayVertexInformation(vertexIndex);
  }
}

//................

MainWindow::~MainWindow() {
  delete ui;
}


void MainWindow::paintEvent(QPaintEvent*) {
  QPainter painter(this);

  QPen penStandard;
  penStandard.setColor(getEdgeColor());
  penStandard.setWidth(getPenWidth());

  QPen penEdgeMarking;
  penEdgeMarking.setColor(getMarkedEdgeColor());
  penEdgeMarking.setWidth(getPenWidth());

  if (addingAnEdge) {
    QLine edge;
    edge.setP1(G.getCoordinatesOfVertex(startVertex));
    edge.setP2(mousePosition);
    painter.setPen(penStandard);
    painter.drawLine(edge);
  }

  QSet<QPair<int, int> > edgesToMark;
  int idx = ui->listView->currentIndex().row();
  if (ui->radioAlgorithm->isChecked() && idx != -1) {
    int last = -1;
    const QList<int>& currentList = listOfPaths.at(idx);
    for(QList<int>::ConstIterator it = currentList.begin(); it != currentList.end(); ++it) {
      if (last != -1) edgesToMark.insert(qMakePair(last, *it));
      last = *it;
    }
  }

  QVector<QPair<int, int> > edges = G.getAllEdges();
  for(int i = 0; i < edges.size(); ++i) {
    QLine edge;
    edge.setP1(G.getCoordinatesOfVertex(edges[i].first));
    edge.setP2(G.getCoordinatesOfVertex(edges[i].second));
    if (edgesToMark.contains(edges[i]) || edgesToMark.contains(qMakePair(edges[i].second, edges[i].first))) {
      painter.setPen(penEdgeMarking);
    } else {      
      painter.setPen(penStandard);
    }
    painter.drawLine(edge);

    QPoint sum = edge.p1() + edge.p2();
    painter.setPen(Qt::cyan);
    painter.drawText(sum.x()/2 + 5, sum.y()/2 + 5, QString::number(G.getEdgeWeight(edges[i].first, edges[i].second)));
  }

  int n = G.getCountOfVerteces();
  for(int i = 0; i < n; ++i) {
    if (!marked.empty() && marked[i]) {
      painter.setBrush(getMarkedVertexColor());
    } else {
      painter.setBrush(getVertexColor());
    }

    painter.setPen(penStandard);
    painter.drawEllipse(G.getCoordinatesOfVertex(i), getRadius(), getRadius());

    painter.setPen(Qt::black);
    int pow = 0, ten = 1;
    while(i >= ten) ++pow, ten *= 10;
    painter.drawText(G.getCoordinatesOfVertex(i) - QPoint(2*(1 + pow), -4), QString::number(i));
  }
}


void MainWindow::mousePressEvent(QMouseEvent* event) {
  if (event->modifiers() & Qt::ControlModifier) ui->radioAdding->setChecked(true);
  if (event->modifiers() & Qt::ShiftModifier) ui->radioEditing->setChecked(true);

  mousePosition = event->pos();
  if (ui->radioAdding->isChecked()) {
    startVertex = G.findClosest(event->pos(), getRadius()*getRadius());
    if (startVertex != -1) {
      addingAnEdge = true;
    } else if (G.findClosest(event->pos(), 4*getRadius()*getRadius()) == -1) {
      G.addVertex(event->pos());
    }
  }
  if (ui->radioEditing->isChecked()) {
    curVertex = G.findClosest(event->pos(), getRadius()*getRadius());
    if (curVertex != -1) {
      movingAVertex = true;
    }
  }
  update();
}


void MainWindow::mouseMoveEvent(QMouseEvent* event) {
  mousePosition = event->pos();
  if (movingAVertex) {
#ifdef    FIND_NEAREST_FOR_PACEMENT
    QPoint p = G.findNearestFreePosition(mousePosition, curVertex, 4*getRadius()*getRadius());
    G.setCoordinatesForVertex(curVertex, p);
#else  // FIND_NEAREST_FOR_PACEMENT
    int v = G.findClosestExcluded(mousePosition, curVertex, 4*getRadius()*getRadius());
    if (v == -1)
      G.setCoordinatesForVertex(curVertex, mousePosition);
#endif // FIND_NEAREST_FOR_PACEMENT
  }
  if (addingAnEdge || movingAVertex) update();
}

void MainWindow::mouseReleaseEvent(QMouseEvent* event) {
  mousePosition = event->pos();
  if (ui->radioAdding->isChecked()) {
    if (addingAnEdge) {
      addingAnEdge = false;
      int finishVertex = G.findClosest(event->pos(), getRadius()*getRadius());
      if (finishVertex != -1) {
        if (startVertex != finishVertex && !G.getEdgeWeight(startVertex, finishVertex)) {
          bool ok = false;
          int w;
          if (ui->checkDefaultWeight->isChecked()) {
            w = ui->spinDefaultWeight->value();
            ok = true;
          } else {
            w = QInputDialog::getInt(this, "Weight", "Enter a weight", 1, 1, 10000, 1, &ok);
          }
          if (ok) {
            G.addEdge(startVertex, finishVertex, w);
          }
        }
      }
    }
  }
  if (ui->radioEditing->isChecked()) {
    movingAVertex = false;
  }
  update();
}

void MainWindow::on_actionAlgo_1_triggered() {
  addingAnEdge = movingAVertex = false;
  ui->radioAlgorithm->setChecked(true);

  QList<int> list = G.getConnectionPoints();
  marked = QVector<bool>(G.getCountOfVerteces(), false);
  for(QList<int>::Iterator it = list.begin(); it != list.end(); ++it) {
    marked[*it] = true;
  }

  update();
}

void MainWindow::on_pushButtonClearMarking_clicked() {
  marked.clear();
  QStringList sl;
  model.setStringList(sl);

  update();
}

void MainWindow::on_actionAlgo_2_triggered() {
  addingAnEdge = movingAVertex = false;
  ui->radioAlgorithm->setChecked(true);

  bool ok;
  int a = QInputDialog::getInt(this, "Vertex", "Enter index of vertex A", 0, 0, G.getCountOfVerteces() - 1, 1, &ok);
  if (!ok) return;
  int b = QInputDialog::getInt(this, "Vertex", "Enter index of vertex B", 0, 0, G.getCountOfVerteces() - 1, 1, &ok);
  if (!ok || a == b) return;
  listOfPaths = G.getAllPathsNotLonger(a, b, 300);

  QStringList strings;
  for(QList<QList<int> >::Iterator it = listOfPaths.begin(); it != listOfPaths.end(); ++it) {
    bool first = true;
    QString s;
    for(QList<int>::Iterator it2 = it->begin(); it2 != it->end(); ++it2) {
      if (first) {
        first = false;
      } else {
        s += "->";
      }
      s += QString::number(*it2);
    }
    strings.push_back(s);
  }

  model.setStringList(strings);
  ui->listView->setModel(&model);
}


void MainWindow::checkListViewChanged() {  
  if (currentListViewIdx != ui->listView->currentIndex().row()) {    
    update();
    currentListViewIdx = ui->listView->currentIndex().row();
  }
}

void MainWindow::on_pushButtonRandomGraph_clicked() {
  int n = G.getCountOfVerteces();
  int add = (int)pow(double(n), 1.1);
  while(add--) {
    int a = rand() % n;
    int b = rand() % n;
    if (a != b && G.getEdgeWeight(a, b) == 0) {
      G.addEdge(a, b, ui->spinDefaultWeight->value());
    }
  }
  update();
}
