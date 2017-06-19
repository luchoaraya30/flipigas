#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include "secdialog.h"
#include "signin.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void create_table_users();

    //metodo que hace algo

private slots:
    void on_pushButton_Entrar_clicked();

    void on_pushButton_signin_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
    signin *sign_in;
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
