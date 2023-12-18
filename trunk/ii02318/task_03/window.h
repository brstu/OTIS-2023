#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <Qstring>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class Vertexx;
class Edgge;
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT

public:
    void addEdgge(int sourceIndex, int destinationIndex, double weight, const QColor& color);
    void addVertexx(const QString& name, const QColor& color, double x, double y);
    void updateFiles();
    bool compleGraphh();
    void importFiles(const QString& fileName);
    void exportFiles(const QString& fileName);
    Window(QWidget *parent = nullptr);
    ~Window();
    void updateEdgge();
    void updateVertexx();
    void showGInf();
    void showEInf();
    int getNumOfVertexx() {
        return vertexxs.length();
    }
    int getNumOfEdgges() {
        return edgges.length();
    }
    QString getCycle();
    bool isConect();
    int getVertexxIndex(const QString& vertexName) const;
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
    Ui::MainWindow *uiui;
    QGraphicsScene *scen;
    QList<Vertexx*> vertexxs;
    QList<Edgge*> edgges;
};
#endif // WINDOW_H
