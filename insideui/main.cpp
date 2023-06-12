#include "userwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    userWindow w;
    w.show();
    return a.exec();
}
