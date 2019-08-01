#include <qmessagebox.h>
#include <QString>
#include <regex>
#include <qvalidator.h>
#include <algorithm>
#include <time.h>
#include "Dialogs.h"

using namespace std;

//改密码界面
ChangePassword::ChangePassword(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	ui.newPwLineEdit->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z0-9]*$")));
	ui.newPwAgainLineEdit->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z0-9]*$")));
}

void ChangePassword::OkClick()
{
	if (!regex_match(ui.newPwLineEdit->text().toStdString(), regex("^[A-Za-z0-9]{4,12}$")))
	{
		ui.noticeLabel->setText("New password not valid!");
	}
	else if (ui.newPwLineEdit->text() != ui.newPwAgainLineEdit->text())
	{
		ui.noticeLabel->setText("Two new passwords don't match!");
	}
	else
	{
		submitChange();
		this->close();
	}
}

void ChangePassword::CancelClick()
{
	this->close();
}

void ChangePassword::submitChange()
{
	dataPtr->nowAccount->password = ui.newPwLineEdit->text().toStdString();
	dataPtr->pushNotice("Your password has been changed to " + dataPtr->nowAccount->password);
}

//注册界面

Register::Register(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	bSelected = false;
	strSelectedText = QString();

	//设置窗口属性
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	//设置Validator
	ui.teleLineEdit->setValidator(new QRegExpValidator(QRegExp("^[0-9]{11}$")));
	ui.pwLineEdit->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z0-9]*$")));
	ui.pwAgainLineEdit->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z0-9]*$")));
	//设置多选下拉栏
	certificates = { "TEM8","IELTS7","IELTS7.5","IELTS8","TOFEL95","TOFEL102","TOFEL110","TEF699","TEF834","TCF500","TCF600" };
	pListWidget = new QListWidget(this);
	pLineEdit = new QLineEdit(this);
	pLineEdit->setFont(QFont("Century Gothic", 14, 75));
	for (int i = 0; i < certificates.size(); i++)
	{
		QListWidgetItem* pItem = new QListWidgetItem(pListWidget);
		pListWidget->addItem(pItem);
		QCheckBox* pCheckBox = new QCheckBox(this);
		pCheckBox->setText(certificates[i]);
		pCheckBox->setFont(QFont("Century Gothic", 14, 75));
		pListWidget->addItem(pItem);
		pListWidget->setItemWidget(pItem, pCheckBox);
		connect(pCheckBox, SIGNAL(stateChanged(int)), this, SLOT(stateChanged(int)));
	}
	ui.certificateBox->setModel(pListWidget->model());
	ui.certificateBox->setView(pListWidget);
	ui.certificateBox->setLineEdit(pLineEdit);
	pLineEdit->setReadOnly(true);
	connect(pLineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(textChanged(const QString&)));
}

void Register::RegisterClick()
{
	if (!regex_match(ui.pwLineEdit->text().toStdString(), regex("^[A-Za-z0-9]{4,12}$")))
	{
		ui.noticeLabel->setText("Password not valid!");
	}
	else if (ui.pwAgainLineEdit->text() != ui.pwLineEdit->text())
	{
		ui.noticeLabel->setText("Two passwords don't match!");
	}
	else if (!regex_match(ui.teleLineEdit->text().toStdString(), regex("^[1](([3][0-9])|([4][5-9])|([5][0-3,5-9])|([6][5,6])|([7][0-8])|([8][0-9])|([9][1,8,9]))[0-9]{8}$")))
	{
		ui.noticeLabel->setText("Telephone not valid!");
	}
	else
	{
		submitRegister();
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Register Done");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("Your account is ") + QString::number(dataPtr->userVec[dataPtr->userVec.size() - 1]->account) + "\nYour password is " + QString::fromStdString(dataPtr->userVec[dataPtr->userVec.size() - 1]->password));
		mesBox->show();
		this->close();
	}
}

void Register::CancelClick()
{
	this->close();
}

void Register::stateChanged(int state)
{
	bSelected = true;
	QString strSelectedData("");
	strSelectedText.clear();
	for (int i = 0; i < certificates.size(); ++i)
	{
		QListWidgetItem* pItem = pListWidget->item(i);
		QWidget* pWidget = pListWidget->itemWidget(pItem);
		QCheckBox* pCheckBox = (QCheckBox*)pWidget;
		if (pCheckBox->isChecked())
		{
			QString strText = pCheckBox->text();
			strSelectedData.append(strText).append(";");
		}
	}
	if (strSelectedData.endsWith(";"))
		strSelectedData.remove(strSelectedData.count() - 1, 1);
	if (!strSelectedData.isEmpty())
	{
		strSelectedText = strSelectedData;
		pLineEdit->setText(strSelectedData);
		pLineEdit->setToolTip(strSelectedData);
	}
	else
	{
		pLineEdit->clear();
	}
	bSelected = false;
}

void Register::textChanged(const QString& text)
{
	if (!bSelected)
		pLineEdit->setText(strSelectedText);
}

void Register::submitRegister()
{
	int account = 1000 + dataPtr->userVec.size();
	string password = ui.pwLineEdit->text().toStdString();
	string telephone = ui.teleLineEdit->text().toStdString();
	vector<string> certifi = split(pLineEdit->text().toStdString(), string(";"));
	User* user = new User(account, password, certifi, telephone, dataPtr);
	dataPtr->userVec.push_back(user);
	QString notice = "Welcome dear, ";
	notice += QString("your account is ") + QString::number(dataPtr->userVec[dataPtr->userVec.size() - 1]->account) + " and your password is " + QString::fromStdString(dataPtr->userVec[dataPtr->userVec.size() - 1]->password);
	dataPtr->pushNotice(notice.toStdString(), account);
}

