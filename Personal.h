#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Personal.h"
#include "ChangePassword.h"
#include "TopUp.h"
#include "UpdateInfo.h"
#include <QCloseEvent>

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
	void closeEvent(QCloseEvent* event);

private:
	Ui::MainWindowPersonal ui;
	ChangePassword* c;
	TopUp* t;	
	UpdateInfo* u;
};
