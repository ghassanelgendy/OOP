#pragma once
#include <string>
class RevEmployee
{
protected:
	std::string name;
	int empID;
	float salary;
public:
	RevEmployee();
	RevEmployee(std::string name, int ID, double salary);
	virtual float getTotalSalary() = 0;
  virtual std::string breakLine();
	virtual void print();
};

