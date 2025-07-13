/********************************************************************************
** Form generated from reading UI file 'add_metadata_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_METADATA_DIALOG_H
#define UI_ADD_METADATA_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_metadata_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_aut_name;
    QLineEdit *lineEdit_aut_email;
    QLineEdit *lineEdit_splash_name;
    QTextEdit *textEdit_splash_desc;
    QPushButton *pushButton_save;

    void setupUi(QDialog *add_metadata_dialog)
    {
        if (add_metadata_dialog->objectName().isEmpty())
            add_metadata_dialog->setObjectName("add_metadata_dialog");
        add_metadata_dialog->resize(384, 241);
        verticalLayout = new QVBoxLayout(add_metadata_dialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lineEdit_aut_name = new QLineEdit(add_metadata_dialog);
        lineEdit_aut_name->setObjectName("lineEdit_aut_name");

        verticalLayout->addWidget(lineEdit_aut_name);

        lineEdit_aut_email = new QLineEdit(add_metadata_dialog);
        lineEdit_aut_email->setObjectName("lineEdit_aut_email");

        verticalLayout->addWidget(lineEdit_aut_email);

        lineEdit_splash_name = new QLineEdit(add_metadata_dialog);
        lineEdit_splash_name->setObjectName("lineEdit_splash_name");

        verticalLayout->addWidget(lineEdit_splash_name);

        textEdit_splash_desc = new QTextEdit(add_metadata_dialog);
        textEdit_splash_desc->setObjectName("textEdit_splash_desc");

        verticalLayout->addWidget(textEdit_splash_desc);

        pushButton_save = new QPushButton(add_metadata_dialog);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setEnabled(true);

        verticalLayout->addWidget(pushButton_save);


        retranslateUi(add_metadata_dialog);

        QMetaObject::connectSlotsByName(add_metadata_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_metadata_dialog)
    {
        add_metadata_dialog->setWindowTitle(QCoreApplication::translate("add_metadata_dialog", "SPLASH INFO ", nullptr));
        lineEdit_aut_name->setText(QCoreApplication::translate("add_metadata_dialog", "AUTHOR NAME", nullptr));
        lineEdit_aut_email->setText(QCoreApplication::translate("add_metadata_dialog", "AUTHOR EMAIL", nullptr));
        lineEdit_splash_name->setText(QCoreApplication::translate("add_metadata_dialog", "SPLASH NAME", nullptr));
        textEdit_splash_desc->setHtml(QCoreApplication::translate("add_metadata_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SPLASH DESCRIPTION</p></body></html>", nullptr));
        pushButton_save->setText(QCoreApplication::translate("add_metadata_dialog", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_metadata_dialog: public Ui_add_metadata_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_METADATA_DIALOG_H
