#include "FacadeWindows.h"

FacadeWindows::FacadeWindows(QWidget *parent) : QMainWindow(parent)
{
    pEnterWin = new EnterWindow(this);
    pLogicWin = new LoginWindow(this);
    pRegistrWin = new RegistrationWindow(this);
    pUserWin = new UserWindow(this);

    pEnterWin->show();

    connect(pEnterWin,SIGNAL(Login()),this,SLOT(Login()));
    connect(pEnterWin,SIGNAL(Registr()),this,SLOT(Registr()));

    connect(pLogicWin,SIGNAL(Back()),this,SLOT(Back()));
    connect(pLogicWin,SIGNAL(Enter()),this,SLOT(Enter()));

    connect(pRegistrWin,SIGNAL(Back()),this,SLOT(Back()));
    connect(pUserWin,SIGNAL(Back()),this,SLOT(Back()));


}


void FacadeWindows::Login()
{
    pEnterWin->hide();
    pLogicWin->show();
}

void FacadeWindows::Registr()
{
    pEnterWin->hide();
    pRegistrWin->show();
}

void FacadeWindows::Back()
{
    pUserWin->hide();
    pLogicWin->hide();
    pRegistrWin->hide();
    pEnterWin->show();
}

void FacadeWindows::Enter()
{
    qDebug()<< "ENTER";
    pLogicWin->hide();
    pRegistrWin->hide();
    pEnterWin->hide();
    pUserWin->show();
}

FacadeWindows::~FacadeWindows()
{
    delete pEnterWin;
    delete pLogicWin;
    delete pRegistrWin;
    delete pUserWin;
}
