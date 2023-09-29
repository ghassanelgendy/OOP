#pragma once
#include "TeachingAssistant.h"
#include "PostGradStudent.h"
#include "Employee.h"
#include <iostream>
class TeachingAssistant :
    public PostGradStudent, public Employee 
{
public:
    TeachingAssistant(string name, float age, string gender, string depart, string researchArea, int level, float GPA, string job, float salary);
    TeachingAssistant();
    void display();
};

