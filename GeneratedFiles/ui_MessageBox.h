/********************************************************************************
** Form generated from reading UI file 'MessageBox.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEBOX_H
#define UI_MESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogMessageBox
{
public:
    QFrame *frame;
    QListWidget *listWidgetHis;
    QListWidget *listWidgetUn;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *readButton;

    void setupUi(QDialog *DialogMessageBox)
    {
        if (DialogMessageBox->objectName().isEmpty())
            DialogMessageBox->setObjectName(QString::fromUtf8("DialogMessageBox"));
        DialogMessageBox->resize(800, 600);
        DialogMessageBox->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"border-image:transparent;"));
        frame = new QFrame(DialogMessageBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(400, 420, 391, 171));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda_logo5.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        listWidgetHis = new QListWidget(DialogMessageBox);
        listWidgetHis->setObjectName(QString::fromUtf8("listWidgetHis"));
        listWidgetHis->setGeometry(QRect(400, 50, 391, 361));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        listWidgetHis->setFont(font);
        listWidgetHis->setWordWrap(true);
        listWidgetUn = new QListWidget(DialogMessageBox);
        listWidgetUn->setObjectName(QString::fromUtf8("listWidgetUn"));
        listWidgetUn->setGeometry(QRect(20, 50, 351, 381));
        listWidgetUn->setFont(font);
        listWidgetUn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        listWidgetUn->setProperty("isWrapping", QVariant(false));
        listWidgetUn->setWordWrap(true);
        label_8 = new QLabel(DialogMessageBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 20, 141, 24));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        label_9 = new QLabel(DialogMessageBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(400, 20, 141, 24));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        readButton = new QPushButton(DialogMessageBox);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        readButton->setGeometry(QRect(140, 450, 120, 120));
        readButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/read_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/read_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/read_clicked.png);};"));

        retranslateUi(DialogMessageBox);
        QObject::connect(readButton, SIGNAL(clicked()), DialogMessageBox, SLOT(readButtonClick()));

        QMetaObject::connectSlotsByName(DialogMessageBox);
    } // setupUi

    void retranslateUi(QDialog *DialogMessageBox)
    {
        DialogMessageBox->setWindowTitle(QCoreApplication::translate("DialogMessageBox", "Messages", nullptr));
        label_8->setText(QCoreApplication::translate("DialogMessageBox", "Unread news", nullptr));
        label_9->setText(QCoreApplication::translate("DialogMessageBox", "History news", nullptr));
#if QT_CONFIG(tooltip)
        readButton->setToolTip(QCoreApplication::translate("DialogMessageBox", "All read", nullptr));
#endif // QT_CONFIG(tooltip)
        readButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogMessageBox: public Ui_DialogMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEBOX_H
