#include "start.h"

#include <QApplication>

int main(int c, char *v[])
{
    QApplication a(c, v);
    StartWindow windows;
    windows.show();
    return a.exec();
}
