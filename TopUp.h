#pragma once


#include <QtWidgets/QMainWindow>
#include "ui_TopUp.h"


class TopUp : public QDialog
{
	Q_OBJECT

public:
	TopUp(QWidget* parent = Q_NULLPTR);
public slots:
	void topUpClick();
	void closeClick();

private:
	Ui::DialogTopUp ui;
};
