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

QT_BEGIN_NAMESPACE

class Ui_DialogMyResTaskOper
{
public:

    void setupUi(QDialog *DialogMyResTaskOper)
    {
        if (DialogMyResTaskOper->objectName().isEmpty())
            DialogMyResTaskOper->setObjectName(QString::fromUtf8("DialogMyResTaskOper"));
        DialogMyResTaskOper->resize(800, 600);
        DialogMyResTaskOper->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda8.jpg);"));

        retranslateUi(DialogMyResTaskOper);

        QMetaObject::connectSlotsByName(DialogMyResTaskOper);
    } // setupUi

    void retranslateUi(QDialog *DialogMyResTaskOper)
    {
        DialogMyResTaskOper->setWindowTitle(QCoreApplication::translate("DialogMyResTaskOper", "MyTask", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMyResTaskOper: public Ui_DialogMyResTaskOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYRESTASKOPER_H
