#include "sqlite3.h"
#include "data.h"
#include <vector>
#include <string>
#pragma comment(lib, "sqlite3.lib")
using namespace std;

void Data::save()
{
}

/*
void read()
{
}*/

/*int login(int acc, string passwd)
{
}*/

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