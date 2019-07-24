#pragma once
#include <vector>
#include <string>
#include <regex>
#include "sqlite3.h"
#pragma comment(lib, "sqlite3.lib")
using namespace std;

class Task;
class ResTask;
class TransTask;
class User;
vector<string> split(const string& str, const string& pattern);

//全局数据
class Data
{
public:
	vector<User*> userVec;
	vector<Task*> taskVec;
	int nowAccountNum;//当前登陆账号
	User* nowAccount;//当前登陆账户
	Data();
	void save();
	void read();
private:
	static int readUserCallBack(void* ptr, int argc, char** argvs, char** colNames);
	static int readTaskCallBack(void* ptr, int argc, char** argvs, char** colNames);
	void dbUserInsert(User* user, sqlite3* db, char** errMsg);
	void dbTaskInsert(Task* task, sqlite3* db, char** errMsg);
}; 

//任务
class Task
{
public:
	Task(int r, string bri, int acc, int type, int per, Data* data, string con, int reqEngCre = 0, int reqFraCre = 0);
	Task(const Task& obj);
	~Task(void);
	Data* dataPtr;//全局数据指针
	int rank;//任务序号
	int issuingAccount;//发布该任务的账号
	int takenAccount;//领取该任务的账号
	vector<int> waitingAccount;//等待接取该任务的账号
	int state;//状态，2为招募中，1为执行中，0为已完成
	int transType;//翻译类型，1为中=》英，2为中=》法，3为英=》中，4为英=》法，5为法=》中，6为法=》英
	int period;//任务周期,单位为天
	int reqEngCredits;//接取任务需要的英语积分
	int reqFraCredits;//接取任务需要的法语积分
	int payment;//每千字报酬
	string brief;//简介
	string content;//原文
	string transTemp;//暂存翻译
	string transSubmit;//最终翻译
	virtual bool taken(int) = 0;
	virtual int type() = 0;
	virtual vector<int> getChildren() = 0;
	virtual int getParent() = 0;
};

class ResTask : public Task
{
public:
	ResTask(int r, string bri, int acc, int type, int per, Data* data, string con) :Task(r, bri, acc, type, per, data, con)
	{
		childrenTasks = vector<int>();
	}
	vector<int> getChildren();
	bool taken(int acc);
	int type();

private:
	vector<int> childrenTasks;//子任务序号
};

class TransTask : public Task
{
public:
	TransTask(int r, string bri, int acc, int type, int per, Data* data, int parent, string con) :Task(r, bri, acc, type, per, data, con)
	{
		parentTask = parent;
	};
	bool taken(int acc);
	int type();
	int getParent();

private:
	int parentTask;//父任务的序号
};

//用户
class User
{
public:
	User(int acc, string passwd, vector<string> cer, string tele);
	~User(void);
	int account;//账户名，五位数且首位为1~9
	int balance;//余额,以Ruby为单位，100Ruby=1RMB
	int level;//等级，1不可做负责人，2可做负责人
	int engCredits;//英语积分,每完成1英语翻译任务增加1；
	int fraCredits;//法语积分,每完成1法语翻译任务增加1；
	string password;//密码，4~12位数字或字母组合
	string telephone;//手机号码
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