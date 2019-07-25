#include "data.h"

User::User(int acc, string passwd, vector<string> cer, string tele)
{
	account = acc;
	password = passwd;
	level = 1;
	balance = 0;
	engCredits = 0;
	fraCredits = 0;
	certificationType = cer;
	telephone = tele;
	issuedTasks = vector<int>();
	takenTasks = vector<int>();
}

User::~User(void)
{
}

void User::take(int taskNum)
{
	takenTasks.push_back(taskNum);
}

void User::issue(int taskNum)
{
	issuedTasks.push_back(taskNum);
}
