#include <QtWidgets/QApplication>
#include "MainWins.h"
#include "data.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Data* data = new Data;
	CrowdSourcing* w = new CrowdSourcing(data);
	w->setAttribute(Qt::WA_DeleteOnClose, true);
	w->show();
	return a.exec();
}

Data::Data()
{
	userVec = vector<User*>();
	taskVec = vector<Task*>();
}
