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
#include "RevEmployee.h"
#include "Sales.h"
#include "Engineer.h"


int main()
{
	Sales s("Ahmed",2022,1633.2,15.4,0.5);
	s.print();
	Engineer e;
	e.print();
}
