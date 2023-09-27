#include "Student.h"
#include <iostream>
Student::Student():level(1),GPA(0.0),depart("undefined")
{
	cout << "derived class is initialized by paramaters <Student>\n";
}

Student::Student(string nameIn, float ageIn, string genderIn, int levelIn, float GPAIn, string departIn)
	:Person(nameIn, ageIn, genderIn) {
	level = levelIn;
	GPA = GPAIn;
	depart = departIn;
}

void Student::setLevel(unsigned short levelIn)
{
	level = levelIn;
}

void Student::setGPA(float GPAIn)
{
	GPA = GPAIn;
}

void Student::setDepart(string departIn)
{
	depart = departIn;

}

unsigned short Student::getLevel()
{
	return level;
}

float Student::getGPA()
{
	return GPA;
}

string Student::getDepart()
{
	return depart;
}

void Student::display()
{
	Person::display();
	cout << "Depart =" << depart << "Level =" << level << "GPA =" << GPA << "\n";
}
