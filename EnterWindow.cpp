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

void EnterWindow::on_pushButton_2_clicked()
{
    emit Login();
}


void EnterWindow::on_pushButton_clicked()
{
    emit Registr();
}

