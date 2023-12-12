#include "mainwindow.h"

#include <QApplication>

int main(int argc, char* argv[])
{
    // Создаем объект приложения
    QApplication a(argc, argv);

    // Создаем основное окно приложения
    MainWindow w;

    // Отображаем основное окно
    w.show();

    // Запускаем цикл обработки событий приложения
    return a.exec();
}