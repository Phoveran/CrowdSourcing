#include "UpdateInfo.h"
#include <regex>
using namespace std;

UpdateInfo::UpdateInfo(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
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