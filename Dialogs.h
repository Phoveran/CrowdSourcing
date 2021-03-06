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
#include "ui_StaticTaskOper.h"
#include "ui_MyTransTaskOper.h"
#include "ui_MyResTaskOper.h"
#include "ui_NewTaskOper.h"
#include "ui_IssRecTaskOper.h"
#include "ui_FiniTaskOper.h"
#include "ui_MessageBox.h"
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
	void loadInfo();
};

class StaticTaskOper : public QDialog
{
	Q_OBJECT

public:
	StaticTaskOper(Task* tas, Data* data, QWidget* parent = Q_NULLPTR);
	Ui::DialogStaticTaskOper ui;
	Data* dataPtr;
	Task* task;

public slots:

private:
	QString transTypeJudge();
};

class MyTransTaskOper : public QDialog
{
	Q_OBJECT

public:
	MyTransTaskOper(Task* tas, Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;
	Task* task;

public slots:
	void submitButtonClick();
	void saveButtonClick();

private:
	Ui::DialogMyTransTaskOper ui;
	QString transTypeJudge();
	void loadInfo();
};

class MyResTaskOper : public QDialog
{
	Q_OBJECT

public:
	MyResTaskOper(Task* tas, Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;
	Task* task;

public slots:
	void submitButtonClick();
	void changeInfoButtonClick();
	void editInfoOkButtonClick();
	void editInfoCancelButtonClick();
	void chooseTranslatorButtonClick();
	void distributeButtonClick();
	void communicateButtonClick();
	void saveButtonClick();
	void acceptButtonClick();
	void removeButtonClick();
	void endRecruitingButtonClick();

private:
	Ui::DialogMyResTaskOper ui;
	QString transTypeJudge();
	void loadInfo();
	void newChildTask(int acc, string ori, int period, int pay);

private slots:
	void communicationRefresh();
	void submissionRefresh();
};

class NewTaskOper : public QDialog
{
	Q_OBJECT

public:
	NewTaskOper(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

public slots:
	void okButtonClick();
	void cancelButtonClick();

private:
	Ui::DialogNewTaskOper ui;
	int newResTask();
};

class IssRecTaskOper : public QDialog
{
	Q_OBJECT

public:
	IssRecTaskOper(Task* tas, Data* data, int model, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;
	Task* task;

public slots:
	void okButtonClick();
	void cancelButtonClick();
	void acceptButtonClick();
	void refuseButtonClick();

private:
	Ui::DialogIssRecTaskOper ui;
	void loadInfo();
	void choosePrincipal();
	void pay();
	QString transTypeJudge();
};

class FiniTaskOper : public QDialog
{
	Q_OBJECT

public:
	FiniTaskOper(Task* tas, Data* data, QWidget* parent = Q_NULLPTR);
	Ui::DialogFiniTaskOper ui;
	Data* dataPtr;
	Task* task;

public slots:

private:
	QString transTypeJudge();
};

class MessageBox : public QDialog
{
	Q_OBJECT

public:
	MessageBox(Data* data, QWidget* parent = Q_NULLPTR);

public slots:
	void readButtonClick();

private:
	Ui::DialogMessageBox ui;
	Data* dataPtr;
	void loadInfo();
};