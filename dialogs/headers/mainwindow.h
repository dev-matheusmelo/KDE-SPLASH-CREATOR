#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qlistwidget.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QString save_path;
    QString splash_folder_name;
    ~MainWindow();

private slots:

    void on_comboBox_elements_currentIndexChanged(int index);

    void on_pushButton_add_clicked();

    void on_pushButton_background_clicked();

    void on_pushButton_splashinfo_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_remove_clicked();

    void on_pushButton_apply_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    void refresh_list();
    void check_update(double program_ver);
};
#endif // MAINWINDOW_H
