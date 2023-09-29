#pragma once
#include "Student.h"
class PostGradStudent :
    public Student
{
private:
    string researchInterest;
public:
    PostGradStudent();
    PostGradStudent(string nameIn, float ageIn, string genderIn, int levelIn, float GPAIn, string departIn, string researchArea);
    void setResearchInterest(string area);
    string getResearchInterest();
    void display();

};

