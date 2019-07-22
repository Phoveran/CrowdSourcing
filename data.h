#pragma once
#include <vector>
#include "user.h"
#include "task.h"

class Data
{
public:
	vector<User*> userVec;
	vector<Task*> taskVec;
	Data();
	void save();
}; 