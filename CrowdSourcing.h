#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CrowdSourcing.h"
#include "Register.h"

class CrowdSourcing : public QMainWindow
{
	Q_OBJECT

public:
	CrowdSourcing(QWidget *parent = Q_NULLPTR);

public slots:
	void loginButtonClick();
	void registerButtonClick();

private:
	Ui::CrowdSourcingClass ui;
	Register *r;
};
