#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_recTaskItem.h"
#include "ui_myTaskItem.h"
#include "data.h"


class recTaskItem : public QWidget
{
	Q_OBJECT

public:
	recTaskItem(Task* task, int model, QWidget* parent = Q_NULLPTR);
	void setLan(int type);

private:
	Ui::recTaskItem ui;
	void setFromLan(int type);
	void setToLan(int type);
};

class myTaskItem : public QWidget
{
	Q_OBJECT

public:
	myTaskItem(Task* task, int model, QWidget* parent = Q_NULLPTR);
	void setLan(int type);

private:
	Ui::myTaskItem ui;
	void setFromLan(int type);
	void setToLan(int type);
};