#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog)
{
     ui->setupUi(this);
     connect(ui->cancel,SIGNAL(clicked()),this,SLOT(close()));

}


Dialog::~Dialog(){
    delete ui;
}

void Dialog::on_ok_clicked()
{
    this->accept();
}
