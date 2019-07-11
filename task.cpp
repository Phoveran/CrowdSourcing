#include"task.h"

Task::Task(int r, int pay, string bri, int acc)
{
	state = 0;
	rank = r;
	payment = pay;
	brief = bri;
	issuingAccount = acc;
	takenAccount = 0;
	waitingAccount = vector<int>();
}

Task::Task(const Task& obj)
{
	state = obj.state;
	rank = obj.rank;
	payment = obj.payment;
	brief = obj.brief;
	issuingAccount = obj.issuingAccount;
	takenAccount = obj.takenAccount;
	waitingAccount = obj.waitingAccount;
}

Task::~Task(void)
{
}
