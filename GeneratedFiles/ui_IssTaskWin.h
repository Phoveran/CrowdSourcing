/********************************************************************************
** Form generated from reading UI file 'IssTaskWin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSTASKWIN_H
#define UI_ISSTASKWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowIssTask
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QPushButton *recViewButton;
    QPushButton *refreshButton;
    QPushButton *conViewButton;
    QPushButton *finiViewButton;
    QPushButton *newTaskButton;
    QListWidget *listWidgetRecTasks;
    QLabel *label;
    QListWidget *listWidgetConTasks;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *listWidgetFiniTasks;

    void setupUi(QMainWindow *MainWindowIssTask)
    {
        if (MainWindowIssTask->objectName().isEmpty())
            MainWindowIssTask->setObjectName(QString::fromUtf8("MainWindowIssTask"));
        MainWindowIssTask->resize(1920, 1080);
        MainWindowIssTask->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda9.jpg);"));
        MainWindowIssTask->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(MainWindowIssTask);
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
        recViewButton = new QPushButton(centralwidget);
        recViewButton->setObjectName(QString::fromUtf8("recViewButton"));
        recViewButton->setGeometry(QRect(740, 930, 80, 80));
        recViewButton->setFont(font);
        recViewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(140, 20, 80, 80));
        refreshButton->setFont(font);
        refreshButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_clicked.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_norm.png);};"));
        conViewButton = new QPushButton(centralwidget);
        conViewButton->setObjectName(QString::fromUtf8("conViewButton"));
        conViewButton->setGeometry(QRect(1840, 450, 80, 80));
        conViewButton->setFont(font);
        conViewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        finiViewButton = new QPushButton(centralwidget);
        finiViewButton->setObjectName(QString::fromUtf8("finiViewButton"));
        finiViewButton->setGeometry(QRect(1840, 970, 80, 80));
        finiViewButton->setFont(font);
        finiViewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        newTaskButton = new QPushButton(centralwidget);
        newTaskButton->setObjectName(QString::fromUtf8("newTaskButton"));
        newTaskButton->setGeometry(QRect(250, 20, 80, 80));
        newTaskButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/new_clicked.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/new_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/new_norm.png);};"));
        listWidgetRecTasks = new QListWidget(centralwidget);
        listWidgetRecTasks->setObjectName(QString::fromUtf8("listWidgetRecTasks"));
        listWidgetRecTasks->setGeometry(QRect(30, 140, 689, 839));
        listWidgetRecTasks->setAutoFillBackground(true);
        listWidgetRecTasks->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-image:transparent;"));
        listWidgetRecTasks->setFrameShape(QFrame::NoFrame);
        listWidgetRecTasks->setSelectionBehavior(QAbstractItemView::SelectItems);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 100, 689, 41));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        listWidgetConTasks = new QListWidget(centralwidget);
        listWidgetConTasks->setObjectName(QString::fromUtf8("listWidgetConTasks"));
        listWidgetConTasks->setGeometry(QRect(1210, 40, 609, 499));
        listWidgetConTasks->setAutoFillBackground(true);
        listWidgetConTasks->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-image:transparent;"));
        listWidgetConTasks->setFrameShape(QFrame::NoFrame);
        listWidgetConTasks->setSelectionBehavior(QAbstractItemView::SelectItems);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1210, 5, 609, 33));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1210, 550, 609, 33));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        listWidgetFiniTasks = new QListWidget(centralwidget);
        listWidgetFiniTasks->setObjectName(QString::fromUtf8("listWidgetFiniTasks"));
        listWidgetFiniTasks->setGeometry(QRect(1210, 590, 609, 469));
        listWidgetFiniTasks->setAutoFillBackground(true);
        listWidgetFiniTasks->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-image:transparent;"));
        listWidgetFiniTasks->setFrameShape(QFrame::NoFrame);
        listWidgetFiniTasks->setSelectionBehavior(QAbstractItemView::SelectItems);
        MainWindowIssTask->setCentralWidget(centralwidget);

        retranslateUi(MainWindowIssTask);
        QObject::connect(backButton, SIGNAL(clicked()), MainWindowIssTask, SLOT(backButtonClick()));
        QObject::connect(refreshButton, SIGNAL(clicked()), MainWindowIssTask, SLOT(refreshButtonClick()));
        QObject::connect(recViewButton, SIGNAL(clicked()), MainWindowIssTask, SLOT(recViewButtonClick()));
        QObject::connect(newTaskButton, SIGNAL(clicked()), MainWindowIssTask, SLOT(newTaskButtonClick()));
        QObject::connect(conViewButton, SIGNAL(clicked()), MainWindowIssTask, SLOT(conViewButtonClick()));
        QObject::connect(finiViewButton, SIGNAL(clicked()), MainWindowIssTask, SLOT(finiViewButtonClick()));

        QMetaObject::connectSlotsByName(MainWindowIssTask);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowIssTask)
    {
        MainWindowIssTask->setWindowTitle(QCoreApplication::translate("MainWindowIssTask", "MyIssuedTasks", nullptr));
        backButton->setText(QString());
        recViewButton->setText(QString());
        refreshButton->setText(QString());
        conViewButton->setText(QString());
        finiViewButton->setText(QString());
        newTaskButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindowIssTask", "Recruiting Tasks:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowIssTask", "Conducting Tasks:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowIssTask", "Finished Tasks:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowIssTask: public Ui_MainWindowIssTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSTASKWIN_H
