#include "TopUp.h"
#include <QString>

TopUp::TopUp(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void TopUp::topUpClick()
{
	QString str = ui.lineEdit->text();
	int num = str.toInt();
	if (num > 0 && num < 9999)
	{
		ui.noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\ncolor: rgb(0, 170, 0);"));
		ui.noticeLabel->setText(QString::number(num, 10) + " Ruby topped up!");
	}
	else
	{
		ui.noticeLabel->setStyleSheet(QString::fromUtf8("border-image: \\*url();\ncolor: rgb(255, 0, 0);"));
		ui.noticeLabel->setText("Amount not supported");
	}
}

void TopUp::closeClick()
{
	this->close();
}