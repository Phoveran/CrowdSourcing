#include "ChangePassword.h"
#include <QString>
#include <regex>
using namespace std;

ChangePassword::ChangePassword(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
}

void ChangePassword::OkClick()
{
	if (!regex_match(ui.newPwLineEdit->text().toStdString(), regex("^[A-Za-z0-9]{4,12}$")))
	{
		ui.noticeLabel->setText("New password not valid!");
	}
	else if (ui.newPwLineEdit->text() != ui.newPwAgainLineEdit->text())
	{
		ui.noticeLabel->setText("Two new passwords don't match!");
	}
	else
	{
		this->close();
	}
}

void ChangePassword::CancelClick()
{
	this->close();
}