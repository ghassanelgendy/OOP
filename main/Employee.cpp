#include "Employee.h"
#include <iostream>
Employee::Employee() : Person(), job("Unemployed"), salary(0.0)
{
}

Employee::Employee(string n, float a, string g, string j, float s) :Person(n, a, g)
{
	job = j;
	salary = s;
}

void Employee::setJob(string j)
{
	job = j;
}

void Employee::setSalary(float s)
{
	salary = s;
}

string Employee::getJob()
{
	return job;
}

float Employee::getSalary()
{
	return salary;
}
void Employee::display()
{
	Person::display();
	cout << "Job: "<<job<<"\tSalary: "<<salary<<endl;
}

