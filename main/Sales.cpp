#include "Sales.h"
#include <iostream>
Sales::Sales() : RevEmployee(), grossSales(0.0), commissionRate(0.0)
{
}


Sales::Sales(std::string name, int ID, double salary, float GS, float CR) :
	RevEmployee(name, ID, salary)
{
	grossSales = GS;
	commissionRate = CR;
}

void Sales::setGrossSales(float grossSales)
{
	grossSales = grossSales;
}

void Sales::setCommissionRate(float commissionRate)
{
	commissionRate = commissionRate;
}

float Sales::getGrossSales()
{
	return grossSales;
}

float Sales::getCommissionRate()
{
	return commissionRate;
}

void Sales::print()
{
	RevEmployee::print();
	std::cout << "\t\t\t\t\t\tSalesman Data\n" 
		<< "\tGross sale: " << grossSales 
		<< "\t\t\Commission rate: " << commissionRate;
}
