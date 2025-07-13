#include "add_animatedimage_dialog.h"
#include "ui_add_animatedimage_dialog.h"
#include "QFileDialog"
#include "QFileInfo"
#include "splash_qml_class.h"
#include "global_vars.h"

add_animatedimage_dialog::add_animatedimage_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_animatedimage_dialog)
{
    ui->setupUi(this);
}

add_animatedimage_dialog::~add_animatedimage_dialog()
{
    delete ui;
}

void add_animatedimage_dialog::on_pushButton_add_clicked()
{
    source_path = QFileDialog::getOpenFileName();
    file_name = QFileInfo(source_path).fileName();
    ui->label->setText(file_name);
}


void add_animatedimage_dialog::on_pushButton_save_clicked()
{
    QString id = "animated_image";
    QString anchors = "anchors.centerIn: parent";
    QString width = ui->spinBox_width->text();
    QString height = ui->spinBox_height->text();
    QString source = file_name;

    QML animatedimage_qml;
    animatedimage_qml.set_type(QML_TYPE::ANIMATEDIMAGE);
    animatedimage_qml.qml_start();
        animatedimage_qml.set_id(id);
        animatedimage_qml.set_anchors(anchors);
        animatedimage_qml.set_width(width);
        animatedimage_qml.set_height(height);
        animatedimage_qml.set_source(source);
    animatedimage_qml.qml_end();
    animatedimage_qml.set_fullsourcepath(source_path);
    globals::qml_vec.push_back(animatedimage_qml);
    this->close();
}

