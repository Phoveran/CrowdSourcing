/********************************************************************************
** Form generated from reading UI file 'RecTaskOper.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTASKOPER_H
#define UI_RECTASKOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogRecTaskOper
{
public:
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *labelRank;
    QLabel *labelTransType;
    QLabel *labelTaskType;
    QLabel *labelPayment;
    QLabel *labelIssAcc;
    QLabel *labelTaskPer;
    QLabel *labelReqCredits;
    QTextBrowser *textBrowserBrief;
    QFrame *frame;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *acceptButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *DialogRecTaskOper)
    {
        if (DialogRecTaskOper->objectName().isEmpty())
            DialogRecTaskOper->setObjectName(QString::fromUtf8("DialogRecTaskOper"));
        DialogRecTaskOper->resize(800, 600);
        DialogRecTaskOper->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda8.jpg);"));
        formFrame = new QFrame(DialogRecTaskOper);
        formFrame->setObjectName(QString::fromUtf8("formFrame"));
        formFrame->setGeometry(QRect(90, 0, 621, 221));
        formFrame->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(85, 85, 0);"));
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(3);
        label_1 = new QLabel(formFrame);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(12);
        label_1->setFont(font);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        label_2 = new QLabel(formFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        labelRank = new QLabel(formFrame);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(16);
        labelRank->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelRank);

        labelTransType = new QLabel(formFrame);
        labelTransType->setObjectName(QString::fromUtf8("labelTransType"));
        labelTransType->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelTransType);

        labelTaskType = new QLabel(formFrame);
        labelTaskType->setObjectName(QString::fromUtf8("labelTaskType"));
        labelTaskType->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelTaskType);

        labelPayment = new QLabel(formFrame);
        labelPayment->setObjectName(QString::fromUtf8("labelPayment"));
        labelPayment->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelPayment);

        labelIssAcc = new QLabel(formFrame);
        labelIssAcc->setObjectName(QString::fromUtf8("labelIssAcc"));
        labelIssAcc->setFont(font1);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelIssAcc);

        labelTaskPer = new QLabel(formFrame);
        labelTaskPer->setObjectName(QString::fromUtf8("labelTaskPer"));
        labelTaskPer->setFont(font1);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelTaskPer);

        labelReqCredits = new QLabel(formFrame);
        labelReqCredits->setObjectName(QString::fromUtf8("labelReqCredits"));
        labelReqCredits->setFont(font1);

        formLayout->setWidget(6, QFormLayout::FieldRole, labelReqCredits);

        textBrowserBrief = new QTextBrowser(DialogRecTaskOper);
        textBrowserBrief->setObjectName(QString::fromUtf8("textBrowserBrief"));
        textBrowserBrief->setGeometry(QRect(520, 240, 261, 351));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font2.setPointSize(12);
        textBrowserBrief->setFont(font2);
        textBrowserBrief->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        frame = new QFrame(DialogRecTaskOper);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(80, 290, 180, 250));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/in_morocco.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalFrame = new QFrame(DialogRecTaskOper);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(320, 410, 161, 151));
        verticalFrame->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        acceptButton = new QPushButton(verticalFrame);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        acceptButton->setFont(font3);
        acceptButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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
        acceptButton->setAutoDefault(false);
        acceptButton->setFlat(true);

        verticalLayout->addWidget(acceptButton);

        cancelButton = new QPushButton(verticalFrame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font3);
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

        verticalLayout->addWidget(cancelButton);


        retranslateUi(DialogRecTaskOper);

        QMetaObject::connectSlotsByName(DialogRecTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogRecTaskOper)
    {
        DialogRecTaskOper->setWindowTitle(QCoreApplication::translate("DialogRecTaskOper", "RecruitingTask", nullptr));
        label_1->setText(QCoreApplication::translate("DialogRecTaskOper", "Rank", nullptr));
        label_2->setText(QCoreApplication::translate("DialogRecTaskOper", "Translation Type", nullptr));
        label_3->setText(QCoreApplication::translate("DialogRecTaskOper", "Task Type", nullptr));
        label_4->setText(QCoreApplication::translate("DialogRecTaskOper", "Payment", nullptr));
        label_5->setText(QCoreApplication::translate("DialogRecTaskOper", "Issuing Account", nullptr));
        label_6->setText(QCoreApplication::translate("DialogRecTaskOper", "Task Period", nullptr));
        label_7->setText(QCoreApplication::translate("DialogRecTaskOper", "Required Credits", nullptr));
        labelRank->setText(QString());
        labelTransType->setText(QString());
        labelTaskType->setText(QString());
        labelPayment->setText(QString());
        labelIssAcc->setText(QString());
        labelTaskPer->setText(QString());
        labelReqCredits->setText(QString());
        textBrowserBrief->setHtml(QCoreApplication::translate("DialogRecTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        acceptButton->setText(QCoreApplication::translate("DialogRecTaskOper", "Accept", nullptr));
        cancelButton->setText(QCoreApplication::translate("DialogRecTaskOper", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRecTaskOper: public Ui_DialogRecTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTASKOPER_H
