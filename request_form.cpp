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

void request_form::on_buttonBox_accepted()
{
        // Obtener todos los datos
   // ui->cerroComboBox->;
   // ui->payComboBox->;
   // ui->gal7->;
   // ui->gal15->;
   // ui->gal45->;
    //hora
    //mostrar texto en el lineText

    //ui->previewText->
    // Ingresarlos a la ... db?
}
