#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"Aplicacion iniciada";
    QString db_name;
    db_name.append("users.sqlite");
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(db_name);
    if(db.open())
    {
        qDebug()<<"Coneccion a la DB complete successssdasdqsdkjs";
    }else
    {
        qDebug()<<"No se conecto a la db";
    }

}

MainWindow::~MainWindow()
{
    delete ui;
    db.close();
    qDebug()<<"Conexion cerrada";
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

void MainWindow::on_pushButton_signin_clicked()
{
    sign_in = new signin(this);
    sign_in->setModal(true);
    sign_in->setVisible(true);
}