//充值界面
TopUp::TopUp(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	ui.lineEdit->setValidator(new QIntValidator);
}

void TopUp::topUpClick()
{
	QString str = ui.lineEdit->text();
	int num = str.toInt();
	if (num > 0 && num < 1000000 && num % 100 == 0)
	{
		submitTopUp();
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Topup Done");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(ui.lineEdit->text() + QString(" Ruby topped up"));
		mesBox->show();
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Topup Failed");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("Amount must be in multiples of 100 !\nTop up at most 1000000 Ruby once !"));
		mesBox->show();
	}
}

void TopUp::submitTopUp()
{
	dataPtr->nowAccount->balance += ui.lineEdit->text().toInt();
	dataPtr->pushNotice("You have topped up " + ui.lineEdit->text().toStdString() + " Ruby");
}


//更改信息界面
UpdateInfo::UpdateInfo(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	bSelected = false;
	strSelectedText = QString();

//设置窗口属性
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
//设置Validator
	ui.teleLineEdit->setValidator(new QRegExpValidator(QRegExp("^[0-9]{11}$")));
//设置多选下拉栏
	certificates = { "TEM8","IELTS7","IELTS7.5","IELTS8","TOFEL95","TOFEL102","TOFEL110","TEF699","TEF834","TCF500","TCF600" };
	pListWidget = new QListWidget(this);
	pLineEdit = new QLineEdit(this);
	pLineEdit->setFont(QFont("Century Gothic", 14, 75));
	for (int i = 0; i < certificates.size(); i++)
	{
		QListWidgetItem* pItem = new QListWidgetItem(pListWidget);
		pListWidget->addItem(pItem);
		QCheckBox* pCheckBox = new QCheckBox(this);
		pCheckBox->setText(certificates[i]);
		pCheckBox->setFont(QFont("Century Gothic", 14, 75));
		pListWidget->addItem(pItem);
		pListWidget->setItemWidget(pItem, pCheckBox);
		connect(pCheckBox, SIGNAL(stateChanged(int)), this, SLOT(stateChanged(int)));
	}
	ui.certificateBox->setModel(pListWidget->model());
	ui.certificateBox->setView(pListWidget);
	ui.certificateBox->setLineEdit(pLineEdit);
	pLineEdit->setReadOnly(true);
	connect(pLineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(textChanged(const QString&)));
}

void UpdateInfo::okClick()
{
	if (ui.teleLineEdit->text().isEmpty() || regex_match(ui.teleLineEdit->text().toStdString(), regex("^[1](([3][0-9])|([4][5-9])|([5][0-3,5-9])|([6][5,6])|([7][0-8])|([8][0-9])|([9][1,8,9]))[0-9]{8}$")))
	{
		submitChange();
		this->close();
	}
	else
	{
		ui.noticeLabel->setText("Telephone not valid!");
	}
}

void UpdateInfo::cancelClick()
{
	this->close();
}

void UpdateInfo::stateChanged(int state)
{
	bSelected = true;
	QString strSelectedData("");
	strSelectedText.clear();
	for (int i = 0; i < certificates.size(); ++i)
	{
		QListWidgetItem* pItem = pListWidget->item(i);
		QWidget* pWidget = pListWidget->itemWidget(pItem);
		QCheckBox* pCheckBox = (QCheckBox*)pWidget;
		if (pCheckBox->isChecked())
		{
			QString strText = pCheckBox->text();
			strSelectedData.append(strText).append(";");
		}
	}
	if (strSelectedData.endsWith(";"))
		strSelectedData.remove(strSelectedData.count() - 1, 1);
	if (!strSelectedData.isEmpty())
	{
		strSelectedText = strSelectedData;
		pLineEdit->setText(strSelectedData);
		pLineEdit->setToolTip(strSelectedData);
	}
	else
	{
		pLineEdit->clear();
	}
	bSelected = false;
}

void UpdateInfo::textChanged(const QString& text)
{
	if (!bSelected)
		pLineEdit->setText(strSelectedText);
}

void UpdateInfo::submitChange()
{
	if (!pLineEdit->text().isEmpty())
	{
		vector<string> certifi = split(pLineEdit->text().toStdString(), string(";"));
		dataPtr->nowAccount->certificationType = certifi;
		dataPtr->nowAccount->setCredits();
		dataPtr->pushNotice("You have reset your certificates to " + pLineEdit->text().toStdString());
	}
	if (!ui.teleLineEdit->text().isEmpty())
	{
		string tele = ui.teleLineEdit->text().toStdString();
		dataPtr->nowAccount->telephone = tele;
		dataPtr->pushNotice("You have reset your phone to " + ui.teleLineEdit->text().toStdString());
	}
}


