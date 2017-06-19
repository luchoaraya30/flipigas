#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Entrar_clicked()
{
    QString username = ui->lineEdit_user->text();
    QString password = ui->lineEdit_pass->text();
    bool administrator = ui->radioButton_A->isChecked();
    bool worker = ui->radioButton_O->isChecked();


    //AQUI VA LA BUSQUEDA EN ARCHIVOS DE USUARIOS Y CONTRASENA VALIDOS

    if(username == "admin" && password == "admin" && (administrator||worker))
    {
        QMessageBox::information(this, "Sesion", "Sesion iniciada correctamente.\nBienvenido.");
        hide();
        secDialog = new SecDialog(this);
        secDialog->show();
    }
    else
    {
        QMessageBox::warning(this, "Sesion", "Usuario y/o contrasena incorrectos");
    }
}
