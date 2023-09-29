#pragma once
#include <string>
using namespace std;
class Calculator
{	
public:
	Calculator();
	~Calculator();
	float add(float x, float y);
	int add(int x, int y);
	int add(int x, int y, int z);
	string add(string s1, string s2);
};

