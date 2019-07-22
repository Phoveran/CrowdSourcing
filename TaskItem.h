#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_recTaskItem.h"


class recTaskItem : public QWidget
{
	Q_OBJECT

public:
	recTaskItem(QWidget* parent = Q_NULLPTR);

private:
	Ui::recTaskItem ui;
};
