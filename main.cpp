#include "FacadeWindows.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FacadeWindows windows;
    //w.show();
    return a.exec();
}
