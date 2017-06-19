#ifndef SECDIALOG_H
#define SECDIALOG_H
#include "request_form.h"

#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = 0);
    ~SecDialog();



private slots:
    void on_goto_request_clicked();

    void on_goto_tracking_clicked();

    void on_goto_sells_clicked();

    void on_goto_inventory_clicked();

private:
    Ui::SecDialog *ui;
    request_form * req;
    //definir aqui las demas ventanas
};

#endif // SECDIALOG_H
