#pragma once
#include "RevEmployee.h"
#include <string>
class Engineer :
    public RevEmployee
{
private:
    std::string specialty;
    int experience;
    int overtimeHours;
    float overtimeHourRate;
public:
    Engineer();
    Engineer(std::string name, int ID, double salary, int EXP, std::string SP, int OTH, float OTHR);
    void setOvertimeHours(int OTH);
    void setOvertimeHourRate(float OTHR);
    void print();
}; 

