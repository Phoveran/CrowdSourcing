/********************************************************************************
** Form generated from reading UI file 'Personal.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONAL_H
#define UI_PERSONAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *verticalFrame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda2.jpg);"));
        verticalFrame = new QFrame(centralwidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(520, 570, 291, 391));
        verticalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout_3 = new QVBoxLayout(verticalFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_5 = new QPushButton(verticalFrame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        pushButton_5->setFlat(true);

        verticalLayout_3->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(verticalFrame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        pushButton_3->setFlat(true);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalFrame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        pushButton_4->setFlat(true);

        verticalLayout_3->addWidget(pushButton_4);

        verticalFrame_3 = new QFrame(centralwidget);
        verticalFrame_3->setObjectName(QString::fromUtf8("verticalFrame_3"));
        verticalFrame_3->setGeometry(QRect(90, 570, 291, 391));
        verticalFrame_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout_4 = new QVBoxLayout(verticalFrame_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton = new QPushButton(verticalFrame_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setContextMenuPolicy(Qt::ActionsContextMenu);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        pushButton->setFlat(true);

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalFrame_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        pushButton_2->setFlat(true);

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_11 = new QPushButton(verticalFrame_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setFont(font);
        pushButton_11->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        pushButton_11->setFlat(true);

        verticalLayout_4->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(verticalFrame_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setFont(font1);
        pushButton_12->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 85, 0);"));
        pushButton_12->setFlat(true);

        verticalLayout_4->addWidget(pushButton_12);

        formFrame = new QFrame(centralwidget);
        formFrame->setObjectName(QString::fromUtf8("formFrame"));
        formFrame->setGeometry(QRect(150, 90, 601, 411));
        formFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(50);
        label = new QLabel(formFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_3 = new QLabel(formFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_2 = new QLabel(formFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(formFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(255, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit = new QLineEdit(formFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        font2.setPointSize(20);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_5 = new QLineEdit(formFrame);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setFont(font2);
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit_5->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_3 = new QLineEdit(formFrame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font2);
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit_3->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formFrame);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font2);
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit_4->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_2 = new QLineEdit(formFrame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit_2->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(changePasswordButtonClick()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), MainWindow, SLOT(logOutButtonClick()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CrowdSourcing", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Waiting tasks", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Doing tasks", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Finished tasks", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Update information", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Top up", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Change password", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa007f;\">Username:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa007f;\">Credits:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa007f;\">Member type:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa007f;\">Balance:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa007f;\">Certification:</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        lineEdit_5->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONAL_H
