#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QValidator>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
signals:
    void Back();

private slots:
    void on_EnterButton_clicked();
    void on_BackButton_clicked();
//public slots:
    void adjustTextColor(const QString&);

private:
     Ui::LoginWindow *ui;

};
#endif // LOGINWINDOW_H
