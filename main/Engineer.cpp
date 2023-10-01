#include "Engineer.h"
#include <iostream>
Engineer::Engineer() : RevEmployee(), specialty("none"), experience(0), overtimeHours(0), overtimeHourRate(1)
{
}

Engineer::Engineer(std::string name, int ID, double salary,std::string SP,int EXP, float OTH, float OTHR) :
	RevEmployee(name, ID, salary)
{
    specialty = SP;
    experience = EXP;
	  overtimeHours = OTH;
	  overtimeHourRate = OTHR;
}

void Engineer::setOvertimeHours(int OTH)
{
	overtimeHours = OTH;
}

void Engineer::setOvertimeHourRate(float OTHR)
{
	overtimeHourRate = OTHR;
}
void Engineer::print() {
	RevEmployee::print();
	std::cout << "\t                              -Engineer Data-\n" <<
		"\tSpecialty: " << specialty << "\t\t\tExperience : "
		<< experience << "\t\t\tOvertime Hours: " << overtimeHours 
		<< "\t\t\tOvertime Hours Rate: " << overtimeHourRate<<"\t\t\tTotal Salary: "<<getTotalSalary()<<"\n\n"<<breakLine();


}

float Engineer::getTotalSalary() {
    return salary + overtimeHours * overtimeHourRate;
}


