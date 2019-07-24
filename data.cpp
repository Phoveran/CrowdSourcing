#include "data.h"

vector<string> split(const string& str, const string& pattern)
{
	vector<string> res;
	if (str == "")
		return res;
	string strs = str + pattern;
	size_t pos = strs.find(pattern);

	while (pos != strs.npos)
	{
		string temp = strs.substr(0, pos);
		res.push_back(temp);
		strs = strs.substr(pos + 1, strs.size());
		pos = strs.find(pattern);
	}
	return res;
}

string stringCombine(vector<string> ori, const string& pattern = "")
{
	string res;
	for (int i = 0; i < ori.size(); i++)
	{
		res.append(ori[i]);
		if (i != ori.size() - 1 && pattern != "")
		{
			res.append(pattern);
		}
	}
	return res;
}

string intCombine2String(vector<int> ori, const string& pattern = "")
{
	string res;
	for (int i = 0; i < ori.size(); i++)
	{
		res.append(to_string(ori[i]));
		if (i != ori.size() - 1 && pattern != "")
		{
			res.append(pattern);
		}
	}
	return res;
}



Data::Data()
{
	userVec = vector<User*>();
	taskVec = vector<Task*>();
}


void Data::save()
{
	sqlite3* db;
	sqlite3_open("data.db", &db);
	char* zErrMsg = 0;
	char* sqlDrop = "DROP TABLE USER;"\
		"DROP TABLE TASK;";
	sqlite3_exec(db, sqlDrop, 0, 0, &zErrMsg);
	char* sqlCreate =
		//创建用户表
		"CREATE TABLE USER("\
		"ACCOUNT INT PRIMARY KEY NOT NULL,"\
		"BALANCE INT NOT NULL,"\
		"LEVEL INT NOT NULL,"\
		"ENGCREDITS INT NOT NULL,"\
		"FRACREDITS INT NOT NULL,"\
		"PASSWORD TEXT NOT NULL,"\
		"TELEPHONE TEXT NOT NULL,"\
		"CERTIFICATES TEXT,"\
		"iSSUEDTASKS TEXT,"\
		"TAKENTASKS TEXT);"\
		//创建任务表
		"CREATE TABLE TASK("\
		"RANK INT PRIMARY KEY NOT NULL,"\
		"TYPE INT NOT NULL,"\
		"ISSUINGACCOUNT INT NOT NULL,"\
		"TAKENACCOUNT INT,"\
		"WAITING ACCOUNT TEXT,"\
		"STATE INT NOT NULL,"\
		"TRANSTYPE INT NOT NULL,"\
		"PERIOD INT NOT NULL,"\
		"REQENGCRE INT NOT NULL,"\
		"REQFRACRE INT NOT NULL,"\
		"PAYMENT INT NOT NULL,"\
		"BRIEF TEXT NOT NULL,"\
		"CONTENT TEXT NOT NULL,"\
		"TRANSTEMP TEXT,"\
		"TRANSSUBMIT TEXT);";
	sqlite3_exec(db, sqlCreate, 0, 0, &zErrMsg);
	for (int i = 0; i < userVec.size(); i++)
	{
		dbUserInsert(userVec[i], db, &zErrMsg);
	}
	for (int i = 0; i < taskVec.size(); i++)
	{
		dbTaskInsert(taskVec[i], db, &zErrMsg);
	}
	sqlite3_close(db);
}

void Data::dbUserInsert(User* user, sqlite3* db, char** errMsg)
{
	vector<string> strs = vector<string>();
	strs.push_back(string("INSERT INTO USER VALUES("));
	strs.push_back(to_string(user->account) + string(", "));
	strs.push_back(to_string(user->balance) + string(", "));
	strs.push_back(to_string(user->level) + string(", "));
	strs.push_back(to_string(user->engCredits) + string(", "));
	strs.push_back(to_string(user->fraCredits) + string(", "));
	strs.push_back(user->password + string(", "));
	strs.push_back(user->telephone + string(", "));
	if (user->certificationType.empty())
	{
		strs.push_back(string("NULL, "));
	}
	else
	{
		strs.push_back(string("\"") + stringCombine(user->certificationType, ";") + string("\"") + string(", "));
	}
	if (user->issuedTasks.empty())
	{
		strs.push_back(string("NULL, "));
	}
	else
	{
		strs.push_back(string("\"") + intCombine2String(user->issuedTasks, ";") + string("\"") + string(", "));
	}
	if (user->takenTasks.empty())
	{
		strs.push_back(string("NULL)"));
	}
	else
	{
		strs.push_back(string("\"") + intCombine2String(user->takenTasks, ";") + string("\"") + string(")"));
	}
	string tempStr = stringCombine(strs);
	const char* str = tempStr.c_str();
	sqlite3_exec(db, str, 0, 0, errMsg);
}

