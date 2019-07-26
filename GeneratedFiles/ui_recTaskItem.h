/********************************************************************************
** Form generated from reading UI file 'recTaskItem.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTASKITEM_H
#define UI_RECTASKITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recTaskItem
{
public:
    QFrame *frame_2;
    QFrame *frame;
    QFrame *fromPic;
    QFrame *fixPic;
    QFrame *toPic;
    QLabel *labelState;
    QLabel *labelType;
    QLabel *labelRank;

    void setupUi(QWidget *recTaskItem)
    {
        if (recTaskItem->objectName().isEmpty())
            recTaskItem->setObjectName(QString::fromUtf8("recTaskItem"));
        recTaskItem->resize(689, 50);
        recTaskItem->setStyleSheet(QString::fromUtf8(""));
        frame_2 = new QFrame(recTaskItem);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 689, 50));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/wood.jpg);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(370, 15, 90, 20));
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
        labelState = new QLabel(frame_2);
        labelState->setObjectName(QString::fromUtf8("labelState"));
        labelState->setGeometry(QRect(520, 17, 211, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setBold(true);
        font.setWeight(75);
        labelState->setFont(font);
        labelState->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        labelType = new QLabel(frame_2);
        labelType->setObjectName(QString::fromUtf8("labelType"));
        labelType->setGeometry(QRect(170, 17, 181, 16));
        labelType->setFont(font);
        labelType->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"border-image:transparent;"));
        labelRank = new QLabel(frame_2);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setGeometry(QRect(40, 17, 100, 16));
        labelRank->setFont(font);
        labelRank->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);\n"
"background-image: transparent;"));

        retranslateUi(recTaskItem);

        QMetaObject::connectSlotsByName(recTaskItem);
    } // setupUi

    void retranslateUi(QWidget *recTaskItem)
    {
        recTaskItem->setWindowTitle(QCoreApplication::translate("recTaskItem", "Form", nullptr));
        labelState->setText(QCoreApplication::translate("recTaskItem", "State", nullptr));
        labelType->setText(QCoreApplication::translate("recTaskItem", "Type", nullptr));
        labelRank->setText(QCoreApplication::translate("recTaskItem", "Rank", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recTaskItem: public Ui_recTaskItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTASKITEM_H
