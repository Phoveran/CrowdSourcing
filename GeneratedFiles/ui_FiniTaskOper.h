/********************************************************************************
** Form generated from reading UI file 'FiniTaskOper.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINITASKOPER_H
#define UI_FINITASKOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogFiniTaskOper
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *labelRank;
    QLabel *label_4;
    QLabel *labelIssTime;
    QLabel *label_2;
    QLabel *labelTransType;
    QLabel *label_6;
    QLabel *labelConPeriod;
    QLabel *labelAccHead;
    QLabel *labelAcc;
    QLabel *label_9;
    QLabel *labelTaskType;
    QLabel *label_3;
    QLabel *labelState;
    QLabel *label_5;
    QLabel *labelPayment;
    QTextBrowser *textBrowserBrief;
    QLabel *label_8;
    QFrame *frame_2;
    QLabel *label_11;
    QTextBrowser *textBrowserTranslation;
    QTextBrowser *textBrowserOrigin;
    QLabel *label_10;

    void setupUi(QDialog *DialogFiniTaskOper)
    {
        if (DialogFiniTaskOper->objectName().isEmpty())
            DialogFiniTaskOper->setObjectName(QString::fromUtf8("DialogFiniTaskOper"));
        DialogFiniTaskOper->resize(800, 600);
        DialogFiniTaskOper->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"border-image:transparent;"));
        formLayoutWidget = new QWidget(DialogFiniTaskOper);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 351, 243));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(formLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(12);
        label_1->setFont(font);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        labelRank = new QLabel(formLayoutWidget);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setFont(font);
        labelRank->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelRank);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        labelIssTime = new QLabel(formLayoutWidget);
        labelIssTime->setObjectName(QString::fromUtf8("labelIssTime"));
        labelIssTime->setFont(font);
        labelIssTime->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelIssTime);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        labelTransType = new QLabel(formLayoutWidget);
        labelTransType->setObjectName(QString::fromUtf8("labelTransType"));
        labelTransType->setFont(font);
        labelTransType->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelTransType);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        labelConPeriod = new QLabel(formLayoutWidget);
        labelConPeriod->setObjectName(QString::fromUtf8("labelConPeriod"));
        labelConPeriod->setFont(font);
        labelConPeriod->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelConPeriod);

        labelAccHead = new QLabel(formLayoutWidget);
        labelAccHead->setObjectName(QString::fromUtf8("labelAccHead"));
        labelAccHead->setFont(font);
        labelAccHead->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        labelAccHead->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelAccHead);

        labelAcc = new QLabel(formLayoutWidget);
        labelAcc->setObjectName(QString::fromUtf8("labelAcc"));
        labelAcc->setFont(font);
        labelAcc->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelAcc);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        labelTaskType = new QLabel(formLayoutWidget);
        labelTaskType->setObjectName(QString::fromUtf8("labelTaskType"));
        labelTaskType->setFont(font);
        labelTaskType->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelTaskType);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        labelState = new QLabel(formLayoutWidget);
        labelState->setObjectName(QString::fromUtf8("labelState"));
        labelState->setFont(font);
        labelState->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelState);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);

        labelPayment = new QLabel(formLayoutWidget);
        labelPayment->setObjectName(QString::fromUtf8("labelPayment"));
        labelPayment->setFont(font);
        labelPayment->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(7, QFormLayout::FieldRole, labelPayment);

        textBrowserBrief = new QTextBrowser(DialogFiniTaskOper);
        textBrowserBrief->setObjectName(QString::fromUtf8("textBrowserBrief"));
        textBrowserBrief->setGeometry(QRect(390, 50, 401, 151));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font1.setPointSize(12);
        textBrowserBrief->setFont(font1);
        textBrowserBrief->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        label_8 = new QLabel(DialogFiniTaskOper);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(390, 20, 61, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        frame_2 = new QFrame(DialogFiniTaskOper);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(460, 460, 341, 131));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo3.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(DialogFiniTaskOper);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(390, 205, 111, 24));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        textBrowserTranslation = new QTextBrowser(DialogFiniTaskOper);
        textBrowserTranslation->setObjectName(QString::fromUtf8("textBrowserTranslation"));
        textBrowserTranslation->setGeometry(QRect(390, 230, 401, 231));
        textBrowserTranslation->setFont(font1);
        textBrowserTranslation->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        textBrowserOrigin = new QTextBrowser(DialogFiniTaskOper);
        textBrowserOrigin->setObjectName(QString::fromUtf8("textBrowserOrigin"));
        textBrowserOrigin->setGeometry(QRect(10, 300, 351, 271));
        textBrowserOrigin->setFont(font1);
        textBrowserOrigin->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        label_10 = new QLabel(DialogFiniTaskOper);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 270, 71, 24));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));

        retranslateUi(DialogFiniTaskOper);

        QMetaObject::connectSlotsByName(DialogFiniTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogFiniTaskOper)
    {
        DialogFiniTaskOper->setWindowTitle(QCoreApplication::translate("DialogFiniTaskOper", "Task", nullptr));
        label_1->setText(QCoreApplication::translate("DialogFiniTaskOper", "Rank", nullptr));
        labelRank->setText(QString());
        label_4->setText(QCoreApplication::translate("DialogFiniTaskOper", "Issue Time", nullptr));
        labelIssTime->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogFiniTaskOper", "Translation Type", nullptr));
        labelTransType->setText(QString());
        label_6->setText(QCoreApplication::translate("DialogFiniTaskOper", "Task Period", nullptr));
        labelConPeriod->setText(QString());
        labelAccHead->setText(QCoreApplication::translate("DialogFiniTaskOper", "Issue Account", nullptr));
        labelAcc->setText(QString());
        label_9->setText(QCoreApplication::translate("DialogFiniTaskOper", "Task Type", nullptr));
        labelTaskType->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogFiniTaskOper", "State", nullptr));
        labelState->setText(QString());
        label_5->setText(QCoreApplication::translate("DialogFiniTaskOper", "Payment(Ruby)", nullptr));
        labelPayment->setText(QString());
        textBrowserBrief->setHtml(QCoreApplication::translate("DialogFiniTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DialogFiniTaskOper", "Brief\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("DialogFiniTaskOper", "Translation\357\274\232", nullptr));
        textBrowserTranslation->setHtml(QCoreApplication::translate("DialogFiniTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowserOrigin->setHtml(QCoreApplication::translate("DialogFiniTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("DialogFiniTaskOper", "Origin\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFiniTaskOper: public Ui_DialogFiniTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINITASKOPER_H
