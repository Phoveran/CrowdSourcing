#include <QString>
#include <regex>
#include <qvalidator.h>
#include "Dialogs.h"
using namespace std;

ChangePassword::ChangePassword(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
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


Register::Register(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	ui.teleLineEdit->setValidator(new QIntValidator);
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


TopUp::TopUp(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	ui.lineEdit->setValidator(new QIntValidator);
}

void TopUp::topUpClick()
{
	QString str = ui.lineEdit->text();
	int num = str.toInt();
	if (num > 0 && num < 9999)
	{
		ui.noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\ncolor: rgb(0, 170, 0);"));
		ui.noticeLabel->setText(QString::number(num, 10) + " Ruby topped up!");
	}
	else
	{
		ui.noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\ncolor: rgb(255, 0, 0);"));
		ui.noticeLabel->setText("Amount not supported");
	}
}

void TopUp::closeClick()
{
	this->close();
}


UpdateInfo::UpdateInfo(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	ui.teleLineEdit->setValidator(new QIntValidator);
}

void UpdateInfo::okClick()
{
	if (!regex_match(ui.teleLineEdit->text().toStdString(), regex("^[1](([3][0-9])|([4][5-9])|([5][0-3,5-9])|([6][5,6])|([7][0-8])|([8][0-9])|([9][1,8,9]))[0-9]{8}$")))
	{
		ui.noticeLabel->setText("Telephone not valid!");
	}
	else
	{
		this->close();
	}
}

void UpdateInfo::cancelClick()
{
	this->close();
}