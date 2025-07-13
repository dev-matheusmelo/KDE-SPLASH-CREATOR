#ifndef BACKGROUND_DIALOG_H
#define BACKGROUND_DIALOG_H

#include <QDialog>

namespace Ui {
class background_dialog;
}

class background_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit background_dialog(QWidget *parent = nullptr);
    ~background_dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::background_dialog *ui;
};

#endif // BACKGROUND_DIALOG_H
