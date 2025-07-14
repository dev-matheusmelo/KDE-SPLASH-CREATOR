/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_elements;
    QPushButton *pushButton_remove;
    QListWidget *listWidget;
    QComboBox *comboBox_elements;
    QPushButton *pushButton_add;
    QPushButton *pushButton_background;
    QPushButton *pushButton_splashinfo;
    QPushButton *pushButton_save;
    QPushButton *pushButton_apply;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(437, 384);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_elements = new QLabel(centralwidget);
        label_elements->setObjectName("label_elements");

        horizontalLayout->addWidget(label_elements);

        pushButton_remove = new QPushButton(centralwidget);
        pushButton_remove->setObjectName("pushButton_remove");

        horizontalLayout->addWidget(pushButton_remove);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        comboBox_elements = new QComboBox(centralwidget);
        comboBox_elements->setObjectName("comboBox_elements");

        verticalLayout->addWidget(comboBox_elements);

        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setEnabled(true);

        verticalLayout->addWidget(pushButton_add);

        pushButton_background = new QPushButton(centralwidget);
        pushButton_background->setObjectName("pushButton_background");
        pushButton_background->setEnabled(false);

        verticalLayout->addWidget(pushButton_background);

        pushButton_splashinfo = new QPushButton(centralwidget);
        pushButton_splashinfo->setObjectName("pushButton_splashinfo");
        pushButton_splashinfo->setEnabled(false);

        verticalLayout->addWidget(pushButton_splashinfo);

        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setEnabled(false);

        verticalLayout->addWidget(pushButton_save);

        pushButton_apply = new QPushButton(centralwidget);
        pushButton_apply->setObjectName("pushButton_apply");
        pushButton_apply->setEnabled(false);

        verticalLayout->addWidget(pushButton_apply);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "KDE SPLASH CREATOR", nullptr));
        label_elements->setText(QCoreApplication::translate("MainWindow", "Elements:", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("MainWindow", "REMOVE ELEMENT", nullptr));
        comboBox_elements->setCurrentText(QString());
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "ADD ELEMENT", nullptr));
        pushButton_background->setText(QCoreApplication::translate("MainWindow", "BACKGROUND OPTIONS", nullptr));
        pushButton_splashinfo->setText(QCoreApplication::translate("MainWindow", "SET SPLASH INFO", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "SAVE TO", nullptr));
        pushButton_apply->setText(QCoreApplication::translate("MainWindow", "APPLY SPLASH ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
