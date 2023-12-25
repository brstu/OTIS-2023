#include "start.h"

#include <QApplication> //a

int main(int c, char *v[])
{
    QApplication a(c, v);
    Start windows;
    windows.show();
    return a.exec();
}
