/********************************************************************************
** Form generated from reading UI file 'StaticTaskOper.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICTASKOPER_H
#define UI_STATICTASKOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogStaticTaskOper
{
public:
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *labelRank;
    QLabel *label_2;
    QLabel *labelTransType;
    QLabel *label_3;
    QLabel *labelTaskType;
    QLabel *label_4;
    QLabel *labelTakenAcc;
    QLabel *label_5;
    QLabel *labelIssAcc;
    QLabel *label_6;
    QLabel *labelTaskPer;
    QTextBrowser *textBrowserBrief;
    QFrame *frame;
    QLabel *label_8;

    void setupUi(QDialog *DialogStaticTaskOper)
    {
        if (DialogStaticTaskOper->objectName().isEmpty())
            DialogStaticTaskOper->setObjectName(QString::fromUtf8("DialogStaticTaskOper"));
        DialogStaticTaskOper->resize(800, 600);
        DialogStaticTaskOper->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda8.jpg);"));
        formFrame = new QFrame(DialogStaticTaskOper);
        formFrame->setObjectName(QString::fromUtf8("formFrame"));
        formFrame->setGeometry(QRect(90, 30, 421, 191));
        formFrame->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(85, 85, 0);"));
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(20);
        formLayout->setVerticalSpacing(4);
        label_1 = new QLabel(formFrame);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(12);
        label_1->setFont(font);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        labelRank = new QLabel(formFrame);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setFont(font);
        labelRank->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelRank);

        label_2 = new QLabel(formFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        labelTransType = new QLabel(formFrame);
        labelTransType->setObjectName(QString::fromUtf8("labelTransType"));
        labelTransType->setFont(font);
        labelTransType->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelTransType);

        label_3 = new QLabel(formFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        labelTaskType = new QLabel(formFrame);
        labelTaskType->setObjectName(QString::fromUtf8("labelTaskType"));
        labelTaskType->setFont(font);
        labelTaskType->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelTaskType);

        label_4 = new QLabel(formFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        labelTakenAcc = new QLabel(formFrame);
        labelTakenAcc->setObjectName(QString::fromUtf8("labelTakenAcc"));
        labelTakenAcc->setFont(font);
        labelTakenAcc->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelTakenAcc);

        label_5 = new QLabel(formFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        labelIssAcc = new QLabel(formFrame);
        labelIssAcc->setObjectName(QString::fromUtf8("labelIssAcc"));
        labelIssAcc->setFont(font);
        labelIssAcc->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelIssAcc);

        label_6 = new QLabel(formFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        labelTaskPer = new QLabel(formFrame);
        labelTaskPer->setObjectName(QString::fromUtf8("labelTaskPer"));
        labelTaskPer->setFont(font);
        labelTaskPer->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelTaskPer);

        textBrowserBrief = new QTextBrowser(DialogStaticTaskOper);
        textBrowserBrief->setObjectName(QString::fromUtf8("textBrowserBrief"));
        textBrowserBrief->setGeometry(QRect(520, 30, 261, 561));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font1.setPointSize(12);
        textBrowserBrief->setFont(font1);
        textBrowserBrief->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        frame = new QFrame(DialogStaticTaskOper);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(80, 290, 180, 250));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/in_morocco.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(DialogStaticTaskOper);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(520, 0, 61, 24));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));

        retranslateUi(DialogStaticTaskOper);

        QMetaObject::connectSlotsByName(DialogStaticTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogStaticTaskOper)
    {
        DialogStaticTaskOper->setWindowTitle(QCoreApplication::translate("DialogStaticTaskOper", "Others' Task", nullptr));
        label_1->setText(QCoreApplication::translate("DialogStaticTaskOper", "Rank", nullptr));
        labelRank->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogStaticTaskOper", "Translation Type", nullptr));
        labelTransType->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogStaticTaskOper", "Task Type", nullptr));
        labelTaskType->setText(QString());
        label_4->setText(QCoreApplication::translate("DialogStaticTaskOper", "Taken Account", nullptr));
        labelTakenAcc->setText(QString());
        label_5->setText(QCoreApplication::translate("DialogStaticTaskOper", "Issuing Account", nullptr));
        labelIssAcc->setText(QString());
        label_6->setText(QCoreApplication::translate("DialogStaticTaskOper", "Task Period", nullptr));
        labelTaskPer->setText(QString());
        textBrowserBrief->setHtml(QCoreApplication::translate("DialogStaticTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DialogStaticTaskOper", "Brief\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStaticTaskOper: public Ui_DialogStaticTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICTASKOPER_H
