/********************************************************************************
** Form generated from reading UI file 'add_background_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_BACKGROUND_DIALOG_H
#define UI_ADD_BACKGROUND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_background_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *pushButton_color;
    QPushButton *pushButton_save;

    void setupUi(QDialog *add_background_dialog)
    {
        if (add_background_dialog->objectName().isEmpty())
            add_background_dialog->setObjectName("add_background_dialog");
        add_background_dialog->resize(344, 103);
        verticalLayout = new QVBoxLayout(add_background_dialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(add_background_dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton_color = new QPushButton(add_background_dialog);
        pushButton_color->setObjectName("pushButton_color");

        verticalLayout->addWidget(pushButton_color);

        pushButton_save = new QPushButton(add_background_dialog);
        pushButton_save->setObjectName("pushButton_save");

        verticalLayout->addWidget(pushButton_save);


        retranslateUi(add_background_dialog);

        QMetaObject::connectSlotsByName(add_background_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_background_dialog)
    {
        add_background_dialog->setWindowTitle(QCoreApplication::translate("add_background_dialog", "Set a background color", nullptr));
        label->setText(QCoreApplication::translate("add_background_dialog", "Color:", nullptr));
        pushButton_color->setText(QCoreApplication::translate("add_background_dialog", "CHOOSE COLOR", nullptr));
        pushButton_save->setText(QCoreApplication::translate("add_background_dialog", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_background_dialog: public Ui_add_background_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_BACKGROUND_DIALOG_H
