#ifndef ADD_ANIMATEDIMAGE_DIALOG_H
#define ADD_ANIMATEDIMAGE_DIALOG_H

#include <QDialog>

namespace Ui {
class add_animatedimage_dialog;
}

class add_animatedimage_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_animatedimage_dialog(QWidget *parent = nullptr);
    ~add_animatedimage_dialog();
    QString source_path;
    QString file_name;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::add_animatedimage_dialog *ui;
};

#endif // ADD_ANIMATEDIMAGE_DIALOG_H
