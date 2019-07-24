#include "TaskItem.h"

recTaskItem::recTaskItem(Task* task, QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setLan(task->transType);
	ui.labelRank->setText(QString(task->rank));
	if (task->type())
	{
		ui.labelType->setText(QString("Translation"));
	}
	else
	{
		ui.labelType->setText(QString("Arrangement"));
	}
	ui.labelPayment->setText(QString(task->payment));
}

void recTaskItem::setFromLan(int type)
{
	QString strVar;
	if (type == 1 || type == 2)
	{
		strVar = "Chi";
	}
	else if (type == 3 || type == 4)
	{
		strVar = "Eng";
	}
	else if (type == 5 || type == 6)
	{
		strVar = "Fra";
	}
	ui.fromPic->setStyleSheet(QString("border-image: url(:/CrowdSourcing/Resources/pictures/") + strVar + QString(".png);"));
}

void recTaskItem::setToLan(int type)
{
	QString strVar;
	if (type == 3 || type == 5)
	{
		strVar = "Chi";
	}
	else if (type == 1 || type == 6)
	{
		strVar = "Eng";
	}
	else if (type == 2 || type == 4)
	{
		strVar = "Fra";
	}
	ui.toPic->setStyleSheet(QString("border-image: url(:/CrowdSourcing/Resources/pictures/") + strVar + QString(".png);"));
}

void recTaskItem::setLan(int type)
{
	setFromLan(type);
	setToLan(type);
}