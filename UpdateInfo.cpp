#include "UpdateInfo.h"
#include <QString>

UpdateInfo::UpdateInfo(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void UpdateInfo::okClick()
{
	this->close();
}

void UpdateInfo::cancelClick()
{
	this->close();
}