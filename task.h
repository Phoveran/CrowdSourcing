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
	int issuingAccount;//������������˺�
	int takenAccount;//��ȡ��������˺�
	vector<int> waitingAccount;//�ȴ���ȡ��������˺�
	int state;//״̬��2Ϊ��ļ�У�1Ϊִ���У�0Ϊ�����
	int rank;//�������
	int transType;//�������ͣ�1Ϊ��=��Ӣ��2Ϊ��=������3ΪӢ=���У�4ΪӢ=������5Ϊ��=���У�6Ϊ��=��Ӣ
//	void setPayment();
//	void setBrief();

protected:
	string brief;//���
};

class resTask : public Task
{
protected:
	int payment;//����
};

class transTask : public Task
{
protected:
	string oriContent;//����
	string translation;//����
	int payment;//ÿǧ�ֱ���
};