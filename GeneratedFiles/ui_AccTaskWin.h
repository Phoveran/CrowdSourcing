/********************************************************************************
** Form generated from reading UI file 'AccTaskWin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCTASKWIN_H
#define UI_ACCTASKWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowAccTask
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QPushButton *othViewButton;
    QPushButton *refreshButton;
    QPushButton *myViewButton;
    QPushButton *finiViewButton;
    QLabel *label_4;
    QListWidget *listWidgetOthTasks;
    QLabel *label_2;
    QListWidget *listWidgetMyTasks;
    QListWidget *listWidgetFiniTasks;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindowAccTask)
    {
        if (MainWindowAccTask->objectName().isEmpty())
            MainWindowAccTask->setObjectName(QString::fromUtf8("MainWindowAccTask"));
        MainWindowAccTask->resize(1920, 1080);
        MainWindowAccTask->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda9.jpg);"));
        MainWindowAccTask->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(MainWindowAccTask);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(30, 20, 80, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        backButton->setFont(font);
        backButton->setFocusPolicy(Qt::StrongFocus);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/back_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/back_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/back_clicked.png);};\n"
""));
        backButton->setFlat(false);
        othViewButton = new QPushButton(centralwidget);
        othViewButton->setObjectName(QString::fromUtf8("othViewButton"));
        othViewButton->setGeometry(QRect(740, 930, 80, 80));
        othViewButton->setFont(font);
        othViewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(140, 20, 80, 80));
        refreshButton->setFont(font);
        refreshButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_clicked.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_norm.png);};"));
        myViewButton = new QPushButton(centralwidget);
        myViewButton->setObjectName(QString::fromUtf8("myViewButton"));
        myViewButton->setGeometry(QRect(1840, 450, 80, 80));
        myViewButton->setFont(font);
        myViewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        finiViewButton = new QPushButton(centralwidget);
        finiViewButton->setObjectName(QString::fromUtf8("finiViewButton"));
        finiViewButton->setGeometry(QRect(1840, 970, 80, 80));
        finiViewButton->setFont(font);
        finiViewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 100, 689, 33));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        listWidgetOthTasks = new QListWidget(centralwidget);
        listWidgetOthTasks->setObjectName(QString::fromUtf8("listWidgetOthTasks"));
        listWidgetOthTasks->setGeometry(QRect(30, 140, 689, 879));
        listWidgetOthTasks->setAutoFillBackground(true);
        listWidgetOthTasks->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-image:transparent;"));
        listWidgetOthTasks->setFrameShape(QFrame::NoFrame);
        listWidgetOthTasks->setFrameShadow(QFrame::Plain);
        listWidgetOthTasks->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetOthTasks->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetOthTasks->setSelectionBehavior(QAbstractItemView::SelectItems);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1210, 5, 609, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        listWidgetMyTasks = new QListWidget(centralwidget);
        listWidgetMyTasks->setObjectName(QString::fromUtf8("listWidgetMyTasks"));
        listWidgetMyTasks->setGeometry(QRect(1210, 40, 609, 499));
        listWidgetMyTasks->setAutoFillBackground(true);
        listWidgetMyTasks->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-image:transparent;"));
        listWidgetMyTasks->setFrameShape(QFrame::NoFrame);
        listWidgetMyTasks->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetMyTasks->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetMyTasks->setSelectionBehavior(QAbstractItemView::SelectItems);
        listWidgetFiniTasks = new QListWidget(centralwidget);
        listWidgetFiniTasks->setObjectName(QString::fromUtf8("listWidgetFiniTasks"));
        listWidgetFiniTasks->setGeometry(QRect(1210, 590, 609, 469));
        listWidgetFiniTasks->setAutoFillBackground(true);
        listWidgetFiniTasks->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-image:transparent;"));
        listWidgetFiniTasks->setFrameShape(QFrame::NoFrame);
        listWidgetFiniTasks->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetFiniTasks->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidgetFiniTasks->setSelectionBehavior(QAbstractItemView::SelectItems);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1210, 550, 609, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        MainWindowAccTask->setCentralWidget(centralwidget);

        retranslateUi(MainWindowAccTask);
        QObject::connect(backButton, SIGNAL(clicked()), MainWindowAccTask, SLOT(backButtonClick()));
        QObject::connect(refreshButton, SIGNAL(clicked()), MainWindowAccTask, SLOT(refreshButtonClick()));
        QObject::connect(othViewButton, SIGNAL(clicked()), MainWindowAccTask, SLOT(othViewButtonClick()));
        QObject::connect(myViewButton, SIGNAL(clicked()), MainWindowAccTask, SLOT(myViewButtonClick()));
        QObject::connect(finiViewButton, SIGNAL(clicked()), MainWindowAccTask, SLOT(finiViewButtonClick()));

        QMetaObject::connectSlotsByName(MainWindowAccTask);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowAccTask)
    {
        MainWindowAccTask->setWindowTitle(QCoreApplication::translate("MainWindowAccTask", "Tasks", nullptr));
#if QT_CONFIG(tooltip)
        backButton->setToolTip(QCoreApplication::translate("MainWindowAccTask", "Back", nullptr));
#endif // QT_CONFIG(tooltip)
        backButton->setText(QString());
#if QT_CONFIG(tooltip)
        othViewButton->setToolTip(QCoreApplication::translate("MainWindowAccTask", "View", nullptr));
#endif // QT_CONFIG(tooltip)
        othViewButton->setText(QString());
#if QT_CONFIG(tooltip)
        refreshButton->setToolTip(QCoreApplication::translate("MainWindowAccTask", "Refresh", nullptr));
#endif // QT_CONFIG(tooltip)
        refreshButton->setText(QString());
#if QT_CONFIG(tooltip)
        myViewButton->setToolTip(QCoreApplication::translate("MainWindowAccTask", "View", nullptr));
#endif // QT_CONFIG(tooltip)
        myViewButton->setText(QString());
#if QT_CONFIG(tooltip)
        finiViewButton->setToolTip(QCoreApplication::translate("MainWindowAccTask", "View", nullptr));
#endif // QT_CONFIG(tooltip)
        finiViewButton->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindowAccTask", "Other Tasks:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowAccTask", "My Tasks:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowAccTask", "Finished Tasks:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowAccTask: public Ui_MainWindowAccTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCTASKWIN_H
