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
#include <QtWidgets/QHBoxLayout>
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
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QFrame *frame;

    void setupUi(QMainWindow *CrowdSourcingClass)
    {
        if (CrowdSourcingClass->objectName().isEmpty())
            CrowdSourcingClass->setObjectName(QString::fromUtf8("CrowdSourcingClass"));
        CrowdSourcingClass->resize(1920, 1080);
        CrowdSourcingClass->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        CrowdSourcingClass->setAnimated(true);
        centralWidget = new QWidget(CrowdSourcingClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda5.jpg);"));
        verticalFrame_2 = new QFrame(centralWidget);
        verticalFrame_2->setObjectName(QString::fromUtf8("verticalFrame_2"));
        verticalFrame_2->setGeometry(QRect(100, 360, 371, 151));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(24);
        font.setItalic(true);
        usernameInput->setFont(font);
        usernameInput->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        usernameInput->setClearButtonEnabled(true);

        verticalLayout_2->addWidget(usernameInput);

        passwordInput = new QLineEdit(verticalFrame_2);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        sizePolicy.setHeightForWidth(passwordInput->sizePolicy().hasHeightForWidth());
        passwordInput->setSizePolicy(sizePolicy);
        passwordInput->setFont(font);
        passwordInput->setAutoFillBackground(false);
        passwordInput->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        passwordInput->setEchoMode(QLineEdit::Password);
        passwordInput->setClearButtonEnabled(true);

        verticalLayout_2->addWidget(passwordInput);

        horizontalFrame = new QFrame(centralWidget);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(130, 530, 311, 81));
        horizontalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loginButton = new QPushButton(horizontalFrame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        loginButton->setIconSize(QSize(20, 20));
        loginButton->setAutoDefault(false);
        loginButton->setFlat(true);

        horizontalLayout->addWidget(loginButton);

        registerButton = new QPushButton(horizontalFrame);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        sizePolicy.setHeightForWidth(registerButton->sizePolicy().hasHeightForWidth());
        registerButton->setSizePolicy(sizePolicy);
        registerButton->setFont(font1);
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
        registerButton->setIconSize(QSize(20, 20));
        registerButton->setAutoDefault(false);
        registerButton->setFlat(true);

        horizontalLayout->addWidget(registerButton);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1540, 780, 333, 262));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        CrowdSourcingClass->setCentralWidget(centralWidget);

        retranslateUi(CrowdSourcingClass);
        QObject::connect(loginButton, SIGNAL(clicked()), CrowdSourcingClass, SLOT(loginButtonClick()));
        QObject::connect(registerButton, SIGNAL(clicked()), CrowdSourcingClass, SLOT(registerButtonClick()));

        loginButton->setDefault(false);


        QMetaObject::connectSlotsByName(CrowdSourcingClass);
    } // setupUi

    void retranslateUi(QMainWindow *CrowdSourcingClass)
    {
        CrowdSourcingClass->setWindowTitle(QCoreApplication::translate("CrowdSourcingClass", "Login&Register", nullptr));
        usernameInput->setText(QString());
        usernameInput->setPlaceholderText(QCoreApplication::translate("CrowdSourcingClass", "Username", nullptr));
        passwordInput->setText(QString());
        passwordInput->setPlaceholderText(QCoreApplication::translate("CrowdSourcingClass", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("CrowdSourcingClass", "Log in", nullptr));
        registerButton->setText(QCoreApplication::translate("CrowdSourcingClass", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrowdSourcingClass: public Ui_CrowdSourcingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROWDSOURCING_H
