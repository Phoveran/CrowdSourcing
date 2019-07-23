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
}

User::~User(void)
{
}