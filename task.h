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
	int issuingAccount;//������������˺�
	int takenAccount;//��ȡ��������˺�
	vector<int> waitingAccount;//�ȴ���ȡ��������˺�
	int state;//״̬��2Ϊ��ļ�У�1Ϊִ���У�0Ϊ�����
	int rank;//�������
	int type;//�������ͣ�1Ϊ��=��Ӣ��2Ϊ��=������3ΪӢ=���У�4ΪӢ=������5Ϊ��=���У�6Ϊ��=��Ӣ
//	void setPayment();
//	void setBrief();

protected:
	int payment;//����
	string brief;//���
};

class resTask : public Task
{
protected:
};

class transTask : public Task
{
protected:
	string oriContent;//����
	string translation;//����
};