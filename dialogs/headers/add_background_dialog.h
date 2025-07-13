#ifndef ADD_BACKGROUND_DIALOG_H
#define ADD_BACKGROUND_DIALOG_H

#include <QDialog>

namespace Ui {
class add_background_dialog;
}

class add_background_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_background_dialog(QWidget *parent = nullptr);
    ~add_background_dialog();

private slots:

    void on_pushButton_save_clicked();

    void on_pushButton_color_clicked();

private:
    Ui::add_background_dialog *ui;
};

#endif // ADD_BACKGROUND_DIALOG_H
