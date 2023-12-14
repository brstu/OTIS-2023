#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "grapharea.h"


QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateWindow();
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;


    void on_clearArea1_clicked();
    void on_clearArea2_clicked();
    void on_ExportGraph1_clicked();
    void on_ExportGraph1_2_clicked();
    void on_ImportGraph1_clicked();
    void on_ImportGraph1_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    GraphArea m_graphArea1;
    GraphArea m_graphArea2;

private:
    void initUI();
    void saveToFile();
    void loadFromFile();
};
#endif // MAINWINDOW_H
