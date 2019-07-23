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
    QLabel *labelRank;
    QFrame *frame;
    QFrame *fromPic;
    QFrame *fixPic;
    QFrame *toPic;
    QLabel *labelType;
    QLabel *labelPayment;

    void setupUi(QWidget *recTaskItem)
    {
        if (recTaskItem->objectName().isEmpty())
            recTaskItem->setObjectName(QString::fromUtf8("recTaskItem"));
        recTaskItem->resize(680, 50);
        recTaskItem->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        labelRank = new QLabel(recTaskItem);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setGeometry(QRect(86, 17, 100, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setBold(true);
        font.setWeight(75);
        labelRank->setFont(font);
        frame = new QFrame(recTaskItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(358, 15, 90, 20));
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
        labelType = new QLabel(recTaskItem);
        labelType->setObjectName(QString::fromUtf8("labelType"));
        labelType->setGeometry(QRect(222, 17, 100, 16));
        labelType->setFont(font);
        labelPayment = new QLabel(recTaskItem);
        labelPayment->setObjectName(QString::fromUtf8("labelPayment"));
        labelPayment->setGeometry(QRect(494, 17, 100, 16));
        labelPayment->setFont(font);

        retranslateUi(recTaskItem);

        QMetaObject::connectSlotsByName(recTaskItem);
    } // setupUi

    void retranslateUi(QWidget *recTaskItem)
    {
        recTaskItem->setWindowTitle(QCoreApplication::translate("recTaskItem", "Form", nullptr));
        labelRank->setText(QCoreApplication::translate("recTaskItem", "Rank", nullptr));
        labelType->setText(QCoreApplication::translate("recTaskItem", "Type", nullptr));
        labelPayment->setText(QCoreApplication::translate("recTaskItem", "Payment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recTaskItem: public Ui_recTaskItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTASKITEM_H