//查看别人发布的招募中任务界面
RecTaskOper::RecTaskOper(Task* tas, Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);

	dataPtr = data;
	task = tas;

	ui.labelIssAcc->setText(QString::number(task->issuingAccount));
	ui.labelPayment->setText(QString::number(task->payment) + QString(" Ruby"));
	ui.labelRank->setText(QString::number(task->rank));
	ui.labelConPeriod->setText(QString::number(task->period) + QString(" Days"));
	ui.labelTransType->setText(transTypeJudge());
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	ui.labelRecPeriod->setText(QString::number(task->applyPeriod) + QString(" Days"));
	if (task->state == 3)
	{
		ui.labelRecruitType->setText(QString("Translator"));
		ui.labelReqCre->setText(QString("Eng: ") + QString::number(task->getReqEngCre()) + QString("    Fre:") + QString::number(task->getReqFraCre()));
	}
	else if(task->state == 2)
	{
		ui.labelRecruitType->setText(QString("Principal"));
		ui.labelReqCre->setHidden(true);
		ui.label_3->setHidden(true);
	}
}

void RecTaskOper::cancelButtonClick()
{
	this->close();
}

void RecTaskOper::applyButtonClick()
{
	if (task->applied(dataPtr->nowAccountNum))
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Done");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("Applied successfully"));
		mesBox->show();
		dataPtr->pushNotice("You have applied for task " + to_string(task->rank));
		dataPtr->pushNotice("You have a new applicant " + to_string(dataPtr->nowAccountNum), task->issuingAccount);
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You can't take this task!"));
		mesBox->show();
	}
}

QString RecTaskOper::transTypeJudge()
{
	switch (task->transType)
	{
	case 1: return QString("Chinese to English");
	case 2: return QString("Chinese to French");
	case 3: return QString("English to Chinese");
	case 4: return QString("English to French");
	case 5: return QString("French to Chinese");
	case 6: return QString("French to English");
	default: return QString();
	}
}


//我的翻译任务界面
MyTransTaskOper::MyTransTaskOper(Task* tas, Data* data, QWidget* parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);

	dataPtr = data;
	task = tas;
	
	loadInfo();
}

void MyTransTaskOper::saveButtonClick()
{
	task->transTemp = ui.textBrowserTranslation->toPlainText().toStdString();
	task->transSwitch = 0;
	QMessageBox* mesBox = new QMessageBox;
	mesBox->setWindowTitle("Done");
	mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
	mesBox->setText(QString("Translation Saved"));
	mesBox->show();
	loadInfo();
}

QString MyTransTaskOper::transTypeJudge()
{
	switch (task->transType)
	{
	case 1: return QString("Chinese to English");
	case 2: return QString("Chinese to French");
	case 3: return QString("English to Chinese");
	case 4: return QString("English to French");
	case 5: return QString("French to Chinese");
	case 6: return QString("French to English");
	default: return QString();
	}
}

void MyTransTaskOper::loadInfo()
{
	ui.textBrowserOrigin->setText(QString::fromStdString(task->content));
	ui.labelPay->setText(QString::number(task->payment));
	ui.labelRank->setText(QString::number(task->rank));
	ui.labelConPeriod->setText(QString::number(task->period));
	ui.labelTransType->setText(transTypeJudge());
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	ui.labelParentTask->setText(QString::number(task->getParent()));
	int rest = task->startTime + (86400 * task->period) - time(0);
	if (rest > 0)
	{
		rest /= 3600;
		ui.labelRemHours->setText(QString::number(rest));
	}
	else
	{
		ui.labelRemHours->setText(QString("Time Out"));
	}
	if (task->state == 1)
	{
		ui.labelState->setText("Translating");
	}
	else if (task->state == 4)
	{
		ui.labelState->setText("Waiting Examing");
	}
	ui.textBrowserAdvice->setText(QString::fromStdString(task->getAdvice()));
	if(task->transSwitch)
		ui.textBrowserTranslation->setText(QString::fromStdString(task->transSubmit));
	else
		ui.textBrowserTranslation->setText(QString::fromStdString(task->transTemp));
}

void MyTransTaskOper::submitButtonClick()
{

	task->transSubmit = ui.textBrowserTranslation->toPlainText().toStdString();
	task->transSwitch = 1;
	QMessageBox* mesBox = new QMessageBox;
	mesBox->setWindowTitle("Done");
	mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
	mesBox->setText(QString("Translation Submitted"));
	mesBox->show();
	dataPtr->pushNotice("You have submitted task " + to_string(task->rank));
	dataPtr->pushNotice("Your task " + to_string(task->rank) + " has a new submission");
	loadInfo();
}


//我的负责任务界面
MyResTaskOper::MyResTaskOper(Task* tas, Data* data, QWidget* parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);

	dataPtr = data;
	task = tas;

	loadInfo();
	ui.editInfoOkButton->setHidden(true);
	ui.editInfocancelButton->setHidden(true);
}
//Info Tab
void MyResTaskOper::changeInfoButtonClick()
{
	ui.editInfoOkButton->setHidden(false);
	ui.editInfocancelButton->setHidden(false);
	ui.changeInfoButton->setHidden(true);
	ui.lineEditEngCre->setReadOnly(false);
	ui.lineEditFreCre->setReadOnly(false);
}

void MyResTaskOper::editInfoOkButtonClick()
{
	ui.editInfoOkButton->setHidden(true);
	ui.editInfocancelButton->setHidden(true);
	ui.changeInfoButton->setHidden(false);
	ui.lineEditEngCre->setReadOnly(true);
	ui.lineEditFreCre->setReadOnly(true);
	task->setReqEngCre(ui.lineEditEngCre->text().toInt());
	task->setReqFraCre(ui.lineEditFreCre->text().toInt());
}

