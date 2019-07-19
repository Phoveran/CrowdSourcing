#include "TopUp.h"

TopUp::TopUp(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void TopUp::topUpClick()
{
	ui.noticeLabel->setText(ui.lineEdit->text() + " Ruby topped up!");
}

void TopUp::closeClick()
{
	this->close();
}