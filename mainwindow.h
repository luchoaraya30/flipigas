#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //metodo que hace algo

private slots:
    void on_pushButton_Entrar_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
};

#endif // MAINWINDOW_H
