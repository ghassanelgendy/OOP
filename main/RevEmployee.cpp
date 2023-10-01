#include "RevEmployee.h"
#include <iostream>
RevEmployee::RevEmployee() :name("unkown"), empID(0000), salary(0.0)
{
}
RevEmployee::RevEmployee(std::string name, int ID, double salary) :name(name),empID(ID),salary(salary)
{
}
double RevEmployee::GetTotalSalary()
{
    return salary;
}

void RevEmployee::print()
{
    std::cout << "\t\t\t\t\t\tEmployee Data\n" << "\tName: " << name << "\t\t\tEmployee ID: " << empID << "\t\t\tSalary: " << salary<<"\n\n";
}
