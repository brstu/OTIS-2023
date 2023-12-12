#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    //Это строчка запускает программу
    QApplication a(argc, argv);
    //Создаём окно по имени w
    MainWindow w;
    //Показываем окно
    w.show();

    return a.exec();
}
