#pragma once
#include "RevEmployee.h"
#include <string>
class Engineer :
    public RevEmployee
{
private:
    std::string specialty;
    int experience;
    float overtimeHours;
    float overtimeHourRate;
public:
    Engineer();
    Engineer(std::string name, int ID, double salary,std::string SP,int EXP, float OTH, float OTHR);
    void setOvertimeHours(int OTH);
    void setOvertimeHourRate(float OTHR);
    float getTotalSalary() override;
    void print() override;

};

