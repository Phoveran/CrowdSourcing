/********************************************************************************
** Form generated from reading UI file 'MyTransTaskOper.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTRANSTASKOPER_H
#define UI_MYTRANSTASKOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogMyTransTaskOper
{
public:
    QTabWidget *tabWidget;
    QWidget *tabInfo;
    QWidget *tabTrans;
    QTextBrowser *textBrowserOrigin;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerButton;
    QPushButton *cancelButton;
    QTextBrowser *textBrowserTrans;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *DialogMyTransTaskOper)
    {
        if (DialogMyTransTaskOper->objectName().isEmpty())
            DialogMyTransTaskOper->setObjectName(QString::fromUtf8("DialogMyTransTaskOper"));
        DialogMyTransTaskOper->resize(800, 600);
        DialogMyTransTaskOper->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda8.jpg);"));
        tabWidget = new QTabWidget(DialogMyTransTaskOper);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabInfo = new QWidget();
        tabInfo->setObjectName(QString::fromUtf8("tabInfo"));
        tabWidget->addTab(tabInfo, QString());
        tabTrans = new QWidget();
        tabTrans->setObjectName(QString::fromUtf8("tabTrans"));
        textBrowserOrigin = new QTextBrowser(tabTrans);
        textBrowserOrigin->setObjectName(QString::fromUtf8("textBrowserOrigin"));
        textBrowserOrigin->setGeometry(QRect(0, 41, 351, 431));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font1.setPointSize(12);
        textBrowserOrigin->setFont(font1);
        textBrowserOrigin->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        buttonFrame = new QFrame(tabTrans);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setGeometry(QRect(139, 490, 520, 60));
        buttonFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        horizontalLayout = new QHBoxLayout(buttonFrame);
        horizontalLayout->setSpacing(80);
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

        textBrowserTrans = new QTextBrowser(tabTrans);
        textBrowserTrans->setObjectName(QString::fromUtf8("textBrowserTrans"));
        textBrowserTrans->setGeometry(QRect(447, 41, 351, 431));
        textBrowserTrans->setFont(font1);
        textBrowserTrans->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        label_2 = new QLabel(tabTrans);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(447, 4, 181, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        label = new QLabel(tabTrans);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 4, 126, 41));
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        tabWidget->addTab(tabTrans, QString());

        retranslateUi(DialogMyTransTaskOper);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogMyTransTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogMyTransTaskOper)
    {
        DialogMyTransTaskOper->setWindowTitle(QCoreApplication::translate("DialogMyTransTaskOper", "MyTask", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInfo), QCoreApplication::translate("DialogMyTransTaskOper", "Infomation", nullptr));
        textBrowserOrigin->setHtml(QCoreApplication::translate("DialogMyTransTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\216\237\346\226\207</p></body></html>", nullptr));
        registerButton->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Save", nullptr));
        cancelButton->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Submit", nullptr));
        textBrowserTrans->setHtml(QCoreApplication::translate("DialogMyTransTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\221\346\226\207</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Translarion:", nullptr));
        label->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Origin:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTrans), QCoreApplication::translate("DialogMyTransTaskOper", "Translate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMyTransTaskOper: public Ui_DialogMyTransTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTRANSTASKOPER_H
