#include "Personal.h"

Personal::Personal(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Personal::logOutButtonClick()
{
	this->close();
}