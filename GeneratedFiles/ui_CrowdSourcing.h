/********************************************************************************
** Form generated from reading UI file 'CrowdSourcing.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROWDSOURCING_H
#define UI_CROWDSOURCING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrowdSourcingClass
{
public:
    QWidget *centralWidget;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;

    void setupUi(QMainWindow *CrowdSourcingClass)
    {
        if (CrowdSourcingClass->objectName().isEmpty())
            CrowdSourcingClass->setObjectName(QString::fromUtf8("CrowdSourcingClass"));
        CrowdSourcingClass->resize(1920, 1080);
        CrowdSourcingClass->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        CrowdSourcingClass->setAnimated(true);
        centralWidget = new QWidget(CrowdSourcingClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda1.jpg);"));
        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(120, 620, 111, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Gabriola"));
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        loginButton->setIconSize(QSize(20, 20));
        loginButton->setAutoDefault(false);
        loginButton->setFlat(true);
        registerButton = new QPushButton(centralWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(300, 620, 120, 51));
        registerButton->setFont(font);
        registerButton->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        registerButton->setIconSize(QSize(20, 20));
        registerButton->setAutoDefault(false);
        registerButton->setFlat(true);
        usernameInput = new QLineEdit(centralWidget);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(120, 490, 301, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(24);
        font1.setItalic(true);
        usernameInput->setFont(font1);
        usernameInput->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        usernameInput->setClearButtonEnabled(true);
        passwordInput = new QLineEdit(centralWidget);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(120, 560, 301, 51));
        passwordInput->setFont(font1);
        passwordInput->setAutoFillBackground(false);
        passwordInput->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        passwordInput->setEchoMode(QLineEdit::Password);
        passwordInput->setClearButtonEnabled(true);
        CrowdSourcingClass->setCentralWidget(centralWidget);

        retranslateUi(CrowdSourcingClass);
        QObject::connect(loginButton, SIGNAL(clicked()), CrowdSourcingClass, SLOT(loginButtonClick()));

        loginButton->setDefault(false);


        QMetaObject::connectSlotsByName(CrowdSourcingClass);
    } // setupUi

    void retranslateUi(QMainWindow *CrowdSourcingClass)
    {
        CrowdSourcingClass->setWindowTitle(QCoreApplication::translate("CrowdSourcingClass", "CrowdSourcing", nullptr));
        loginButton->setText(QCoreApplication::translate("CrowdSourcingClass", "Log  in", nullptr));
        registerButton->setText(QCoreApplication::translate("CrowdSourcingClass", "Register", nullptr));
        usernameInput->setText(QString());
        usernameInput->setPlaceholderText(QCoreApplication::translate("CrowdSourcingClass", "Username", nullptr));
        passwordInput->setText(QString());
        passwordInput->setPlaceholderText(QCoreApplication::translate("CrowdSourcingClass", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrowdSourcingClass: public Ui_CrowdSourcingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROWDSOURCING_H
