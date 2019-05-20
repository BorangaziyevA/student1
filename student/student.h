#pragma once
#include"learner.h"

class student:public learner
{
public:
	student(string name,int age)
		:learner(name,age)
	{}

};