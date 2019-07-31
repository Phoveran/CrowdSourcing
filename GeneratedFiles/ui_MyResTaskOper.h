/********************************************************************************
** Form generated from reading UI file 'MyResTaskOper.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYRESTASKOPER_H
#define UI_MYRESTASKOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogMyResTaskOper
{
public:
    QTabWidget *tabWidget;
    QWidget *tabInfo;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *labelTransType;
    QLabel *label_2;
    QLabel *labelRecPeriod;
    QLabel *label_3;
    QLabel *labelConPeriod;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *labelState;
    QLabel *label_8;
    QLabel *labelRank;
    QLabel *label_9;
    QLabel *labelRemHours;
    QLabel *label_4;
    QLineEdit *lineEditEngCre;
    QLabel *label_5;
    QLineEdit *lineEditFreCre;
    QLabel *labelPay;
    QPushButton *editInfoOkButton;
    QPushButton *editInfocancelButton;
    QPushButton *changeInfoButton;
    QTextBrowser *textBrowserBrief;
    QFrame *frame;
    QLabel *label_10;
    QWidget *tabRec;
    QListWidget *listWidgetAppliedAcc;
    QLabel *label;
    QPushButton *chooseTranslatorButton;
    QFrame *frame_2;
    QPushButton *removeButton;
    QListWidget *listWidgetChosenAcc;
    QLabel *label_21;
    QPushButton *endRecruitingButton;
    QWidget *tabDistribution;
    QListWidget *listWidgetTranslators;
    QLabel *label_11;
    QTextBrowser *textBrowserOrigin;
    QLabel *label_12;
    QTextBrowser *textBrowserChildContent;
    QLabel *label_13;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_19;
    QLineEdit *lineEditChildPay;
    QLabel *label_22;
    QSpinBox *spinBoxChildPeriod;
    QFrame *frame_3;
    QPushButton *distributeButton;
    QWidget *tabCom;
    QListWidget *listWidgetChildTasks;
    QLabel *label_14;
    QLabel *label_15;
    QTextBrowser *textBrowserAdvice;
    QTextBrowser *textBrowserChildTranslation;
    QLabel *label_16;
    QPushButton *communicateButton;
    QFrame *frame_4;
    QPushButton *acceptButton;
    QTextBrowser *textBrowserChildOrigin;
    QLabel *label_23;
    QWidget *tab;
    QListWidget *listWidgetChildTasks_2;
    QLabel *label_17;
    QTextBrowser *textBrowserChildTranslation_2;
    QLabel *label_18;
    QTextBrowser *textBrowserTotalTranslation;
    QLabel *label_20;
    QFrame *frame_5;
    QPushButton *submitButton;
    QPushButton *saveButton;

    void setupUi(QDialog *DialogMyResTaskOper)
    {
        if (DialogMyResTaskOper->objectName().isEmpty())
            DialogMyResTaskOper->setObjectName(QString::fromUtf8("DialogMyResTaskOper"));
        DialogMyResTaskOper->resize(800, 600);
        DialogMyResTaskOper->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);"));
        tabWidget = new QTabWidget(DialogMyResTaskOper);
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
        formLayoutWidget->setGeometry(QRect(30, 60, 461, 284));
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

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        lineEditEngCre = new QLineEdit(formLayoutWidget);
        lineEditEngCre->setObjectName(QString::fromUtf8("lineEditEngCre"));
        lineEditEngCre->setFont(font1);
        lineEditEngCre->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        lineEditEngCre->setReadOnly(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditEngCre);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);

        lineEditFreCre = new QLineEdit(formLayoutWidget);
        lineEditFreCre->setObjectName(QString::fromUtf8("lineEditFreCre"));
        lineEditFreCre->setFont(font1);
        lineEditFreCre->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        lineEditFreCre->setReadOnly(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEditFreCre);

        labelPay = new QLabel(formLayoutWidget);
        labelPay->setObjectName(QString::fromUtf8("labelPay"));
        labelPay->setFont(font1);
        labelPay->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelPay);

        editInfoOkButton = new QPushButton(tabInfo);
        editInfoOkButton->setObjectName(QString::fromUtf8("editInfoOkButton"));
        editInfoOkButton->setGeometry(QRect(70, 370, 120, 120));
        editInfoOkButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        editInfocancelButton = new QPushButton(tabInfo);
        editInfocancelButton->setObjectName(QString::fromUtf8("editInfocancelButton"));
        editInfocancelButton->setGeometry(QRect(300, 370, 120, 120));
        editInfocancelButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));
        changeInfoButton = new QPushButton(tabInfo);
        changeInfoButton->setObjectName(QString::fromUtf8("changeInfoButton"));
        changeInfoButton->setGeometry(QRect(190, 370, 120, 120));
        changeInfoButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_clicked.png);};"));
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
        tabWidget->addTab(tabInfo, QString());
        tabRec = new QWidget();
        tabRec->setObjectName(QString::fromUtf8("tabRec"));
        listWidgetAppliedAcc = new QListWidget(tabRec);
        listWidgetAppliedAcc->setObjectName(QString::fromUtf8("listWidgetAppliedAcc"));
        listWidgetAppliedAcc->setGeometry(QRect(20, 40, 301, 391));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        listWidgetAppliedAcc->setFont(font3);
        listWidgetAppliedAcc->setStyleSheet(QString::fromUtf8("border-image: transparent;\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(tabRec);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 8, 191, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        chooseTranslatorButton = new QPushButton(tabRec);
        chooseTranslatorButton->setObjectName(QString::fromUtf8("chooseTranslatorButton"));
        chooseTranslatorButton->setGeometry(QRect(120, 440, 120, 120));
        chooseTranslatorButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        frame_2 = new QFrame(tabRec);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(594, 476, 200, 82));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        removeButton = new QPushButton(tabRec);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(400, 440, 120, 120));
        removeButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));
        listWidgetChosenAcc = new QListWidget(tabRec);
        listWidgetChosenAcc->setObjectName(QString::fromUtf8("listWidgetChosenAcc"));
        listWidgetChosenAcc->setGeometry(QRect(330, 40, 301, 391));
        listWidgetChosenAcc->setFont(font3);
        listWidgetChosenAcc->setStyleSheet(QString::fromUtf8("border-image: transparent;\n"
"color: rgb(0, 0, 0);"));
        label_21 = new QLabel(tabRec);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(330, 8, 191, 31));
        label_21->setFont(font);
        label_21->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        endRecruitingButton = new QPushButton(tabRec);
        endRecruitingButton->setObjectName(QString::fromUtf8("endRecruitingButton"));
        endRecruitingButton->setGeometry(QRect(650, 200, 120, 120));
        endRecruitingButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_clicked.png);};"));
        tabWidget->addTab(tabRec, QString());
        tabDistribution = new QWidget();
        tabDistribution->setObjectName(QString::fromUtf8("tabDistribution"));
        listWidgetTranslators = new QListWidget(tabDistribution);
        listWidgetTranslators->setObjectName(QString::fromUtf8("listWidgetTranslators"));
        listWidgetTranslators->setGeometry(QRect(30, 40, 311, 171));
        listWidgetTranslators->setFont(font3);
        listWidgetTranslators->setStyleSheet(QString::fromUtf8("border-image: transparent;\n"
"color: rgb(0, 0, 0);"));
        label_11 = new QLabel(tabDistribution);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 5, 191, 31));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        textBrowserOrigin = new QTextBrowser(tabDistribution);
        textBrowserOrigin->setObjectName(QString::fromUtf8("textBrowserOrigin"));
        textBrowserOrigin->setGeometry(QRect(30, 250, 311, 301));
        textBrowserOrigin->setFont(font2);
        textBrowserOrigin->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserOrigin->setReadOnly(true);
        label_12 = new QLabel(tabDistribution);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 215, 191, 31));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        textBrowserChildContent = new QTextBrowser(tabDistribution);
        textBrowserChildContent->setObjectName(QString::fromUtf8("textBrowserChildContent"));
        textBrowserChildContent->setGeometry(QRect(400, 60, 361, 271));
        textBrowserChildContent->setFont(font2);
        textBrowserChildContent->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserChildContent->setReadOnly(false);
        label_13 = new QLabel(tabDistribution);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(400, 20, 201, 31));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        formLayoutWidget_2 = new QWidget(tabDistribution);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(400, 350, 321, 67));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(formLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_19);

        lineEditChildPay = new QLineEdit(formLayoutWidget_2);
        lineEditChildPay->setObjectName(QString::fromUtf8("lineEditChildPay"));
        lineEditChildPay->setFont(font1);
        lineEditChildPay->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));
        lineEditChildPay->setFrame(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditChildPay);

        label_22 = new QLabel(formLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_22);

        spinBoxChildPeriod = new QSpinBox(formLayoutWidget_2);
        spinBoxChildPeriod->setObjectName(QString::fromUtf8("spinBoxChildPeriod"));
        spinBoxChildPeriod->setFont(font1);
        spinBoxChildPeriod->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBoxChildPeriod);

        frame_3 = new QFrame(tabDistribution);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(594, 476, 200, 82));
        frame_3->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        distributeButton = new QPushButton(tabDistribution);
        distributeButton->setObjectName(QString::fromUtf8("distributeButton"));
        distributeButton->setGeometry(QRect(400, 430, 120, 120));
        distributeButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_clicked.png);};"));
        tabWidget->addTab(tabDistribution, QString());
        tabCom = new QWidget();
        tabCom->setObjectName(QString::fromUtf8("tabCom"));
        listWidgetChildTasks = new QListWidget(tabCom);
        listWidgetChildTasks->setObjectName(QString::fromUtf8("listWidgetChildTasks"));
        listWidgetChildTasks->setGeometry(QRect(20, 60, 311, 221));
        listWidgetChildTasks->setFont(font3);
        listWidgetChildTasks->setStyleSheet(QString::fromUtf8("border-image: transparent;\n"
"color: rgb(0, 0, 0);"));
        label_14 = new QLabel(tabCom);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 20, 191, 31));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        label_15 = new QLabel(tabCom);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 285, 191, 31));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        textBrowserAdvice = new QTextBrowser(tabCom);
        textBrowserAdvice->setObjectName(QString::fromUtf8("textBrowserAdvice"));
        textBrowserAdvice->setGeometry(QRect(20, 320, 311, 231));
        textBrowserAdvice->setFont(font2);
        textBrowserAdvice->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserAdvice->setReadOnly(false);
        textBrowserChildTranslation = new QTextBrowser(tabCom);
        textBrowserChildTranslation->setObjectName(QString::fromUtf8("textBrowserChildTranslation"));
        textBrowserChildTranslation->setGeometry(QRect(370, 230, 361, 171));
        textBrowserChildTranslation->setFont(font2);
        textBrowserChildTranslation->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserChildTranslation->setReadOnly(true);
        label_16 = new QLabel(tabCom);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(370, 190, 191, 31));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        communicateButton = new QPushButton(tabCom);
        communicateButton->setObjectName(QString::fromUtf8("communicateButton"));
        communicateButton->setGeometry(QRect(340, 410, 120, 120));
        communicateButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_hero_clicked.png);};"));
        frame_4 = new QFrame(tabCom);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(594, 476, 200, 82));
        frame_4->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        acceptButton = new QPushButton(tabCom);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));
        acceptButton->setGeometry(QRect(470, 410, 120, 120));
        acceptButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        textBrowserChildOrigin = new QTextBrowser(tabCom);
        textBrowserChildOrigin->setObjectName(QString::fromUtf8("textBrowserChildOrigin"));
        textBrowserChildOrigin->setGeometry(QRect(370, 60, 361, 121));
        textBrowserChildOrigin->setFont(font2);
        textBrowserChildOrigin->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserChildOrigin->setReadOnly(true);
        label_23 = new QLabel(tabCom);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(370, 20, 191, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        tabWidget->addTab(tabCom, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        listWidgetChildTasks_2 = new QListWidget(tab);
        listWidgetChildTasks_2->setObjectName(QString::fromUtf8("listWidgetChildTasks_2"));
        listWidgetChildTasks_2->setGeometry(QRect(20, 50, 311, 211));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Century Gothic"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setWeight(50);
        listWidgetChildTasks_2->setFont(font4);
        listWidgetChildTasks_2->setStyleSheet(QString::fromUtf8("border-image: transparent;\n"
"color: rgb(0, 0, 0);"));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 10, 191, 31));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        textBrowserChildTranslation_2 = new QTextBrowser(tab);
        textBrowserChildTranslation_2->setObjectName(QString::fromUtf8("textBrowserChildTranslation_2"));
        textBrowserChildTranslation_2->setGeometry(QRect(20, 310, 311, 241));
        textBrowserChildTranslation_2->setFont(font2);
        textBrowserChildTranslation_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserChildTranslation_2->setReadOnly(true);
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 270, 191, 31));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        textBrowserTotalTranslation = new QTextBrowser(tab);
        textBrowserTotalTranslation->setObjectName(QString::fromUtf8("textBrowserTotalTranslation"));
        textBrowserTotalTranslation->setGeometry(QRect(360, 50, 411, 321));
        textBrowserTotalTranslation->setFont(font2);
        textBrowserTotalTranslation->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowserTotalTranslation->setReadOnly(false);
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(360, 10, 191, 31));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        frame_5 = new QFrame(tab);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(594, 476, 200, 82));
        frame_5->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        submitButton = new QPushButton(tab);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(340, 410, 120, 120));
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        saveButton = new QPushButton(tab);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(470, 410, 120, 120));
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));
        tabWidget->addTab(tab, QString());

        retranslateUi(DialogMyResTaskOper);
        QObject::connect(listWidgetChildTasks, SIGNAL(itemClicked(QListWidgetItem*)), DialogMyResTaskOper, SLOT(communicationRefresh()));
        QObject::connect(changeInfoButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(changeInfoButtonClick()));
        QObject::connect(acceptButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(acceptButtonClick()));
        QObject::connect(chooseTranslatorButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(chooseTranslatorButtonClick()));
        QObject::connect(communicateButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(communicateButtonClick()));
        QObject::connect(distributeButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(distributeButtonClick()));
        QObject::connect(editInfoOkButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(editInfoOkButtonClick()));
        QObject::connect(editInfocancelButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(editInfoCancelButtonClick()));
        QObject::connect(endRecruitingButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(endRecruitingButtonClick()));
        QObject::connect(removeButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(removeButtonClick()));
        QObject::connect(saveButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(saveButtonClick()));
        QObject::connect(submitButton, SIGNAL(clicked()), DialogMyResTaskOper, SLOT(submitButtonClick()));
        QObject::connect(listWidgetChildTasks_2, SIGNAL(itemClicked(QListWidgetItem*)), DialogMyResTaskOper, SLOT(submissionRefresh()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogMyResTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogMyResTaskOper)
    {
        DialogMyResTaskOper->setWindowTitle(QCoreApplication::translate("DialogMyResTaskOper", "My Responsible Task", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_1->setText(QCoreApplication::translate("DialogMyResTaskOper", "Translation Type", nullptr));
        labelTransType->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogMyResTaskOper", "Recruiting Period(Days)", nullptr));
        labelRecPeriod->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogMyResTaskOper", "Conducting Period(Days)", nullptr));
        labelConPeriod->setText(QString());
        label_7->setText(QCoreApplication::translate("DialogMyResTaskOper", "Payment(Ruby)", nullptr));
        label_6->setText(QCoreApplication::translate("DialogMyResTaskOper", "State", nullptr));
        labelState->setText(QString());
        label_8->setText(QCoreApplication::translate("DialogMyResTaskOper", "Rank", nullptr));
        labelRank->setText(QString());
        label_9->setText(QCoreApplication::translate("DialogMyResTaskOper", "Remaining hours", nullptr));
        labelRemHours->setText(QString());
        label_4->setText(QCoreApplication::translate("DialogMyResTaskOper", "Required English Credits", nullptr));
        label_5->setText(QCoreApplication::translate("DialogMyResTaskOper", "Required French Credits", nullptr));
        labelPay->setText(QString());
#if QT_CONFIG(tooltip)
        editInfoOkButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Set Infomation", nullptr));
#endif // QT_CONFIG(tooltip)
        editInfoOkButton->setText(QString());
#if QT_CONFIG(tooltip)
        editInfocancelButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Cancel", nullptr));
#endif // QT_CONFIG(tooltip)
        editInfocancelButton->setText(QString());
#if QT_CONFIG(tooltip)
        changeInfoButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Change Infomation", nullptr));
#endif // QT_CONFIG(tooltip)
        changeInfoButton->setText(QString());
        textBrowserBrief->setHtml(QCoreApplication::translate("DialogMyResTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("DialogMyResTaskOper", "Brief:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInfo), QCoreApplication::translate("DialogMyResTaskOper", "Infomation", nullptr));
        label->setText(QCoreApplication::translate("DialogMyResTaskOper", "Applied accounts:", nullptr));
#if QT_CONFIG(tooltip)
        chooseTranslatorButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Choose as translator", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        chooseTranslatorButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        chooseTranslatorButton->setText(QString());
#if QT_CONFIG(tooltip)
        removeButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
        removeButton->setText(QString());
        label_21->setText(QCoreApplication::translate("DialogMyResTaskOper", "Chosen accounts:", nullptr));
#if QT_CONFIG(tooltip)
        endRecruitingButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "End Recruiting", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        endRecruitingButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        endRecruitingButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabRec), QCoreApplication::translate("DialogMyResTaskOper", "Recruitment", nullptr));
        label_11->setText(QCoreApplication::translate("DialogMyResTaskOper", "Translators:", nullptr));
        textBrowserOrigin->setHtml(QCoreApplication::translate("DialogMyResTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("DialogMyResTaskOper", "Origin:", nullptr));
        textBrowserChildContent->setHtml(QCoreApplication::translate("DialogMyResTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("DialogMyResTaskOper", "Child Task Content:", nullptr));
        label_19->setText(QCoreApplication::translate("DialogMyResTaskOper", "Payment(Ruby)", nullptr));
        label_22->setText(QCoreApplication::translate("DialogMyResTaskOper", "Period(Days)", nullptr));
#if QT_CONFIG(tooltip)
        distributeButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Distribute Child Task", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        distributeButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        distributeButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabDistribution), QCoreApplication::translate("DialogMyResTaskOper", "Distribution", nullptr));
        label_14->setText(QCoreApplication::translate("DialogMyResTaskOper", "Child Tasks:", nullptr));
        label_15->setText(QCoreApplication::translate("DialogMyResTaskOper", "Advice:", nullptr));
        textBrowserAdvice->setHtml(QCoreApplication::translate("DialogMyResTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowserChildTranslation->setHtml(QCoreApplication::translate("DialogMyResTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("DialogMyResTaskOper", "Translation:", nullptr));
#if QT_CONFIG(tooltip)
        communicateButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Send Advice", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        communicateButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        communicateButton->setText(QString());
#if QT_CONFIG(tooltip)
        acceptButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Accept", nullptr));
#endif // QT_CONFIG(tooltip)
        acceptButton->setText(QString());
        textBrowserChildOrigin->setHtml(QCoreApplication::translate("DialogMyResTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("DialogMyResTaskOper", "Origin:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCom), QCoreApplication::translate("DialogMyResTaskOper", "Communication", nullptr));
        label_17->setText(QCoreApplication::translate("DialogMyResTaskOper", "Child Tasks:", nullptr));
        textBrowserChildTranslation_2->setHtml(QCoreApplication::translate("DialogMyResTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("DialogMyResTaskOper", "Child Translation:", nullptr));
        textBrowserTotalTranslation->setHtml(QCoreApplication::translate("DialogMyResTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("DialogMyResTaskOper", "Total Translation:", nullptr));
#if QT_CONFIG(tooltip)
        submitButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Set Infomation", nullptr));
#endif // QT_CONFIG(tooltip)
        submitButton->setText(QString());
#if QT_CONFIG(tooltip)
        saveButton->setToolTip(QCoreApplication::translate("DialogMyResTaskOper", "Cancel", nullptr));
#endif // QT_CONFIG(tooltip)
        saveButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("DialogMyResTaskOper", "Submission", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMyResTaskOper: public Ui_DialogMyResTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYRESTASKOPER_H
