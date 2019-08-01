#pragma once
#pragma comment(lib, "sqlite3.lib")
#include <vector>
#include <string>
#include <regex>
#include "sqlite3.h"
#include <ctime>

using namespace std;

class Task;
class ResTask;
class TransTask;
class User;
vector<string> split(const string& str, const string& pattern);
string stringCombine(vector<string> ori, const string& pattern = "");
string intCombine2String(vector<int> ori, const string& pattern = "");

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
	Task(int r, string bri, int acc, int type, int per, Data* data, string con, int pay, int appPer, int iss, int sta = 0);
	~Task(void);
	Data* dataPtr;//全局数据指针
	int rank;//任务序号
	int issuingAccount;//发布该任务的账号
	int takenAccount;//领取该任务的账号
	vector<int> waitingAccount;//等待接取该任务的账号
	int state;//状态，5为等待支付，4为等待检验，3为招募译者中，2为招募负责人中，1为翻译中，0为已完成
	int transType;//翻译类型，1为中=》英，2为中=》法，3为英=》中，4为英=》法，5为法=》中，6为法=》英
	int issueTime;//任务发布日期
	int startTime;//任务开始日期
	int period;//任务周期,单位为天
	int applyPeriod;//报名周期，单位天
	int payment;//报酬
	int transSwitch;//0显示暂存内容，1显示提交内容
	string brief;//简介
	string content;//原文
	string transTemp;//暂存翻译
	string transSubmit;//最终翻译
	virtual bool applied(int acc);
	virtual int type() = 0;
	virtual vector<int> getChildren();
	virtual int getParent();
	virtual int getReqEngCre();
	virtual int getReqFraCre();
	virtual void setReqEngCre(int n);
	virtual void setReqFraCre(int n);
	virtual vector<int> getTranslators();
	virtual string getAdvice();
	virtual void addTranslators(int n);
	virtual void addChild(int n);
	virtual void deleteTranslators(int at);
	virtual void setAdvice(string adv);
};

class ResTask : public Task
{
public:
	ResTask(int r, string bri, int acc, int type, int per, Data* data, string con, int pay, vector<int> child, int appPer, int iss, int sta = 0, vector<int> translat = vector<int>(), int reqEngCre = 0, int reqFraCre = 0) :Task(r, bri, acc, type, per, data, con, pay, appPer, iss, sta)
	{
		childrenTasks = child;
		translators = translat;
		reqEngCredits = reqEngCre;
		reqFraCredits = reqFraCre;
	}
	vector<int> getChildren();
	bool applied(int acc);
	int type();
	vector<int> getTranslators();
	int getReqEngCre();
	int getReqFraCre();
	void setReqEngCre(int n);
	void setReqFraCre(int n);
	void addTranslators(int n);
	void deleteTranslators(int at);
	void addChild(int n);

private:
	vector<int> childrenTasks;//子任务序号
	vector<int> translators;//译者账号
	int reqEngCredits;//接取任务需要的英语积分
	int reqFraCredits;//接取任务需要的法语积分
};

class TransTask : public Task
{
public:
	TransTask(int r, string bri, int acc, int type, int per, Data* data, int parent, string con, int pay, int appPer, int iss, string adv, int sta = 0) :Task(r, bri, acc, type, per, data, con, pay, appPer, iss, sta)
	{
		parentTask = parent;
		advice = adv;
	};
	int type();
	int getParent();
	string getAdvice();
	void setAdvice(string adv);

private:
	int parentTask;//父任务的序号
	string advice;//审核意见
};

//用户
class User
{
public:
	User(int acc, string passwd, vector<string> cer, string tele, Data* data);
	~User(void);
	Data* dataPtr;//全局数据指针
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

	void take(int taskNum);
	void issue(int taskNum);
	void setCredits();
	void finish(int taskNum);
};