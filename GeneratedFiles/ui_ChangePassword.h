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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogChangePassword
{
public:
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton_2;
    QPushButton *okButton_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        Dialog->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda3.jpg);\n"
""));
        formFrame = new QFrame(Dialog);
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

        lineEdit = new QLineEdit(formFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit->setFont(font1);
        lineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formFrame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formFrame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font1);
        lineEdit_3->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        verticalFrame = new QFrame(Dialog);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(180, 360, 251, 131));
        verticalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        okButton_2 = new QPushButton(verticalFrame);
        okButton_2->setObjectName(QString::fromUtf8("okButton_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        okButton_2->setFont(font2);
        okButton_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        okButton_2->setFlat(true);

        verticalLayout->addWidget(okButton_2);

        okButton_3 = new QPushButton(verticalFrame);
        okButton_3->setObjectName(QString::fromUtf8("okButton_3"));
        okButton_3->setFont(font2);
        okButton_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(85, 85, 127);"));
        okButton_3->setFlat(true);

        verticalLayout->addWidget(okButton_3);


        retranslateUi(Dialog);
        QObject::connect(okButton_2, SIGNAL(clicked()), Dialog, SLOT(OkClick()));
        QObject::connect(okButton_3, SIGNAL(clicked()), Dialog, SLOT(CancelClick()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "ChangePassword", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" color:#00557f;\">Old password</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" color:#00557f;\">New password</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" color:#00557f;\">New password again</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        okButton_2->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        okButton_3->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog : public Ui_DialogChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
