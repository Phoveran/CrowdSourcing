#include "ChangePassword.h"

ChangePassword::ChangePassword(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void ChangePassword::OkClick()
{
	this->close();
}

void ChangePassword::CancelClick()
{
	this->close();
}