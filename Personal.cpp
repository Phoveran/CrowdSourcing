#include "Personal.h"

Personal::Personal(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	c = NULL;
	to = NULL;
	u = NULL;
	ta = NULL;
}

void Personal::logOutButtonClick()
{
	this->close();
}

void Personal::changePasswordButtonClick()
{
	c = new ChangePassword;
	c->show();
}

void Personal::topUpButtonClick()
{
	to = new TopUp;
	to->show();
}

void Personal::updateInfoButtonClick()
{
	u = new UpdateInfo;
	u->show();
}

void Personal::taskButtonClick()
{
	ta = new TaskWin;
	ta->show();
	this->close();
}
