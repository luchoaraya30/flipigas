#include "request_form.h"
#include "ui_request_form.h"

request_form::request_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::request_form)
{
    ui->setupUi(this);
}

request_form::~request_form()
{
    delete ui;
}
