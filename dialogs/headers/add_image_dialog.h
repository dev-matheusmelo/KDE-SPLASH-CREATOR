#ifndef ADD_IMAGE_DIALOG_H
#define ADD_IMAGE_DIALOG_H

#include <QDialog>

namespace Ui {
class add_item_dialog;
}

class add_image_dialog : public QDialog
{
    Q_OBJECT

public:
    QString source_path;
    QString source_file;
    explicit add_image_dialog(QWidget *parent = nullptr);
    ~add_image_dialog();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_cancel_clicked();

    void on_checkBox_checkStateChanged(const Qt::CheckState &arg1);

private:
    Ui::add_item_dialog *ui;
};

#endif // ADD_IMAGE_DIALOG_H
