/********************************************************************************
** Form generated from reading UI file 'myTaskItem.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTASKITEM_H
#define UI_MYTASKITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myTaskItem
{
public:
    QFrame *bigFrame;
    QFrame *frame;
    QFrame *fromPic;
    QFrame *fixPic;
    QFrame *toPic;
    QLabel *labelType;
    QLabel *labelState;
    QLabel *labelRank;

    void setupUi(QWidget *myTaskItem)
    {
        if (myTaskItem->objectName().isEmpty())
            myTaskItem->setObjectName(QString::fromUtf8("myTaskItem"));
        myTaskItem->resize(609, 50);
        myTaskItem->setStyleSheet(QString::fromUtf8(""));
        bigFrame = new QFrame(myTaskItem);
        bigFrame->setObjectName(QString::fromUtf8("bigFrame"));
        bigFrame->setGeometry(QRect(0, 0, 689, 50));
        bigFrame->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/wood.jpg);"));
        bigFrame->setFrameShape(QFrame::StyledPanel);
        bigFrame->setFrameShadow(QFrame::Raised);
        frame = new QFrame(bigFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(310, 15, 90, 20));
        frame->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        fromPic = new QFrame(frame);
        fromPic->setObjectName(QString::fromUtf8("fromPic"));
        fromPic->setGeometry(QRect(0, 0, 30, 20));
        fromPic->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/Chi.png);"));
        fromPic->setFrameShape(QFrame::StyledPanel);
        fromPic->setFrameShadow(QFrame::Raised);
        fixPic = new QFrame(frame);
        fixPic->setObjectName(QString::fromUtf8("fixPic"));
        fixPic->setGeometry(QRect(30, 0, 30, 20));
        fixPic->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/right.png);"));
        fixPic->setFrameShape(QFrame::StyledPanel);
        fixPic->setFrameShadow(QFrame::Raised);
        toPic = new QFrame(frame);
        toPic->setObjectName(QString::fromUtf8("toPic"));
        toPic->setGeometry(QRect(60, 0, 30, 20));
        toPic->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/Fra.png);"));
        toPic->setFrameShape(QFrame::StyledPanel);
        toPic->setFrameShadow(QFrame::Raised);
        labelType = new QLabel(bigFrame);
        labelType->setObjectName(QString::fromUtf8("labelType"));
        labelType->setGeometry(QRect(460, 17, 211, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setBold(true);
        font.setWeight(75);
        labelType->setFont(font);
        labelType->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        labelState = new QLabel(bigFrame);
        labelState->setObjectName(QString::fromUtf8("labelState"));
        labelState->setGeometry(QRect(140, 17, 151, 16));
        labelState->setFont(font);
        labelState->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        labelRank = new QLabel(bigFrame);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setGeometry(QRect(40, 17, 100, 16));
        labelRank->setFont(font);
        labelRank->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"background-image: transparent;"));

        retranslateUi(myTaskItem);

        QMetaObject::connectSlotsByName(myTaskItem);
    } // setupUi

    void retranslateUi(QWidget *myTaskItem)
    {
        myTaskItem->setWindowTitle(QCoreApplication::translate("myTaskItem", "Form", nullptr));
        labelType->setText(QCoreApplication::translate("myTaskItem", "Principal", nullptr));
        labelState->setText(QCoreApplication::translate("myTaskItem", "State", nullptr));
        labelRank->setText(QCoreApplication::translate("myTaskItem", "Rank", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myTaskItem: public Ui_myTaskItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTASKITEM_H
