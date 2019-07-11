#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CrowdSourcing.h"

class CrowdSourcing : public QMainWindow
{
	Q_OBJECT

public:
	CrowdSourcing(QWidget *parent = Q_NULLPTR);

private:
	Ui::CrowdSourcingClass ui;
};
