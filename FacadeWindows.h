#ifndef FACADEWINDOWS_H
#define FACADEWINDOWS_H

#include <QObject>

#include "EnterWindow.h"
#include "LoginWindow.h"
#include "RegistrationWindow.h"

class FacadeWindows : public QMainWindow
{
    Q_OBJECT
public:
    FacadeWindows(QWidget *parent = nullptr);
    ~FacadeWindows();
private:

    EnterWindow *pEnterWin;
    LoginWindow * pLogicWin;
    RegistrationWindow registrWin;

private slots:
    void Login();
    void Registr();
    void Back();
};

#endif // FACADEWINDOWS_H
