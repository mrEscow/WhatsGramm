#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class UserWindow; }
QT_END_NAMESPACE

class UserWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserWindow(QWidget *parent = nullptr);

signals:
    void Back();
private slots:
    void on_BackButton_clicked();
private:
     Ui::UserWindow *ui;

};

#endif // USERWINDOW_H
