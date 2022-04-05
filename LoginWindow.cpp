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
        if(ui->lineEdit_Login->text() == "escow@mail.ru"){
            qDebug()<< ui->lineEdit_Login->displayText();
            if(ui->lineEdit_Password->text() == "123456"){
                qDebug()<< ui->lineEdit_Password->text();
                emit Enter();
            }
        }
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
    if(!ui->lineEdit_Login->hasAcceptableInput())
        ui->lineEdit_Login->setStyleSheet("QLineEdit { color: red;}");   
    else
        ui->lineEdit_Login->setStyleSheet("QLineEdit { color: black;}");   
}

