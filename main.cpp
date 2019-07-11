#include "CrowdSourcing.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CrowdSourcing w;
	w.show();
	return a.exec();
}
