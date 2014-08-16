#include "wapidraw.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WapiDraw w;
    w.show();

    return a.exec();
}
