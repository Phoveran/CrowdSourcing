#include "MainWins.h"
#include <qmessagebox.h>
#include <algorithm>


//登陆界面
CrowdSourcing::CrowdSourcing(Data* d, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	dataPtr = d;
	ui.usernameInput->setValidator(new QRegExpValidator(QRegExp("^[0-9]{4}$")));
	this->setAttribute(Qt::WA_DeleteOnClose, true);
}

void CrowdSourcing::loginButtonClick()
{
	if (regex_match(ui.usernameInput->text().toStdString(), regex("^[1-9][0-9]{3}$")) && ui.usernameInput->text().toInt() - 1000 < dataPtr->userVec.size())
	{
		if (ui.passwordInput->text().toStdString() == dataPtr->userVec[ui.usernameInput->text().toInt() - 1000]->password)
		{
			dataPtr->nowAccountNum = ui.usernameInput->text().toInt();
			dataPtr->nowAccount = dataPtr->userVec[dataPtr->nowAccountNum - 1000];
			Personal *p = new Personal(dataPtr);
			p->show();
			this->close();
		}
		else
		{
			QMessageBox* mesBox = new QMessageBox;
			mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
			mesBox->setWindowTitle("Wrong Password!");
			mesBox->setText("Wrong Password!");
			mesBox->show();
		}
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setWindowTitle("Invalid username!");
		mesBox->setText("Invalid username!");
		mesBox->show();
	}
}

void CrowdSourcing::registerButtonClick()
{
	Register* r = new Register(dataPtr,this);
	r->show();
}


//个人信息界面
Personal::Personal(Data* data, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	dataPtr = data;
	loadInfo();
}

void Personal::logOutButtonClick()
{
	CrowdSourcing* c = new CrowdSourcing(dataPtr);
	c->show();
	this->close();
}

void Personal::changePasswordButtonClick()
{
	ChangePassword* c = new ChangePassword(dataPtr);
	c->show();
}

void Personal::topUpButtonClick()
{
	TopUp* to = new TopUp(dataPtr);
	to->show();
}

void Personal::updateInfoButtonClick()
{
	UpdateInfo* u = new UpdateInfo(dataPtr);
	u->show();
}

void Personal::issTaskButtonClick()
{
	IssTaskWin* i = new IssTaskWin(dataPtr);
	i->show();
	this->close();
}

void Personal::accTaskButtonClick()
{
	AccTaskWin* ta = new AccTaskWin(dataPtr);
	ta->show();
	this->close();
}

void Personal::refreshButtonClick()
{
	loadInfo();
}

void Personal::loadInfo()
{
	ui.balanceDisplay->setText(QString::number(dataPtr->nowAccount->balance) + QString(" Ruby ( 1CNY = 100Ruby )"));
	ui.creditsDisplay->setText(QString("Eng: ") + QString::number(dataPtr->nowAccount->engCredits) + QString("       Fre: ") + QString::number(dataPtr->nowAccount->fraCredits));
	if (dataPtr->nowAccount->level == 1)
	{
		ui.memberTypeDisplay->setText(QString("Normal member"));
	}
	else if (dataPtr->nowAccount->level == 2)
	{
		ui.memberTypeDisplay->setText(QString("VIP member"));
	}
	ui.telephoneDisplay->setText(QString::fromStdString(dataPtr->nowAccount->telephone));
	ui.usernameDisplay->setText(QString::number(dataPtr->nowAccount->account));
	QString cert;
	for (int i = 0; i < dataPtr->nowAccount->certificationType.size(); i++)
	{
		cert += QString::fromStdString(dataPtr->nowAccount->certificationType[i]);
		if (i != dataPtr->nowAccount->certificationType.size() - 1)
		{
			cert += QString(";");
		}
	}
	ui.certificateDisplay->setText(cert);
}


//接受的任务界面
AccTaskWin::AccTaskWin(Data* data, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	dataPtr = data;
	loadInfo();
}

