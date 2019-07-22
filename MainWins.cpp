#include "MainWins.h"

//登陆界面
CrowdSourcing::CrowdSourcing(Data* d, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	p = NULL;
	r = NULL;
	dataPtr = d;
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

//个人信息界面
Personal::Personal(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	c = NULL;
	to = NULL;
	u = NULL;
	ta = NULL;
}

void Personal::logOutButtonClick()
{
	this->close();
}

void Personal::changePasswordButtonClick()
{
	c = new ChangePassword;
	c->show();
}

void Personal::topUpButtonClick()
{
	to = new TopUp;
	to->show();
}

void Personal::updateInfoButtonClick()
{
	u = new UpdateInfo;
	u->show();
}

void Personal::taskButtonClick()
{
	ta = new TaskWin;
	ta->show();
	this->close();
}

//任务界面
TaskWin::TaskWin(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	p = NULL;
	QListWidgetItem* li1 = new QListWidgetItem;
	li1->setSizeHint(QSize(680, 59));
	li1->setWhatsThis(QString("s"));
	recTaskItem* test = new recTaskItem;
	ui.listWidgetRecTasks->addItem(li1);
	ui.listWidgetRecTasks->setItemWidget(li1, test);
}

void TaskWin::backButtonClick()
{
	p = new Personal;
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	p->show();
	this->close();
}

void TaskWin::refreshButtonClick()
{
}

void TaskWin::recViewButtonClick()
{
	ui.label->setText(ui.listWidgetRecTasks->currentItem()->whatsThis());
}