void MyResTaskOper::editInfoCancelButtonClick()
{
	ui.editInfoOkButton->setHidden(true);
	ui.editInfocancelButton->setHidden(true);
	ui.changeInfoButton->setHidden(false);
	ui.lineEditEngCre->setReadOnly(true);
	ui.lineEditFreCre->setReadOnly(true);
	ui.lineEditEngCre->setText(QString::number(task->getReqEngCre()));
	ui.lineEditFreCre->setText(QString::number(task->getReqFraCre()));
}
//Communication Tab
void MyResTaskOper::communicateButtonClick()
{
	if (ui.listWidgetChildTasks->currentItem())
	{
		Task* taskTemp = dataPtr->taskVec[task->getChildren()[ui.listWidgetChildTasks->currentRow()] - 1];
		if (taskTemp->state == 1)
		{
			taskTemp->setAdvice(ui.textBrowserAdvice->toPlainText().toStdString());
			taskTemp = nullptr;
			communicationRefresh();
			QMessageBox* mesBox = new QMessageBox;
			mesBox->setWindowTitle("Done");
			mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
			mesBox->setText(QString("Advice sent"));
			mesBox->show();
		}
		else
		{
			QMessageBox* mesBox = new QMessageBox;
			mesBox->setWindowTitle("Wrong");
			mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
			mesBox->setText(QString("Task Acomplished!"));
			mesBox->show();
		}
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You Haven't Chosen A Task!"));
		mesBox->show();
	}
}

void MyResTaskOper::communicationRefresh()
{
	Task* taskTemp = dataPtr->taskVec[task->getChildren()[ui.listWidgetChildTasks->currentRow()] - 1];
	ui.textBrowserChildOrigin->setText(QString::fromStdString(taskTemp->content));
	ui.textBrowserChildTranslation->setText(QString::fromStdString(taskTemp->transSubmit));
	ui.textBrowserAdvice->setText(QString::fromStdString(taskTemp->getAdvice()));
	taskTemp = nullptr;
}

void MyResTaskOper::acceptButtonClick()
{
	if (ui.listWidgetChildTasks->currentItem())
	{
		Task* taskTemp = dataPtr->taskVec[task->getChildren()[ui.listWidgetChildTasks->currentRow()] - 1];
		taskTemp->state = 4;
		taskTemp = nullptr;
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Done");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("Translation Accepted"));
		mesBox->show();
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You Haven't Chosen A Task!"));
		mesBox->show();
	}
}
//Distribution Tab
void MyResTaskOper::distributeButtonClick()
{
	if (ui.listWidgetTranslators->currentItem())
	{
		if (ui.textBrowserChildContent->toPlainText().isEmpty())
		{
			QMessageBox* mesBox = new QMessageBox;
			mesBox->setWindowTitle("Wrong");
			mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
			mesBox->setText(QString("You haven't text the content!"));
			mesBox->show();
		}
		else
		{
			if (ui.lineEditChildPay->text().isEmpty())
			{
				QMessageBox* mesBox = new QMessageBox;
				mesBox->setWindowTitle("Wrong");
				mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
				mesBox->setText(QString("You haven't text the Payment!"));
				mesBox->show();
			}
			else
			{
				if (ui.spinBoxChildPeriod->text().toInt() < 1)
				{
					QMessageBox* mesBox = new QMessageBox;
					mesBox->setWindowTitle("Wrong");
					mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
					mesBox->setText(QString("Invalid Period!"));
					mesBox->show();
				}
				else
				{
					bool judge = false;
					for (int j = 0; j < dataPtr->userVec[task->getTranslators()[ui.listWidgetTranslators->currentRow()] - 1000]->takenTasks.size(); j++)
					{
						if (dataPtr->taskVec[dataPtr->userVec[task->getTranslators()[ui.listWidgetTranslators->currentRow()] - 1000]->takenTasks[j] - 1]->getParent() == task->rank)
						{
							judge = true;
						}
					}
					if (!judge)
					{
						newChildTask(task->getTranslators()[ui.listWidgetTranslators->currentRow()], ui.textBrowserChildContent->toPlainText().toStdString(), ui.spinBoxChildPeriod->text().toInt(), ui.lineEditChildPay->text().toInt());
						loadInfo();
						QMessageBox* mesBox = new QMessageBox;
						mesBox->setWindowTitle("Done");
						mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
						mesBox->setText(QString("Child task distributed"));
						mesBox->show();
					}
					else
					{
						QMessageBox* mesBox = new QMessageBox;
						mesBox->setWindowTitle("Wrong");
						mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
						mesBox->setText(QString("A child task has been sent to this translator before"));
						mesBox->show();
					}
				}
			}
		}
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You haven't chosen a translator!"));
		mesBox->show();
	}
}
//Recruiting Tab
void MyResTaskOper::chooseTranslatorButtonClick()
{
	if (task->state == 3)
	{
		if (ui.listWidgetAppliedAcc->currentItem())
		{
			task->addTranslators(task->waitingAccount[ui.listWidgetAppliedAcc->currentRow()]);
			task->waitingAccount.erase(task->waitingAccount.begin() + ui.listWidgetAppliedAcc->currentRow());
			loadInfo();
		}
		else
		{
			QMessageBox* mesBox = new QMessageBox;
			mesBox->setWindowTitle("Wrong");
			mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
			mesBox->setText(QString("You haven't chosen an account!"));
			mesBox->show();
		}
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("It's not recruiting time!"));
		mesBox->show();
	}
}