void AccTaskWin::backButtonClick()
{
	Personal* p = new Personal(dataPtr);
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	p->show();
	this->close();
}

void AccTaskWin::refreshButtonClick()
{
	loadInfo();
}

void AccTaskWin::loadInfo()
{
	ui.listWidgetOthTasks->clear();
	ui.listWidgetMyTasks->clear();
	ui.listWidgetFiniTasks->clear();
	for (int i = 0; i < dataPtr->taskVec.size(); i++)
	{
		if (dataPtr->taskVec[i]->issuingAccount != dataPtr->nowAccountNum)
		{
			if (dataPtr->taskVec[i]->takenAccount != dataPtr->nowAccountNum && !count(dataPtr->taskVec[i]->waitingAccount.begin(), dataPtr->taskVec[i]->waitingAccount.end(), dataPtr->nowAccountNum))
			{
				QListWidgetItem* li = new QListWidgetItem;
				li->setWhatsThis(QString::number(dataPtr->taskVec[i]->rank));
				li->setSizeHint(QSize(680, 59));
				recTaskItem* rti = new recTaskItem(dataPtr->taskVec[i], 1);
				ui.listWidgetOthTasks->addItem(li);
				ui.listWidgetOthTasks->setItemWidget(li, rti);
			}
			else
			{
				QListWidgetItem* li = new QListWidgetItem;
				li->setWhatsThis(QString::number(dataPtr->taskVec[i]->rank));
				li->setSizeHint(QSize(600, 59));
				myTaskItem* mti = new myTaskItem(dataPtr->taskVec[i], 1);
				if (dataPtr->taskVec[i]->state == 1 || dataPtr->taskVec[i]->state == 2 || dataPtr->taskVec[i]->state == 3)
				{
					ui.listWidgetMyTasks->addItem(li);
					ui.listWidgetMyTasks->setItemWidget(li, mti);
				}
				else if (dataPtr->taskVec[i]->state == 0 || dataPtr->taskVec[i]->state == 4)
				{
					ui.listWidgetFiniTasks->addItem(li);
					ui.listWidgetFiniTasks->setItemWidget(li, mti);
				}
			}
		}
	}
}

void AccTaskWin::othViewButtonClick()
{
	if (ui.listWidgetOthTasks->currentItem())
	{
		int rank = ui.listWidgetOthTasks->currentItem()->whatsThis().toInt() - 1;
		if (dataPtr->taskVec[rank]->state == 1 || dataPtr->taskVec[rank]->state == 0)
		{
			StaticTaskOper* s = new StaticTaskOper(dataPtr->taskVec[rank], dataPtr);
			s->show();
		}
		else
		{
			RecTaskOper* r = new RecTaskOper(dataPtr->taskVec[rank], dataPtr);
			r->show();
		}
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You haven't chosen a task!"));
		mesBox->show();
	}
}

void AccTaskWin::myViewButtonClick()
{
	if (ui.listWidgetMyTasks->currentItem())
	{
		int rank = ui.listWidgetMyTasks->currentItem()->whatsThis().toInt() - 1;
		if (dataPtr->taskVec[rank]->state == 1 || dataPtr->taskVec[rank]->state == 4)
		{
			if (dataPtr->taskVec[rank]->type())
			{
				MyTransTaskOper* m = new MyTransTaskOper(dataPtr->taskVec[rank], dataPtr);
				m->show();
			}
			else
			{
				MyResTaskOper* m = new MyResTaskOper(dataPtr->taskVec[rank], dataPtr);
				m->show();
			}
		}
		else if (dataPtr->taskVec[rank]->state == 2)
		{
			RecTaskOper* r = new RecTaskOper(dataPtr->taskVec[rank], dataPtr);
			r->show();
		}
		else if (dataPtr->taskVec[rank]->state == 3)
		{
			MyResTaskOper* m = new MyResTaskOper(dataPtr->taskVec[rank], dataPtr);
			m->show();
		}
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You haven't chosen a task!"));
		mesBox->show();
	}
}


