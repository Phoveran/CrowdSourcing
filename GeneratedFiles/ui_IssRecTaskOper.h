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
    QListView *listView;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
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
        listView = new QListView(DialogIssRecTaskOper);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(480, 60, 281, 411));
        listView->setStyleSheet(QString::fromUtf8("border-image: transparent;"));
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
        formLayoutWidget->setGeometry(QRect(60, 60, 371, 211));
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

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        okButton = new QPushButton(DialogIssRecTaskOper);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(90, 350, 120, 120));
        okButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        cancelButton = new QPushButton(DialogIssRecTaskOper);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(270, 350, 120, 120));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));

        retranslateUi(DialogIssRecTaskOper);

        QMetaObject::connectSlotsByName(DialogIssRecTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogIssRecTaskOper)
    {
        DialogIssRecTaskOper->setWindowTitle(QCoreApplication::translate("DialogIssRecTaskOper", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Applied accounts:", nullptr));
        label_1->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Translation Type", nullptr));
        label_2->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Recruiting Period(Days)", nullptr));
        label_3->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Conducting Period(Days)", nullptr));
        label_4->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Required English Credits", nullptr));
        label_5->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Required French Credits", nullptr));
        label_6->setText(QCoreApplication::translate("DialogIssRecTaskOper", "State", nullptr));
        label_7->setText(QCoreApplication::translate("DialogIssRecTaskOper", "Payment(Ruby)", nullptr));
        okButton->setText(QString());
        cancelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogIssRecTaskOper: public Ui_DialogIssRecTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSRECTASKOPER_H