void MyResTaskOper::removeButtonClick()
{
	if (task->state == 3)
	{
		if (ui.listWidgetChosenAcc->currentItem())
		{
			task->waitingAccount.push_back(task->getTranslators()[ui.listWidgetChosenAcc->currentRow()]);
			task->deleteTranslators(ui.listWidgetChosenAcc->currentRow());
			loadInfo();
		}
		else
		{
			QMessageBox* mesBox = new QMessageBox;
			mesBox->setWindowTitle("Wrong");
			mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
			mesBox->setText(QString("You haven't chosen an account!"));
			mesBox->show();
		}
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("It's not recruiting time!"));
		mesBox->show();
	}
}

void MyResTaskOper::endRecruitingButtonClick()
{
	if (task->state == 3)
	{
		task->state = 1;
		task->startTime = time(0);
		task->waitingAccount.clear();
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Done");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("Recruiting ended"));
		mesBox->show();
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("It's not recruiting time!"));
		mesBox->show();
	}
}
//Submission Tab
void MyResTaskOper::saveButtonClick()
{
	task->transTemp = ui.textBrowserTotalTranslation->toPlainText().toStdString();
	task->transSwitch = 0;
	QMessageBox* mesBox = new QMessageBox;
	mesBox->setWindowTitle("Done");
	mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
	mesBox->setText(QString("Translation Saved"));
	mesBox->show();
	loadInfo();
}

void MyResTaskOper::submitButtonClick()
{
	task->transSubmit = ui.textBrowserTotalTranslation->toPlainText().toStdString();
	task->transSwitch = 1;
	task->state = 4;
	QMessageBox* mesBox = new QMessageBox;
	mesBox->setWindowTitle("Done");
	mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
	mesBox->setText(QString("Translation Submitted"));
	mesBox->show();
	loadInfo();
}

void MyResTaskOper::submissionRefresh()
{
	Task* taskTemp = dataPtr->taskVec[task->getChildren()[ui.listWidgetChildTasks_2->currentRow()] - 1];
	ui.textBrowserChildTranslation_2->setText(QString::fromStdString(taskTemp->transSubmit));
	taskTemp = nullptr;
}

QString MyResTaskOper::transTypeJudge()
{
	switch (task->transType)
	{
	case 1: return QString("Chinese to English");
	case 2: return QString("Chinese to French");
	case 3: return QString("English to Chinese");
	case 4: return QString("English to French");
	case 5: return QString("French to Chinese");
	case 6: return QString("French to English");
	default: return QString();
	}
}

