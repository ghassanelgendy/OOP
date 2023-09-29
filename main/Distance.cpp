#include "Distance.h"
#include <iostream>
using namespace std;
Distance::Distance() :inches(0), feet(0.0)
{
}

Distance::Distance(unsigned int i, float f):inches(i),feet(f)
{
}

Distance::~Distance()
{
}

void Distance::setInches(int i)
{
	inches = i;
}

void Distance::setFeet(float f)
{
	feet = f;
}

int Distance::getInches()
{
	return inches;
}

float Distance::getFeet()
{
	return feet;
}

Distance Distance::addDist(Distance d2)
{
	Distance d3;
	d3.inches = inches + d2.inches;
	d3, feet = feet + d2.feet;
	return d3;
}

void Distance::printDist()
{
	cout << "The distance is "<<inches<<" inches and "<<feet<<" feet\n";
}



