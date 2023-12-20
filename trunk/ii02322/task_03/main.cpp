// Include the main window header file
#include "mainwindow.h"

// Include the QApplication header file
#include <QApplication>

// Define the main function
int main(int argc, char *argv[]) {

    // Create an instance of QApplication
    QApplication a(argc, argv);

    // Create an instance of MainWindow
    MainWindow w;

    // Show the MainWindow instance
    w.show();

    // Execute the application
    return QApplication::exec();
}

