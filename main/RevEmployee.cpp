#include "RevEmployee.h"
#include <iostream>
RevEmployee::RevEmployee() :name("unkown"), empID(0000), salary(0.0)
{
}
RevEmployee::RevEmployee(std::string name, int ID, double salary) :name(name),empID(ID),salary(salary)
{
}
void RevEmployee::print()
{
    std::cout << "\t                              -Employee Data-\n" << "\tName: " << name << "\t\t\tEmployee ID: " << empID << "\t\t\tSalary: " << salary<<"\n\n";
}

std::string RevEmployee::breakLine() {
    return "\t\t\t\t\t\t=====================================\n";


}
