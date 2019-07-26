#pragma once

#include <QtWidgets/QMainWindow>
#include <vector>
#include "ui_Personal.h"
#include "ui_AccTaskWin.h"
#include "ui_IssTaskWin.h"
#include "ui_CrowdSourcing.h"
#include "Dialogs.h"
#include "TaskItem.h"
#include "data.h"

using namespace std;

class AccTaskWin;
class Personal;
class IssTaskWin;

//��½����
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
};

//������Ϣ����
class Personal : public QMainWindow
{
	Q_OBJECT

public:
	Personal(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

public slots:
	void logOutButtonClick();
	void changePasswordButtonClick();
	void topUpButtonClick();
	void updateInfoButtonClick();
	void issTaskButtonClick();
	void accTaskButtonClick();
	void refreshButtonClick();

private:
	Ui::MainWindowPersonal ui;

	void loadInfo();
};

//�����������
class AccTaskWin : public QMainWindow
{
	Q_OBJECT

public:
	AccTaskWin(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

public slots:
	void backButtonClick();
	void refreshButtonClick();
	void recViewButtonClick();
	void myViewButtonClick();

private:
	Ui::MainWindowAccTask ui;

	void loadInfo();
};

//�������������
class IssTaskWin : public QMainWindow
{
	Q_OBJECT

public:
	IssTaskWin(Data* data, QWidget* parent = Q_NULLPTR);
	Data* dataPtr;

public slots:
	void backButtonClick();
	void recViewButtonClick();
	void refreshButtonClick();

private:
	Ui::MainWindowIssTask ui;

	void loadInfo();
};