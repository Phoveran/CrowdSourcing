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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
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
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *verticalFrame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;

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
        verticalFrame->setGeometry(QRect(40, 50, 251, 451));
        verticalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(verticalFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));

        verticalLayout->addWidget(label_5);

        verticalFrame_2 = new QFrame(centralwidget);
        verticalFrame_2->setObjectName(QString::fromUtf8("verticalFrame_2"));
        verticalFrame_2->setGeometry(QRect(350, 50, 411, 451));
        verticalFrame_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout_2 = new QVBoxLayout(verticalFrame_2);
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(verticalFrame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(20);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(verticalFrame_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit_3->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_5 = new QLineEdit(verticalFrame_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setFont(font1);
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit_5->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_4 = new QLineEdit(verticalFrame_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit_4->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_2 = new QLineEdit(verticalFrame_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        lineEdit_2->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_2);

        verticalFrame1 = new QFrame(centralwidget);
        verticalFrame1->setObjectName(QString::fromUtf8("verticalFrame1"));
        verticalFrame1->setGeometry(QRect(1490, 70, 291, 391));
        verticalFrame1->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout_3 = new QVBoxLayout(verticalFrame1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_5 = new QPushButton(verticalFrame1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 0);"));
        pushButton_5->setFlat(true);

        verticalLayout_3->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(verticalFrame1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 0);"));
        pushButton_3->setFlat(true);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalFrame1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 0);"));
        pushButton_4->setFlat(true);

        verticalLayout_3->addWidget(pushButton_4);

        horizontalFrame = new QFrame(centralwidget);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(50, 520, 649, 80));
        horizontalFrame->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(100);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(horizontalFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setContextMenuPolicy(Qt::ActionsContextMenu);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 0);"));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalFrame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 0);"));
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);

        verticalFrame_3 = new QFrame(centralwidget);
        verticalFrame_3->setObjectName(QString::fromUtf8("verticalFrame_3"));
        verticalFrame_3->setGeometry(QRect(1450, 630, 371, 191));
        verticalFrame_3->setStyleSheet(QString::fromUtf8("border-image: \\*url();"));
        verticalLayout_4 = new QVBoxLayout(verticalFrame_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_8 = new QPushButton(verticalFrame_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 0);"));
        pushButton_8->setFlat(true);

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_6 = new QPushButton(verticalFrame_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"color: rgb(170, 0, 0);"));
        pushButton_6->setFlat(true);

        verticalLayout_4->addWidget(pushButton_6);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(logOutButtonClick()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(changePasswordButtonClick()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CrowdSourcing", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Username:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Member type:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Credits:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Balance:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Certification:</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        lineEdit_5->setInputMask(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Waiting tasks", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Doing tasks", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Finished tasks", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Update information", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Top up", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Change password", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONAL_H
