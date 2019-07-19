#include "CrowdSourcing.h"

CrowdSourcing::CrowdSourcing(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	p = NULL;
	r = NULL;
}

void CrowdSourcing::loginButtonClick()
{
	p = new Personal;
	p->show();
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	this->close();
}

void CrowdSourcing::registerButtonClick()
{
	r = new Register;
	r->show();
}
