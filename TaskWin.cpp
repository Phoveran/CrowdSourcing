#include "MainWin.h"

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
