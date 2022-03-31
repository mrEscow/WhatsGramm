#ifndef FACADEWINDOWS_H
#define FACADEWINDOWS_H

#include <QObject>

#include "EnterWindow.h"
#include "LoginWindow.h"
#include "RegistrationWindow.h"

class FacadeWindows : public QObject
{
    Q_OBJECT
public:
    FacadeWindows();
private:

    EnterWindow enterWin;
    LoginWindow logicWin;
    RegistrationWindow registrWin;

private slots:
    void Login();
    void Registr();
    void Back();
};

#endif // FACADEWINDOWS_H
