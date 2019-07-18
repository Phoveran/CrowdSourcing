#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChangePassword.h"


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
