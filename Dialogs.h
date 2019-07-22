#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChangePassword.h"
#include "ui_Register.h"
#include "ui_TopUp.h"
#include "ui_UpdateInfo.h"
#include "data.h"

class ChangePassword : public QDialog
{
	Q_OBJECT

public:
	ChangePassword(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

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
	Register(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

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
	TopUp(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

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
	UpdateInfo(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

public slots:
	void okClick();
	void cancelClick();

private:
	Ui::DialogUpdateInfo ui;
};