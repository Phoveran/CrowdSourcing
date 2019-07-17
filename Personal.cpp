#include "Personal.h"
#include "ChangePassword.h"
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
