#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QWidget>
#include <QMdiArea>
#include "window.h"

namespace Ui {
class StartWindow;
}

class SW : public QWidget
{
    Q_OBJECT

public:
    explicit SW(QWidget *parent = nullptr);
    ~SW();

private slots:
    void on_newGraph_clicked();

private:
    Ui::StartWindow *ui;
    MainWindow *window;
};

#endif // STARTWINDOW_H
