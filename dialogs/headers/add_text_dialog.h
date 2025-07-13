#ifndef ADD_TEXT_DIALOG_H
#define ADD_TEXT_DIALOG_H

#include <QDialog>
#include "QVector"

namespace Ui {
class add_text_dialog;
}

class add_text_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_text_dialog(QWidget *parent = nullptr);
    ~add_text_dialog();
    QVector<QString>m_combo_anchors = {"top","botton","custom postion x y"};
private slots:
    void on_pushButton_color_clicked();

    void on_pushButton_save_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::add_text_dialog *ui;
};

#endif // ADD_TEXT_DIALOG_H
