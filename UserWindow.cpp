#include "UserWindow.h"
#include "ui_UserWindow.h"

UserWindow::UserWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserWindow)
{
    ui->setupUi(this);
}

void UserWindow::on_BackButton_clicked()
{
    qDebug() << "UserWindow::BACK";
    emit Back();
}
