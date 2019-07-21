/********************************************************************************
** Form generated from reading UI file 'UpdateInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEINFO_H
#define UI_UPDATEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogUpdateInfo
{
public:
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *certificateLabel;
    QLabel *teleLabel;
    QComboBox *certificateBox;
    QLineEdit *teleLineEdit;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *noticeLabel;

    void setupUi(QDialog *DialogUpdateInfo)
    {
        if (DialogUpdateInfo->objectName().isEmpty())
            DialogUpdateInfo->setObjectName(QString::fromUtf8("DialogUpdateInfo"));
        DialogUpdateInfo->resize(800, 600);
        DialogUpdateInfo->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda7.jpg);"));
        formWidget = new QWidget(DialogUpdateInfo);
        formWidget->setObjectName(QString::fromUtf8("formWidget"));
        formWidget->setGeometry(QRect(90, 190, 501, 151));
        formWidget->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(50);
        certificateLabel = new QLabel(formWidget);
        certificateLabel->setObjectName(QString::fromUtf8("certificateLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        certificateLabel->setFont(font);
        certificateLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, certificateLabel);

        teleLabel = new QLabel(formWidget);
        teleLabel->setObjectName(QString::fromUtf8("teleLabel"));
        teleLabel->setFont(font);
        teleLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, teleLabel);

        certificateBox = new QComboBox(formWidget);
        certificateBox->addItem(QString());
        certificateBox->addItem(QString());
        certificateBox->addItem(QString());
        certificateBox->addItem(QString());
        certificateBox->addItem(QString());
        certificateBox->addItem(QString());
        certificateBox->addItem(QString());
        certificateBox->addItem(QString());
        certificateBox->addItem(QString());
        certificateBox->setObjectName(QString::fromUtf8("certificateBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        certificateBox->setFont(font1);
        certificateBox->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, certificateBox);

        teleLineEdit = new QLineEdit(formWidget);
        teleLineEdit->setObjectName(QString::fromUtf8("teleLineEdit"));
        teleLineEdit->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, teleLineEdit);

        horizontalFrame = new QFrame(DialogUpdateInfo);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(210, 360, 331, 80));
        horizontalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(80);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okButton = new QPushButton(horizontalFrame);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        okButton->setFont(font2);
        okButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
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

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(horizontalFrame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font2);
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

        horizontalLayout->addWidget(cancelButton);

        noticeLabel = new QLabel(DialogUpdateInfo);
        noticeLabel->setObjectName(QString::fromUtf8("noticeLabel"));
        noticeLabel->setGeometry(QRect(240, 460, 311, 39));
        noticeLabel->setFont(font);
        noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 0, 0);"));

        retranslateUi(DialogUpdateInfo);
        QObject::connect(okButton, SIGNAL(clicked()), DialogUpdateInfo, SLOT(okClick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DialogUpdateInfo, SLOT(cancelClick()));

        QMetaObject::connectSlotsByName(DialogUpdateInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogUpdateInfo)
    {
        DialogUpdateInfo->setWindowTitle(QCoreApplication::translate("DialogUpdateInfo", "UpdateInfo", nullptr));
        certificateLabel->setText(QCoreApplication::translate("DialogUpdateInfo", "Certificate", nullptr));
        teleLabel->setText(QCoreApplication::translate("DialogUpdateInfo", "Telephone", nullptr));
        certificateBox->setItemText(0, QCoreApplication::translate("DialogUpdateInfo", "CET4", nullptr));
        certificateBox->setItemText(1, QCoreApplication::translate("DialogUpdateInfo", "CET6", nullptr));
        certificateBox->setItemText(2, QCoreApplication::translate("DialogUpdateInfo", "TEM4", nullptr));
        certificateBox->setItemText(3, QCoreApplication::translate("DialogUpdateInfo", "TEM8", nullptr));
        certificateBox->setItemText(4, QCoreApplication::translate("DialogUpdateInfo", "IELTS6", nullptr));
        certificateBox->setItemText(5, QCoreApplication::translate("DialogUpdateInfo", "IELTS7", nullptr));
        certificateBox->setItemText(6, QCoreApplication::translate("DialogUpdateInfo", "TOFEL95", nullptr));
        certificateBox->setItemText(7, QCoreApplication::translate("DialogUpdateInfo", "TOFEL105", nullptr));
        certificateBox->setItemText(8, QCoreApplication::translate("DialogUpdateInfo", "TOFEL110", nullptr));

        okButton->setText(QCoreApplication::translate("DialogUpdateInfo", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("DialogUpdateInfo", "Cancel", nullptr));
        noticeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogUpdateInfo: public Ui_DialogUpdateInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEINFO_H
