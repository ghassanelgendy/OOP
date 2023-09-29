#include "TeachingAssistant.h"
#include "postGradStudent.h"
#include "Employee.h"
#include <iostream>
#include <string>

TeachingAssistant::TeachingAssistant() :PostGradStudent(), Employee()  {
}
TeachingAssistant::TeachingAssistant(string name, float age, string gender, string depart, string researchArea, int level, float GPA, string job, float salary)
:Employee(name, age, gender, job, salary), PostGradStudent(name,age,gender,level,GPA,depart,researchArea) {

}

void TeachingAssistant::display() {
    PostGradStudent::display();
    cout << "Job: TA" << "\t\tSalary: " << getSalary()<<endl;

}