#pragma once
#include<vector>
#include"schoolboy.h"
#include"student.h"

class learners
{
	vector<learner*> lptr;

public:
	void addLearner(learner* l)
	{
		lptr.push_back(l);
	}
	void info()
	{
		for (learner* l:lptr )
		{
			l->info();
		}
	}
	void getAllStudents()
	{
		for (learner* l : lptr)
		{
			if (typeid(*l)==typeid(student))
			{
				l->info();
			}
		}
	}
	void getAllSchoolboys()
	{
		for (learner* l : lptr)
		{
			if (typeid(*l) == typeid(schoolboy))
			{
				l->info();
			}
		}
	}
};