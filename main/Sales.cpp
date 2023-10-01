#include "Sales.h"
#include <iostream>
Sales::Sales() : RevEmployee(), grossSales(0.0), commissionRate(0.0)
{
}


Sales::Sales(std::string n, int ID, double s, float GS, float CR) :
	RevEmployee(n, ID, salary)
{
	grossSales = GS;
	commissionRate = CR;
}

void Sales::setGrossSales(float GS)
{
	grossSales = GS;
}

void Sales::setCommissionRate(float CR)
{
	commissionRate = CR;
}

void Sales::print()
{
	RevEmployee::print();
	std::cout << "\t                              -Salesman Data-\n"
		<< "\tGross sale: " << grossSales 
		<< "\t\t\tCommission rate: " << commissionRate<<"\t\t\tTotal Salary: "<<getTotalSalary()<<"\n\n"
    <<breakLine();
}

float Sales::getTotalSalary() {
    return salary + (grossSales * commissionRate);
}
