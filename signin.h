#ifndef SIGNIN_H
#define SIGNIN_H
#include <QDialog>


namespace Ui {
class signin;
}

class signin : public QDialog
{
    Q_OBJECT

public:
    explicit signin(QWidget *parent = 0);
    ~signin();

private slots:


    void on_pushButton_ok_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::signin *ui;
};

#endif // SIGNIN_H
