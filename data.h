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
	static int readUserCallBack(void* ptr, int argc, char** argvs, char** colNames);
	static int readTaskCallBack(void* ptr, int argc, char** argvs, char** colNames);
	void dbUserInsert(User* user, sqlite3* db, char** errMsg);
	void dbTaskInsert(Task* task, sqlite3* db, char** errMsg);
}; 

//����
class Task
{
public:
	Task(int r, string bri, int acc, int type, int per, Data* data, string con, int pay, int appPer, int iss, int sta = 0);
	~Task(void);
	Data* dataPtr;//ȫ������ָ��
	int rank;//�������
	int issuingAccount;//������������˺�
	int takenAccount;//��ȡ��������˺�
	vector<int> waitingAccount;//�ȴ���ȡ��������˺�
	int state;//״̬��2Ϊ��ļ�У�1Ϊִ���У�0Ϊ�����
	int transType;//�������ͣ�1Ϊ��=��Ӣ��2Ϊ��=������3ΪӢ=���У�4ΪӢ=������5Ϊ��=���У�6Ϊ��=��Ӣ
	int issueTime;//���񷢲�����
	int startTime;//����ʼ����
	int period;//��������,��λΪ��
	int applyPeriod;//�������ڣ���λ��
	int payment;//����
	string brief;//���
	string content;//ԭ��
	string transTemp;//�ݴ淭��
	string transSubmit;//���շ���
	virtual bool applied(int) = 0;
	virtual int type() = 0;
	virtual vector<int> getChildren();
	virtual int getParent();
	virtual int getReqEngCre();
	virtual int getReqFraCre();
};

class ResTask : public Task
{
public:
	ResTask(int r, string bri, int acc, int type, int per, Data* data, string con, int pay, vector<int> child, int appPer, int iss, int sta = 0) :Task(r, bri, acc, type, per, data, con, pay, appPer, iss, sta)
	{
		childrenTasks = child;
	}
	vector<int> getChildren();
	bool applied(int acc);
	int type();

private:
	vector<int> childrenTasks;//���������
};

class TransTask : public Task
{
public:
	TransTask(int r, string bri, int acc, int type, int per, Data* data, int parent, string con, int pay, int appPer, int iss, int sta = 0, int reqEngCre = 0, int reqFraCre = 0) :Task(r, bri, acc, type, per, data, con, pay, appPer, iss, sta)
	{
		parentTask = parent;
		reqEngCredits = reqEngCre;
		reqFraCredits = reqFraCre;
	};
	bool applied(int acc);
	int type();
	int getParent();
	int getReqEngCre();
	int getReqFraCre();

private:
	int reqEngCredits;//��ȡ������Ҫ��Ӣ�����
	int reqFraCredits;//��ȡ������Ҫ�ķ������
	int parentTask;//����������
};

//�û�
class User
{
public:
	User(int acc, string passwd, vector<string> cer, string tele, Data* data);
	~User(void);
	Data* dataPtr;//ȫ������ָ��
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

	void take(int taskNum);
	void issue(int taskNum);
	void setCredits();
	void finish(int taskNum);
};