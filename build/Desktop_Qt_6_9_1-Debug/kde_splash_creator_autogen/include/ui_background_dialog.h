/********************************************************************************
** Form generated from reading UI file 'background_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKGROUND_DIALOG_H
#define UI_BACKGROUND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_background_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *background_dialog)
    {
        if (background_dialog->objectName().isEmpty())
            background_dialog->setObjectName("background_dialog");
        background_dialog->resize(344, 103);
        verticalLayout = new QVBoxLayout(background_dialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(background_dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(background_dialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(background_dialog);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(background_dialog);

        QMetaObject::connectSlotsByName(background_dialog);
    } // setupUi

    void retranslateUi(QDialog *background_dialog)
    {
        background_dialog->setWindowTitle(QCoreApplication::translate("background_dialog", "Set a background color", nullptr));
        label->setText(QCoreApplication::translate("background_dialog", "Color:", nullptr));
        pushButton->setText(QCoreApplication::translate("background_dialog", "CHOOSE COLOR", nullptr));
        pushButton_3->setText(QCoreApplication::translate("background_dialog", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class background_dialog: public Ui_background_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKGROUND_DIALOG_H
