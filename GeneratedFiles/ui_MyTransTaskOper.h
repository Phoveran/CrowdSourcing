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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLabel *labelRank;
    QLabel *label_1;
    QLabel *labelTransType;
    QLabel *label_3;
    QLabel *labelConPeriod;
    QLabel *label_7;
    QLabel *labelPay;
    QLabel *label_6;
    QLabel *labelState;
    QLabel *label_9;
    QLabel *labelRemHours;
    QLabel *label_11;
    QLabel *labelParentTask;
    QTextBrowser *textBrowserBrief;
    QFrame *frame;
    QLabel *label_10;
    QFrame *frame_2;
    QWidget *tabCom;
    QLabel *label_15;
    QTextBrowser *textBrowserAdvice;
    QTextBrowser *textBrowserTranslation;
    QLabel *label_16;
    QPushButton *saveButton;
    QFrame *frame_4;
    QPushButton *submitButton;
    QTextBrowser *textBrowserOrigin;
    QLabel *label_23;

    void setupUi(QDialog *DialogMyTransTaskOper)
    {
        if (DialogMyTransTaskOper->objectName().isEmpty())
            DialogMyTransTaskOper->setObjectName(QString::fromUtf8("DialogMyTransTaskOper"));
        DialogMyTransTaskOper->resize(800, 600);
        DialogMyTransTaskOper->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        tabWidget = new QTabWidget(DialogMyTransTaskOper);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(243, 162, 0);"));
        tabInfo = new QWidget();
        tabInfo->setObjectName(QString::fromUtf8("tabInfo"));
        formLayoutWidget = new QWidget(tabInfo);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 40, 461, 212));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(12);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        labelRank = new QLabel(formLayoutWidget);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setFont(font1);
        labelRank->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelRank);

        label_1 = new QLabel(formLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setFont(font1);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_1);

        labelTransType = new QLabel(formLayoutWidget);
        labelTransType->setObjectName(QString::fromUtf8("labelTransType"));
        labelTransType->setFont(font1);
        labelTransType->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelTransType);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        labelConPeriod = new QLabel(formLayoutWidget);
        labelConPeriod->setObjectName(QString::fromUtf8("labelConPeriod"));
        labelConPeriod->setFont(font1);
        labelConPeriod->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelConPeriod);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        labelPay = new QLabel(formLayoutWidget);
        labelPay->setObjectName(QString::fromUtf8("labelPay"));
        labelPay->setFont(font1);
        labelPay->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelPay);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        labelState = new QLabel(formLayoutWidget);
        labelState->setObjectName(QString::fromUtf8("labelState"));
        labelState->setFont(font1);
        labelState->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelState);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        labelRemHours = new QLabel(formLayoutWidget);
        labelRemHours->setObjectName(QString::fromUtf8("labelRemHours"));
        labelRemHours->setFont(font1);
        labelRemHours->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelRemHours);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_11);

        labelParentTask = new QLabel(formLayoutWidget);
        labelParentTask->setObjectName(QString::fromUtf8("labelParentTask"));
        labelParentTask->setFont(font1);
        labelParentTask->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelParentTask);

        textBrowserBrief = new QTextBrowser(tabInfo);
        textBrowserBrief->setObjectName(QString::fromUtf8("textBrowserBrief"));
        textBrowserBrief->setGeometry(QRect(510, 40, 281, 341));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(10);
        textBrowserBrief->setFont(font2);
        textBrowserBrief->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserBrief->setReadOnly(true);
        frame = new QFrame(tabInfo);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(594, 476, 200, 82));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(tabInfo);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(520, 5, 71, 31));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        frame_2 = new QFrame(tabInfo);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(140, 270, 261, 261));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo4.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tabInfo, QString());
        tabCom = new QWidget();
        tabCom->setObjectName(QString::fromUtf8("tabCom"));
        label_15 = new QLabel(tabCom);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 20, 191, 31));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        textBrowserAdvice = new QTextBrowser(tabCom);
        textBrowserAdvice->setObjectName(QString::fromUtf8("textBrowserAdvice"));
        textBrowserAdvice->setGeometry(QRect(20, 50, 311, 231));
        textBrowserAdvice->setFont(font2);
        textBrowserAdvice->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserAdvice->setReadOnly(true);
        textBrowserTranslation = new QTextBrowser(tabCom);
        textBrowserTranslation->setObjectName(QString::fromUtf8("textBrowserTranslation"));
        textBrowserTranslation->setGeometry(QRect(370, 250, 361, 201));
        textBrowserTranslation->setFont(font2);
        textBrowserTranslation->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserTranslation->setReadOnly(false);
        label_16 = new QLabel(tabCom);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(370, 215, 191, 31));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        saveButton = new QPushButton(tabCom);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(40, 370, 120, 120));
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_clicked.png);};"));
        frame_4 = new QFrame(tabCom);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(594, 476, 200, 82));
        frame_4->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        submitButton = new QPushButton(tabCom);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(200, 370, 120, 120));
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        textBrowserOrigin = new QTextBrowser(tabCom);
        textBrowserOrigin->setObjectName(QString::fromUtf8("textBrowserOrigin"));
        textBrowserOrigin->setGeometry(QRect(370, 60, 361, 151));
        textBrowserOrigin->setFont(font2);
        textBrowserOrigin->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserOrigin->setReadOnly(true);
        label_23 = new QLabel(tabCom);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(370, 20, 191, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        tabWidget->addTab(tabCom, QString());

        retranslateUi(DialogMyTransTaskOper);
        QObject::connect(saveButton, SIGNAL(clicked()), DialogMyTransTaskOper, SLOT(saveButtonClick()));
        QObject::connect(submitButton, SIGNAL(clicked()), DialogMyTransTaskOper, SLOT(submitButtonClick()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogMyTransTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogMyTransTaskOper)
    {
        DialogMyTransTaskOper->setWindowTitle(QCoreApplication::translate("DialogMyTransTaskOper", "My Translation Task", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Rank", nullptr));
        labelRank->setText(QString());
        label_1->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Translation Type", nullptr));
        labelTransType->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Conducting Period(Days)", nullptr));
        labelConPeriod->setText(QString());
        label_7->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Payment(Ruby)", nullptr));
        labelPay->setText(QString());
        label_6->setText(QCoreApplication::translate("DialogMyTransTaskOper", "State", nullptr));
        labelState->setText(QString());
        label_9->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Remaining Hours", nullptr));
        labelRemHours->setText(QString());
        label_11->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Parent Task", nullptr));
        labelParentTask->setText(QString());
        textBrowserBrief->setHtml(QCoreApplication::translate("DialogMyTransTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Brief:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInfo), QCoreApplication::translate("DialogMyTransTaskOper", "Infomation", nullptr));
        label_15->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Advice:", nullptr));
        textBrowserAdvice->setHtml(QCoreApplication::translate("DialogMyTransTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowserTranslation->setHtml(QCoreApplication::translate("DialogMyTransTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Translation:", nullptr));
#if QT_CONFIG(tooltip)
        saveButton->setToolTip(QCoreApplication::translate("DialogMyTransTaskOper", "Save", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        saveButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        saveButton->setText(QString());
#if QT_CONFIG(tooltip)
        submitButton->setToolTip(QCoreApplication::translate("DialogMyTransTaskOper", "Submit", nullptr));
#endif // QT_CONFIG(tooltip)
        submitButton->setText(QString());
        textBrowserOrigin->setHtml(QCoreApplication::translate("DialogMyTransTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Origin:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCom), QCoreApplication::translate("DialogMyTransTaskOper", "Communication && Submission", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMyTransTaskOper: public Ui_DialogMyTransTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTRANSTASKOPER_H
