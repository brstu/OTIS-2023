#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <Qstring>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class Vershina;
class Rebro;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void updateFile();
    bool compleGraph();
    void importFile(const QString& fileName);
    void exportFile(const QString& fileName);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateRebro();
    void updateVershins();
    void showGInfo();
    void showEInfo();
    int getNumOfVertices() {
        return vershins.length();
    }
    int getNumOfEdges() {
        return rebrs.length();
    }
    QString getECycle();
    bool isConnected();
    int getVIndex(const QString& vertexName) const;
private slots:
    void on_addVertexButton_clicked();
    void on_addEdgeButton_clicked();

    void on_removeEdgeButton_clicked();

    void on_removeVertexButton_clicked();

    void on_changeVertexButton_clicked();

    void on_addInformationButton_clicked();

    void on_addClearsceneButton_clicked();

    void on_export_2_clicked();

    void on_import_2_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QList<Vershina*> vershins;
    QList<Rebro*> rebrs;
};
#endif // MAINWINDOW_H
