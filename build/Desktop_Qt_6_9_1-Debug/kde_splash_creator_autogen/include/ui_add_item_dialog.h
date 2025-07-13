/********************************************************************************
** Form generated from reading UI file 'add_item_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ITEM_DIALOG_H
#define UI_ADD_ITEM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_item_dialog
{
public:
    QWidget *verticalLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_size_height;
    QLineEdit *lineEdit_size_width;
    QCheckBox *checkBox_centered;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *add_item_dialog)
    {
        if (add_item_dialog->objectName().isEmpty())
            add_item_dialog->setObjectName("add_item_dialog");
        add_item_dialog->resize(400, 287);
        verticalLayoutWidget = new QWidget(add_item_dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 10, 361, 195));
        formLayout = new QFormLayout(verticalLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(100);
        formLayout->setVerticalSpacing(19);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, label);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::SpanningRole, comboBox);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::ItemRole::SpanningRole, pushButton_3);

        lineEdit_size_height = new QLineEdit(verticalLayoutWidget);
        lineEdit_size_height->setObjectName("lineEdit_size_height");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, lineEdit_size_height);

        lineEdit_size_width = new QLineEdit(verticalLayoutWidget);
        lineEdit_size_width->setObjectName("lineEdit_size_width");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, lineEdit_size_width);

        checkBox_centered = new QCheckBox(verticalLayoutWidget);
        checkBox_centered->setObjectName("checkBox_centered");
        checkBox_centered->setChecked(true);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, checkBox_centered);

        horizontalLayoutWidget = new QWidget(add_item_dialog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 220, 361, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        retranslateUi(add_item_dialog);

        QMetaObject::connectSlotsByName(add_item_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_item_dialog)
    {
        add_item_dialog->setWindowTitle(QCoreApplication::translate("add_item_dialog", "Image Element Window", nullptr));
        label->setText(QCoreApplication::translate("add_item_dialog", "Image Path:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("add_item_dialog", "ADD IMAGE", nullptr));
        lineEdit_size_height->setText(QCoreApplication::translate("add_item_dialog", "HEIGHT", nullptr));
        lineEdit_size_width->setText(QCoreApplication::translate("add_item_dialog", "WIDTH", nullptr));
        checkBox_centered->setText(QCoreApplication::translate("add_item_dialog", "Centered image", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add_item_dialog", "CANCEL", nullptr));
        pushButton->setText(QCoreApplication::translate("add_item_dialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_item_dialog: public Ui_add_item_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ITEM_DIALOG_H
