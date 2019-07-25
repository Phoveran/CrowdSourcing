#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QComboBox>
#include "ui_ChangePassword.h"
#include "ui_Register.h"
#include "ui_TopUp.h"
#include "ui_UpdateInfo.h"
#include "ui_RecTaskOper.h"
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

	void submitChange();
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

private slots:
//复选框的相关槽
	void stateChanged(int state);
	void textChanged(const QString& text);

private:
	Ui::DialogRegister ui;
//复选框相关属性
	QListWidget* pListWidget;
	QLineEdit* pLineEdit;
	bool bSelected;
	QString strSelectedText;
	vector<QString> certificates;

	void submitRegister();
};

class TopUp : public QDialog
{
	Q_OBJECT

public:
	TopUp(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

public slots:
	void topUpClick();

private:
	Ui::DialogTopUp ui;

	void submitTopUp();
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

private slots:
//复选框的相关槽
	void stateChanged(int state);
	void textChanged(const QString& text);

private:
	Ui::DialogUpdateInfo ui;
//复选框相关属性
	QListWidget* pListWidget;
	QLineEdit* pLineEdit;
	bool bSelected;
	QString strSelectedText;
	vector<QString> certificates;

//私有函数
	void submitChange();
};

class RecTaskOper : public QDialog
{
	Q_OBJECT

public:
	RecTaskOper(Task* tas, Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;
	Task* task;

public slots:
	void applyButtonClick();
	void cancelButtonClick();

private:
	Ui::DialogRecTaskOper ui;
	QString transTypeJudge();
};