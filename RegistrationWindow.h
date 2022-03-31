#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RegistrationWindow; }
QT_END_NAMESPACE

class RegistrationWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit RegistrationWindow(QWidget *parent = nullptr);
    ~RegistrationWindow();
private:
     Ui::RegistrationWindow *ui;

signals:
    void Back();
private slots:
    void on_pushButton_clicked();
};

#endif // REGISTRATIONWINDOW_H
