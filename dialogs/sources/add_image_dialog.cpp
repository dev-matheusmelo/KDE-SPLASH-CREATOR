#include "add_image_dialog.h"
#include "ui_add_image_dialog.h"
#include "QFileDialog"
#include "QFileInfo"
#include "global_vars.h"
#include "QMessageBox"
add_image_dialog::add_image_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_item_dialog)
{
    ui->setupUi(this);

}

add_image_dialog::~add_image_dialog()
{
    delete ui;
}

void add_image_dialog::on_pushButton_add_clicked()
{
    source_path = QFileDialog::getOpenFileName();
    source_file = QFileInfo(source_path).fileName();
    ui->label->setText(ui->label->text()+source_file);
}


void add_image_dialog::on_pushButton_save_clicked()
{
    QML_TYPE type = QML_TYPE::IMAGE;
    QString id = "image_id";
    QString source = source_file;
    QString anchors;
    QString width = ui->spinBox_width->text();
    QString height = ui->spinBox_height->text();

    QML image_qml;

    image_qml.set_type(type);

    image_qml.qml_start();
        image_qml.set_id(id);
        image_qml.set_source(source);
        if(ui->checkBox->isChecked()){
            anchors = "anchors.centerIn: parent";
            image_qml.set_anchors(anchors);
        }else if(ui->checkBox->isChecked() == false){
            anchors = "";
            image_qml.set_x(ui->spinBox_X->text());
            image_qml.set_y(ui->spinBox_Y->text());
        }
        image_qml.set_width(width);
        image_qml.set_height(height);
    image_qml.qml_end();
    image_qml.set_fullsourcepath(source_path);
    globals::qml_vec.push_back(image_qml);

    this->close();
}


void add_image_dialog::on_pushButton_cancel_clicked()
{
    this->close();
}


void add_image_dialog::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{
    if(ui->checkBox->isChecked()){
        ui->spinBox_X->setEnabled(false);
        ui->spinBox_Y->setEnabled(false);
    }else{
        ui->spinBox_X->setEnabled(true);
        ui->spinBox_Y->setEnabled(true);
    }
}

