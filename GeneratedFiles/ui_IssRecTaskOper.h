/********************************************************************************
** Form generated from reading UI file 'IssRecTaskOper.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSRECTASKOPER_H
#define UI_ISSRECTASKOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogIssRecTaskOper
{
public:
    QTabWidget *tabWidget;
    QWidget *tabInfo;
    QLabel *label;
    QPushButton *okButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *labelTransType;
    QLabel *label_2;
    QLabel *labelRecPeriod;
    QLabel *label_3;
    QLabel *labelConPeriod;
    QLabel *label_7;
    QLabel *labelPayment;
    QLabel *label_6;
    QLabel *labelState;
    QLabel *label_8;
    QLabel *labelRank;
    QLabel *label_9;
    QLabel *labelRemHours;
    QListWidget *listWidgetAppliedAcc;
    QPushButton *cancelButton;
    QFrame *frame;
    QWidget *tabReceive;
    QPushButton *refuseButton;
    QPushButton *acceptButton;
    QFrame *frame_2;
    QTextBrowser *textBrowserTranslation;
    QTextBrowser *textBrowserOrigin;
    QLabel *label_17;
    QLabel *label_18;

    void setupUi(QDialog *DialogIssRecTaskOper)
    {
        if (DialogIssRecTaskOper->objectName().isEmpty())
            DialogIssRecTaskOper->setObjectName(QString::fromUtf8("DialogIssRecTaskOper"));
        DialogIssRecTaskOper->resize(800, 600);
        DialogIssRecTaskOper->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"border-image:transparent;"));
        tabWidget = new QTabWidget(DialogIssRecTaskOper);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabInfo = new QWidget();
        tabInfo->setObjectName(QString::fromUtf8("tabInfo"));
        label = new QLabel(tabInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 20, 191, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        okButton = new QPushButton(tabInfo);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(80, 360, 120, 120));
        okButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        formLayoutWidget = new QWidget(tabInfo);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 80, 455, 212));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(formLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(12);
        label_1->setFont(font1);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_1);

        labelTransType = new QLabel(formLayoutWidget);
        labelTransType->setObjectName(QString::fromUtf8("labelTransType"));
        labelTransType->setFont(font1);
        labelTransType->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelTransType);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        labelRecPeriod = new QLabel(formLayoutWidget);
        labelRecPeriod->setObjectName(QString::fromUtf8("labelRecPeriod"));
        labelRecPeriod->setFont(font1);
        labelRecPeriod->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelRecPeriod);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        labelConPeriod = new QLabel(formLayoutWidget);
        labelConPeriod->setObjectName(QString::fromUtf8("labelConPeriod"));
        labelConPeriod->setFont(font1);
        labelConPeriod->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelConPeriod);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        labelPayment = new QLabel(formLayoutWidget);
        labelPayment->setObjectName(QString::fromUtf8("labelPayment"));
        labelPayment->setFont(font1);
        labelPayment->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelPayment);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        labelState = new QLabel(formLayoutWidget);
        labelState->setObjectName(QString::fromUtf8("labelState"));
        labelState->setFont(font1);
        labelState->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelState);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        labelRank = new QLabel(formLayoutWidget);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setFont(font1);
        labelRank->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelRank);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        labelRemHours = new QLabel(formLayoutWidget);
        labelRemHours->setObjectName(QString::fromUtf8("labelRemHours"));
        labelRemHours->setFont(font1);
        labelRemHours->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelRemHours);

        listWidgetAppliedAcc = new QListWidget(tabInfo);
        listWidgetAppliedAcc->setObjectName(QString::fromUtf8("listWidgetAppliedAcc"));
        listWidgetAppliedAcc->setGeometry(QRect(470, 60, 311, 361));
        listWidgetAppliedAcc->setStyleSheet(QString::fromUtf8("border-image: transparent;"));
        cancelButton = new QPushButton(tabInfo);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(260, 360, 120, 120));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));
        frame = new QFrame(tabInfo);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(594, 476, 200, 82));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tabInfo, QString());
        tabReceive = new QWidget();
        tabReceive->setObjectName(QString::fromUtf8("tabReceive"));
        refuseButton = new QPushButton(tabReceive);
        refuseButton->setObjectName(QString::fromUtf8("refuseButton"));
        refuseButton->setGeometry(QRect(390, 370, 120, 120));
        refuseButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));
        acceptButton = new QPushButton(tabReceive);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));
        acceptButton->setGeometry(QRect(180, 370, 120, 120));
        acceptButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        frame_2 = new QFrame(tabReceive);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(594, 476, 200, 82));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        textBrowserTranslation = new QTextBrowser(tabReceive);
        textBrowserTranslation->setObjectName(QString::fromUtf8("textBrowserTranslation"));
        textBrowserTranslation->setGeometry(QRect(410, 80, 311, 261));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(10);
        textBrowserTranslation->setFont(font2);
        textBrowserTranslation->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserTranslation->setReadOnly(true);
        textBrowserOrigin = new QTextBrowser(tabReceive);
        textBrowserOrigin->setObjectName(QString::fromUtf8("textBrowserOrigin"));
        textBrowserOrigin->setGeometry(QRect(50, 80, 311, 261));
        textBrowserOrigin->setFont(font2);
        textBrowserOrigin->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserOrigin->setReadOnly(true);
        label_17 = new QLabel(tabReceive);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 40, 191, 31));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        label_18 = new QLabel(tabReceive);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(410, 40, 191, 31));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        tabWidget->addTab(tabReceive, QString());

        retranslateUi(DialogIssRecTaskOper);
        QObject::connect(okButton, SIGNAL(clicked()), DialogIssRecTaskOper, SLOT(okButtonClick()));
        QObject::connect(acceptButton, SIGNAL(clicked()), DialogIssRecTaskOper, SLOT(acceptButtonClick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DialogIssRecTaskOper, SLOT(cancelButtonClick()));
        QObject::connect(refuseButton, SIGNAL(clicked()), DialogIssRecTaskOper, SLOT(refuseButtonClick()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogIssRecTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogIssRecTaskOper)
    {
        DialogIssRecTaskOper->setWindowTitle(QCoreApplication::translate("DialogIssRecTaskOper", "Issued Task", nullptr));
        label->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Applied accounts:", nullptr));
#if QT_CONFIG(tooltip)
        okButton->setToolTip(QCoreApplication::translate("DialogIssRecTaskOper", "Choose as principal", nullptr));
#endif // QT_CONFIG(tooltip)
        okButton->setText(QString());
        label_1->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Translation Type", nullptr));
        labelTransType->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Recruiting Period(Days)", nullptr));
        labelRecPeriod->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Conducting Period(Days)", nullptr));
        labelConPeriod->setText(QString());
        label_7->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Payment(Ruby)", nullptr));
        labelPayment->setText(QString());
        label_6->setText(QCoreApplication::translate("DialogIssRecTaskOper", "State", nullptr));
        labelState->setText(QString());
        label_8->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Rank", nullptr));
        labelRank->setText(QString());
        label_9->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Remaining hours", nullptr));
        labelRemHours->setText(QString());
#if QT_CONFIG(tooltip)
        cancelButton->setToolTip(QCoreApplication::translate("DialogIssRecTaskOper", "Cancel", nullptr));
#endif // QT_CONFIG(tooltip)
        cancelButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabInfo), QCoreApplication::translate("DialogIssRecTaskOper", "Info&&Recruit", nullptr));
#if QT_CONFIG(tooltip)
        refuseButton->setToolTip(QCoreApplication::translate("DialogIssRecTaskOper", "Refuse", nullptr));
#endif // QT_CONFIG(tooltip)
        refuseButton->setText(QString());
#if QT_CONFIG(tooltip)
        acceptButton->setToolTip(QCoreApplication::translate("DialogIssRecTaskOper", "Confirm and Pay", nullptr));
#endif // QT_CONFIG(tooltip)
        acceptButton->setText(QString());
        textBrowserTranslation->setHtml(QCoreApplication::translate("DialogIssRecTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowserOrigin->setHtml(QCoreApplication::translate("DialogIssRecTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Origin:", nullptr));
        label_18->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Translation:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabReceive), QCoreApplication::translate("DialogIssRecTaskOper", "Receive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogIssRecTaskOper: public Ui_DialogIssRecTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSRECTASKOPER_H
