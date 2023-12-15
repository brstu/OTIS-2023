#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //create application a
    QApplication a(argc, argv);
    //create window with name w
    MainWindow w;
    //show this window
    w.show();
    return a.exec();
}