void MyResTaskOper::loadInfo()
{
	ui.listWidgetAppliedAcc->clear();
	ui.listWidgetChildTasks->clear();
	ui.listWidgetChildTasks_2->clear();
	ui.listWidgetChosenAcc->clear();
	ui.listWidgetTranslators->clear();
	//Infomation Tab
	ui.labelConPeriod->setText(QString::number(task->period));
	ui.labelRank->setText(QString::number(task->rank));
	ui.labelRecPeriod->setText(QString::number(task->applyPeriod));
	int rest;
	if (task->state == 3)
	{
		ui.labelState->setText("Recruiting");
		rest = task->startTime + (task->applyPeriod * 86400) - time(0);
		if (rest > 0)
		{
			rest /= 3600;
			ui.labelRemHours->setText(QString::number(rest));
		}
		else
		{
			ui.labelRemHours->setText("Time Out");
		}
	}
	else if (task->state == 1)
	{
		ui.labelState->setText("Translating");
		rest = task->startTime + (task->period * 86400) - time(0);
		if (rest > 0)
		{
			rest /= 3600;
			ui.labelRemHours->setText(QString::number(rest));
		}
		else
		{
			ui.labelRemHours->setText("Time Out");
		}
	}
	else if (task->state == 4)
	{
		ui.labelState->setText("Waiting Examing");
		rest = task->startTime + (task->period * 86400) - time(0);
		if (rest > 0)
		{
			rest /= 3600;
			ui.labelRemHours->setText(QString::number(rest));
		}
		else
		{
			ui.labelRemHours->setText("Time Out");
		}
	}
	ui.labelTransType->setText(transTypeJudge());
	ui.labelPay->setText(QString::number(task->payment));
	ui.lineEditEngCre->setText(QString::number(task->getReqEngCre()));
	ui.lineEditFreCre->setText(QString::number(task->getReqFraCre()));
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	ui.editInfoOkButton->setHidden(true);
	ui.editInfocancelButton->setHidden(true);
	
	//Recruitment Tab
	for (int i = 0; i < task->waitingAccount.size(); i++)
	{
		QString info = "Account: ";
		info += QString::number(task->waitingAccount[i]);
		info += "\nCertificates: ";
		info += QString::fromStdString(stringCombine(dataPtr->userVec[task->waitingAccount[i] - 1000]->certificationType, ";"));
		info += "\nEnglish Credits: ";
		info += QString::number(dataPtr->userVec[task->waitingAccount[i] - 1000]->engCredits);
		info += "      French Credits: ";
		info += QString::number(dataPtr->userVec[task->waitingAccount[i] - 1000]->fraCredits);
		QListWidgetItem* li = new QListWidgetItem(info);
		ui.listWidgetAppliedAcc->addItem(li);
	}
	for (int i = 0; i < task->getTranslators().size(); i++)
	{
		QString info = "Account: ";
		info += QString::number(task->getTranslators()[i]);
		info += "\nCertificates: ";
		info += QString::fromStdString(stringCombine(dataPtr->userVec[task->getTranslators()[i] - 1000]->certificationType, ";"));
		info += "\nEnglish Credits: ";
		info += QString::number(dataPtr->userVec[task->getTranslators()[i] - 1000]->engCredits);
		info += "      French Credits: ";
		info += QString::number(dataPtr->userVec[task->getTranslators()[i] - 1000]->fraCredits);
		QListWidgetItem* li = new QListWidgetItem(info);
		ui.listWidgetChosenAcc->addItem(li);
	}


	//Distribution Tab
	for (int i = 0; i < task->getTranslators().size(); i++)
	{
		QString info = "Account: ";
		info += QString::number(task->getTranslators()[i]);
		info += "\nEnglish Credits: ";
		info += QString::number(dataPtr->userVec[task->getTranslators()[i] - 1000]->engCredits);
		info += "  French Credits: ";
		info += QString::number(dataPtr->userVec[task->getTranslators()[i] - 1000]->fraCredits);
		QListWidgetItem* li;
		bool judge = false;
		for (int j = 0; j < dataPtr->userVec[task->getTranslators()[i] - 1000]->takenTasks.size(); j++)
		{
			if (dataPtr->taskVec[dataPtr->userVec[task->getTranslators()[i] - 1000]->takenTasks[j] - 1]->getParent() == task->rank)
			{
				judge = true;
			}
		}
		if (judge)
		{
			li = new QListWidgetItem(QIcon("Resources/pictures/task_distributed.png"), info);
		}
		else
		{
			li = new QListWidgetItem(info);
		}
		ui.listWidgetTranslators->addItem(li);
		ui.textBrowserOrigin->setText(QString::fromStdString(task->content));
	}

	//Communication Tab & Submission Tab
	for (int i = 0; i < task->getChildren().size(); i++)
	{
		QString info = "Rank: ";
		info += QString::number(task->getChildren()[i]);
		info += "    Account: ";
		info += QString::number(dataPtr->taskVec[task->getChildren()[i] - 1]->takenAccount);
		QListWidgetItem* li;
		if (dataPtr->taskVec[task->getChildren()[i] - 1]->state == 0 || dataPtr->taskVec[task->getChildren()[i] - 1]->state == 4)
		{
			li = new QListWidgetItem(QIcon("Resources/pictures/confirmed.png"), info);
		}
		else
		{
			li = new QListWidgetItem(info);
		}
		ui.listWidgetChildTasks->addItem(li);
		QListWidgetItem* li2 = new QListWidgetItem(*li);
		ui.listWidgetChildTasks_2->addItem(li2);
	}
	if (task->transSwitch)
	{
		ui.textBrowserTotalTranslation->setText(QString::fromStdString(task->transSubmit));
	}
	else
	{
		ui.textBrowserTotalTranslation->setText(QString::fromStdString(task->transTemp));
	}
}

void MyResTaskOper::newChildTask(int acc, string ori, int period, int pay)
{
	TransTask* childTask = new TransTask(dataPtr->taskVec.size() + 1, task->brief, dataPtr->nowAccountNum, task->transType, period, dataPtr, task->rank, ori, pay, 0, 0, string(), time(0));
	childTask->state = 1;
	task->addChild(childTask->rank);
	dataPtr->nowAccount->issue(childTask->rank);
	childTask->takenAccount = acc;
	dataPtr->userVec[acc - 1000]->take(childTask->rank);
	dataPtr->taskVec.push_back(childTask);
}


//别人执行、完成的任务
StaticTaskOper::StaticTaskOper(Task* tas, Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);

	dataPtr = data;
	task = tas;

	ui.labelIssAcc->setText(QString::number(task->issuingAccount));
	ui.labelTakenAcc->setText(QString::number(task->takenAccount));
	ui.labelRank->setText(QString::number(task->rank));
	ui.labelConPeriod->setText(QString::number(task->period));
	ui.labelTransType->setText(transTypeJudge());
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	if (task->type())
	{
		ui.labelTaskType->setText(QString("Translator Task"));
		time_t tmi = task->startTime;
		tm* timeS = new tm;
		localtime_s(timeS, &tmi);
		QString t = QString::number(timeS->tm_mday);
		t += "-";
		t += QString::number(timeS->tm_mon + 1);
		t += "-";
		t += QString::number(timeS->tm_year + 1900);
		ui.labelIssTime->setText(t);
	}
	else
	{
		ui.labelTaskType->setText(QString("Principal Task"));
		time_t tmi = task->issueTime;
		tm* timeS = new tm;
		localtime_s(timeS, &tmi);
		QString t = QString::number(timeS->tm_mday);
		t += "-";
		t += QString::number(timeS->tm_mon + 1);
		t += "-";
		t += QString::number(timeS->tm_year + 1900);
		ui.labelIssTime->setText(t);
	}
	if (task->state == 1)
	{
		ui.labelState->setText(QString("Conducting"));
	}
	else if(task->state == 0)
	{
		ui.labelState->setText(QString("Finished"));
	}
	else if (task->state == 4)
	{
		ui.labelState->setText(QString("Waiting Examing"));
	}
	else if (task->state == 5)
	{
		ui.labelState->setText(QString("Waiting Payment"));
	}
}

