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
	ChangePassword* c = new ChangePassword(dataPtr, this);
	c->show();
	connect(c, SIGNAL(destroyed()), this, SLOT(loadInfo()));
}

void Personal::topUpButtonClick()
{
	TopUp* to = new TopUp(dataPtr, this);
	to->show();
	connect(to, SIGNAL(destroyed()), this, SLOT(loadInfo()));
}

void Personal::updateInfoButtonClick()
{
	UpdateInfo* u = new UpdateInfo(dataPtr, this);
	u->show();
	connect(u, SIGNAL(destroyed()), this, SLOT(loadInfo()));
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

void Personal::messageButtonClick()
{
	MessageBox* m = new MessageBox(dataPtr, this);
	m->show();
	connect(m, SIGNAL(destroyed()), this, SLOT(loadInfo()));
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
	if (dataPtr->nowAccount->unreadMess.empty())
	{
		ui.messageButton->setStyleSheet("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/mess_norm_0.png);}  \nQPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/mess_on.png);}  \nQPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/mess_clicked.png);};");
		ui.labelMess->setHidden(true);
	}
	else
	{
		ui.messageButton->setStyleSheet("QPushButton{border-image: url(:/CrowdSourcing/Resources/pictures/mess_norm_!0.png);}  \nQPushButton:hover{border-image: url(:/CrowdSourcing/Resources/pictures/mess_on.png);}  \nQPushButton:pressed{border-image: url(:/CrowdSourcing/Resources/pictures/mess_clicked.png);};");
		ui.labelMess->setHidden(false);
		ui.labelMess->setText(QString::number(dataPtr->nowAccount->unreadMess.size()));
	}
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
	Personal* p = new Personal(dataPtr, this);
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	connect(p, SIGNAL(destroyed()), this, SLOT(loadInfo()));
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
				if (dataPtr->taskVec[i]->state == 1 || dataPtr->taskVec[i]->state == 2 || dataPtr->taskVec[i]->state == 3 || dataPtr->taskVec[i]->state == 4)
				{
					ui.listWidgetMyTasks->addItem(li);
					ui.listWidgetMyTasks->setItemWidget(li, mti);
				}
				else if (dataPtr->taskVec[i]->state == 0 || dataPtr->taskVec[i]->state == 5)
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
			StaticTaskOper* s = new StaticTaskOper(dataPtr->taskVec[rank], dataPtr, this);
			connect(s, SIGNAL(destroyed()), this, SLOT(loadInfo()));
			s->show();
		}
		else
		{
			RecTaskOper* r = new RecTaskOper(dataPtr->taskVec[rank], dataPtr, this);
			connect(r, SIGNAL(destroyed()), this, SLOT(loadInfo()));
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
				MyTransTaskOper* m = new MyTransTaskOper(dataPtr->taskVec[rank], dataPtr, this);
				connect(m, SIGNAL(destroyed()), this, SLOT(loadInfo()));
				m->show();
			}
			else
			{
				MyResTaskOper* m = new MyResTaskOper(dataPtr->taskVec[rank], dataPtr, this);
				connect(m, SIGNAL(destroyed()), this, SLOT(loadInfo()));
				m->show();
			}
		}
		else if (dataPtr->taskVec[rank]->state == 2)
		{
			RecTaskOper* r = new RecTaskOper(dataPtr->taskVec[rank], dataPtr, this);
			connect(r, SIGNAL(destroyed()), this, SLOT(loadInfo()));
			r->show();
		}
		else if (dataPtr->taskVec[rank]->state == 3)
		{
			MyResTaskOper* m = new MyResTaskOper(dataPtr->taskVec[rank], dataPtr, this);
			connect(m, SIGNAL(destroyed()), this, SLOT(loadInfo()));
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

void AccTaskWin::finiViewButtonClick()
{
	if (ui.listWidgetFiniTasks->currentItem())
	{
		int rank = ui.listWidgetFiniTasks->currentItem()->whatsThis().toInt() - 1;
		StaticTaskOper* s = new StaticTaskOper(dataPtr->taskVec[rank], dataPtr, this);
		connect(s, SIGNAL(destroyed()), this, SLOT(loadInfo()));
		s->ui.labelTakenAcc->setText(QString::number(dataPtr->taskVec[rank]->payment));
		s->ui.label_10->setText(QString("Payment(Ruby)"));
		s->show();
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
		IssRecTaskOper* i = new IssRecTaskOper(dataPtr->taskVec[rank], dataPtr, 1, this);
		connect(i, SIGNAL(destroyed()), this, SLOT(loadInfo()));
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
		if (dataPtr->taskVec[rank]->type())
		{
			QMessageBox* mesBox = new QMessageBox;
			mesBox->setWindowTitle("Wrong");
			mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
			mesBox->setText(QString("Please go to your accepted principal task to see!"));
			mesBox->show();
		}
		else
		{
			IssRecTaskOper* i = new IssRecTaskOper(dataPtr->taskVec[rank], dataPtr, 2, this);
			connect(i, SIGNAL(destroyed()), this, SLOT(loadInfo()));
			i->show();
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

void IssTaskWin::finiViewButtonClick()
{
	if (ui.listWidgetFiniTasks->currentItem())
	{
		int rank = ui.listWidgetFiniTasks->currentItem()->whatsThis().toInt() - 1;
		FiniTaskOper* f = new FiniTaskOper(dataPtr->taskVec[rank], dataPtr, this);
		connect(f, SIGNAL(destroyed()), this, SLOT(loadInfo()));
		f->show();
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

void IssTaskWin::newTaskButtonClick()
{
	NewTaskOper* n = new NewTaskOper(dataPtr, this);
	connect(n, SIGNAL(destroyed()), this, SLOT(loadInfo()));
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
			ui.listWidgetConTasks->addItem(li);
			ui.listWidgetConTasks->setItemWidget(li, mti);
		}
		else if (dataPtr->taskVec[ra]->state == 0 || dataPtr->taskVec[ra]->state == 5)
		{
			QListWidgetItem* li = new QListWidgetItem;
			li->setWhatsThis(QString::number(ra + 1));
			li->setSizeHint(QSize(600, 59));
			myTaskItem* mti = new myTaskItem(dataPtr->taskVec[ra], 2);
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
