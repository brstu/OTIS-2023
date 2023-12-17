#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QWidget>
#include <QMdiArea>
#include "mainwindow.h"

namespace Ui {
class StartWindow;
}

class StartWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StartWindow(QWidget *parent = nullptr);
    ~StartWindow();

private slots:
    void on_newGraph_clicked();

private:
    Ui::StartWindow *ui;
    MainWindow *window;
};

#endif // STARTWINDOW_H