QString StaticTaskOper::transTypeJudge()
{
	switch (task->transType)
	{
	case 1: return QString("Chinese to English");
	case 2: return QString("Chinese to French");
	case 3: return QString("English to Chinese");
	case 4: return QString("English to French");
	case 5: return QString("French to Chinese");
	case 6: return QString("French to English");
	default: return QString();
	}
}


//新建任务窗口
NewTaskOper::NewTaskOper(Data* data, QWidget* parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	ui.lineEditPay->setValidator(new QRegExpValidator(QRegExp("^[0-9]*$")));
	dataPtr = data;
}

void NewTaskOper::cancelButtonClick()
{
	this->close();
}

int NewTaskOper::newResTask()
{
	int transType = ui.comboBoxTransType->currentIndex() + 1;
	int period = ui.spinBoxConPeriod->value();
	int appPeriod = ui.spinBoxRecPeriod->value();
	if (period < 1 || appPeriod < 1)
	{
		return 1;
	}
	int engReq = ui.spinBoxReqEngCre->value();
	int freReq = ui.spinBoxReqFreCre->value();
	int pay;
	if (ui.lineEditPay->text().isEmpty())
	{
		return 1;
	}
	else
	{
		pay = ui.lineEditPay->text().toInt();
	}
	if (pay > dataPtr->nowAccount->balance)
	{
		return 2;
	}
	if (ui.textBrowserBrief->toPlainText().isEmpty() || ui.textBrowserOrigin->toPlainText().isEmpty())
	{
		return 1;
	}
	else
	{
		string brief = ui.textBrowserBrief->toPlainText().toStdString();
		string origin = ui.textBrowserOrigin->toPlainText().toStdString();
		ResTask* task = new ResTask(dataPtr->taskVec.size() + 1, brief, dataPtr->nowAccountNum, transType, period, dataPtr, origin, pay, vector<int>(), appPeriod, time(0));
		dataPtr->taskVec.push_back(task);
		dataPtr->nowAccount->issue(task->rank);
		return 0;
	}
}

void NewTaskOper::okButtonClick()
{
	if (!newResTask())
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Done");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("New task issued"));
		mesBox->show();
		this->close();
	}
	else if (newResTask() == 1)
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You Must Fill All The Blanks!"));
		mesBox->show();
	}
	else if (newResTask() == 2)
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You Don't Have Enough Balance!"));
		mesBox->show();
	}
}


//我发布的任务操作窗口
IssRecTaskOper::IssRecTaskOper(Task* tas, Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);

	dataPtr = data;
	task = tas;

	loadInfo();
}

void IssRecTaskOper::cancelButtonClick()
{
	this->close();
}

void IssRecTaskOper::acceptButtonClick()
{
	task->state = 5;
	for (int i = 0; i < task->getChildren().size(); i++)
	{
		dataPtr->taskVec[task->getChildren()[i] - 1]->state = 0;
	}
	pay();
	QMessageBox* mesBox = new QMessageBox;
	mesBox->setWindowTitle("Done");
	mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
	mesBox->setText(QString("Translation Accepted!"));
	mesBox->show();
}

void IssRecTaskOper::refuseButtonClick()
{
	task->state = 1;
	QMessageBox* mesBox = new QMessageBox;
	mesBox->setWindowTitle("Done");
	mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
	mesBox->setText(QString("Translation Refused!"));
	mesBox->show();
}

void IssRecTaskOper::okButtonClick()
{
	if (ui.listWidgetAppliedAcc->currentItem())
	{
		choosePrincipal();
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Done");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("Principal Selected!"));
		mesBox->show();
		this->close();
	}
	else
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("You Haven't Chosen A Principal!"));
		mesBox->show();
	}
}

void IssRecTaskOper::loadInfo()
{
	ui.labelRank->setText(QString::number(task->rank));
	ui.labelConPeriod->setText(QString::number(task->period));
	ui.labelPayment->setText(QString::number(task->payment));
	ui.labelRecPeriod->setText(QString::number(task->applyPeriod));
	ui.labelTransType->setText(transTypeJudge());
	switch (task->state)
	{
	case 3:
	{
		ui.labelState->setText(QString("Recruiting translators"));
		int rest = task->startTime + 86400 * task->applyPeriod - time(0);
		rest /= 3600;
		ui.labelRemHours->setText(QString::number(rest) + QString(" Hours"));
	}break;
	case 2:
	{
		ui.labelState->setText(QString("Recruiting a principal"));
		int rest = task->issueTime + 86400 * task->applyPeriod - time(0);
		rest /= 3600;
		ui.labelRemHours->setText(QString::number(rest) + QString(" Hours"));
	}break;
	case 4:
	{
		ui.labelState->setText(QString("Waiting Examing"));
		int rest = task->startTime + 86400 * task->period - time(0);
		rest /= 3600;
		ui.labelRemHours->setText(QString::number(rest) + QString(" Hours"));
	}break;
	}
	for (int i = 0; i < task->waitingAccount.size(); i++)
	{
		QString info = QString("Account: ") + QString::number(task->waitingAccount[i]);
		info += QString("\nCertificates: ");
		info += QString::fromStdString(stringCombine(dataPtr->userVec[task->waitingAccount[i] - 1000]->certificationType, ";"));
		info += QString("\nEnglish Credits: ");
		info += QString::number(dataPtr->userVec[task->waitingAccount[i] - 1000]->engCredits);
		info += QString("     French Credits: ");
		info += QString::number(dataPtr->userVec[task->waitingAccount[i] - 1000]->fraCredits);
		QListWidgetItem* li = new QListWidgetItem(info);
		ui.listWidgetAppliedAcc->addItem(li);
	}
	if (task->state != 2)
	{
		ui.okButton->setEnabled(false);
	}
	ui.textBrowserOrigin->setText(QString::fromStdString(task->content));
	if (task->state == 4)
	{
		ui.textBrowserTranslation->setText(QString::fromStdString(task->transSubmit));
	}
}

