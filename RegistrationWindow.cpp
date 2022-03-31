#include "RegistrationWindow.h"
#include "ui_RegistrationWindow.h"

RegistrationWindow::RegistrationWindow(QWidget *parent)
    : QMainWindow{parent}
    , ui(new Ui::RegistrationWindow)
{
    ui->setupUi(this);
}

RegistrationWindow::~RegistrationWindow()
{
    delete ui;
}

void RegistrationWindow::on_pushButton_clicked()
{
    emit Back();
}

