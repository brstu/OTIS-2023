#include "startwindow.h"
#include <QApplication>

int main(int ac, char *av[])
{
    QApplication qa(ac, av);
    SW win;
    win.show();
    return qa.exec();
}
