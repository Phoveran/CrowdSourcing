#include "MainWin.h"

TaskWin::TaskWin(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	p = NULL;
}

void TaskWin::backButtonClick()
{
	p = new Personal;
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	p->show();
	this->close();
}

void TaskWin::refreshButtonClick()
{
}

void TaskWin::viewButtonClick()
{
}