//发布的任务界面
IssTaskWin::IssTaskWin(Data* data, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	dataPtr = data;
	loadInfo();
}

void IssTaskWin::recViewButtonClick()
{
	if (ui.listWidgetRecTasks->currentItem())
	{
		int rank = ui.listWidgetRecTasks->currentItem()->whatsThis().toInt() - 1;
		IssRecTaskOper* i = new IssRecTaskOper(dataPtr->taskVec[rank], dataPtr);
		i->show();
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You haven't chosen a task!"));
		mesBox->show();
	}
}

void IssTaskWin::refreshButtonClick()
{
	loadInfo();
}

void IssTaskWin::conViewButtonClick()
{
	if (ui.listWidgetConTasks->currentItem())
	{
		int rank = ui.listWidgetConTasks->currentItem()->whatsThis().toInt() - 1;
		IssRecTaskOper* i = new IssRecTaskOper(dataPtr->taskVec[rank], dataPtr);
		i->show();
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You haven't chosen a task!"));
		mesBox->show();
	}
}

void IssTaskWin::finiViewButtonClick()
{
}

void IssTaskWin::newTaskButtonClick()
{
	NewTaskOper* n = new NewTaskOper(dataPtr);
	n->show();
}

void IssTaskWin::loadInfo()
{
	ui.listWidgetRecTasks->clear();
	ui.listWidgetConTasks->clear();
	ui.listWidgetFiniTasks->clear();
	for (int i = 0; i < dataPtr->nowAccount->issuedTasks.size(); i++)
	{
		int ra = dataPtr->nowAccount->issuedTasks[i] - 1;
		if (dataPtr->taskVec[ra]->state == 2 || dataPtr->taskVec[ra]->state == 3)
		{
			QListWidgetItem* li = new QListWidgetItem;
			li->setWhatsThis(QString::number(ra + 1));
			li->setSizeHint(QSize(680, 59));
			recTaskItem* rti = new recTaskItem(dataPtr->taskVec[ra], 2);
			ui.listWidgetRecTasks->addItem(li);
			ui.listWidgetRecTasks->setItemWidget(li, rti);
		}
		else if (dataPtr->taskVec[ra]->state == 1 || dataPtr->taskVec[ra]->state == 4)
		{
			QListWidgetItem* li = new QListWidgetItem;
			li->setWhatsThis(QString::number(ra + 1));
			li->setSizeHint(QSize(600, 59));
			myTaskItem* mti = new myTaskItem(dataPtr->taskVec[ra], 2);
			if (dataPtr->taskVec[ra]->state == 4)
			{
				mti->ui.labelState->setStyleSheet(QString("border-image:transparent;\n color: rgb(255, 0, 0); "));
				mti->ui.labelState->setText(QString("Waiting Examine"));
			}
			else
			{
				mti->ui.labelState->setStyleSheet(QString("color: rgb(0, 170, 255);\n border-image:transparent; "));
				mti->ui.labelState->setText(QString("Conducting"));
			}
			ui.listWidgetConTasks->addItem(li);
			ui.listWidgetConTasks->setItemWidget(li, mti);
		}
		else if (dataPtr->taskVec[ra]->state == 0)
		{
			QListWidgetItem* li = new QListWidgetItem;
			li->setWhatsThis(QString::number(ra + 1));
			li->setSizeHint(QSize(600, 59));
			myTaskItem* mti = new myTaskItem(dataPtr->taskVec[ra], 2);
			mti->ui.labelState->setStyleSheet(QString("color: rgb(85, 85, 0); \n border-image:transparent;"));
			mti->ui.labelState->setText(QString::number(dataPtr->taskVec[ra]->period) + QString("Days"));
			ui.listWidgetFiniTasks->addItem(li);
			ui.listWidgetFiniTasks->setItemWidget(li, mti);
		}
	}
}

void IssTaskWin::backButtonClick()
{
	Personal* p = new Personal(dataPtr);
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	p->show();
	this->close();
}
