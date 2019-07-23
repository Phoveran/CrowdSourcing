#include"data.h"

Task::Task(int r, string bri, int acc, int type, int per, Data* data)
{
	dataPtr = data;
	state = 0;
	rank = r;
	brief = bri;
	issuingAccount = acc;
	takenAccount = 0;
	waitingAccount = vector<int>();
	transType = type;
	period = per;
}

Task::Task(const Task& obj)
{
	dataPtr = obj.dataPtr;
	state = obj.state;
	rank = obj.rank;
	brief = obj.brief;
	issuingAccount = obj.issuingAccount;
	takenAccount = obj.takenAccount;
	waitingAccount = obj.waitingAccount;
	transType = obj.transType;
	period = obj.period;
}

Task::~Task(void)
{
}

bool resTask::taken(int acc)
{
	int i;
	for (i = 0; i < dataPtr->userVec.size(); i++)
	{
		if (dataPtr->userVec[i]->account == acc)
		{
			if (dataPtr->userVec[i]->level == 2)
			{
				takenAccount = acc;
				waitingAccount.clear();
				state = 1;
				return true;
			}
		}
	}
	return false;
}