#include "metadata_dialog.h"
#include "ui_metadata_dialog.h"
#include "global_vars.h"
metadata_dialog::metadata_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::metadata_dialog)
{
    ui->setupUi(this);
}

metadata_dialog::~metadata_dialog()
{
    delete ui;
}

void metadata_dialog::on_pushButton_clicked()
{
    QString aut_name = ui->lineEdit_aut_name->text();
    QString aut_email = ui->lineEdit_aut_email->text();
    QString splash_name = ui->lineEdit_splash_name->text();
    QString splash_desc = ui->textEdit_splash_desc->toPlainText();
    globals::metadata.init(aut_name,aut_email,splash_name,splash_desc);
    this->close();
}


void metadata_dialog::on_pushButton_1_clicked()
{

}

