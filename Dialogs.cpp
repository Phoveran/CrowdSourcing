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
	int account = 10000 + dataPtr->userVec.size();
	string password = ui.pwLineEdit->text().toStdString();
	string telephone = ui.teleLineEdit->text().toStdString();
	vector<string> certifi = split(pLineEdit->text().toStdString(), string(";"));
	User* user = new User(account, password, certifi, telephone);
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
		ui.noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\ncolor: rgb(0, 170, 0);"));
		ui.noticeLabel->setText(QString::number(num, 10) + " Ruby topped up!");
	}
	else
	{
		ui.noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\ncolor: rgb(255, 0, 0);"));
		ui.noticeLabel->setText("Amount not supported!");
	}
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
	ui.teleLineEdit->setValidator(new QIntValidator);
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
	if (!regex_match(ui.teleLineEdit->text().toStdString(), regex("^[1](([3][0-9])|([4][5-9])|([5][0-3,5-9])|([6][5,6])|([7][0-8])|([8][0-9])|([9][1,8,9]))[0-9]{8}$")))
	{
		ui.noticeLabel->setText("Telephone not valid!");
	}
	else
	{
		this->close();
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