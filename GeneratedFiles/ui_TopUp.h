/********************************************************************************
** Form generated from reading UI file 'TopUp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPUP_H
#define UI_TOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogTopUp
{
public:
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QFrame *frame;
    QLabel *noticeLabel;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogTopUp)
    {
        if (DialogTopUp->objectName().isEmpty())
            DialogTopUp->setObjectName(QString::fromUtf8("DialogTopUp"));
        DialogTopUp->resize(800, 600);
        DialogTopUp->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda6.jpg);"));
        verticalFrame = new QFrame(DialogTopUp);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(80, 50, 261, 111));
        verticalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(verticalFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(85, 0, 0);"));
        label->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(verticalFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        verticalLayout->addWidget(lineEdit);

        frame = new QFrame(DialogTopUp);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(80, 190, 283, 281));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/wechat.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        noticeLabel = new QLabel(DialogTopUp);
        noticeLabel->setObjectName(QString::fromUtf8("noticeLabel"));
        noticeLabel->setGeometry(QRect(90, 470, 261, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        noticeLabel->setFont(font2);
        noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
""));
        verticalFrame1 = new QFrame(DialogTopUp);
        verticalFrame1->setObjectName(QString::fromUtf8("verticalFrame1"));
        verticalFrame1->setGeometry(QRect(140, 510, 160, 80));
        verticalFrame1->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout_2 = new QVBoxLayout(verticalFrame1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(verticalFrame1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8(" QPushButton{  \n"
"    color:rgb(233, 236, 243);  \n"
"    min-height:20;  \n"
"    border-style:solid;  \n"
"    border-top-left-radius:2px;  \n"
"    border-top-right-radius:2px;  \n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241),   \n"
"                                stop: 0.3 rgb(85, 220, 0),  \n"
"                                  stop: 1 rgb(85, 170, 0));  \n"
"    border:1px;  \n"
"    border-radius:5px;padding:2px 4px;\n"
"    }  \n"
"    QPushButton:hover{\n"
"    color:rgb(255, 255, 255);  \n"
"    min-height:20;  \n"
"    border-style:solid;  \n"
"    border-top-left-radius:2px;  \n"
"    border-top-right-radius:2px;  \n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241),   \n"
"                                stop: 0.3 rgb(255, 216, 17),  \n"
"                                  stop: 1 rgb(255, 170, 0));  \n"
"    border:1px;  \n"
"    border-radius:5px;padding:2px 4px;  \n"
"    }  \n"
"    QPushButton:pressed{\n"
"    colo"
                        "r:rgb(233, 236, 243);  \n"
"    min-height:20;  \n"
"    border-style:solid;  \n"
"    border-top-left-radius:2px;  \n"
"    border-top-right-radius:2px;  \n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241),   \n"
"                                stop: 0.3 rgb(255, 216, 17),  \n"
"                                  stop: 1 rgb(255, 170, 0));  \n"
"    border:1px;  \n"
"    border-radius:5px;padding:2px 4px;  \n"
"    };  "));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(DialogTopUp);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogTopUp, SLOT(topUpClick()));

        QMetaObject::connectSlotsByName(DialogTopUp);
    } // setupUi

    void retranslateUi(QDialog *DialogTopUp)
    {
        DialogTopUp->setWindowTitle(QCoreApplication::translate("DialogTopUp", "TopUp", nullptr));
        label->setText(QCoreApplication::translate("DialogTopUp", "Top up amount:", nullptr));
        lineEdit->setText(QString());
        noticeLabel->setText(QCoreApplication::translate("DialogTopUp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:14pt; font-weight:600; font-style:italic;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">Please use Wechat Pay</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogTopUp", "Top up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTopUp: public Ui_DialogTopUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPUP_H
