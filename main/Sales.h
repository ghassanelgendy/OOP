#pragma once
#include "RevEmployee.h"
class Sales :
    public RevEmployee
{
private:
    float grossSales;
    float commissionRate;
public:
    Sales();
    Sales(std::string name,int ID, float salary, float GS, float CR);
    void setGrossSales(float grossSales);
    float getTotalSalary() override;
    void setCommissionRate(float commissionRate);
    void print() override;
};

