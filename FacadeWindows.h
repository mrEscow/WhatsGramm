#ifndef FACADEWINDOWS_H
#define FACADEWINDOWS_H

#include <QObject>

#include "EnterWindow.h"
#include "LoginWindow.h"
#include "RegistrationWindow.h"
#include "UserWindow.h"

class FacadeWindows : public QMainWindow
{
    Q_OBJECT
public:
    FacadeWindows(QWidget *parent = nullptr);
    ~FacadeWindows();
private:

    EnterWindow *pEnterWin;
    LoginWindow *pLogicWin;
    RegistrationWindow *pRegistrWin;
    UserWindow *pUserWin;

private slots:
    void Login();
    void Registr();
    void Back();
    void Enter();
};

#endif // FACADEWINDOWS_H
