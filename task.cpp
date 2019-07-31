#include"data.h"
#include<algorithm>

Task::Task(int r, string bri, int acc, int type, int per, Data* data, string con, int pay, int appPer, int iss, int sta)
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
	applyPeriod = appPer;
	issueTime = iss;
	startTime = sta;
}

Task::~Task(void)
{
}

bool Task::applied(int acc)
{
	return false;
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

void Task::setReqEngCre(int n)
{
}

void Task::setReqFraCre(int n)
{
}

vector<int> Task::getTranslators()
{
	return vector<int>();
}

string Task::getAdvice()
{
	return string();
}

void Task::addTranslators(int n)
{
}

void Task::deleteTranslators(int at)
{
}



vector<int> ResTask::getChildren()
{
	return childrenTasks;
}

bool ResTask::applied(int acc)
{
	int i = acc - 1000;
	if (count(waitingAccount.begin(), waitingAccount.end(), acc));
	else if (state == 2)
	{
		if (dataPtr->userVec[i]->level == 2)
		{
			waitingAccount.push_back(acc);
			return true;
		}
	}
	else if (state == 3)
	{
		if (dataPtr->userVec[i]->engCredits >= reqEngCredits && dataPtr->userVec[i]->fraCredits >= reqFraCredits)
		{
			waitingAccount.push_back(acc);
			return true;
		}
	}
	return false;
}

int ResTask::type()
{
	return 0;
}

int ResTask::getReqEngCre()
{
	return reqEngCredits;
}

int ResTask::getReqFraCre()
{
	return reqFraCredits;
}

void ResTask::setReqEngCre(int n)
{
	reqEngCredits = n;
}

void ResTask::setReqFraCre(int n)
{
	reqFraCredits = n;
}

void ResTask::addTranslators(int n)
{
	translators.push_back(n);
}

void ResTask::deleteTranslators(int at)
{
	translators.erase(translators.begin() + at);
}

vector<int> ResTask::getTranslators()
{
	return translators;
}




int TransTask::type()
{
	return 1;
}

int TransTask::getParent()
{
	return parentTask;
}

string TransTask::getAdvice()
{
	return advice;
}
