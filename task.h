#pragma once
#include<string>
#include<vector>
using namespace std;

class Task
{
public:
	Task(int r, string bri, int acc = 0);
	Task(const Task& obj);
	~Task(void);
	int issuingAccount;//发布该任务的账号
	int takenAccount;//领取该任务的账号
	vector<int> waitingAccount;//等待接取该任务的账号
	int state;//状态，2为招募中，1为执行中，0为已完成
	int rank;//任务序号
	int transType;//翻译类型，1为中=》英，2为中=》法，3为英=》中，4为英=》法，5为法=》中，6为法=》英
//	void setPayment();
//	void setBrief();

protected:
	string brief;//简介
};

class resTask : public Task
{
protected:
	int payment;//报酬
};

class transTask : public Task
{
protected:
	string oriContent;//内容
	string translation;//翻译
	int payment;//每千字报酬
};