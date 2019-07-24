#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_recTaskItem.h"
#include "data.h"


class recTaskItem : public QWidget
{
	Q_OBJECT

public:
	recTaskItem(Task* task, QWidget* parent = Q_NULLPTR);
	void setLan(int type);

private:
	Ui::recTaskItem ui;
	void setFromLan(int type);
	void setToLan(int type);
};
