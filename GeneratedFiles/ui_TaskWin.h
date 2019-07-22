/********************************************************************************
** Form generated from reading UI file 'TaskWin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKWIN_H
#define UI_TASKWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowTask
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listWidgetRecTasks;
    QPushButton *backButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListWidget *listWidgetMyTasks;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QListWidget *listWidgetFiniTasks;
    QPushButton *recViewButton;
    QPushButton *refreshButton;
    QPushButton *myViewButton;
    QPushButton *finiViewButton;

    void setupUi(QMainWindow *MainWindowTask)
    {
        if (MainWindowTask->objectName().isEmpty())
            MainWindowTask->setObjectName(QString::fromUtf8("MainWindowTask"));
        MainWindowTask->resize(1920, 1080);
        MainWindowTask->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda8.jpg);"));
        MainWindowTask->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(MainWindowTask);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 130, 691, 881));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));

        verticalLayout_2->addWidget(label);

        listWidgetRecTasks = new QListWidget(verticalLayoutWidget);
        listWidgetRecTasks->setObjectName(QString::fromUtf8("listWidgetRecTasks"));
        listWidgetRecTasks->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        listWidgetRecTasks->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout_2->addWidget(listWidgetRecTasks);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(30, 20, 80, 80));
        backButton->setFont(font);
        backButton->setFocusPolicy(Qt::StrongFocus);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/back_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/back_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/back_clicked.png);};\n"
""));
        backButton->setFlat(false);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(1190, 20, 611, 541));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));

        verticalLayout_3->addWidget(label_2);

        listWidgetMyTasks = new QListWidget(verticalLayoutWidget_2);
        listWidgetMyTasks->setObjectName(QString::fromUtf8("listWidgetMyTasks"));
        listWidgetMyTasks->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        listWidgetMyTasks->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout_3->addWidget(listWidgetMyTasks);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(1190, 570, 611, 471));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));

        verticalLayout_4->addWidget(label_3);

        listWidgetFiniTasks = new QListWidget(verticalLayoutWidget_3);
        listWidgetFiniTasks->setObjectName(QString::fromUtf8("listWidgetFiniTasks"));
        listWidgetFiniTasks->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        listWidgetFiniTasks->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout_4->addWidget(listWidgetFiniTasks);

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
        refreshButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/refresh_clicked.png);};"));
        myViewButton = new QPushButton(centralwidget);
        myViewButton->setObjectName(QString::fromUtf8("myViewButton"));
        myViewButton->setGeometry(QRect(1820, 480, 80, 80));
        myViewButton->setFont(font);
        myViewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        finiViewButton = new QPushButton(centralwidget);
        finiViewButton->setObjectName(QString::fromUtf8("finiViewButton"));
        finiViewButton->setGeometry(QRect(1820, 960, 80, 80));
        finiViewButton->setFont(font);
        finiViewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        MainWindowTask->setCentralWidget(centralwidget);

        retranslateUi(MainWindowTask);
        QObject::connect(backButton, SIGNAL(clicked()), MainWindowTask, SLOT(backButtonClick()));
        QObject::connect(refreshButton, SIGNAL(clicked()), MainWindowTask, SLOT(refreshButtonClick()));
        QObject::connect(recViewButton, SIGNAL(clicked()), MainWindowTask, SLOT(recViewButtonClick()));

        QMetaObject::connectSlotsByName(MainWindowTask);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowTask)
    {
        MainWindowTask->setWindowTitle(QCoreApplication::translate("MainWindowTask", "Tasks", nullptr));
        label->setText(QCoreApplication::translate("MainWindowTask", "Recruiting Tasks:", nullptr));
        backButton->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindowTask", "My Tasks:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowTask", "Finished Tasks:", nullptr));
        recViewButton->setText(QString());
        refreshButton->setText(QString());
        myViewButton->setText(QString());
        finiViewButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowTask: public Ui_MainWindowTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKWIN_H