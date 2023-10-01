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
    Sales(std::string name,int ID, double salary, float GS, float CR);
    void setGrossSales(float grossSales);
    void setCommissionRate(float commissionRate);
    float getGrossSales();
    float getCommissionRate();
    void print();
};

