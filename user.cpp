#include"user.h"

User::User(int acc, string passwd)
{
	setAccount(acc);
	setPasswd(passwd);
	balance = 0;
	credits = 0;
}

User::~User(void)
{
}

void User::setAccount(int acc)
{
	if (acc / 10000 < 10 && acc / 10000 > 0)
		account = acc;
	//else
		//error
}

void User::setPasswd(string pass)
{
	if (regex_match(pass, regex("[\\w]*")))
		passwd = pass;
	//else
		//error
}

void User::setCertificationType(int type)
{
	if (type > 0 && type < 10)
		certificationType = type;
	//else
		//error
}