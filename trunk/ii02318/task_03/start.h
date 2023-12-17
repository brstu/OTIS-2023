#ifndef START_H
#define START_H

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
    Ui::StartWindow *uiui;
    MainWindow *windows;
};

#endif // START_H
