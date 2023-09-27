#pragma once
#include <string>
using namespace std;
class Person
{
private:
	string name;
	float age;
	string gender;
public:
	Person();
	Person(string nameIn, float ageIn, string genderIn);
	void setName(string nameIn);
	void setAge(float ageIn);
	void setGender(string genderIn);
	string getName();
	float getAge();
	string getGender();
	void display();
};