void Data::dbTaskInsert(Task* task, sqlite3* db, char** errMsg)
{
	vector<string> strs = vector<string>();
	strs.push_back(string("INSERT INTO TASK VALUES("));
	strs.push_back(to_string(task->rank) + string(", "));
	strs.push_back(to_string(task->type()) + string(", "));
	strs.push_back(to_string(task->issuingAccount) + string(", "));
	strs.push_back(to_string(task->takenAccount) + string(", "));
	if (task->waitingAccount.empty())
	{
		strs.push_back(string("NULL, "));
	}
	else
	{
		strs.push_back(string("\"") + intCombine2String(task->waitingAccount) + string("\"") + string(", "));
	}
	strs.push_back(to_string(task->state) + string(", "));
	strs.push_back(to_string(task->transType) + string(", "));
	strs.push_back(to_string(task->period) + string(", "));
	strs.push_back(to_string(task->reqEngCredits) + string(", "));
	strs.push_back(to_string(task->reqFraCredits) + string(", "));
	strs.push_back(to_string(task->payment) + string(", "));
	strs.push_back(string("\"") + task->brief + string("\"") + string(", "));
	strs.push_back(string("\"") + task->content + string("\"") + string(", "));
	if (task->transTemp.empty())
	{
		strs.push_back(string("NULL, "));
	}
	else
	{
		strs.push_back(string("\"") + task->transTemp + string("\"") + string(", "));
	}
	if (task->transSubmit.empty())
	{
		strs.push_back(string("NULL)"));
	}
	else
	{
		strs.push_back(string("\"") + task->transSubmit + string("\"") + string(")"));
	}
	string tempStr = stringCombine(strs);
	const char* str = tempStr.c_str();
	sqlite3_exec(db, str, 0, 0, errMsg);
}


void Data::read()
{
	sqlite3* db;
	sqlite3_open("data.db", &db);
	char* zErrMsg = 0;
	char* sqlUser = "SELECT * FROM USER";
	sqlite3_exec(db, sqlUser, readUserCallBack, this, &zErrMsg);
	char* sqlTask = "SELECT * FROM TASK;";
	sqlite3_exec(db, sqlTask, readTaskCallBack, this, &zErrMsg);
	sqlite3_close(db);
}

int Data::readUserCallBack(void* ptr, int argc, char** argvs, char** colNames)
{
	Data* data = (Data*)ptr;
	User* user;
	vector<string> cer;
	if (!argvs[7])
	{
		cer = vector<string>();
	}
	else
	{
		cer = split(string(argvs[7]), ";");
	}
	user = new User(atoi(argvs[0]), string(argvs[5]), cer, argvs[6]);
	user->balance = atoi(argvs[1]);
	user->level = atoi(argvs[2]);
	user->engCredits = atoi(argvs[3]);
	user->fraCredits = atoi(argvs[4]);
	if (argvs[8])
	{
		vector<string> strs = split(string(argvs[8]), ";");
		for (int i = 0; i < strs.size(); i++)
		{
			user->issuedTasks.push_back(stoi(strs[i]));
		}
	}
	if (argvs[9])
	{
		vector<string> strs = split(string(argvs[9]), ";");
		for (int i = 0; i < strs.size(); i++)
		{
			user->takenTasks.push_back(stoi(strs[i]));
		}
	}
	data->userVec.push_back(user);
	return 0;
}

int Data::readTaskCallBack(void* ptr, int argc, char** argvs, char** colNames)
{
	Data* data = (Data*)ptr;
	Task* task;
	return 0;
}
