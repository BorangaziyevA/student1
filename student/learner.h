#pragma once
#include<iostream>
#include<string>
using namespace std;

class learner abstract
{
	string name;
	int age;
public:
	learner(string name, int age)
		:name(name), age(age)
	{}

	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	int getAge()const { return age; }
	string getName()const { return name;}
	virtual void info() const 
	{
		cout << name << " " << age << endl;
	}
};