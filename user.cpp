#include "data.h"

User::User(int acc, string passwd)
{
	account = acc;
	password = passwd;
	balance = 0;
	credits = 0;
}

User::~User(void)
{
}