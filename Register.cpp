#include "Register.h"
#include <regex>
using namespace std;

Register::Register(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
//	this->setAttribute(Qt::WA_DeleteOnClose, true);
}

void Register::RegisterClick()
{
	if (!regex_match(ui.pwLineEdit->text().toStdString(), regex("^[A-Za-z0-9]{4,12}$")))
	{
		ui.noticeLabel->setText("Password not valid!");
	}
	else if (ui.pwAgainLineEdit->text() != ui.pwLineEdit->text())
	{
		ui.noticeLabel->setText("Two passwords don't match!");
	}
	else if (!regex_match(ui.teleLineEdit->text().toStdString(), regex("^[1](([3][0-9])|([4][5-9])|([5][0-3,5-9])|([6][5,6])|([7][0-8])|([8][0-9])|([9][1,8,9]))[0-9]{8}$")))
	{
		ui.noticeLabel->setText("Telephone not valid!");
	}
	else
	{
		this->close();
	}
}

void Register::CancelClick()
{
	this->close();
}

void Register::closeEvent(QCloseEvent* event)
{
	delete this;
}
