#include "Calculator.h"
#include <iostream>

Calculator::Calculator()
{
	cout << "Calculator is initialized!";
}

Calculator::~Calculator()
{
	cout << "Bye bye ya coach";
}

float Calculator::add(float x, float y)
{
	return x+y;
}

int Calculator::add(int x, int y)
{
	return x+y;
}

int Calculator::add(int x, int y, int z)
{
	return x+y+z;
}

int Calculator::add(string s1, string s2)
{
	return s1+" " + s2);
}
