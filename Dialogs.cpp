#include <qmessagebox.h>
#include <QString>
#include <regex>
#include <qvalidator.h>
#include "Dialogs.h"
using namespace std;

//���������
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

//ע�����
Register::Register(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	bSelected = false;
	strSelectedText = QString();

	//���ô�������
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	//����Validator
	ui.teleLineEdit->setValidator(new QRegExpValidator(QRegExp("^[0-9]{11}$")));
	ui.pwLineEdit->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z0-9]*$")));
	ui.pwAgainLineEdit->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z0-9]*$")));
	//���ö�ѡ������
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
	User* user = new User(account, password, certifi, telephone);
	dataPtr->userVec.push_back(user);
}

//��ֵ����
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
		ui.noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\ncolor: rgb(0, 170, 0);"));
		submitTopUp();
		ui.noticeLabel->setText(QString::number(num, 10) + " Ruby topped up!");
	}
	else
	{
		ui.noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\ncolor: rgb(255, 0, 0);"));
		ui.noticeLabel->setText("Amount not supported!");
	}
}

void TopUp::submitTopUp()
{
	dataPtr->nowAccount->balance += ui.lineEdit->text().toInt();
}


//������Ϣ����
UpdateInfo::UpdateInfo(Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	dataPtr = data;
	bSelected = false;
	strSelectedText = QString();

//���ô�������
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
//����Validator
	ui.teleLineEdit->setValidator(new QRegExpValidator(QRegExp("^[0-9]{11}$")));
//���ö�ѡ������
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
	}
	if (!ui.teleLineEdit->text().isEmpty())
	{
		string tele = ui.teleLineEdit->text().toStdString();
		dataPtr->nowAccount->telephone = tele;
	}
}


//�鿴���˷�������ļ���������
RecTaskOper::RecTaskOper(Task* tas, Data* data, QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose, true);
	this->setWindowModality(Qt::ApplicationModal);
	dataPtr = data;
	task = tas;
	ui.labelIssAcc->setText(QString::number(task->issuingAccount));
	ui.labelPayment->setText(QString::number(task->payment) + QString(" Ruby/1000 words"));
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
