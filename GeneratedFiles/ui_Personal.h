/********************************************************************************
** Form generated from reading UI file 'Personal.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONAL_H
#define UI_PERSONAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowPersonal
{
public:
    QWidget *centralwidget;
    QFrame *buttonFram;
    QVBoxLayout *verticalLayout_4;
    QPushButton *accTaskButton;
    QPushButton *issTaskButton;
    QPushButton *topUpButoon;
    QPushButton *updateInformationButton;
    QPushButton *changePasswordButton;
    QFrame *infoFram;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLabel *creditsLabel;
    QLabel *memberTypeLabel;
    QLabel *balanceLabel;
    QLabel *certificateLabel;
    QLabel *usernameDisplay;
    QLabel *creditsDisplay;
    QLabel *memberTypeDisplay;
    QLabel *balanceDisplay;
    QLabel *certificateDisplay;
    QLabel *telephoneLabel;
    QLabel *telephoneDisplay;
    QPushButton *refreshButton_2;
    QPushButton *logOutButton;
    QFrame *frame_2;

    void setupUi(QMainWindow *MainWindowPersonal)
    {
        if (MainWindowPersonal->objectName().isEmpty())
            MainWindowPersonal->setObjectName(QString::fromUtf8("MainWindowPersonal"));
        MainWindowPersonal->resize(1920, 1080);
        centralwidget = new QWidget(MainWindowPersonal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda2.jpg);"));
        buttonFram = new QFrame(centralwidget);
        buttonFram->setObjectName(QString::fromUtf8("buttonFram"));
        buttonFram->setGeometry(QRect(480, 520, 341, 431));
        buttonFram->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout_4 = new QVBoxLayout(buttonFram);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        accTaskButton = new QPushButton(buttonFram);
        accTaskButton->setObjectName(QString::fromUtf8("accTaskButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        accTaskButton->setFont(font);
        accTaskButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        accTaskButton->setFlat(true);

        verticalLayout_4->addWidget(accTaskButton);

        issTaskButton = new QPushButton(buttonFram);
        issTaskButton->setObjectName(QString::fromUtf8("issTaskButton"));
        issTaskButton->setFont(font);
        issTaskButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        issTaskButton->setFlat(true);

        verticalLayout_4->addWidget(issTaskButton);

        topUpButoon = new QPushButton(buttonFram);
        topUpButoon->setObjectName(QString::fromUtf8("topUpButoon"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        topUpButoon->setFont(font1);
        topUpButoon->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        topUpButoon->setFlat(true);

        verticalLayout_4->addWidget(topUpButoon);

        updateInformationButton = new QPushButton(buttonFram);
        updateInformationButton->setObjectName(QString::fromUtf8("updateInformationButton"));
        updateInformationButton->setFont(font1);
        updateInformationButton->setContextMenuPolicy(Qt::ActionsContextMenu);
        updateInformationButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        updateInformationButton->setFlat(true);

        verticalLayout_4->addWidget(updateInformationButton);

        changePasswordButton = new QPushButton(buttonFram);
        changePasswordButton->setObjectName(QString::fromUtf8("changePasswordButton"));
        changePasswordButton->setFont(font);
        changePasswordButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        changePasswordButton->setFlat(true);

        verticalLayout_4->addWidget(changePasswordButton);

        infoFram = new QFrame(centralwidget);
        infoFram->setObjectName(QString::fromUtf8("infoFram"));
        infoFram->setGeometry(QRect(150, 90, 1031, 411));
        infoFram->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        formLayout = new QFormLayout(infoFram);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(30);
        usernameLabel = new QLabel(infoFram);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setFont(font);
        usernameLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 85, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        creditsLabel = new QLabel(infoFram);
        creditsLabel->setObjectName(QString::fromUtf8("creditsLabel"));
        creditsLabel->setFont(font);
        creditsLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 85, 255);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, creditsLabel);

        memberTypeLabel = new QLabel(infoFram);
        memberTypeLabel->setObjectName(QString::fromUtf8("memberTypeLabel"));
        memberTypeLabel->setFont(font);
        memberTypeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 85, 255);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, memberTypeLabel);

        balanceLabel = new QLabel(infoFram);
        balanceLabel->setObjectName(QString::fromUtf8("balanceLabel"));
        balanceLabel->setFont(font);
        balanceLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 85, 255);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, balanceLabel);

        certificateLabel = new QLabel(infoFram);
        certificateLabel->setObjectName(QString::fromUtf8("certificateLabel"));
        certificateLabel->setFont(font);
        certificateLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 85, 255);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, certificateLabel);

        usernameDisplay = new QLabel(infoFram);
        usernameDisplay->setObjectName(QString::fromUtf8("usernameDisplay"));
        usernameDisplay->setFont(font);
        usernameDisplay->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);"));
        usernameDisplay->setFrameShape(QFrame::NoFrame);
        usernameDisplay->setFrameShadow(QFrame::Plain);

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameDisplay);

        creditsDisplay = new QLabel(infoFram);
        creditsDisplay->setObjectName(QString::fromUtf8("creditsDisplay"));
        creditsDisplay->setFont(font);
        creditsDisplay->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, creditsDisplay);

        memberTypeDisplay = new QLabel(infoFram);
        memberTypeDisplay->setObjectName(QString::fromUtf8("memberTypeDisplay"));
        memberTypeDisplay->setFont(font);
        memberTypeDisplay->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, memberTypeDisplay);

        balanceDisplay = new QLabel(infoFram);
        balanceDisplay->setObjectName(QString::fromUtf8("balanceDisplay"));
        balanceDisplay->setFont(font);
        balanceDisplay->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, balanceDisplay);

        certificateDisplay = new QLabel(infoFram);
        certificateDisplay->setObjectName(QString::fromUtf8("certificateDisplay"));
        certificateDisplay->setFont(font);
        certificateDisplay->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, certificateDisplay);

        telephoneLabel = new QLabel(infoFram);
        telephoneLabel->setObjectName(QString::fromUtf8("telephoneLabel"));
        telephoneLabel->setFont(font);
        telephoneLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 85, 255);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, telephoneLabel);

        telephoneDisplay = new QLabel(infoFram);
        telephoneDisplay->setObjectName(QString::fromUtf8("telephoneDisplay"));
        telephoneDisplay->setFont(font);
        telephoneDisplay->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, telephoneDisplay);

        refreshButton_2 = new QPushButton(centralwidget);
        refreshButton_2->setObjectName(QString::fromUtf8("refreshButton_2"));
        refreshButton_2->setGeometry(QRect(190, 600, 80, 80));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        refreshButton_2->setFont(font2);
        refreshButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_clicked.png);};"));
        logOutButton = new QPushButton(centralwidget);
        logOutButton->setObjectName(QString::fromUtf8("logOutButton"));
        logOutButton->setGeometry(QRect(190, 800, 80, 80));
        logOutButton->setFont(font1);
        logOutButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/logout_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/logout_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/logout_clicked.png);};"));
        logOutButton->setFlat(false);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(1570, 20, 333, 262));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        MainWindowPersonal->setCentralWidget(centralwidget);

        retranslateUi(MainWindowPersonal);
        QObject::connect(changePasswordButton, SIGNAL(clicked()), MainWindowPersonal, SLOT(changePasswordButtonClick()));
        QObject::connect(logOutButton, SIGNAL(clicked()), MainWindowPersonal, SLOT(logOutButtonClick()));
        QObject::connect(topUpButoon, SIGNAL(clicked()), MainWindowPersonal, SLOT(topUpButtonClick()));
        QObject::connect(updateInformationButton, SIGNAL(clicked()), MainWindowPersonal, SLOT(updateInfoButtonClick()));
        QObject::connect(refreshButton_2, SIGNAL(clicked()), MainWindowPersonal, SLOT(refreshButtonClick()));
        QObject::connect(accTaskButton, SIGNAL(clicked()), MainWindowPersonal, SLOT(accTaskButtonClick()));
        QObject::connect(issTaskButton, SIGNAL(clicked()), MainWindowPersonal, SLOT(issTaskButtonClick()));

        QMetaObject::connectSlotsByName(MainWindowPersonal);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowPersonal)
    {
        MainWindowPersonal->setWindowTitle(QCoreApplication::translate("MainWindowPersonal", "CrowdSourcing", nullptr));
        accTaskButton->setText(QCoreApplication::translate("MainWindowPersonal", "Accept/ed Tasks", nullptr));
        issTaskButton->setText(QCoreApplication::translate("MainWindowPersonal", "Issue/d Tasks", nullptr));
        topUpButoon->setText(QCoreApplication::translate("MainWindowPersonal", "Top up", nullptr));
        updateInformationButton->setText(QCoreApplication::translate("MainWindowPersonal", "Update info", nullptr));
        changePasswordButton->setText(QCoreApplication::translate("MainWindowPersonal", "Change password", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MainWindowPersonal", "<html><head/><body><p><span style=\" color:#aa00ff;\">Username:</span></p></body></html>", nullptr));
        creditsLabel->setText(QCoreApplication::translate("MainWindowPersonal", "<html><head/><body><p><span style=\" color:#aa00ff;\">Credits:</span></p></body></html>", nullptr));
        memberTypeLabel->setText(QCoreApplication::translate("MainWindowPersonal", "<html><head/><body><p><span style=\" color:#aa00ff;\">Member type:</span></p></body></html>", nullptr));
        balanceLabel->setText(QCoreApplication::translate("MainWindowPersonal", "<html><head/><body><p><span style=\" color:#aa00ff;\">Balance:</span></p></body></html>", nullptr));
        certificateLabel->setText(QCoreApplication::translate("MainWindowPersonal", "<html><head/><body><p><span style=\" color:#aa00ff;\">Certificate:</span></p></body></html>", nullptr));
        usernameDisplay->setText(QString());
        creditsDisplay->setText(QString());
        memberTypeDisplay->setText(QString());
        balanceDisplay->setText(QString());
        certificateDisplay->setText(QString());
        telephoneLabel->setText(QCoreApplication::translate("MainWindowPersonal", "<html><head/><body><p><span style=\" color:#aa00ff;\">Telephone:</span></p></body></html>", nullptr));
        telephoneDisplay->setText(QString());
        refreshButton_2->setText(QString());
        logOutButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowPersonal: public Ui_MainWindowPersonal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONAL_H
