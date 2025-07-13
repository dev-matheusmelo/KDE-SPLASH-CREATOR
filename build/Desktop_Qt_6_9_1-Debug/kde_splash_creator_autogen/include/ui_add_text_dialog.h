/********************************************************************************
** Form generated from reading UI file 'add_text_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TEXT_DIALOG_H
#define UI_ADD_TEXT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_text_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_text;
    QLabel *label_color;
    QPushButton *pushButton_color;
    QLabel *label;
    QFontComboBox *fontComboBox;
    QLabel *label_font;
    QSpinBox *spinBox_fontsize;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_X;
    QSpinBox *spinBox_Y;
    QPushButton *pushButton_save;

    void setupUi(QDialog *add_text_dialog)
    {
        if (add_text_dialog->objectName().isEmpty())
            add_text_dialog->setObjectName("add_text_dialog");
        add_text_dialog->setEnabled(true);
        add_text_dialog->resize(440, 331);
        verticalLayout = new QVBoxLayout(add_text_dialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lineEdit_text = new QLineEdit(add_text_dialog);
        lineEdit_text->setObjectName("lineEdit_text");

        verticalLayout->addWidget(lineEdit_text);

        label_color = new QLabel(add_text_dialog);
        label_color->setObjectName("label_color");

        verticalLayout->addWidget(label_color);

        pushButton_color = new QPushButton(add_text_dialog);
        pushButton_color->setObjectName("pushButton_color");

        verticalLayout->addWidget(pushButton_color);

        label = new QLabel(add_text_dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        fontComboBox = new QFontComboBox(add_text_dialog);
        fontComboBox->setObjectName("fontComboBox");

        verticalLayout->addWidget(fontComboBox);

        label_font = new QLabel(add_text_dialog);
        label_font->setObjectName("label_font");

        verticalLayout->addWidget(label_font);

        spinBox_fontsize = new QSpinBox(add_text_dialog);
        spinBox_fontsize->setObjectName("spinBox_fontsize");
        spinBox_fontsize->setMaximum(9999);
        spinBox_fontsize->setValue(36);

        verticalLayout->addWidget(spinBox_fontsize);

        label_3 = new QLabel(add_text_dialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        comboBox = new QComboBox(add_text_dialog);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        spinBox_X = new QSpinBox(add_text_dialog);
        spinBox_X->setObjectName("spinBox_X");
        spinBox_X->setEnabled(false);
        spinBox_X->setMaximum(999999);

        horizontalLayout->addWidget(spinBox_X);

        spinBox_Y = new QSpinBox(add_text_dialog);
        spinBox_Y->setObjectName("spinBox_Y");
        spinBox_Y->setEnabled(false);
        spinBox_Y->setMaximum(999999);

        horizontalLayout->addWidget(spinBox_Y);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_save = new QPushButton(add_text_dialog);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setEnabled(false);

        verticalLayout->addWidget(pushButton_save);


        retranslateUi(add_text_dialog);

        QMetaObject::connectSlotsByName(add_text_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_text_dialog)
    {
        add_text_dialog->setWindowTitle(QCoreApplication::translate("add_text_dialog", "Add Text Window", nullptr));
        lineEdit_text->setText(QCoreApplication::translate("add_text_dialog", "Your text", nullptr));
        label_color->setText(QCoreApplication::translate("add_text_dialog", "Color:", nullptr));
        pushButton_color->setText(QCoreApplication::translate("add_text_dialog", "Text color", nullptr));
        label->setText(QCoreApplication::translate("add_text_dialog", "Font:", nullptr));
        label_font->setText(QCoreApplication::translate("add_text_dialog", "Font size:", nullptr));
        label_3->setText(QCoreApplication::translate("add_text_dialog", "Position:", nullptr));
        spinBox_X->setPrefix(QCoreApplication::translate("add_text_dialog", "x:", nullptr));
        spinBox_Y->setPrefix(QCoreApplication::translate("add_text_dialog", "y:", nullptr));
        pushButton_save->setText(QCoreApplication::translate("add_text_dialog", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_text_dialog: public Ui_add_text_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TEXT_DIALOG_H
