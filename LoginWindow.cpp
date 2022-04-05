#include "LoginWindow.h"
#include "ui_LoginWindow.h"


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);


    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    ui->lineEdit_Login->setValidator(new QRegularExpressionValidator(rx, this));
    ui->lineEdit_Login->setText("example@gmail.com");
    connect(ui->lineEdit_Login,&QLineEdit::textChanged,
            this,&LoginWindow::adjustTextColor);

    ui->lineEdit_Password->setEchoMode(QLineEdit::Password);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_EnterButton_clicked()
{
    if(ui->lineEdit_Login->hasAcceptableInput()){
        qDebug()<< "Login Valid on_EnterButton_clicked";
    }
    else{
        qDebug()<< "not Valid!!!";
        ui->lineEdit_Login->clear();
        ui->lineEdit_Password->clear();
    }

}

void LoginWindow::on_BackButton_clicked()
{
    emit Back();
}

void LoginWindow::adjustTextColor(const QString&)
{

    if(!ui->lineEdit_Login->hasAcceptableInput()){
        //qDebug()<< "QLineEdit { color: red;}";
        ui->lineEdit_Login->setStyleSheet("QLineEdit { color: red;}");
    }
    else{
        qDebug()<< "Login Valid";
        //qDebug()<< "QLineEdit { color: black;}";
        ui->lineEdit_Login->setStyleSheet("QLineEdit { color: black;}");
    }
}

