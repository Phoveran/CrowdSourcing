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
	this->close();
}

void CrowdSourcing::registerButtonClick()
{
	r = new Register;
	r->show();
}

void CrowdSourcing::closeEvent(QCloseEvent* event)
{
	if (r)
		r->close();
	delete this;
}
