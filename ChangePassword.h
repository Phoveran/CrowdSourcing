#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChangePassword.h"
#include <QCloseEvent>


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
	void closeEvent(QCloseEvent* event);
};
