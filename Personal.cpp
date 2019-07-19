#include "Personal.h"
#include "ChangePassword.h"
#include "TopUp.h"
#include "UpdateInfo.h"

Personal::Personal(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Personal::logOutButtonClick()
{
	this->close();
}


void Personal::changePasswordButtonClick()
{
	ChangePassword* c = new ChangePassword;
	c->show();
	c->setAttribute(Qt::WA_DeleteOnClose, true);
}

void Personal::topUpButtonClick()
{
	TopUp *t = new TopUp;
	t->show();
	t->setAttribute(Qt::WA_DeleteOnClose, true);
}

void Personal::updateInfoButtonClick()
{
	UpdateInfo* u = new UpdateInfo;
	u->show();
	u->setAttribute(Qt::WA_DeleteOnClose, true);
}

void Personal::taskButtonClick()
{
}
