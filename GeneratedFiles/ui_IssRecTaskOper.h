/********************************************************************************
** Form generated from reading UI file 'IssRecTaskOper.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogIssRecTaskOper
{
public:
    QFrame *frame;
    QListView *listViewAppliedAcc;
    QLabel *label;
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
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *DialogIssRecTaskOper)
    {
        if (DialogIssRecTaskOper->objectName().isEmpty())
            DialogIssRecTaskOper->setObjectName(QString::fromUtf8("DialogIssRecTaskOper"));
        DialogIssRecTaskOper->resize(800, 600);
        DialogIssRecTaskOper->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        frame = new QFrame(DialogIssRecTaskOper);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(600, 508, 200, 82));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        listViewAppliedAcc = new QListView(DialogIssRecTaskOper);
        listViewAppliedAcc->setObjectName(QString::fromUtf8("listViewAppliedAcc"));
        listViewAppliedAcc->setGeometry(QRect(480, 60, 281, 411));
        listViewAppliedAcc->setStyleSheet(QString::fromUtf8("border-image: transparent;"));
        label = new QLabel(DialogIssRecTaskOper);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 20, 191, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        formLayoutWidget = new QWidget(DialogIssRecTaskOper);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 90, 461, 212));
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

        okButton = new QPushButton(DialogIssRecTaskOper);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(90, 400, 120, 120));
        okButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        cancelButton = new QPushButton(DialogIssRecTaskOper);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(270, 400, 120, 120));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));

        retranslateUi(DialogIssRecTaskOper);
        QObject::connect(okButton, SIGNAL(clicked()), DialogIssRecTaskOper, SLOT(okButtonClick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DialogIssRecTaskOper, SLOT(cancelButtonClick()));

        QMetaObject::connectSlotsByName(DialogIssRecTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogIssRecTaskOper)
    {
        DialogIssRecTaskOper->setWindowTitle(QCoreApplication::translate("DialogIssRecTaskOper", "IssuedTask", nullptr));
        label->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Applied accounts:", nullptr));
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
        okButton->setToolTip(QCoreApplication::translate("DialogIssRecTaskOper", "Choose as principal", nullptr));
#endif // QT_CONFIG(tooltip)
        okButton->setText(QString());
#if QT_CONFIG(tooltip)
        cancelButton->setToolTip(QCoreApplication::translate("DialogIssRecTaskOper", "Cancel", nullptr));
#endif // QT_CONFIG(tooltip)
        cancelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogIssRecTaskOper: public Ui_DialogIssRecTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSRECTASKOPER_H
