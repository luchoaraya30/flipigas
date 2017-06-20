#ifndef SIGNIN_H
#define SIGNIN_H
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <dbmanager.h>


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
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::signin *ui;
    DBManager *db;

};

#endif // SIGNIN_H
