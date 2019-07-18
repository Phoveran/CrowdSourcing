#include "CrowdSourcing.h"
#include "Personal.h"

CrowdSourcing::CrowdSourcing(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void CrowdSourcing::loginButtonClick()
{
	Personal* p = new Personal;
	p->show();
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	this->close();
}

void CrowdSourcing::registerButtonClick()
{
	r = new Register;
	r->show();
	r->setAttribute(Qt::WA_DeleteOnClose, true);
}
