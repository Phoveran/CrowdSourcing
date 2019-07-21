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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowTask
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *label;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindowTask)
    {
        if (MainWindowTask->objectName().isEmpty())
            MainWindowTask->setObjectName(QString::fromUtf8("MainWindowTask"));
        MainWindowTask->resize(1920, 1080);
        MainWindowTask->setStyleSheet(QString::fromUtf8("border-image: url(:/CrowdSourcing/Resources/pictures/zelda8.jpg);"));
        MainWindowTask->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(MainWindowTask);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(120, 150, 421, 631));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(9);
        tableWidget->setFont(font);
        tableWidget->setFocusPolicy(Qt::WheelFocus);
        tableWidget->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setDragEnabled(false);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 90, 221, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: rgb(255, 85, 0);"));
        verticalFrame = new QFrame(centralwidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(340, 800, 201, 71));
        verticalFrame->setStyleSheet(QString::fromUtf8("border-image:transparent;"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(verticalFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
"color:rgb(85, 85, 0);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(248, 255, 250),stop: 0.3 rgb(255, 170, 0),stop: 1 rgb(255, 170, 127));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;\n"
"}  \n"
"QPushButton:hover{\n"
"color:rgb(255, 255, 255);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241),   \n"
"							stop: 0.3 rgb(37,189,252),  \n"
"							  stop: 1 rgb(32,170,240));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;  \n"
"}  \n"
"QPushButton:pressed{ \n"
"color:rgb(233, 236, 243);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226"
                        ",236,241),   \n"
"							stop: 0.3 rgb(38,190,255),  \n"
"							  stop: 1 rgb(33,184,240));  \n"
"border:1px;  \n"
"border-radius:15px;padding:2px 4px;  \n"
"};"));

        verticalLayout->addWidget(pushButton);

        MainWindowTask->setCentralWidget(centralwidget);

        retranslateUi(MainWindowTask);

        QMetaObject::connectSlotsByName(MainWindowTask);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowTask)
    {
        MainWindowTask->setWindowTitle(QCoreApplication::translate("MainWindowTask", "Tasks", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindowTask", "Rank", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindowTask", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindowTask", "State", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindowTask", "Pay", nullptr));
        label->setText(QCoreApplication::translate("MainWindowTask", "Recruiting Tasks:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindowTask", "View details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowTask: public Ui_MainWindowTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKWIN_H
