#include "MainWins.h"
#include <qmessagebox.h>

//登陆界面
CrowdSourcing::CrowdSourcing(Data* d, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	p = NULL;
	r = NULL;
	dataPtr = d;
	ui.usernameInput->setValidator(new QRegExpValidator(QRegExp("^[0-9]{5}$")));
}

void CrowdSourcing::loginButtonClick()
{
	if (regex_match(ui.usernameInput->text().toStdString(), regex("^[1-9][0-9]{3}$")) && ui.usernameInput->text().toInt() - 1000 < dataPtr->userVec.size())
	{
		if (ui.passwordInput->text().toStdString() == dataPtr->userVec[ui.usernameInput->text().toInt() - 1000]->password)
		{
			dataPtr->nowAccountNum = ui.usernameInput->text().toInt();
			dataPtr->nowAccount = dataPtr->userVec[dataPtr->nowAccountNum - 1000];
			p = new Personal(dataPtr);
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
	r = new Register(dataPtr);
	r->show();
}

//个人信息界面
Personal::Personal(Data* data, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	dataPtr = data;
	c = NULL;
	to = NULL;
	u = NULL;
	ta = NULL;
	ui.balanceDisplay->setText(QString::number(dataPtr->nowAccount->balance)+QString(" Ruby"));
	ui.creditsDisplay->setText(QString("Eng: ") + QString::number(dataPtr->nowAccount->engCredits) + QString("       Fra: ") + QString::number(dataPtr->nowAccount->fraCredits));
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

void Personal::logOutButtonClick()
{
	this->close();
}

void Personal::changePasswordButtonClick()
{
	c = new ChangePassword(dataPtr);
	c->show();
}

void Personal::topUpButtonClick()
{
	to = new TopUp(dataPtr);
	to->show();
}

void Personal::updateInfoButtonClick()
{
	u = new UpdateInfo(dataPtr);
	u->show();
}

void Personal::taskButtonClick()
{
	ta = new TaskWin(dataPtr);
	ta->show();
	this->close();
}

//任务界面
TaskWin::TaskWin(Data* data, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	p = NULL;
	dataPtr = data;
	//测试
	QListWidgetItem* li1 = new QListWidgetItem;
	li1->setSizeHint(QSize(680, 59));
	li1->setWhatsThis(QString("s"));
	recTaskItem* test = new recTaskItem;
	ui.listWidgetRecTasks->addItem(li1);
	ui.listWidgetRecTasks->setItemWidget(li1, test);
}

void TaskWin::backButtonClick()
{
	p = new Personal(dataPtr);
	p->setAttribute(Qt::WA_DeleteOnClose, true);
	p->show();
	this->close();
}

void TaskWin::refreshButtonClick()
{
}

void TaskWin::recViewButtonClick()
{
	//测试
	ui.label->setText(ui.listWidgetRecTasks->currentItem()->whatsThis());
}