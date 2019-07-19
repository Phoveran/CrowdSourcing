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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DialogUpdateInfo
{
public:

    void setupUi(QDialog *DialogUpdateInfo)
    {
        if (DialogUpdateInfo->objectName().isEmpty())
            DialogUpdateInfo->setObjectName(QString::fromUtf8("DialogUpdateInfo"));
        DialogUpdateInfo->resize(800, 600);
        DialogUpdateInfo->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda7.jpg);"));

        retranslateUi(DialogUpdateInfo);

        QMetaObject::connectSlotsByName(DialogUpdateInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogUpdateInfo)
    {
        DialogUpdateInfo->setWindowTitle(QCoreApplication::translate("DialogUpdateInfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogUpdateInfo: public Ui_DialogUpdateInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEINFO_H
