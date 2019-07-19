#include "Personal.h"

Personal::Personal(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	c = NULL;
	t = NULL;
	u = NULL;
}

void Personal::logOutButtonClick()
{
	this->close();
	if (c)
		c->close();
	if (u)
		u->close();
	if (t)
		t->close();
}

void Personal::changePasswordButtonClick()
{
	c = new ChangePassword;
	c->show();
}

void Personal::topUpButtonClick()
{
	t = new TopUp;
	t->show();
}

void Personal::updateInfoButtonClick()
{
	u = new UpdateInfo;
	u->show();
}

void Personal::taskButtonClick()
{
}

void Personal::closeEvent(QCloseEvent* event)
{
	delete this;
	if (c)
		c->close();
	if (u)
		u->close();
	if (t)
		t->close();
}
