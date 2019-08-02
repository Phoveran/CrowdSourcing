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
	transSwitch = 0;
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

void Task::addChild(int n)
{
}

void Task::deleteTranslators(int at)
{
}

void Task::setAdvice(string adv)
{
}



vector<int> ResTask::getChildren()
{
	return childrenTasks;
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

void ResTask::addChild(int n)
{
	childrenTasks.push_back(n);
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

void TransTask::setAdvice(string adv)
{
	advice = adv;
}
