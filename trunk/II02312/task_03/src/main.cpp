#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //create app
    QApplication a(argc, argv);
    //generate window
    MainWindow w;
    //show window
    w.show();
    return a.exec();
}
