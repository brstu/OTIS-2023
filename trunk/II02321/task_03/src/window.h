#ifndef WINDOW_H
#define WINDOW_H

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
    bool cG();
    void iFTF(const QString& fileName);
    void eTTF(const QString& fileName);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void uE();
    void uV();
    void sGI();
    void sI();
    int gNOV() {
        return v.length();
    }
    int gNOE() {
        return e.length();
    }
    QString gEC();
    bool iGC();
    int gV(const QString& vertexName) const;
private slots:
    void on_addVB();
    void on_addEB();
    void on_rEB();
    void on_rVB();
    void on_cVB();
    void on_aIB();
    void on_aCB();
    void on_export_2_clicked();
    void on_import_2_clicked();

    void addVertex(const QString& name, const QColor& color, double x, double y);
    void addEdge(double weight, int sourceIndex, int destinationIndex);
    void removeEdge(Vertex* sourceVertex, Vertex* destinationVertex);

private:
    Ui::MainWindow *u;
    QGraphicsScene *s;
    QList<Vertex*> v;
    QList<Edge*> e;
};
#endif // WINDOW_H
