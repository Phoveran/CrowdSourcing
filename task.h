#pragma once
#include<string>
#include<vector>
using namespace std;

class Task
{
public:
	Task(int r, int pay, string bri, int acc = 0);
	Task(const Task& obj);
	~Task(void);
	int issuingAccount;//发布该任务的账号
	int takenAccount;//领取该任务的账号
	vector<int> waitingAccount;//等待接取该任务的账号
	int state;//状态，2为招募中，1为执行中，0为已完成
	int rank;//任务序号
//	void setPayment();
//	void setBrief();

protected:
	int payment;//报酬
	string brief;//简介
};

class resTask : public Task
{
protected:
};

class transTask : public Task
{
protected:
	string content;//内容
};