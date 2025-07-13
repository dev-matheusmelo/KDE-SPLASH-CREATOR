/********************************************************************************
** Form generated from reading UI file 'add_image_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_IMAGE_DIALOG_H
#define UI_ADD_IMAGE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_item_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QSpinBox *spinBox_X;
    QSpinBox *spinBox_Y;
    QLabel *label_2;
    QSpinBox *spinBox_width;
    QLabel *label_3;
    QSpinBox *spinBox_height;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *add_item_dialog)
    {
        if (add_item_dialog->objectName().isEmpty())
            add_item_dialog->setObjectName("add_item_dialog");
        add_item_dialog->resize(516, 278);
        verticalLayout = new QVBoxLayout(add_item_dialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(add_item_dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton_3 = new QPushButton(add_item_dialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(true);

        verticalLayout->addWidget(pushButton_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox = new QCheckBox(add_item_dialog);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(true);

        horizontalLayout->addWidget(checkBox);

        spinBox_X = new QSpinBox(add_item_dialog);
        spinBox_X->setObjectName("spinBox_X");
        spinBox_X->setEnabled(false);
        spinBox_X->setMaximum(99999999);

        horizontalLayout->addWidget(spinBox_X);

        spinBox_Y = new QSpinBox(add_item_dialog);
        spinBox_Y->setObjectName("spinBox_Y");
        spinBox_Y->setEnabled(false);
        spinBox_Y->setMaximum(99999999);

        horizontalLayout->addWidget(spinBox_Y);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(add_item_dialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        spinBox_width = new QSpinBox(add_item_dialog);
        spinBox_width->setObjectName("spinBox_width");
        spinBox_width->setMaximum(999999999);
        spinBox_width->setValue(640);

        verticalLayout->addWidget(spinBox_width);

        label_3 = new QLabel(add_item_dialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        spinBox_height = new QSpinBox(add_item_dialog);
        spinBox_height->setObjectName("spinBox_height");
        spinBox_height->setMaximum(999999999);
        spinBox_height->setValue(480);

        verticalLayout->addWidget(spinBox_height);

        pushButton_2 = new QPushButton(add_item_dialog);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(add_item_dialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(add_item_dialog);

        QMetaObject::connectSlotsByName(add_item_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_item_dialog)
    {
        add_item_dialog->setWindowTitle(QCoreApplication::translate("add_item_dialog", "Add Image Window", nullptr));
        label->setText(QCoreApplication::translate("add_item_dialog", "Image:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("add_item_dialog", "ADD IMAGE", nullptr));
        checkBox->setText(QCoreApplication::translate("add_item_dialog", "Centered image", nullptr));
        spinBox_X->setPrefix(QCoreApplication::translate("add_item_dialog", "x:", nullptr));
        spinBox_Y->setPrefix(QCoreApplication::translate("add_item_dialog", "y:", nullptr));
        label_2->setText(QCoreApplication::translate("add_item_dialog", "Width:", nullptr));
        label_3->setText(QCoreApplication::translate("add_item_dialog", "Height:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add_item_dialog", "CANCEL", nullptr));
        pushButton->setText(QCoreApplication::translate("add_item_dialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_item_dialog: public Ui_add_item_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_IMAGE_DIALOG_H
