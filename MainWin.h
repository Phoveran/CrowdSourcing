#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Personal.h"
#include "ChangePassword.h"
#include "TopUp.h"
#include "UpdateInfo.h"
#include "ui_TaskWin.h"

class TaskWin;

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

class TaskWin : public QMainWindow
{
	Q_OBJECT

public:
	TaskWin(QWidget* parent = Q_NULLPTR);

public slots:
	void backButtonClick();
	void viewButtonClick();
	void refreshButtonClick();

private:
	Ui::MainWindowTask ui;
	Personal* p;
};