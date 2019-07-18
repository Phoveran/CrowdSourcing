#include "TopUp.h"

TopUp::TopUp(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void TopUp::topUpClick()
{
	ui.noticeLabel->setText(ui.lineEdit->text() + "CNY top up done!");
}

void TopUp::closeClick()
{
	this->close();
}