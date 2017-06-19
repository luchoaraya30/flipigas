#include "signin.h"
#include "ui_signin.h"
#include "mainwindow.h"
#include "QWizard"
#include "QCloseEvent"

signin::signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin)
{
    ui->setupUi(this);
}

signin::~signin()
{
    delete ui;
}


void signin::on_pushButton_ok_clicked()
{
    //enviar todas las cagás de la query

    close();

}

void signin::on_pushButton_cancel_clicked()
{
    close();
}

