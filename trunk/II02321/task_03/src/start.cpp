#include "creategraph.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CreateGraph w;
    w.show();
    return a.exec();
}
