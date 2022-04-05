#include "SqlDataBase.h"
#include "FacadeWindows.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //SqlDataBase sql;
    FacadeWindows windows;
    return a.exec();
}
