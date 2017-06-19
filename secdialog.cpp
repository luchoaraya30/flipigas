#include "secdialog.h"
#include "ui_secdialog.h"
#include "request_form.h"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_goto_request_clicked()
{
    req = new request_form(this);
    req->show();
}

void SecDialog::on_goto_tracking_clicked()
{

}

void SecDialog::on_goto_sells_clicked()
{

}

void SecDialog::on_goto_inventory_clicked()
{

}