void IssRecTaskOper::choosePrincipal()
{
	task->takenAccount = task->waitingAccount[ui.listWidgetAppliedAcc->currentRow()];
	task->waitingAccount.clear();
	task->state = 3;
	task->startTime = time(0);
}

void IssRecTaskOper::pay()
{
	int pay2Prin = task->payment;
	for (int i = 0; i < task->getChildren().size(); i++)
	{
		pay2Prin -= dataPtr->taskVec[task->getChildren()[i] - 1]->payment;
		dataPtr->userVec[dataPtr->taskVec[task->getChildren()[i] - 1]->takenAccount - 1000]->balance += dataPtr->taskVec[task->getChildren()[i] - 1]->payment;
	}
	dataPtr->userVec[task->takenAccount - 1000]->balance += pay2Prin;
	dataPtr->nowAccount->balance -= task->payment;
}

QString IssRecTaskOper::transTypeJudge()
{
	switch (task->transType)
	{
	case 1: return QString("Chinese to English");
	case 2: return QString("Chinese to French");
	case 3: return QString("English to Chinese");
	case 4: return QString("English to French");
	case 5: return QString("French to Chinese");
	case 6: return QString("French to English");
	default: return QString();
	}
}


//完成的任务
FiniTaskOper::FiniTaskOper(Task* tas, Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);

	dataPtr = data;
	task = tas;

	ui.labelRank->setText(QString::number(task->rank));
	ui.labelConPeriod->setText(QString::number(task->period));
	ui.labelTransType->setText(transTypeJudge());
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	ui.textBrowserOrigin->setText(QString::fromStdString(task->content));
	ui.textBrowserTranslation->setText(QString::fromStdString(task->transSubmit));
	ui.labelPayment->setText(QString::number(task->payment));
	if (task->type())
	{
		ui.labelTaskType->setText(QString("Translator Task"));
		time_t tmi = task->startTime;
		tm* timeS = new tm;
		localtime_s(timeS, &tmi);
		QString t = QString::number(timeS->tm_mday);
		t += "-";
		t += QString::number(timeS->tm_mon + 1);
		t += "-";
		t += QString::number(timeS->tm_year + 1900);
		ui.labelIssTime->setText(t);
	}
	else
	{
		ui.labelTaskType->setText(QString("Principal Task"));
		time_t tmi = task->issueTime;
		tm* timeS = new tm;
		localtime_s(timeS, &tmi);
		QString t = QString::number(timeS->tm_mday);
		t += "-";
		t += QString::number(timeS->tm_mon + 1);
		t += "-";
		t += QString::number(timeS->tm_year + 1900);
		ui.labelIssTime->setText(t);
	}
	if (task->state == 0)
	{
		ui.labelState->setText(QString("Finished"));
	}
	else if (task->state == 5)
	{
		ui.labelState->setText(QString("Waiting Payment"));
	}
	if (dataPtr->nowAccountNum == task->takenAccount)
	{
		ui.labelAccHead->setText("Issue Account");
		ui.labelAcc->setText(QString::number(task->issuingAccount));
	}
	else if (dataPtr->nowAccountNum == task->issuingAccount)
	{
		ui.labelAccHead->setText("Taken Account");
		ui.labelAcc->setText(QString::number(task->takenAccount));
	}
}

QString FiniTaskOper::transTypeJudge()
{
	switch (task->transType)
	{
	case 1: return QString("Chinese to English");
	case 2: return QString("Chinese to French");
	case 3: return QString("English to Chinese");
	case 4: return QString("English to French");
	case 5: return QString("French to Chinese");
	case 6: return QString("French to English");
	default: return QString();
	}
}


//消息盒子
MessageBox::MessageBox(Data* data, QWidget* parent)
{
	ui.setupUi(this);
	dataPtr = data;
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	loadInfo();
}

void MessageBox::loadInfo()
{
	ui.listWidgetUn->clear();
	ui.listWidgetHis->clear();
	for (int i = dataPtr->nowAccount->unreadMess.size() - 1; i > -1; i--)
	{
		QListWidgetItem* li = new QListWidgetItem(QString::fromStdString(dataPtr->nowAccount->unreadMess[i]));
		ui.listWidgetUn->addItem(li);
	}
	for (int i = dataPtr->nowAccount->historyMess.size() - 1; i > -1; i--)
	{
		QListWidgetItem* li = new QListWidgetItem(QString::fromStdString(dataPtr->nowAccount->historyMess[i]));
		ui.listWidgetHis->addItem(li);
	}
}

void MessageBox::readButtonClick()
{
	for (int i = 0; i < dataPtr->nowAccount->unreadMess.size(); i++)
	{
		dataPtr->nowAccount->historyMess.push_back(dataPtr->nowAccount->unreadMess[i]);
	}
	dataPtr->nowAccount->unreadMess.clear();
	loadInfo();
}