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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogRecTaskOper
{
public:
    QTextBrowser *textBrowserBrief;
    QLabel *label_8;
    QPushButton *applyButton;
    QPushButton *cancelButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *labelRank;
    QLabel *label_4;
    QLabel *labelPayment;
    QLabel *label_2;
    QLabel *labelTransType;
    QLabel *label_6;
    QLabel *labelConPeriod;
    QLabel *label_5;
    QLabel *labelIssAcc;
    QLabel *label_10;
    QLabel *labelRecPeriod;
    QLabel *label_9;
    QLabel *labelRecruitType;
    QLabel *label_3;
    QLabel *labelReqCre;
    QFrame *frame;
    QLabel *label;
    QListWidget *listWidgetAppliedAcc;

    void setupUi(QDialog *DialogRecTaskOper)
    {
        if (DialogRecTaskOper->objectName().isEmpty())
            DialogRecTaskOper->setObjectName(QString::fromUtf8("DialogRecTaskOper"));
        DialogRecTaskOper->resize(800, 600);
        DialogRecTaskOper->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        textBrowserBrief = new QTextBrowser(DialogRecTaskOper);
        textBrowserBrief->setObjectName(QString::fromUtf8("textBrowserBrief"));
        textBrowserBrief->setGeometry(QRect(30, 310, 261, 231));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(12);
        textBrowserBrief->setFont(font);
        textBrowserBrief->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        label_8 = new QLabel(DialogRecTaskOper);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 280, 61, 24));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        applyButton = new QPushButton(DialogRecTaskOper);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setGeometry(QRect(340, 300, 120, 120));
        applyButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        cancelButton = new QPushButton(DialogRecTaskOper);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(340, 450, 120, 120));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));
        formLayoutWidget = new QWidget(DialogRecTaskOper);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 20, 441, 251));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(formLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(12);
        label_1->setFont(font2);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        labelRank = new QLabel(formLayoutWidget);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setFont(font2);
        labelRank->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelRank);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        labelPayment = new QLabel(formLayoutWidget);
        labelPayment->setObjectName(QString::fromUtf8("labelPayment"));
        labelPayment->setFont(font2);
        labelPayment->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelPayment);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        labelTransType = new QLabel(formLayoutWidget);
        labelTransType->setObjectName(QString::fromUtf8("labelTransType"));
        labelTransType->setFont(font2);
        labelTransType->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelTransType);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        labelConPeriod = new QLabel(formLayoutWidget);
        labelConPeriod->setObjectName(QString::fromUtf8("labelConPeriod"));
        labelConPeriod->setFont(font2);
        labelConPeriod->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelConPeriod);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        labelIssAcc = new QLabel(formLayoutWidget);
        labelIssAcc->setObjectName(QString::fromUtf8("labelIssAcc"));
        labelIssAcc->setFont(font2);
        labelIssAcc->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelIssAcc);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_10);

        labelRecPeriod = new QLabel(formLayoutWidget);
        labelRecPeriod->setObjectName(QString::fromUtf8("labelRecPeriod"));
        labelRecPeriod->setFont(font2);
        labelRecPeriod->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelRecPeriod);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        labelRecruitType = new QLabel(formLayoutWidget);
        labelRecruitType->setObjectName(QString::fromUtf8("labelRecruitType"));
        labelRecruitType->setFont(font2);
        labelRecruitType->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelRecruitType);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_3);

        labelReqCre = new QLabel(formLayoutWidget);
        labelReqCre->setObjectName(QString::fromUtf8("labelReqCre"));
        labelReqCre->setFont(font2);
        labelReqCre->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        formLayout->setWidget(7, QFormLayout::FieldRole, labelReqCre);

        frame = new QFrame(DialogRecTaskOper);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(600, 508, 200, 82));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(DialogRecTaskOper);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 10, 191, 31));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        listWidgetAppliedAcc = new QListWidget(DialogRecTaskOper);
        listWidgetAppliedAcc->setObjectName(QString::fromUtf8("listWidgetAppliedAcc"));
        listWidgetAppliedAcc->setGeometry(QRect(490, 50, 301, 401));
        listWidgetAppliedAcc->setStyleSheet(QString::fromUtf8("border-image: transparent;"));

        retranslateUi(DialogRecTaskOper);
        QObject::connect(applyButton, SIGNAL(clicked()), DialogRecTaskOper, SLOT(applyButtonClick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DialogRecTaskOper, SLOT(cancelButtonClick()));

        QMetaObject::connectSlotsByName(DialogRecTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogRecTaskOper)
    {
        DialogRecTaskOper->setWindowTitle(QCoreApplication::translate("DialogRecTaskOper", "RecruitingTask", nullptr));
        textBrowserBrief->setHtml(QCoreApplication::translate("DialogRecTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\347\273\206\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DialogRecTaskOper", "Brief\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        applyButton->setToolTip(QCoreApplication::translate("DialogRecTaskOper", "Apply for it", nullptr));
#endif // QT_CONFIG(tooltip)
        applyButton->setText(QString());
#if QT_CONFIG(tooltip)
        cancelButton->setToolTip(QCoreApplication::translate("DialogRecTaskOper", "Cancel", nullptr));
#endif // QT_CONFIG(tooltip)
        cancelButton->setText(QString());
        label_1->setText(QCoreApplication::translate("DialogRecTaskOper", "Rank", nullptr));
        labelRank->setText(QString());
        label_4->setText(QCoreApplication::translate("DialogRecTaskOper", "Payment", nullptr));
        labelPayment->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogRecTaskOper", "Translation Type", nullptr));
        labelTransType->setText(QString());
        label_6->setText(QCoreApplication::translate("DialogRecTaskOper", "Task Period", nullptr));
        labelConPeriod->setText(QString());
        label_5->setText(QCoreApplication::translate("DialogRecTaskOper", "Issuing Account", nullptr));
        labelIssAcc->setText(QString());
        label_10->setText(QCoreApplication::translate("DialogRecTaskOper", "Recruiting Period", nullptr));
        labelRecPeriod->setText(QString());
        label_9->setText(QCoreApplication::translate("DialogRecTaskOper", "Recruiting For", nullptr));
        labelRecruitType->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogRecTaskOper", "Required Credits", nullptr));
        labelReqCre->setText(QString());
        label->setText(QCoreApplication::translate("DialogRecTaskOper", "Applied accounts:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRecTaskOper: public Ui_DialogRecTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTASKOPER_H
