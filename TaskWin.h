#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TaskWin.h"

class TaskWin : public QMainWindow
{
	Q_OBJECT

public:
	TaskWin(QWidget* parent = Q_NULLPTR);

public slots:

private:
	Ui::MainWindowTask ui;
};
