#include <QtWidgets/QApplication>
#include "MainWins.h"
#include "data.h"
using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Data* data = new Data;
	data->read();
	CrowdSourcing* w = new CrowdSourcing(data);
	w->show();
	while (a.exec() == 0)
	{
		data->save();
		return 0;
	}
}
