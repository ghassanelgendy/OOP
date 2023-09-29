#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : name("Unknown"), age(21), gender("Undefined")
{
}

Person::Person(string nameIn, float ageIn, string genderIn) : name(nameIn), gender(genderIn), age(ageIn)
{

}

void Person::setName(string nameIn)
{
	name = nameIn;
}

void Person::setAge(float ageIn)
{
	age = ageIn;
}

void Person::setGender(string genderIn)
{
	gender = genderIn;
}

string Person::getName()
{
	return name;
}

float Person::getAge()
{
	return age;
}

string Person::getGender()
{
	return gender;
}

void Person::display()
{
	cout << "Name: " << name << "\tAge: " << age << "\t\tGender: " << gender<<"\n";
}


