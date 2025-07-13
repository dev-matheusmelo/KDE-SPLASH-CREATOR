#ifndef ADD_METADATA_DIALOG_H
#define ADD_METADATA_DIALOG_H

#include <QDialog>

namespace Ui {
class add_metadata_dialog;
}

class add_metadata_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_metadata_dialog(QWidget *parent = nullptr);
    ~add_metadata_dialog();

private slots:
    void on_pushButton_save_clicked();

    void on_pushButton_1_clicked();

private:
    Ui::add_metadata_dialog *ui;
};

#endif // ADD_METADATA_DIALOG_H
