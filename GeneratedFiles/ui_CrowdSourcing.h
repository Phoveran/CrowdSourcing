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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrowdSourcingClass
{
public:
    QWidget *centralWidget;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *CrowdSourcingClass)
    {
        if (CrowdSourcingClass->objectName().isEmpty())
            CrowdSourcingClass->setObjectName(QString::fromUtf8("CrowdSourcingClass"));
        CrowdSourcingClass->resize(1920, 1120);
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
        CrowdSourcingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CrowdSourcingClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CrowdSourcing/Resources/pictures/\351\246\226\351\241\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon);
        menu->setToolTipsVisible(false);
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CrowdSourcing/Resources/pictures/\344\270\252\344\272\272\344\270\255\345\277\203_\346\210\221\347\232\204\344\277\241\346\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_2->setIcon(icon1);
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CrowdSourcing/Resources/pictures/\344\273\273\345\212\241.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_3->setIcon(icon2);
        CrowdSourcingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CrowdSourcingClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        CrowdSourcingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());

        retranslateUi(CrowdSourcingClass);

        loginButton->setDefault(false);


        QMetaObject::connectSlotsByName(CrowdSourcingClass);
    } // setupUi

    void retranslateUi(QMainWindow *CrowdSourcingClass)
    {
        CrowdSourcingClass->setWindowTitle(QCoreApplication::translate("CrowdSourcingClass", "CrowdSourcing", nullptr));
        loginButton->setText(QCoreApplication::translate("CrowdSourcingClass", "Log  in", nullptr));
        registerButton->setText(QCoreApplication::translate("CrowdSourcingClass", "Register", nullptr));
        menu->setTitle(QCoreApplication::translate("CrowdSourcingClass", "\351\246\226\351\241\265", nullptr));
        menu_2->setTitle(QCoreApplication::translate("CrowdSourcingClass", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        menu_3->setTitle(QCoreApplication::translate("CrowdSourcingClass", "\346\237\245\347\234\213\344\273\273\345\212\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrowdSourcingClass: public Ui_CrowdSourcingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROWDSOURCING_H
