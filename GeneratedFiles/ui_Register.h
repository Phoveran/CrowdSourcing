/********************************************************************************
** Form generated from reading UI file 'Register.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogRegister
{
public:
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        Dialog->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda4.jpg);\n"
""));
        formFrame = new QFrame(Dialog);
        formFrame->setObjectName(QString::fromUtf8("formFrame"));
        formFrame->setGeometry(QRect(60, 130, 511, 221));
        formFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(50);
        label = new QLabel(formFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 127);"));
        lineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formFrame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 127);"));
        lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(formFrame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        horizontalFrame = new QFrame(Dialog);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(90, 410, 441, 80));
        horizontalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(horizontalFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalFrame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(85, 85, 127);"));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(RegisterClick()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Dialog, SLOT(CancelClick()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Register", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" color:#55007f;\">Password:</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" color:#55007f;\">Password again:</span></p></body></html>", nullptr));
        lineEdit_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" color:#55007f;\">Certification:</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "CET4", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "CET6", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog", "TEM4", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Dialog", "TEM8", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Dialog", "IELTS6", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Dialog", "IELTS7", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Dialog", "TOFEL95", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Dialog", "TOFEL105", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("Dialog", "TOFEL110", nullptr));

        pushButton->setText(QCoreApplication::translate("Dialog", "Register", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_DialogRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
