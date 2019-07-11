#include "CrowdSourcing.h"

CrowdSourcing::CrowdSourcing(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void CrowdSourcing::loginButtonClick()
{
	Personal* p = new Personal;
	p->show();
	this->close();
}
