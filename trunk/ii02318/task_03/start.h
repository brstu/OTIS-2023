#ifndef START_H
#define START_H

#include <QWidget>
#include <QMdiArea>
#include "window.h"

namespace Ui {
class Start;
}

class Start : public QWidget
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = nullptr);
    ~Start();

private slots:
    void on_newGraph_clicked();

private:
    Ui::Start *uiui;
    Window *windows;
};

#endif // START_H
