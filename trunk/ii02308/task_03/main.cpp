#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //create object of app
    QApplication a(argc, argv);
    //create main app
    MainWindow w;
    //show main window
    w.show();
    //run app
    return a.exec();
}
