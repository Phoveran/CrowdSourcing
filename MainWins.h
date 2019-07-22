#pragma once

#include <QtWidgets/QMainWindow>
#include <vector>
#include "ui_Personal.h"
#include "ui_TaskWin.h"
#include "ui_CrowdSourcing.h"
#include "Dialogs.h"
#include "TaskItem.h"
#include "data.h"
using namespace std;

class TaskWin;
class Personal;

//登陆界面
class CrowdSourcing : public QMainWindow
{
	Q_OBJECT

public:
	CrowdSourcing(Data* d, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

public slots:
	void loginButtonClick();
	void registerButtonClick();

private:
	Ui::CrowdSourcingClass ui;
	Register* r;
	Personal* p;
};

//个人信息界面
class Personal : public QMainWindow
{
	Q_OBJECT

public:
	Personal(QWidget* parent = Q_NULLPTR);

public slots:
	void logOutButtonClick();
	void changePasswordButtonClick();
	void topUpButtonClick();
	void updateInfoButtonClick();
	void taskButtonClick();

private:
	Ui::MainWindowPersonal ui;
	ChangePassword* c;
	TopUp* to;	
	UpdateInfo* u;
	TaskWin* ta;
};

//任务界面
class TaskWin : public QMainWindow
{
	Q_OBJECT

public:
	TaskWin(QWidget* parent = Q_NULLPTR);

public slots:
	void backButtonClick();
	void recViewButtonClick();
	void refreshButtonClick();

private:
	Ui::MainWindowTask ui;
	Personal* p;
	vector<recTaskItem*> recTaskVec;
	vector<QListWidgetItem*> liWiItemVec;
};