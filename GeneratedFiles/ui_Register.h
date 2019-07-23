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
    QFrame *inputFrame;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *pwLineEdit;
    QLabel *label_2;
    QLineEdit *pwAgainLineEdit;
    QLabel *label_3;
    QComboBox *certificateBox;
    QLabel *label_4;
    QLineEdit *teleLineEdit;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerButton;
    QPushButton *cancelButton;
    QLabel *noticeLabel;

    void setupUi(QDialog *DialogRegister)
    {
        if (DialogRegister->objectName().isEmpty())
            DialogRegister->setObjectName(QString::fromUtf8("DialogRegister"));
        DialogRegister->resize(800, 600);
        DialogRegister->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda4.jpg);\n"
""));
        inputFrame = new QFrame(DialogRegister);
        inputFrame->setObjectName(QString::fromUtf8("inputFrame"));
        inputFrame->setGeometry(QRect(60, 80, 691, 241));
        inputFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        formLayout = new QFormLayout(inputFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(30);
        label = new QLabel(inputFrame);
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

        pwLineEdit = new QLineEdit(inputFrame);
        pwLineEdit->setObjectName(QString::fromUtf8("pwLineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pwLineEdit->setFont(font1);
        pwLineEdit->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(0, 0, 0);"));
        pwLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(0, QFormLayout::FieldRole, pwLineEdit);

        label_2 = new QLabel(inputFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        pwAgainLineEdit = new QLineEdit(inputFrame);
        pwAgainLineEdit->setObjectName(QString::fromUtf8("pwAgainLineEdit"));
        pwAgainLineEdit->setFont(font1);
        pwAgainLineEdit->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(0, 0, 0);"));
        pwAgainLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(1, QFormLayout::FieldRole, pwAgainLineEdit);

        label_3 = new QLabel(inputFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        certificateBox = new QComboBox(inputFrame);
        certificateBox->setObjectName(QString::fromUtf8("certificateBox"));
        certificateBox->setFont(font1);
        certificateBox->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, certificateBox);

        label_4 = new QLabel(inputFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        teleLineEdit = new QLineEdit(inputFrame);
        teleLineEdit->setObjectName(QString::fromUtf8("teleLineEdit"));
        teleLineEdit->setFont(font1);
        teleLineEdit->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(0, 0, 0);"));
        teleLineEdit->setEchoMode(QLineEdit::Normal);

        formLayout->setWidget(3, QFormLayout::FieldRole, teleLineEdit);

        buttonFrame = new QFrame(DialogRegister);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setGeometry(QRect(180, 350, 411, 80));
        buttonFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        horizontalLayout = new QHBoxLayout(buttonFrame);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        registerButton = new QPushButton(buttonFrame);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        registerButton->setFont(font2);
        registerButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
"color:rgb(85, 85, 0);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(248, 255, 250),stop: 0.3 rgb(255, 170, 0),stop: 1 rgb(255, 170, 127));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;\n"
"}  \n"
"QPushButton:hover{\n"
"color:rgb(255, 255, 255);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241),   \n"
"							stop: 0.3 rgb(37,189,252),  \n"
"							  stop: 1 rgb(32,170,240));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;  \n"
"}  \n"
"QPushButton:pressed{ \n"
"color:rgb(233, 236, 243);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226"
                        ",236,241),   \n"
"							stop: 0.3 rgb(38,190,255),  \n"
"							  stop: 1 rgb(33,184,240));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;  \n"
"};"));
        registerButton->setAutoDefault(false);
        registerButton->setFlat(true);

        horizontalLayout->addWidget(registerButton);

        cancelButton = new QPushButton(buttonFrame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
"color:rgb(85, 85, 0);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(248, 255, 250),stop: 0.3 rgb(255, 170, 0),stop: 1 rgb(255, 170, 127));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;\n"
"}  \n"
"QPushButton:hover{\n"
"color:rgb(255, 255, 255);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241),   \n"
"							stop: 0.3 rgb(37,189,252),  \n"
"							  stop: 1 rgb(32,170,240));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;  \n"
"}  \n"
"QPushButton:pressed{ \n"
"color:rgb(233, 236, 243);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226"
                        ",236,241),   \n"
"							stop: 0.3 rgb(38,190,255),  \n"
"							  stop: 1 rgb(33,184,240));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;  \n"
"};"));
        cancelButton->setAutoDefault(false);
        cancelButton->setFlat(true);

        horizontalLayout->addWidget(cancelButton);

        noticeLabel = new QLabel(DialogRegister);
        noticeLabel->setObjectName(QString::fromUtf8("noticeLabel"));
        noticeLabel->setGeometry(QRect(150, 480, 461, 41));
        noticeLabel->setFont(font);
        noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 0, 0);"));

        retranslateUi(DialogRegister);
        QObject::connect(registerButton, SIGNAL(clicked()), DialogRegister, SLOT(RegisterClick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DialogRegister, SLOT(CancelClick()));

        QMetaObject::connectSlotsByName(DialogRegister);
    } // setupUi

    void retranslateUi(QDialog *DialogRegister)
    {
        DialogRegister->setWindowTitle(QCoreApplication::translate("DialogRegister", "Register", nullptr));
        label->setText(QCoreApplication::translate("DialogRegister", "<html><head/><body><p><span style=\" color:#55007f;\">Password:</span></p></body></html>", nullptr));
        pwLineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogRegister", "<html><head/><body><p><span style=\" color:#55007f;\">Password again:</span></p></body></html>", nullptr));
        pwAgainLineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogRegister", "<html><head/><body><p><span style=\" color:#55007f;\">Certificates:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("DialogRegister", "<html><head/><body><p><span style=\" color:#55007f;\">Telephone:</span></p></body></html>", nullptr));
        teleLineEdit->setText(QString());
        registerButton->setText(QCoreApplication::translate("DialogRegister", "Register", nullptr));
        cancelButton->setText(QCoreApplication::translate("DialogRegister", "Cancel", nullptr));
        noticeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogRegister: public Ui_DialogRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
