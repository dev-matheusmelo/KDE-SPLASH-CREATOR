#include "add_text_dialog.h"
#include "ui_add_text_dialog.h"
#include "QColorDialog"
#include "global_vars.h"
#include "splash_qml_class.h"

add_text_dialog::add_text_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_text_dialog)
{
    ui->setupUi(this);
    foreach(auto copy, m_combo_anchors){
        ui->comboBox->addItem(copy);
    }
}

add_text_dialog::~add_text_dialog()
{
    delete ui;
}

void add_text_dialog::on_pushButton_color_clicked()
{
    QColor color = QColorDialog::getColor();
    ui->label_color->setText(color.name());
    ui->pushButton_save->setEnabled(true);
}


void add_text_dialog::on_pushButton_save_clicked()
{
    QString text = ui->lineEdit_text->text();
    QString color = ui->label_color->text();
    QString fontsize = ui->spinBox_fontsize->text();
    QString font = ui->fontComboBox->currentText();
    QString anchors = "anchors.horizontalCenter:parent.horizontalCenter \n";
    QString x = ui->spinBox_X->text();
    QString y = ui->spinBox_Y->text();
    if(ui->comboBox->currentIndex() == 0){
        anchors += "anchors.top:parent.top";
    }else if(ui->comboBox->currentIndex() == 1){
        anchors += "anchors.bottom:parent.bottom";
    }else if(ui->comboBox->currentIndex() == 2){
        anchors = "";
    }

    QML text_qml;
    text_qml.set_type(QML_TYPE::TEXT);
    text_qml.qml_start();
    text_qml.set_text(text);
    text_qml.set_color(color);
    text_qml.set_font(font);
    text_qml.set_fontsize(fontsize);
    if(anchors == ""){
        text_qml.set_x(x);
        text_qml.set_y(y);
    }else{
        text_qml.set_anchors(anchors);
    }
    text_qml.qml_end();

    globals::qml_vec.push_back(text_qml);

    this->close();
}


void add_text_dialog::on_comboBox_currentIndexChanged(int index)
{
    if(index == 2){
        ui->spinBox_X->setEnabled(true);
        ui->spinBox_Y->setEnabled(true);
    }else{
        ui->spinBox_X->setEnabled(false);
        ui->spinBox_Y->setEnabled(false);
    }
}

