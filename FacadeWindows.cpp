#include "FacadeWindows.h"

FacadeWindows::FacadeWindows(QWidget *parent) : QMainWindow(parent)
{
    pEnterWin = new EnterWindow(this);
    pLogicWin = new LoginWindow(this);


    pEnterWin->show();

    connect(pEnterWin,SIGNAL(Login()),this,SLOT(Login()));
    connect(pEnterWin,SIGNAL(Registr()),this,SLOT(Registr()));

    connect(pLogicWin,SIGNAL(Back()),this,SLOT(Back()));


    connect(&registrWin,SIGNAL(Back()),this,SLOT(Back()));
}


void FacadeWindows::Login()
{
    pEnterWin->hide();
    pLogicWin->show();
}

void FacadeWindows::Registr()
{
    pEnterWin->hide();
    registrWin.show();
}

void FacadeWindows::Back()
{
    pLogicWin->hide();
    registrWin.hide();
    pEnterWin->show();
}

FacadeWindows::~FacadeWindows()
{
    delete pEnterWin;
    delete pLogicWin;
}
