#include "Engineer.h"
#include <iostream>
Engineer::Engineer() : RevEmployee(), specialty("none"), experience(0), overtimeHours(0), overtimeHourRate(1)
{
}

Engineer::Engineer(std::string name, int ID, double salary,int EXP,std::string SP, int OTH, float OTHR) :
	RevEmployee(name, ID, salary)
{
	experience = EXP;
	specialty = SP;
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
	std::cout << "\t\t\t\t\t\tEngineer Data\n" <<
		"\tSpecialty: " << specialty << "\t\t\Experience : " 
		<< experience << "\t\t\tOvertime Hours: " << overtimeHours 
		<< "\t\t\tOvertime Hours Rate: " << overtimeHourRate;
}
