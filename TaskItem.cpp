#include "TaskItem.h"

recTaskItem::recTaskItem(Task* task, QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setLan(task->transType);
	ui.labelRank->setText(QString("Rank: ") + QString::number(task->rank));
	if (task->type())
	{
		ui.labelType->setText(QString("Translation task"));
	}
	else
	{
		ui.labelType->setText(QString("Arrangement task"));
	}
	ui.labelPayment->setText(QString::number(task->payment) + QString(" Ruby"));
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


myTaskItem::myTaskItem(Task* task, QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setLan(task->transType);
	ui.labelRank->setText(QString("Rank: ") + QString::number(task->rank));
	if (task->type())
	{
		ui.labelType->setText(QString("Translation task"));
	}
	else
	{
		ui.labelType->setText(QString("Arrangement task"));
	}
	if (task->state == 1)
	{
		if (task->transSubmit.empty())
		{
			ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(255, 0, 0); "));
			ui.labelState->setText(QString("Conducting"));
		}
		else
		{
			ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(255, 0, 0); "));
			ui.labelState->setText(QString("Waiting Examing"));
		}
	}
	else if (task->state == 2)
	{
		ui.labelState->setStyleSheet(QString("color: rgb(0, 170, 255);\n border-image:transparent; "));
		ui.labelState->setText(QString("Recruiting"));
	}
	else if (task->state == 0)
	{
		ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(255, 0, 0); "));
		ui.labelState->setText(QString::number(task->payment) + QString("Ruby Received"));
	}
}

void myTaskItem::setFromLan(int type)
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

void myTaskItem::setToLan(int type)
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

void myTaskItem::setLan(int type)
{
	setFromLan(type);
	setToLan(type);
}
