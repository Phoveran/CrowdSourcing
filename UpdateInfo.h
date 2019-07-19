#pragma once


#include <QtWidgets/QMainWindow>
#include "ui_UpdateInfo.h"


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
