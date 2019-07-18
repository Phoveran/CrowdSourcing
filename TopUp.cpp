#include "TopUp.h"

TopUp::TopUp(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void TopUp::topUpClick()
{
	ui.noticeLabel->setText("Top up done!");
}

void TopUp::closeClick()
{
	this->close();
}