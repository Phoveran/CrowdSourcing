#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CrowdSourcing.h"
#include "Register.h"
#include "Personal.h"
#include <QCloseEvent>

class CrowdSourcing : public QMainWindow
{
	Q_OBJECT

public:
	CrowdSourcing(QWidget *parent = Q_NULLPTR);

public slots:
	void loginButtonClick();
	void registerButtonClick();
	void closeEvent(QCloseEvent* event);

private:
	Ui::CrowdSourcingClass ui;
	Register* r;
	Personal* p;
};
