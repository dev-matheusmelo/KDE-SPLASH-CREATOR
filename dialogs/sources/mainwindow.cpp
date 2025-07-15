#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QFileDialog"
#include "add_image_dialog.h"
#include "add_animatedimage_dialog.h"
#include "global_vars.h"
#include "add_background_dialog.h"
#include "add_metadata_dialog.h"
#include "add_text_dialog.h"
#include "QMessageBox"
#include "QFileDialog"
#include "QFile"
#include "QFileInfo"
#include "QDir"
#include "QProcess"
#include "QtNetwork/QNetworkAccessManager"
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    foreach(auto copy, globals::combo_elements){
        ui->comboBox_elements->addItem(copy);
    }

    if(ui->comboBox_elements->currentText() != globals::combo_elements[0]){
        ui->pushButton_add->setEnabled(true);
    }


    QString github("<a href=\"https://github.com/dev-matheusmelo/KDE-SPLASH-CREATOR\">Github:dev-matheusmelo</a>");
    ui->label_github->setText(github);
    double current_version = 1.0;
    ui->label_version->setText("Version:"+QString::number(current_version));
    check_update(current_version);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_add_clicked()
{
    if(ui->comboBox_elements->currentText() == globals::combo_elements[1]){
        add_image_dialog w;
        if(w.exec() == 0){
            refresh_list();
            ui->pushButton_background->setEnabled(true);
        }
    }else if(ui->comboBox_elements->currentText() == globals::combo_elements[2]){
        add_animatedimage_dialog w;
        if(w.exec() == 0){
            refresh_list();
            ui->pushButton_background->setEnabled(true);
        }
    }else if(ui->comboBox_elements->currentText() == globals::combo_elements[3]){
        add_text_dialog w;
        if(w.exec() == 0){
            refresh_list();
            ui->pushButton_background->setEnabled(true);
        }
    }
}


void MainWindow::on_comboBox_elements_currentIndexChanged(int index)
{
    if(index == 0){
        ui->pushButton_add->setEnabled(false);
    }else{
        ui->pushButton_add->setEnabled(true);
    }
}


void MainWindow::on_pushButton_background_clicked()
{
    add_background_dialog w;
    if(w.exec() == 0){
        refresh_list();
        ui->listWidget->item(0)->setText("Rectangle(Background)");
        ui->pushButton_splashinfo->setEnabled(true);
    }
}


void MainWindow::on_pushButton_splashinfo_clicked()
{
    add_metadata_dialog w;
    if(w.exec() == 0){
        ui->pushButton_save->setEnabled(true);
        ui->pushButton_save->setEnabled(true);
    }
}

void MainWindow::on_pushButton_save_clicked()
{
    QVector<QString>qml_imports = {"import QtQuick 2.5"};
    save_path = QFileDialog::getExistingDirectory();
    QString contents_path = save_path +"/contents";
    QString splash_path = contents_path + "/splash";
    QString images_path = splash_path + "/images/";
    QString file_text;

    QFileInfo file_info(save_path);
    splash_folder_name = file_info.fileName();
    //QMessageBox::about(this,"","splash_folder:"+splash_folder_name);
    globals::metadata.set_foldername(splash_folder_name);
    globals::metadata.make();
    foreach(auto copy , qml_imports){
        file_text += copy + "\n";
    }
    foreach(auto copy_obj,globals::qml_vec){
        foreach(auto copy_string,copy_obj.get_data()){
            file_text += copy_string;
        }
    }
    file_text += "}\n";
    //QMessageBox::about(this,"Texto pro arquivo:",file_text);

    QDir dir;
    dir.mkdir(contents_path);
    dir.mkdir(splash_path);
    dir.mkdir(images_path);
    dir.mkdir(contents_path + "/previews");

    foreach(auto copy_obj, globals::qml_vec){
        if(copy_obj.get_fullsourcepath() != ""){
            QProcess process;
            QStringList copy_args = {copy_obj.get_fullsourcepath(), images_path};
            process.start("cp",copy_args);
            process.waitForFinished(5000);
        }
    }

    QFile metadata_file(save_path + "/metadata.json");
    QFile splash_qml_file(splash_path+"/Splash.qml");
    splash_qml_file.open(QIODeviceBase::WriteOnly);
    splash_qml_file.write(file_text.toUtf8());
    metadata_file.open(QIODeviceBase::WriteOnly);
    metadata_file.write(globals::metadata.get_metadata().toUtf8());


    QMessageBox::about(this,"File saved","File saved in:"+save_path);
    ui->pushButton_apply->setEnabled(true);
}


void MainWindow::on_pushButton_remove_clicked()
{
    int current_list_index = ui->listWidget->currentRow();
    if(current_list_index >= 1){
        globals::qml_vec.erase(globals::qml_vec.begin() + current_list_index);
        ui->listWidget->clear();
        foreach(auto copy, globals::qml_vec){
            ui->listWidget->addItem(copy.get_type_text());
        }
    }
}

void MainWindow::on_pushButton_apply_clicked()
{
    QString home_path = QDir::homePath();
    QString local_splash_path = "/.local/share/plasma/look-and-feel";
    QString full_splash_path = home_path + local_splash_path;
    QDir dir(full_splash_path);
    if(dir.exists()){
        //copy folder and rewrite ksplashrc
    }else{
        QProcess process_mkdir;
        QStringList args_mkdir = {"-p",full_splash_path};
        process_mkdir.start("mkdir",args_mkdir);
        process_mkdir.waitForFinished(2000);
    }

    QProcess process_cp;
    QStringList args_cp = {"-r",save_path,full_splash_path};
    process_cp.start("cp",args_cp);
    process_cp.waitForFinished(2000);
    //QMessageBox::about(this,"",save_path + "\n" + full_splash_path);
    QString ksplashrc_path = home_path + "/.config/ksplashrc";
    QFile file(ksplashrc_path);
    file.open(QIODeviceBase::WriteOnly);
    file.write("[KSplash]\nTheme="+splash_folder_name.toUtf8());
    QMessageBox::about(this,"","Splash applyed, restart session to see");
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->label_elements->setText("Selected Element:"+item->text());
}

void MainWindow::refresh_list(){
    ui->listWidget->clear();
    foreach(auto copy, globals::qml_vec){
        ui->listWidget->addItem(copy.get_type_text());
    }
}

void MainWindow::check_update(double program_ver){
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QUrl update_url("https://raw.githubusercontent.com/dev-matheusmelo/KDE-SPLASH-CREATOR/refs/heads/main/version.txt");
    QString github("<a href=\"https://github.com/dev-matheusmelo/KDE-SPLASH-CREATOR\">Download Here</a>");
    QNetworkRequest request(update_url);
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, [this, reply, github, program_ver]() {
        if (reply->error() == QNetworkReply::NoError) {

            QString html_ver = reply->readLine().replace("\n","");
            double online_ver = html_ver.toDouble();
            if(program_ver < online_ver){
                qDebug() << "online version:\n" << html_ver;
                QMessageBox::information(this, "New update avalible","Update:"+html_ver+" is live, check github to download <br>" +github);
            }
        } else {
            qDebug() << "Web request error:" << reply->errorString();
            QMessageBox::warning(this, "Network error", "Can't check updates: " + reply->errorString());
        }
        reply->deleteLater();
    });
}




