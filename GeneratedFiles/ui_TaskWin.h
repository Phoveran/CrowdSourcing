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
#include <QtWidgets/QListView>
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
    QListView *recTasksListView;
    QPushButton *backButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListView *myTasksListView;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QListView *finiTasksListView;
    QPushButton *viewButton;

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
        verticalLayoutWidget->setGeometry(QRect(30, 130, 691, 911));
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

        recTasksListView = new QListView(verticalLayoutWidget);
        recTasksListView->setObjectName(QString::fromUtf8("recTasksListView"));
        recTasksListView->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        recTasksListView->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(recTasksListView);

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
        verticalLayoutWidget_2->setGeometry(QRect(1190, 20, 671, 541));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));

        verticalLayout_3->addWidget(label_2);

        myTasksListView = new QListView(verticalLayoutWidget_2);
        myTasksListView->setObjectName(QString::fromUtf8("myTasksListView"));
        myTasksListView->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        myTasksListView->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(myTasksListView);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(1190, 570, 671, 471));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));

        verticalLayout_4->addWidget(label_3);

        finiTasksListView = new QListView(verticalLayoutWidget_3);
        finiTasksListView->setObjectName(QString::fromUtf8("finiTasksListView"));
        finiTasksListView->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        finiTasksListView->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(finiTasksListView);

        viewButton = new QPushButton(centralwidget);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(140, 20, 80, 80));
        viewButton->setFont(font);
        viewButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/view_norm.png);}  \n"
"QPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/view_on.png);}\n"
"QPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/view_clicked.png);};"));
        MainWindowTask->setCentralWidget(centralwidget);

        retranslateUi(MainWindowTask);
        QObject::connect(backButton, SIGNAL(clicked()), MainWindowTask, SLOT(backButtonClick()));
        QObject::connect(viewButton, SIGNAL(clicked()), MainWindowTask, SLOT(viewButtonClick()));

        QMetaObject::connectSlotsByName(MainWindowTask);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowTask)
    {
        MainWindowTask->setWindowTitle(QCoreApplication::translate("MainWindowTask", "Tasks", nullptr));
        label->setText(QCoreApplication::translate("MainWindowTask", "Recruiting Tasks:", nullptr));
        backButton->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindowTask", "My Tasks:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowTask", "Finished Tasks:", nullptr));
        viewButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowTask: public Ui_MainWindowTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKWIN_H
