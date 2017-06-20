#include "signin.h"
#include "ui_signin.h"
#include "QWizard"
#include "QCloseEvent"
#include <QMessageBox>
#include <QDebug>
#include <QtSql>


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

void signin::on_buttonBox_accepted()
{
    create_table_users();
    insert_user();
    close();
}

void signin::on_buttonBox_rejected()
{
    close();
}

void signin::create_table_users()
{
    QString query;
    query.append("CREATE TABLE IF NOT EXISTS users"
                 "(id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, "
                 "user VARCHAR(100) NOT NULL, "
                 "password VARCHAR(100) NOT NULL, "
                 "mail VARCHAR(100) NOT NULL, "
                 "type VARCHAR(100) NOT NULL);"
                 );
    QSqlQuery create;
    create.prepare(query);
    if(create.exec())
    {
        qDebug()<<"Tabla creada";
    }else{
        qDebug()<<"Error en la creacion"<<create.lastError();
    }
}

void signin::insert_user()
{
    QString query;
    QString temp_admin;
    ui->radioButton_op->setChecked(true);

    if(ui->radioButton_ad->isChecked())
    {
        qDebug()<<"entra al if";
        temp_admin = "administrador";
    }else
    {
        temp_admin = "operario";
    }

        temp_admin="administrador";

    qDebug()<<ui->lineEdit_pass->text();
    qDebug()<<ui->lineEdit_rpass->text();

    if(ui->lineEdit_pass->text() == ui->lineEdit_rpass->text())
    {
        query.append("INSERT INTO users (user, password, mail, type) VALUES (:user, :password, :mail, :type);");
        QSqlQuery insertion;
        insertion.prepare(query);
       // insertion.bindValue(":id", 0);
        insertion.bindValue(":user", ui->lineEdit_user->text());
        insertion.bindValue(":password", ui->lineEdit_pass->text());
        insertion.bindValue(":mail", ui->lineEdit_mail->text());
        insertion.bindValue(":type", temp_admin);


        qDebug()<<insertion.executedQuery();


        if(insertion.exec())
        {
            qDebug()<<"Fila creada";
        }else{
            qDebug()<<"Error en la insercion"<< insertion.lastError();
        }
    }
    else{
        QMessageBox::warning(this, "Sesion", "Contraseñas no coinciden, reingrese");
    }

}
