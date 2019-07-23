#pragma once
#include <vector>
#include <string>
#include <regex>
using namespace std;

class Task;
class resTask;
class transTask;
class User;

//ȫ������
class Data
{
public:
	vector<User*> userVec;
	vector<Task*> taskVec;
	Data();
	void save();
}; 

//����
class Task
{
public:
	Task(int r, string bri, int acc, int type, int per, Data* data);
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
	virtual bool taken(int) = 0;
};

class resTask : public Task
{
public:
	resTask(int r, string bri, int acc, int type, int per, Data* data, int pay, string con) :Task(r, bri, acc, type, per, data)
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
	string oriContent;//����
	string translation;//����
	int payment;//ÿǧ�ֱ���
	int parentTask;//����������
	bool taken(int acc);
};

//�û�
class User
{
public:
	User(int acc, string passwd);
	~User(void);
	int level;//�ȼ���1�����������ˣ�2����������
	int account;//�˻�������λ������λΪ1~9
	int balance;//���,��RubyΪ��λ��100Ruby=1RMB
	int credits;//����,ÿ���1������������1������10�Զ�תΪVIP���ɽӸ�������
	string password;//���룬4~12λ���ֻ���ĸ���
	string certificationType;//����֤������
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