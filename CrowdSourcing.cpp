#include "CrowdSourcing.h"
#include "Personal.h"

CrowdSourcing::CrowdSourcing(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
//	this->setAttribute(Qt::WA_DeleteOnClose, true);
}

void CrowdSourcing::loginButtonClick()
{
	Personal* p = new Personal;
	p->show();
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	this->close();
}
