#include "CrowdSourcing.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CrowdSourcing* w = new CrowdSourcing;
	w->show();
	return a.exec();
}
