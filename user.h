#pragma once
#include<string>
#include<regex>
#include<vector>
using namespace std;

class User
{
public:
	User(int acc, string passwd);
	~User(void);
	float balance;//余额
	int credits;//积分
	void setAccount(int acc);
	void setPasswd(string pass);
	void setCertificationType(int type);

protected:
	int account;//账户名
	string passwd;//密码
	int certificationType;//资质证明种类
};

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