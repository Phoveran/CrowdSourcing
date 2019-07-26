#include"data.h"
#include<algorithm>

Task::Task(int r, string bri, int acc, int type, int per, Data* data, string con, int pay)
{
	dataPtr = data;
	state = 2;
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

bool ResTask::applied(int acc)
{
	int i = acc - 1000;
	if (count(waitingAccount.begin(), waitingAccount.end(), acc));
	else if (dataPtr->userVec[i]->level == 2)
	{
		waitingAccount.push_back(i);
		return true;
	}
	return false;
}

int ResTask::type()
{
	return 0;
}



bool TransTask::applied(int acc)
{
	int i = acc - 1000;
	if (count(waitingAccount.begin(), waitingAccount.end(), acc));
	else if (dataPtr->userVec[i]->engCredits >= reqEngCredits && dataPtr->userVec[i]->fraCredits >= reqFraCredits)
	{
		waitingAccount.push_back(acc);
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
