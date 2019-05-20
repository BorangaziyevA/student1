#pragma once
#include"learner.h"

class schoolboy:public learner
{
public:
	schoolboy(string name, int age)
		:learner(name, age)
	{}
};