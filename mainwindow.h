#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "secdialog.h"
#include "signin.h"
#include "dbmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    DBManager *db;

    //metodo que hace algo

private slots:
    void on_pushButton_Entrar_clicked();

    void on_pushButton_signin_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
    signin *sign_in;

};

#endif // MAINWINDOW_H
