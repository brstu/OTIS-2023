#include "startwindow.h"

#include <QApplication>

int main(int ac, char *av[])
{
    QApplication qa(ac, av);
    StartWindow window;
    window.show();
    return qa.exec();
}
