#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : name("Unknown"), age(21), gender("Undefined")
{
	cout << "Person is initialized by default.\tBase class is initialized <Person>\n";
}

Person::Person(string nameIn, float ageIn, string genderIn) : name(nameIn), gender(genderIn), age(ageIn)
{
	cout << "Name: "<<name<<"\tAge: "<<age<<"\tGender: "<<gender<< "\nPerson is initialized by user.\n";

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
	cout << "Name: " << name << "\tAge: " << age << "\tGender: " << gender<<"\n";
}


