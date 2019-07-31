#include "TaskItem.h"

recTaskItem::recTaskItem(Task* task, int model, QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setLan(task->transType);
	ui.labelRank->setText(QString("Rank:") + QString::number(task->rank));
	if (model == 1)
	{
		int rest = 0;
		if (task->state == 2 || task->state == 1)
		{
			rest = task->issueTime + (task->applyPeriod * 86400) - time(0);
		}
		if (task->state == 3)
		{
			rest = task->startTime + (task->applyPeriod * 86400) - time(0);
		}
		if (rest > 0)
		{
			rest /= 3600;
			ui.labelTime->setText(QString::number(rest) + QString(" Hours Letf"));
		}
		else
		{
			ui.labelTime->setText(QString("Time Out"));
		}
		if (task->state == 0)
		{
			ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(255, 255, 255); "));
			ui.labelState->setText(QString("Finished"));
			ui.labelTime->setText(QString("Time Out"));
		}
		else if (task->state == 1)
		{
			ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(255, 0, 0); "));
			ui.labelState->setText(QString("Conducting"));
		}
		else if (task->state == 2 || task->state == 3)
		{
			ui.labelState->setStyleSheet(QString("color: rgb(0, 170, 255);\n border-image:transparent; "));
			ui.labelState->setText(QString("Recruiting"));
		}
	}
	else if (model == 2)
	{
		if (task->state == 2)
		{
			ui.labelState->setText(QString::number(task->waitingAccount.size()) + QString(" Waiting"));
			int rest = task->issueTime + (task->applyPeriod * 86400) - time(0);
			if (rest > 0)
			{
				rest /= 3600;
				ui.labelTime->setText(QString::number(rest) + QString(" Hours Letf"));
			}
			else
			{
				ui.labelTime->setText(QString("Time Out"));
			}
		}
		else if(task->state == 3)
		{
			ui.labelState->setText(QString("For Translators"));
			int rest = task->startTime + (task->applyPeriod * 86400) - time(0);
			if (rest > 0)
			{
				rest /= 3600;
				ui.labelTime->setText(QString::number(rest) + QString(" Hours Letf"));
			}
			else
			{
				ui.labelTime->setText(QString("Time Out"));
			}
		}
	}
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


myTaskItem::myTaskItem(Task* task, int model, QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setLan(task->transType);
	ui.labelRank->setText(QString("Rank: ") + QString::number(task->rank));
	if (model == 1)
	{
		if (task->type())
		{
			ui.labelType->setText(QString("As Translator"));
		}
		else
		{
			ui.labelType->setText(QString("As Principal"));
		}
		if (task->state == 1)
		{
			ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(255, 0, 0); "));
			ui.labelState->setText(QString("Conducting"));
		}
		else if (task->state == 2 || task->state == 3)
		{
			ui.labelState->setStyleSheet(QString("color: rgb(0, 170, 255);\n border-image:transparent; "));
			ui.labelState->setText(QString("Recruiting"));
		}
		else if (task->state == 0)
		{
			ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(255, 0, 0); "));
			ui.labelState->setText(QString("Ruby Received"));
		}
		else
		{
			ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(0, 170, 255); "));
			ui.labelState->setText(QString("Waiting Pay"));
		}
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