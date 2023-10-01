#pragma once
#include <string>
class RevEmployee
{
private:
	std::string name;
	int empID;
	double salary;
public:
	RevEmployee();
	RevEmployee(std::string name, int ID, double salary);
	double GetTotalSalary();
	void print();
};

