#include"data.h"

Task::Task(int r, string bri, int acc, int type, int per, Data* data, int reqEngCre, int reqFraCre)
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
	reqEngCredits = reqEngCre;
	reqFraCredits = reqFraCre;
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
	reqEngCredits = obj.reqEngCredits;
	reqFraCredits = obj.reqFraCredits;
}

Task::~Task(void)
{
}

bool resTask::taken(int acc)
{
	int i = acc - 10000;
	if (dataPtr->userVec[i]->level == 2)
	{
		takenAccount = acc;
		waitingAccount.clear();
		state = 1;
		return true;
	}
	return false;
}

bool transTask::taken(int acc)
{
	int i = acc - 10000;
	if (dataPtr->userVec[i]->engCredits >= reqEngCredits && dataPtr->userVec[i]->fraCredits >= reqFraCredits)
	{
		takenAccount = acc;
		waitingAccount.clear();
		state = 1;
		return true;
	}
	return false;
}