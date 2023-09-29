#include "PostGradStudent.h"
#include "Student.h"
#include <iostream>

PostGradStudent::PostGradStudent()
{
}

PostGradStudent::PostGradStudent(string nameIn, float ageIn, string genderIn, int levelIn, float GPAIn, string departIn, string researchArea)
	:Student(nameIn, ageIn, genderIn, levelIn, GPAIn, departIn){
	researchInterest = researchArea;

}

void PostGradStudent::setResearchInterest(string area)
{
	researchInterest = area;
}

string PostGradStudent::getResearchInterest()
{
	return researchInterest;
}

void PostGradStudent::display()
{
Student::display();
	cout << "Area of research: "<<researchInterest<<endl;
}
