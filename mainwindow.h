#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
