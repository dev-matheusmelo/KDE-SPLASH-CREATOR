#include "add_background_dialog.h"
#include "ui_add_background_dialog.h"
#include "QColorDialog"
#include "global_vars.h"
add_background_dialog::add_background_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_background_dialog)
{
    ui->setupUi(this);
}

add_background_dialog::~add_background_dialog()
{
    delete ui;
}

void add_background_dialog::on_pushButton_color_clicked()
{
    QColor color = QColorDialog::getColor();
    ui->label->setText(color.name());
}


void add_background_dialog::on_pushButton_save_clicked() // save button
{
    QML qml;
    qml.set_type(QML_TYPE::BACKGROUND);
    qml.qml_start();
        qml.set_id("background");
        qml.set_width("parent");
        qml.set_height("parent");
        qml.set_color(ui->label->text());
    qml.qml_end();

    globals::qml_vec[0] = qml;
    this->close();
}




