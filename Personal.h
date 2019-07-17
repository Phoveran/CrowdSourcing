#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Personal.h"

class Personal : public QMainWindow
{
	Q_OBJECT

public:
	Personal(QWidget* parent = Q_NULLPTR);

public slots:
	void logOutButtonClick();

private:
	Ui::MainWindow ui;
};
