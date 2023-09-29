#pragma once
#include "Person.h"
class Employee :public  Person
{
private:
	string job;
	float salary;
public:
	Employee();
	Employee(string n, float a, string g, string j, float s);
	void setJob(string j);
	void setSalary(float s);
	string getJob();
	float getSalary();
	void display();
};

