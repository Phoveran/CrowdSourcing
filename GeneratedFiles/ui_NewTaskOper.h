/********************************************************************************
** Form generated from reading UI file 'NewTaskOper.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTASKOPER_H
#define UI_NEWTASKOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogNewTaskOper
{
public:
    QFrame *frame;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBoxTransType;
    QLineEdit *lineEditPay;
    QSpinBox *spinBoxRecPeriod;
    QSpinBox *spinBoxConPeriod;
    QSpinBox *spinBoxReqEngCre;
    QSpinBox *spinBoxReqFreCre;
    QTextBrowser *textBrowserOrigin;
    QTextBrowser *textBrowserBrief;
    QLabel *label;
    QLabel *label_7;

    void setupUi(QDialog *DialogNewTaskOper)
    {
        if (DialogNewTaskOper->objectName().isEmpty())
            DialogNewTaskOper->setObjectName(QString::fromUtf8("DialogNewTaskOper"));
        DialogNewTaskOper->resize(800, 600);
        DialogNewTaskOper->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"border-image:transparent;"));
        frame = new QFrame(DialogNewTaskOper);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(600, 508, 200, 82));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo2.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        okButton = new QPushButton(DialogNewTaskOper);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(120, 470, 120, 120));
        okButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/link_shoot_clicked.png);};"));
        cancelButton = new QPushButton(DialogNewTaskOper);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(300, 470, 120, 120));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/zelda_woman_clicked.png);};"));
        formLayoutWidget = new QWidget(DialogNewTaskOper);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 462, 201));
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

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        comboBoxTransType = new QComboBox(formLayoutWidget);
        comboBoxTransType->addItem(QString());
        comboBoxTransType->addItem(QString());
        comboBoxTransType->addItem(QString());
        comboBoxTransType->addItem(QString());
        comboBoxTransType->addItem(QString());
        comboBoxTransType->addItem(QString());
        comboBoxTransType->setObjectName(QString::fromUtf8("comboBoxTransType"));
        comboBoxTransType->setFont(font);
        comboBoxTransType->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxTransType);

        lineEditPay = new QLineEdit(formLayoutWidget);
        lineEditPay->setObjectName(QString::fromUtf8("lineEditPay"));
        lineEditPay->setFont(font);
        lineEditPay->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));
        lineEditPay->setFrame(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditPay);

        spinBoxRecPeriod = new QSpinBox(formLayoutWidget);
        spinBoxRecPeriod->setObjectName(QString::fromUtf8("spinBoxRecPeriod"));
        spinBoxRecPeriod->setFont(font);
        spinBoxRecPeriod->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxRecPeriod);

        spinBoxConPeriod = new QSpinBox(formLayoutWidget);
        spinBoxConPeriod->setObjectName(QString::fromUtf8("spinBoxConPeriod"));
        spinBoxConPeriod->setFont(font);
        spinBoxConPeriod->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxConPeriod);

        spinBoxReqEngCre = new QSpinBox(formLayoutWidget);
        spinBoxReqEngCre->setObjectName(QString::fromUtf8("spinBoxReqEngCre"));
        spinBoxReqEngCre->setFont(font);
        spinBoxReqEngCre->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBoxReqEngCre);

        spinBoxReqFreCre = new QSpinBox(formLayoutWidget);
        spinBoxReqFreCre->setObjectName(QString::fromUtf8("spinBoxReqFreCre"));
        spinBoxReqFreCre->setFont(font);
        spinBoxReqFreCre->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBoxReqFreCre);

        textBrowserOrigin = new QTextBrowser(DialogNewTaskOper);
        textBrowserOrigin->setObjectName(QString::fromUtf8("textBrowserOrigin"));
        textBrowserOrigin->setGeometry(QRect(475, 60, 321, 431));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(10);
        textBrowserOrigin->setFont(font1);
        textBrowserOrigin->setStyleSheet(QString::fromUtf8(""));
        textBrowserOrigin->setReadOnly(false);
        textBrowserBrief = new QTextBrowser(DialogNewTaskOper);
        textBrowserBrief->setObjectName(QString::fromUtf8("textBrowserBrief"));
        textBrowserBrief->setGeometry(QRect(10, 270, 441, 191));
        textBrowserBrief->setFont(font1);
        textBrowserBrief->setStyleSheet(QString::fromUtf8(""));
        textBrowserBrief->setReadOnly(false);
        label = new QLabel(DialogNewTaskOper);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 235, 61, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));
        label_7 = new QLabel(DialogNewTaskOper);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(485, 25, 71, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("border-image:transparent;color: rgb(85, 85, 0);"));

        retranslateUi(DialogNewTaskOper);
        QObject::connect(okButton, SIGNAL(clicked()), DialogNewTaskOper, SLOT(okButtonClick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DialogNewTaskOper, SLOT(cancelButtonClick()));

        comboBoxTransType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogNewTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogNewTaskOper)
    {
        DialogNewTaskOper->setWindowTitle(QCoreApplication::translate("DialogNewTaskOper", "NewTask", nullptr));
#if QT_CONFIG(tooltip)
        okButton->setToolTip(QCoreApplication::translate("DialogNewTaskOper", "Issue", nullptr));
#endif // QT_CONFIG(tooltip)
        okButton->setText(QString());
#if QT_CONFIG(tooltip)
        cancelButton->setToolTip(QCoreApplication::translate("DialogNewTaskOper", "Cancel", nullptr));
#endif // QT_CONFIG(tooltip)
        cancelButton->setText(QString());
        label_1->setText(QCoreApplication::translate("DialogNewTaskOper", "Translation Type", nullptr));
        label_2->setText(QCoreApplication::translate("DialogNewTaskOper", "Recruiting Period(Days)", nullptr));
        label_3->setText(QCoreApplication::translate("DialogNewTaskOper", "Conducting Period(Days)", nullptr));
        label_4->setText(QCoreApplication::translate("DialogNewTaskOper", "Required English Credits", nullptr));
        label_5->setText(QCoreApplication::translate("DialogNewTaskOper", "Required French Credits", nullptr));
        label_6->setText(QCoreApplication::translate("DialogNewTaskOper", "Payment(Ruby)", nullptr));
        comboBoxTransType->setItemText(0, QCoreApplication::translate("DialogNewTaskOper", "Chinese to English", nullptr));
        comboBoxTransType->setItemText(1, QCoreApplication::translate("DialogNewTaskOper", "Chinese to French", nullptr));
        comboBoxTransType->setItemText(2, QCoreApplication::translate("DialogNewTaskOper", "English to Chinese", nullptr));
        comboBoxTransType->setItemText(3, QCoreApplication::translate("DialogNewTaskOper", "English to French", nullptr));
        comboBoxTransType->setItemText(4, QCoreApplication::translate("DialogNewTaskOper", "French to Chinese", nullptr));
        comboBoxTransType->setItemText(5, QCoreApplication::translate("DialogNewTaskOper", "French to English", nullptr));

        textBrowserOrigin->setHtml(QCoreApplication::translate("DialogNewTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowserBrief->setHtml(QCoreApplication::translate("DialogNewTaskOper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DialogNewTaskOper", "Brief:", nullptr));
        label_7->setText(QCoreApplication::translate("DialogNewTaskOper", "Origin:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogNewTaskOper: public Ui_DialogNewTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTASKOPER_H
