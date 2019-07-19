#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Register.h"
#include <QCloseEvent>


class Register : public QDialog
{
	Q_OBJECT

public:
	Register(QWidget* parent = Q_NULLPTR);

public slots:
	void RegisterClick();
	void CancelClick();

private:
	Ui::DialogRegister ui;
	void closeEvent(QCloseEvent* event);
};
