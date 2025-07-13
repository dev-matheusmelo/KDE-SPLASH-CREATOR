#ifndef METADATA_DIALOG_H
#define METADATA_DIALOG_H

#include <QDialog>

namespace Ui {
class metadata_dialog;
}

class metadata_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit metadata_dialog(QWidget *parent = nullptr);
    ~metadata_dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_1_clicked();

private:
    Ui::metadata_dialog *ui;
};

#endif // METADATA_DIALOG_H
