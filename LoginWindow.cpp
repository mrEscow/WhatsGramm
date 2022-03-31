#include "LoginWindow.h"
#include "ui_LoginWindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{

    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_BackButton_clicked()
{
    emit Back();
}

