/********************************************************************************
** Form generated from reading UI file 'add_animatedimage_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ANIMATEDIMAGE_DIALOG_H
#define UI_ADD_ANIMATEDIMAGE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_animatedimage_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QSpinBox *spinBox_width;
    QLabel *label_4;
    QSpinBox *spinBox_height;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_2;

    void setupUi(QDialog *add_animatedimage_dialog)
    {
        if (add_animatedimage_dialog->objectName().isEmpty())
            add_animatedimage_dialog->setObjectName("add_animatedimage_dialog");
        add_animatedimage_dialog->resize(399, 269);
        verticalLayout = new QVBoxLayout(add_animatedimage_dialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(add_animatedimage_dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(add_animatedimage_dialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        label_3 = new QLabel(add_animatedimage_dialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        spinBox_width = new QSpinBox(add_animatedimage_dialog);
        spinBox_width->setObjectName("spinBox_width");
        spinBox_width->setMaximum(999999);
        spinBox_width->setValue(640);

        verticalLayout->addWidget(spinBox_width);

        label_4 = new QLabel(add_animatedimage_dialog);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        spinBox_height = new QSpinBox(add_animatedimage_dialog);
        spinBox_height->setObjectName("spinBox_height");
        spinBox_height->setMaximum(9999999);
        spinBox_height->setValue(480);

        verticalLayout->addWidget(spinBox_height);

        label_2 = new QLabel(add_animatedimage_dialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(add_animatedimage_dialog);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMinimum(0.500000000000000);
        doubleSpinBox->setMaximum(2.000000000000000);
        doubleSpinBox->setSingleStep(0.500000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        verticalLayout->addWidget(doubleSpinBox);

        pushButton_2 = new QPushButton(add_animatedimage_dialog);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(add_animatedimage_dialog);

        QMetaObject::connectSlotsByName(add_animatedimage_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_animatedimage_dialog)
    {
        add_animatedimage_dialog->setWindowTitle(QCoreApplication::translate("add_animatedimage_dialog", "Add Animated Image ", nullptr));
        label->setText(QCoreApplication::translate("add_animatedimage_dialog", "File:", nullptr));
        pushButton->setText(QCoreApplication::translate("add_animatedimage_dialog", "ADD ANIMATED IMAGE (GIF)", nullptr));
        label_3->setText(QCoreApplication::translate("add_animatedimage_dialog", "Width:", nullptr));
        label_4->setText(QCoreApplication::translate("add_animatedimage_dialog", "Height:", nullptr));
        label_2->setText(QCoreApplication::translate("add_animatedimage_dialog", "Speed of image: 1x  is default, 2x is double and 0.5 is slowed", nullptr));
        doubleSpinBox->setSuffix(QString());
        pushButton_2->setText(QCoreApplication::translate("add_animatedimage_dialog", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_animatedimage_dialog: public Ui_add_animatedimage_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ANIMATEDIMAGE_DIALOG_H
