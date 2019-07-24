#include <QtWidgets/QApplication>
#include "MainWins.h"
#include "data.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Data* data = new Data;
	data->read();
	CrowdSourcing* w = new CrowdSourcing(data);
	w->setAttribute(Qt::WA_DeleteOnClose, true);
	w->show();
	while (a.exec() == 0)
	{
		data->save();
		return 0;
	}
}