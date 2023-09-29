#include <iostream>
#include <string>
#include "Car.h"
#include "Student.h"
#include "Person.h"
#include "Rectangle.h"
#include "Distance.h"
#include "PostGradStudent.h"
#include "Employee.h"
#include "TeachingAssistant.h"

int main()
{
	TeachingAssistant TA1("Ghassan", 23, "Male", "CS", "NASA", 4, 2.69, "TA", 2300);
	TA1.display();
	TA1.setResearchInterest("Data Science");
	TA1.setSalary(2400);
	TA1.display();


}
