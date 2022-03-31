#ifndef ENTERWINDOW_H
#define ENTERWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class EnterWindow; }
QT_END_NAMESPACE

class EnterWindow : public QMainWindow
{
    Q_OBJECT
public:
    EnterWindow(QWidget *parent = nullptr);
    ~EnterWindow();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
     Ui::EnterWindow *ui;

signals:
     void Login();
     void Registr();
};

#endif // ENTERWINDOW_H
