#include "ChangePassword.h"
#include "Personal.h"

ChangePassword::ChangePassword(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
//	this->setAttribute(Qt::WA_DeleteOnClose, true);
}

void ChangePassword::OkClick()
{
	this->close();
}

void ChangePassword::CancelClick()
{
	this->close();
}