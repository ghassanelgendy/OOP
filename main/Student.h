#pragma once
#include "Person.h"
class Student :
    public Person
{    
private:
    unsigned short level;
    float GPA;
    string depart;
public:
    Student();
    Student(string nameIn, float ageIn, string genderIn, int levelIn, float GPAIn, string departIn);
    void setLevel(unsigned short levelIn);
    void setGPA(float gpaIn);
    void setDepart(string departIn);
    unsigned short getLevel();
    float getGPA();
    string getDepart();
    void display();
};

