/********************************************************************************
** Form generated from reading UI file 'ChangePassword.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogChangePassword
{
public:
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *oldPwLineEdit;
    QLineEdit *newPwLineEdit;
    QLineEdit *newPwAgainLineEdit;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *noticeLabel;

    void setupUi(QDialog *DialogChangePassword)
    {
        if (DialogChangePassword->objectName().isEmpty())
            DialogChangePassword->setObjectName(QString::fromUtf8("DialogChangePassword"));
        DialogChangePassword->resize(800, 600);
        DialogChangePassword->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda3.jpg);\n"
""));
        formFrame = new QFrame(DialogChangePassword);
        formFrame->setObjectName(QString::fromUtf8("formFrame"));
        formFrame->setGeometry(QRect(20, 90, 551, 231));
        formFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(50);
        label = new QLabel(formFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        oldPwLineEdit = new QLineEdit(formFrame);
        oldPwLineEdit->setObjectName(QString::fromUtf8("oldPwLineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        oldPwLineEdit->setFont(font1);
        oldPwLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(0, QFormLayout::FieldRole, oldPwLineEdit);

        newPwLineEdit = new QLineEdit(formFrame);
        newPwLineEdit->setObjectName(QString::fromUtf8("newPwLineEdit"));
        newPwLineEdit->setFont(font1);
        newPwLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(1, QFormLayout::FieldRole, newPwLineEdit);

        newPwAgainLineEdit = new QLineEdit(formFrame);
        newPwAgainLineEdit->setObjectName(QString::fromUtf8("newPwAgainLineEdit"));
        newPwAgainLineEdit->setFont(font1);
        newPwAgainLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(2, QFormLayout::FieldRole, newPwAgainLineEdit);

        horizontalFrame = new QFrame(DialogChangePassword);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(70, 370, 371, 80));
        horizontalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(80);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okButton = new QPushButton(horizontalFrame);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        okButton->setFont(font2);
        okButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
"color: rgb(85, 85, 0);\n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(248, 255, 250),stop: 0.3 rgb(255, 170, 0),stop: 1 rgb(255, 170, 127));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;\n"
"}  \n"
"QPushButton:hover{\n"
"color: rgb(255, 250, 247);\n"
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
"color: rgb(255, 251, 229);\n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,23"
                        "6,241),   \n"
"							stop: 0.3 rgb(38,190,255),  \n"
"							  stop: 1 rgb(33,184,240));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;  \n"
"};"));
        okButton->setFlat(true);

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(horizontalFrame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
"color: rgb(85, 85, 0);\n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(248, 255, 250),stop: 0.3 rgb(255, 170, 0),stop: 1 rgb(255, 170, 127));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;\n"
"}  \n"
"QPushButton:hover{\n"
"color: rgb(255, 250, 247);\n"
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
"color: rgb(255, 251, 229);\n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,23"
                        "6,241),   \n"
"							stop: 0.3 rgb(38,190,255),  \n"
"							  stop: 1 rgb(33,184,240));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;  \n"
"};"));
        cancelButton->setFlat(true);

        horizontalLayout->addWidget(cancelButton);

        noticeLabel = new QLabel(DialogChangePassword);
        noticeLabel->setObjectName(QString::fromUtf8("noticeLabel"));
        noticeLabel->setGeometry(QRect(50, 470, 441, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        noticeLabel->setFont(font3);
        noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 0, 0);"));

        retranslateUi(DialogChangePassword);
        QObject::connect(okButton, SIGNAL(clicked()), DialogChangePassword, SLOT(OkClick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DialogChangePassword, SLOT(CancelClick()));

        QMetaObject::connectSlotsByName(DialogChangePassword);
    } // setupUi

    void retranslateUi(QDialog *DialogChangePassword)
    {
        DialogChangePassword->setWindowTitle(QCoreApplication::translate("DialogChangePassword", "ChangePassword", nullptr));
        label->setText(QCoreApplication::translate("DialogChangePassword", "<html><head/><body><p><span style=\" color:#00557f;\">Old password</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogChangePassword", "<html><head/><body><p><span style=\" color:#00557f;\">New password</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("DialogChangePassword", "<html><head/><body><p><span style=\" color:#00557f;\">New password again</span></p></body></html>", nullptr));
        oldPwLineEdit->setText(QString());
        okButton->setText(QCoreApplication::translate("DialogChangePassword", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("DialogChangePassword", "Cancel", nullptr));
        noticeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogChangePassword: public Ui_DialogChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
