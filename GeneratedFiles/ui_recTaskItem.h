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
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QLabel *labelRank_2;
    QLabel *labelRank_3;
    QLabel *labelRank_4;

    void setupUi(QWidget *recTaskItem)
    {
        if (recTaskItem->objectName().isEmpty())
            recTaskItem->setObjectName(QString::fromUtf8("recTaskItem"));
        recTaskItem->resize(689, 50);
        recTaskItem->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        labelRank = new QLabel(recTaskItem);
        labelRank->setObjectName(QString::fromUtf8("labelRank"));
        labelRank->setGeometry(QRect(50, 17, 71, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setBold(true);
        font.setWeight(75);
        labelRank->setFont(font);
        frame = new QFrame(recTaskItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(450, 15, 90, 20));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 30, 20));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/Chi.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(30, 0, 30, 20));
        frame_3->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/right.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(60, 0, 30, 20));
        frame_4->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/Fra.png);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        labelRank_2 = new QLabel(recTaskItem);
        labelRank_2->setObjectName(QString::fromUtf8("labelRank_2"));
        labelRank_2->setGeometry(QRect(180, 17, 71, 16));
        labelRank_2->setFont(font);
        labelRank_3 = new QLabel(recTaskItem);
        labelRank_3->setObjectName(QString::fromUtf8("labelRank_3"));
        labelRank_3->setGeometry(QRect(320, 17, 71, 16));
        labelRank_3->setFont(font);
        labelRank_4 = new QLabel(recTaskItem);
        labelRank_4->setObjectName(QString::fromUtf8("labelRank_4"));
        labelRank_4->setGeometry(QRect(600, 17, 81, 16));
        labelRank_4->setFont(font);

        retranslateUi(recTaskItem);

        QMetaObject::connectSlotsByName(recTaskItem);
    } // setupUi

    void retranslateUi(QWidget *recTaskItem)
    {
        recTaskItem->setWindowTitle(QCoreApplication::translate("recTaskItem", "Form", nullptr));
        labelRank->setText(QCoreApplication::translate("recTaskItem", "Rank", nullptr));
        labelRank_2->setText(QCoreApplication::translate("recTaskItem", "Type", nullptr));
        labelRank_3->setText(QCoreApplication::translate("recTaskItem", "State", nullptr));
        labelRank_4->setText(QCoreApplication::translate("recTaskItem", "Payment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recTaskItem: public Ui_recTaskItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTASKITEM_H
