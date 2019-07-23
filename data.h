#pragma once
#include <vector>
#include <string>
#include <regex>
using namespace std;

class Task;
class resTask;
class transTask;
class User;

//全局数据
class Data
{
public:
	vector<User*> userVec;
	vector<Task*> taskVec;
	Data();
	void save();
}; 

//任务
class Task
{
public:
	Task(int r, string bri, int acc, int type, int per, Data* data, int reqCre);
	Task(const Task& obj);
	~Task(void);
	Data* dataPtr;//全局数据指针
	int issuingAccount;//发布该任务的账号
	int takenAccount;//领取该任务的账号
	vector<int> waitingAccount;//等待接取该任务的账号
	int state;//状态，2为招募中，1为执行中，0为已完成
	int rank;//任务序号
	int transType;//翻译类型，1为中=》英，2为中=》法，3为英=》中，4为英=》法，5为法=》中，6为法=》英
	string brief;//简介
	int period;//任务周期,单位为天
	int reqCredits;//接取任务需要的积分
	virtual bool taken(int) = 0;
};

class resTask : public Task
{
public:
	resTask(int r, string bri, int acc, int type, int per, Data* data, int reqCre, int pay, string con) :Task(r, bri, acc, type, per, data, reqCre)
	{
		payment = pay;
		content = con;
		childrenTasks = vector<int>();
	}
	int payment;//报酬
	string content;//内容
	vector<int> childrenTasks;//子任务序号
	bool taken(int acc);
};

class transTask : public Task
{
public:
	string origin;//原文
	string transTemp;//暂存翻译
	string transSubmit;//最终翻译
	int payment;//每千字报酬
	int parentTask;//父任务的序号
	bool taken(int acc);
};

//用户
class User
{
public:
	User(int acc, string passwd);
	~User(void);
	int level;//等级，1不可做负责人，2可做负责人
	int account;//账户名，五位数且首位为1~9
	int balance;//余额,以Ruby为单位，100Ruby=1RMB
	int credits;//积分,每完成1翻译任务增加1；增至10时level变为2，可接负责任务
	string password;//密码，4~12位数字或字母组合
	vector<string> certificationType;//资质证明种类
	vector<int> issuedTasks;//发布的任务编号
	vector<int> takenTasks;//接取的任务编号
};

/*
class VipMember : public User//有审查权限的用户
{
public:
	VipMember(int acc, string passwd) :User(acc, passwd)
	{
		issuedTask = vector<int>();
		responsibleTask = vector<int>();
		translateTask = vector<int>();
		finishedIssuedTask = vector<int>();
		finishedResponsibleTask = vector<int>();
		finishedTranslateTask = vector<int>();
	}
	vector<int> issuedTask;//发布的任务序号
	vector<int> responsibleTask;//负责的任务序号
	vector<int>	translateTask;//翻译的任务序号
	vector<int>	finishedIssuedTask;//已完成的发布任务序号
	vector<int> finishedResponsibleTask;//已完成的负责任务序号
	vector<int> finishedTranslateTask;//已完成的翻译任务序号
};

class normalMember : public User//普通权限用户
{
public:
	normalMember(int acc, string passwd) :User(acc, passwd)
	{
		issuedTask = vector<int>();
		translateTask = vector<int>();
		finishedIssuedTask = vector<int>();
		finishedTranslateTask = vector<int>();
	}
	vector<int> issuedTask;//发布的任务序号
	vector<int>	translateTask;//翻译的任务序号
	vector<int>	finishedIssuedTask;//已完成的发布任务序号
	vector<int> finishedTranslateTask;//已完成的翻译任务序号
};
*/