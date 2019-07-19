#include "CrowdSourcing.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CrowdSourcing* w = new CrowdSourcing;
	w->setAttribute(Qt::WA_DeleteOnClose, true);
	w->show();
	return a.exec();
}
