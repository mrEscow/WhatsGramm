#include "FacadeWindows.h"

FacadeWindows::FacadeWindows()
{
    enterWin.show();

    connect(&enterWin,SIGNAL(Login()),this,SLOT(Login()));
    connect(&enterWin,SIGNAL(Registr()),this,SLOT(Registr()));

    connect(&logicWin,SIGNAL(Back()),this,SLOT(Back()));
    connect(&registrWin,SIGNAL(Back()),this,SLOT(Back()));
}

void FacadeWindows::Login()
{
    enterWin.hide();
    logicWin.show();
}

void FacadeWindows::Registr()
{
    enterWin.hide();
    registrWin.show();
}

void FacadeWindows::Back()
{
    logicWin.hide();
    registrWin.hide();
    enterWin.show();
}
