#include "ChangePassword.h"
#include <QString>
ChangePassword::ChangePassword(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void ChangePassword::OkClick()
{
	if (ui.newPwLineEdit->text() != ui.newPwAgainLineEdit->text())
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