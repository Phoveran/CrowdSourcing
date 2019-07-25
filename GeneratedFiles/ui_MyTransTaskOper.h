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
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *labelRank;
    QLabel *labelTransType;
    QLabel *labelTaskType;
    QLabel *labelPayment;
    QLabel *labelIssAcc;
    QLabel *labelTaskPer;
    QLabel *labelReqCredits;
    QFrame *frame_2;
    QTextBrowser *textBrowserBrief;
    QLabel *label_9;
    QWidget *tabTrans;
    QTextBrowser *textBrowserOrigin;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *saveButton;
    QPushButton *submitButton;
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
        formFrame = new QFrame(tabInfo);
        formFrame->setObjectName(QString::fromUtf8("formFrame"));
        formFrame->setGeometry(QRect(80, 0, 621, 211));
        formFrame->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(85, 85, 0);"));
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(20);
        formLayout->setVerticalSpacing(4);
        label_1 = new QLabel(formFrame);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setFont(font);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        label_3 = new QLabel(formFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        labelRank = new QLabel(formFrame);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelRank);

        labelTransType = new QLabel(formFrame);
        labelTransType->setObjectName(QString::fromUtf8("labelTransType"));
        labelTransType->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelTransType);

        labelTaskType = new QLabel(formFrame);
        labelTaskType->setObjectName(QString::fromUtf8("labelTaskType"));
        labelTaskType->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelTaskType);

        labelPayment = new QLabel(formFrame);
        labelPayment->setObjectName(QString::fromUtf8("labelPayment"));
        labelPayment->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelPayment);

        labelIssAcc = new QLabel(formFrame);
        labelIssAcc->setObjectName(QString::fromUtf8("labelIssAcc"));
        labelIssAcc->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelIssAcc);

        labelTaskPer = new QLabel(formFrame);
        labelTaskPer->setObjectName(QString::fromUtf8("labelTaskPer"));
        labelTaskPer->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelTaskPer);

        labelReqCredits = new QLabel(formFrame);
        labelReqCredits->setObjectName(QString::fromUtf8("labelReqCredits"));
        labelReqCredits->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, labelReqCredits);

        frame_2 = new QFrame(tabInfo);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(90, 250, 180, 250));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/in_morocco.jpg);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        textBrowserBrief = new QTextBrowser(tabInfo);
        textBrowserBrief->setObjectName(QString::fromUtf8("textBrowserBrief"));
        textBrowserBrief->setGeometry(QRect(510, 240, 261, 321));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font1.setPointSize(12);
        textBrowserBrief->setFont(font1);
        textBrowserBrief->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        label_9 = new QLabel(tabInfo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(510, 210, 61, 24));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        tabWidget->addTab(tabInfo, QString());
        tabTrans = new QWidget();
        tabTrans->setObjectName(QString::fromUtf8("tabTrans"));
        textBrowserOrigin = new QTextBrowser(tabTrans);
        textBrowserOrigin->setObjectName(QString::fromUtf8("textBrowserOrigin"));
        textBrowserOrigin->setGeometry(QRect(0, 41, 351, 431));
        textBrowserOrigin->setFont(font1);
        textBrowserOrigin->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        buttonFrame = new QFrame(tabTrans);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setGeometry(QRect(139, 490, 520, 60));
        buttonFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        horizontalLayout = new QHBoxLayout(buttonFrame);
        horizontalLayout->setSpacing(80);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        saveButton = new QPushButton(buttonFrame);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        saveButton->setFont(font2);
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        saveButton->setAutoDefault(false);
        saveButton->setFlat(true);

        horizontalLayout->addWidget(saveButton);

        submitButton = new QPushButton(buttonFrame);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setFont(font2);
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        submitButton->setAutoDefault(false);
        submitButton->setFlat(true);

        horizontalLayout->addWidget(submitButton);

        textBrowserTrans = new QTextBrowser(tabTrans);
        textBrowserTrans->setObjectName(QString::fromUtf8("textBrowserTrans"));
        textBrowserTrans->setGeometry(QRect(447, 41, 351, 431));
        textBrowserTrans->setFont(font1);
        textBrowserTrans->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        textBrowserTrans->setReadOnly(false);
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
        QObject::connect(saveButton, SIGNAL(clicked()), DialogMyTransTaskOper, SLOT(saveButtonClick()));
        QObject::connect(submitButton, SIGNAL(clicked()), DialogMyTransTaskOper, SLOT(submitButtonClick()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogMyTransTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogMyTransTaskOper)
    {
        DialogMyTransTaskOper->setWindowTitle(QCoreApplication::translate("DialogMyTransTaskOper", "MyTask", nullptr));
        label_1->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Rank", nullptr));
        label_3->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Translation Type", nullptr));
        label_4->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Task Type", nullptr));
        label_5->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Payment", nullptr));
        label_6->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Issuing Account", nullptr));
        label_7->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Task Period", nullptr));
        label_8->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Required Credits", nullptr));
        labelRank->setText(QString());
        labelTransType->setText(QString());
        labelTaskType->setText(QString());
        labelPayment->setText(QString());
        labelIssAcc->setText(QString());
        labelTaskPer->setText(QString());
        labelReqCredits->setText(QString());
        textBrowserBrief->setHtml(QCoreApplication::translate("DialogMyTransTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Brief\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInfo), QCoreApplication::translate("DialogMyTransTaskOper", "Infomation", nullptr));
        textBrowserOrigin->setHtml(QCoreApplication::translate("DialogMyTransTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\216\237\346\226\207</p></body></html>", nullptr));
        saveButton->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Save", nullptr));
        submitButton->setText(QCoreApplication::translate("DialogMyTransTaskOper", "Submit", nullptr));
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
