#include"data.h"

Task::Task(int r, string bri, int acc, int type, int per, Data* data, string con, int pay)
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
	content = con;
	transTemp = string();
	transSubmit = string();
	payment = pay;
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
	content = obj.content;
}

Task::~Task(void)
{
}

vector<int> Task::getChildren()
{
	return vector<int>();
}

int Task::getParent()
{
	return 0;
}

int Task::getReqEngCre()
{
	return 0;
}

int Task::getReqFraCre()
{
	return 0;
}



vector<int> ResTask::getChildren()
{
	return childrenTasks;
}

bool ResTask::taken(int acc)
{
	int i = acc - 1000;
	if (dataPtr->userVec[i]->level == 2)
	{
		takenAccount = acc;
		waitingAccount.clear();
		state = 1;
		return true;
	}
	return false;
}

int ResTask::type()
{
	return 0;
}



bool TransTask::taken(int acc)
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

int TransTask::type()
{
	return 1;
}

int TransTask::getParent()
{
	return parentTask;
}

int TransTask::getReqEngCre()
{
	return reqEngCredits;
}

int TransTask::getReqFraCre()
{
	return reqFraCredits;
}
