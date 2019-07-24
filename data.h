#pragma once
#include <vector>
#include <string>
#include <regex>
#include "sqlite3.h"
#pragma comment(lib, "sqlite3.lib")
using namespace std;

class Task;
class resTask;
class transTask;
class User;
vector<string> split(const string& str, const string& pattern);

//ȫ������
class Data
{
public:
	vector<User*> userVec;
	vector<Task*> taskVec;
	int nowAccountNum;//��ǰ��½�˺�
	User* nowAccount;//��ǰ��½�˻�
	Data();
	void save();
	void read();
private:
	static int readUserCallBack(void* p, int argc, char** argvs, char** colNames);
	static int readTaskCallBack(void* p, int argc, char** argvs, char** colNames);
	void dbUserInsert(User* user, sqlite3* db, char** errMsg);
	void dbTaskInsert(Task* task, sqlite3* db, char** errMsg);
}; 

//����
class Task
{
public:
	Task(int r, string bri, int acc, int type, int per, Data* data, int reqEngCre = 0, int reqFraCre = 0);
	Task(const Task& obj);
	~Task(void);
	Data* dataPtr;//ȫ������ָ��
	int issuingAccount;//������������˺�
	int takenAccount;//��ȡ��������˺�
	vector<int> waitingAccount;//�ȴ���ȡ��������˺�
	int state;//״̬��2Ϊ��ļ�У�1Ϊִ���У�0Ϊ�����
	int rank;//�������
	int transType;//�������ͣ�1Ϊ��=��Ӣ��2Ϊ��=������3ΪӢ=���У�4ΪӢ=������5Ϊ��=���У�6Ϊ��=��Ӣ
	string brief;//���
	int period;//��������,��λΪ��
	int reqEngCredits;//��ȡ������Ҫ��Ӣ�����
	int reqFraCredits;//��ȡ������Ҫ�ķ������
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
	int payment;//����
	string content;//����
	vector<int> childrenTasks;//���������
	bool taken(int acc);
};

class transTask : public Task
{
public:
	string origin;//ԭ��
	string transTemp;//�ݴ淭��
	string transSubmit;//���շ���
	int payment;//ÿǧ�ֱ���
	int parentTask;//����������
	bool taken(int acc);
};

//�û�
class User
{
public:
	User(int acc, string passwd, vector<string> cer, string tele);
	~User(void);
	int account;//�˻�������λ������λΪ1~9
	int balance;//���,��RubyΪ��λ��100Ruby=1RMB
	int level;//�ȼ���1�����������ˣ�2����������
	int engCredits;//Ӣ�����,ÿ���1Ӣ�﷭����������1��
	int fraCredits;//�������,ÿ���1���﷭����������1��
	string password;//���룬4~12λ���ֻ���ĸ���
	string telephone;//�ֻ�����
	vector<string> certificationType;//����֤������
	vector<int> issuedTasks;//������������
	vector<int> takenTasks;//��ȡ��������
};

/*
class VipMember : public User//�����Ȩ�޵��û�
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
	vector<int> issuedTask;//�������������
	vector<int> responsibleTask;//������������
	vector<int>	translateTask;//������������
	vector<int>	finishedIssuedTask;//����ɵķ����������
	vector<int> finishedResponsibleTask;//����ɵĸ����������
	vector<int> finishedTranslateTask;//����ɵķ����������
};

class normalMember : public User//��ͨȨ���û�
{
public:
	normalMember(int acc, string passwd) :User(acc, passwd)
	{
		issuedTask = vector<int>();
		translateTask = vector<int>();
		finishedIssuedTask = vector<int>();
		finishedTranslateTask = vector<int>();
	}
	vector<int> issuedTask;//�������������
	vector<int>	translateTask;//������������
	vector<int>	finishedIssuedTask;//����ɵķ����������
	vector<int> finishedTranslateTask;//����ɵķ����������
};
*/