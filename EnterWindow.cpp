#include "EnterWindow.h"
#include "ui_EnterWindow.h"

EnterWindow::EnterWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EnterWindow)
{
    ui->setupUi(this);
}

EnterWindow::~EnterWindow()
{
    delete ui;
}


void EnterWindow::on_LoginButton_clicked()
{
    emit Login();
}


void EnterWindow::on_RegistrationButton_clicked()
{
    emit Registr();
}

