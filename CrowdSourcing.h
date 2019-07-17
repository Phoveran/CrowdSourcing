#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CrowdSourcing.h"


class CrowdSourcing : public QMainWindow
{
	Q_OBJECT

public:
	CrowdSourcing(QWidget *parent = Q_NULLPTR);

public slots:
	void loginButtonClick();

private:
	Ui::CrowdSourcingClass ui;
};
