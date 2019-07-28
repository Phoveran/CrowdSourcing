#include <qmessagebox.h>
#include <QString>
#include <regex>
#include <qvalidator.h>
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
	}
	if (!ui.teleLineEdit->text().isEmpty())
	{
		string tele = ui.teleLineEdit->text().toStdString();
		dataPtr->nowAccount->telephone = tele;
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
	ui.labelTaskPer->setText(QString::number(task->period) + QString(" Days"));
	ui.labelTransType->setText(transTypeJudge());
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	if (task->type())
	{
		ui.labelTaskType->setText(QString("Translation task"));
		ui.labelReqCredits->setText(QString("Eng: ") + QString::number(task->getReqEngCre()) + QString("    Fre:") + QString::number(task->getReqFraCre()));
	}
	else
	{
		ui.labelTaskType->setText(QString("Arrangement task"));
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
		this->close();
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
	task->transTemp = ui.textBrowserTrans->toPlainText().toStdString();
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
	if (task->transSubmit.empty())
	{
		ui.textBrowserTrans->setText(QString::fromStdString(task->transTemp));
	}
	else
	{
		ui.textBrowserTrans->setText(QString::fromStdString(task->transSubmit));
		ui.textBrowserTrans->setReadOnly(true);
	}
	ui.labelIssAcc->setText(QString::number(task->issuingAccount));
	ui.labelPayment->setText(QString::number(task->payment) + QString(" Ruby"));
	ui.labelRank->setText(QString::number(task->rank));
	ui.labelTaskPer->setText(QString::number(task->period) + QString(" Day"));
	ui.labelTransType->setText(transTypeJudge());
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	if (task->type())
	{
		ui.labelTaskType->setText(QString("Translation task"));
		ui.labelReqCredits->setText(QString("Eng: ") + QString::number(task->getReqEngCre()) + QString("    Fre:") + QString::number(task->getReqFraCre()));
	}
	else
	{
		ui.labelTaskType->setText(QString("Arrangement task"));
	}
}

void MyTransTaskOper::submitButtonClick()
{

	task->transSubmit = ui.textBrowserTrans->toPlainText().toStdString();
	this->close();
}


//我的负责任务界面
MyResTaskOper::MyResTaskOper(Task* tas, Data* data, QWidget* parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	ui.newEngReqEdit->setValidator(new QIntValidator);
	ui.newFreReqEdit->setValidator(new QIntValidator);
	ui.newPayEdit->setValidator(new QIntValidator);
	ui.newPeriodEdit->setValidator(new QIntValidator);

	dataPtr = data;
	task = tas;

	loadInfo();
}

void MyResTaskOper::saveButtonClick()
{
	task->transTemp = ui.textBrowserTrans->toPlainText().toStdString();
	loadInfo();
}

void MyResTaskOper::newChildButtonClick()
{
	if (ui.newPeriodEdit->text().isEmpty() || ui.newEngReqEdit->text().isEmpty() || ui.newFreReqEdit->text().isEmpty() || ui.newPayEdit->text().isEmpty() || ui.textBrowserNewChild->toPlainText().isEmpty())
	{
		QMessageBox* mesBox = new QMessageBox;
		mesBox->setWindowTitle("Wrong");
		mesBox->setAttribute(Qt::WA_DeleteOnClose, true);
		mesBox->setText(QString("Please fill all blanks!"));
		mesBox->show();
	}
	/*else
	{
		int period = ui.newPeriodEdit->text().toInt();
		int engReq = ui.newEngReqEdit->text().toInt();
		int freReq = ui.newFreReqEdit->text().toInt();
		int pay = ui.newPayEdit->text().toInt();
		string content = ui.textBrowserNewChild->toPlainText().toStdString();
		TransTask* newTask = new TransTask(dataPtr->taskVec.size() + 1, task->brief, dataPtr->nowAccountNum, task->transType, period, dataPtr, task->rank, content, pay, engReq, freReq);
		dataPtr->taskVec.push_back(newTask);
	}*/
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
	ui.textBrowserOrigin->setText(QString::fromStdString(task->content));
	ui.textBrowserOrigin_2->setText(QString::fromStdString(task->content));
	ui.textBrowserTrans->setText(QString::fromStdString(task->transTemp));
	ui.labelIssAcc->setText(QString::number(task->issuingAccount));
	ui.labelPayment->setText(QString::number(task->payment) + QString(" Ruby"));
	ui.labelRank->setText(QString::number(task->rank));
	ui.labelTaskPer->setText(QString::number(task->period) + QString(" Day"));
	ui.labelTransType->setText(transTypeJudge());
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	if (task->type())
	{
		ui.labelTaskType->setText(QString("Translation task"));
		ui.labelReqCredits->setText(QString("Eng: ") + QString::number(task->getReqEngCre()) + QString("    Fre:") + QString::number(task->getReqFraCre()));
	}
	else
	{
		ui.labelTaskType->setText(QString("Arrangement task"));
	}
}

void MyResTaskOper::submitButtonClick()
{
	task->transSubmit = ui.textBrowserTrans->toPlainText().toStdString();
	task->state = 0;
	this->close();
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
	ui.labelTaskPer->setText(QString::number(task->period) + QString(" Days"));
	ui.labelTransType->setText(transTypeJudge());
	ui.textBrowserBrief->setText(QString::fromStdString(task->brief));
	if (task->type())
	{
		ui.labelTaskType->setText(QString("Translation task"));
	}
	else
	{
		ui.labelTaskType->setText(QString("Arrangement task"));
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