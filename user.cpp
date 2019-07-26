#include "data.h"

User::User(int acc, string passwd, vector<string> cer, string tele, Data* data)
{
	dataPtr = data;
	account = acc;
	password = passwd;
	level = 1;
	balance = 0;
	certificationType = cer;
	telephone = tele;
	issuedTasks = vector<int>();
	takenTasks = vector<int>();
	setCredits();
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

void User::setCredits()
{
	engCredits = 0;
	fraCredits = 0;
	for (int i = 0; i < certificationType.size(); i++)
	{
		if (certificationType[i] == "TEM8" || certificationType[i] == "IELTS7.5" || certificationType[i] == "TOFEL102")
		{
			engCredits += 10;
		}
		else if (certificationType[i] == "IELTS7" || certificationType[i] == "TOFEL95")
		{
			engCredits += 5;
		}
		else if (certificationType[i] == "IELTS8" || certificationType[i] == "TOFEL110")
		{
			engCredits += 15;
		}
		else if (certificationType[i] == "TEF699" || certificationType[i] == "TCF500")
		{
			fraCredits += 10;
		}
		else if (certificationType[i] == "TEF834" || certificationType[i] == "TCF600")
		{
			fraCredits += 15;
		}
	}
	for (int i = 0; i < takenTasks.size(); i++)
	{
		if (!dataPtr->taskVec[takenTasks[i] - 1]->state)
		{
			switch (dataPtr->taskVec[takenTasks[i] - 1]->transType)
			{
			case 1:engCredits += 1; break;
			case 2:fraCredits += 1; break;
			case 3:engCredits += 1; break;
			case 4:fraCredits += 1; engCredits += 1; break;
			case 5:fraCredits += 1; break;
			case 6:fraCredits += 1; engCredits += 1; break;
			default:
				break;
			}
		}
	}
	if (engCredits >= 15 && fraCredits >= 15)
	{
		level = 2;
	}
}

void User::finish(int taskNum)
{
	dataPtr->taskVec[taskNum - 1]->state = 0;
	setCredits();
}