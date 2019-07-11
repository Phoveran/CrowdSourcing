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
	float balance;//���
	int credits;//����
	void setAccount(int acc);
	void setPasswd(string pass);
	void setCertificationType(int type);

protected:
	int account;//�˻���
	string passwd;//����
	int certificationType;//����֤������
};

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