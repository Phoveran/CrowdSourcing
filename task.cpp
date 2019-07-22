#include"task.h"

Task::Task(int r, string bri, int acc)
{
	state = 0;
	rank = r;
	brief = bri;
	issuingAccount = acc;
	takenAccount = 0;
	waitingAccount = vector<int>();
}

Task::Task(const Task& obj)
{
	state = obj.state;
	rank = obj.rank;
	brief = obj.brief;
	issuingAccount = obj.issuingAccount;
	takenAccount = obj.takenAccount;
	waitingAccount = obj.waitingAccount;
}

Task::~Task(void)
{
}
