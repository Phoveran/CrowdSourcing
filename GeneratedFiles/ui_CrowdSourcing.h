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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrowdSourcingClass
{
public:
    QWidget *centralWidget;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_2;
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
        verticalFrame = new QFrame(centralWidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(170, 540, 221, 131));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy);
        verticalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loginButton = new QPushButton(verticalFrame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(85, 0, 0);"));
        loginButton->setIconSize(QSize(20, 20));
        loginButton->setAutoDefault(false);
        loginButton->setFlat(true);

        verticalLayout->addWidget(loginButton);

        registerButton = new QPushButton(verticalFrame);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        sizePolicy.setHeightForWidth(registerButton->sizePolicy().hasHeightForWidth());
        registerButton->setSizePolicy(sizePolicy);
        registerButton->setFont(font);
        registerButton->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(85, 0, 0);"));
        registerButton->setIconSize(QSize(20, 20));
        registerButton->setAutoDefault(false);
        registerButton->setFlat(true);

        verticalLayout->addWidget(registerButton);

        verticalFrame_2 = new QFrame(centralWidget);
        verticalFrame_2->setObjectName(QString::fromUtf8("verticalFrame_2"));
        verticalFrame_2->setGeometry(QRect(100, 370, 371, 151));
        sizePolicy.setHeightForWidth(verticalFrame_2->sizePolicy().hasHeightForWidth());
        verticalFrame_2->setSizePolicy(sizePolicy);
        verticalFrame_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout_2 = new QVBoxLayout(verticalFrame_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        usernameInput = new QLineEdit(verticalFrame_2);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        sizePolicy.setHeightForWidth(usernameInput->sizePolicy().hasHeightForWidth());
        usernameInput->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(24);
        font1.setItalic(true);
        usernameInput->setFont(font1);
        usernameInput->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        usernameInput->setClearButtonEnabled(true);

        verticalLayout_2->addWidget(usernameInput);

        passwordInput = new QLineEdit(verticalFrame_2);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        sizePolicy.setHeightForWidth(passwordInput->sizePolicy().hasHeightForWidth());
        passwordInput->setSizePolicy(sizePolicy);
        passwordInput->setFont(font1);
        passwordInput->setAutoFillBackground(false);
        passwordInput->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        passwordInput->setEchoMode(QLineEdit::Password);
        passwordInput->setClearButtonEnabled(true);

        verticalLayout_2->addWidget(passwordInput);

        CrowdSourcingClass->setCentralWidget(centralWidget);

        retranslateUi(CrowdSourcingClass);
        QObject::connect(loginButton, SIGNAL(clicked()), CrowdSourcingClass, SLOT(loginButtonClick()));
        QObject::connect(registerButton, SIGNAL(clicked()), CrowdSourcingClass, SLOT(registerButtonClick()));

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
