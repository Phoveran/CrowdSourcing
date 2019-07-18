#include "Register.h"

Register::Register(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void Register::RegisterClick()
{
	this->close();
}

void Register::CancelClick()
{
	this->close();
}