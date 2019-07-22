#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChangePassword.h"
#include "ui_Register.h"
#include "ui_TopUp.h"
#include "ui_UpdateInfo.h"

class ChangePassword : public QDialog
{
	Q_OBJECT

public:
	ChangePassword(QWidget* parent = Q_NULLPTR);

public slots:
	void OkClick();
	void CancelClick();

private:
	Ui::DialogChangePassword ui;
};

class Register : public QDialog
{
	Q_OBJECT

public:
	Register(QWidget* parent = Q_NULLPTR);

public slots:
	void RegisterClick();
	void CancelClick();

private:
	Ui::DialogRegister ui;
};

class TopUp : public QDialog
{
	Q_OBJECT

public:
	TopUp(QWidget* parent = Q_NULLPTR);
public slots:
	void topUpClick();
	void closeClick();

private:
	Ui::DialogTopUp ui;
};

class UpdateInfo : public QDialog
{
	Q_OBJECT

public:
	UpdateInfo(QWidget* parent = Q_NULLPTR);

public slots:
	void okClick();
	void cancelClick();

private:
	Ui::DialogUpdateInfo ui;
};
