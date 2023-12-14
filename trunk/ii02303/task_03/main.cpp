#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    //This line starts the program
    QApplication a(argc, argv);
    //Creating a window named w
    MainWindow w;
    //Showing the window
    w.show();

    return a.exec();
}
