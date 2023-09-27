// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
#include "Student.h"
#include "Person.h"
int main()
{
	/*Car c1;
	Car c2(1992,"Blue", "BMW", 12.3);
	Person p1;
	Person p2("Ghassan", 21.3, "Male");
	*/
	Student s1;
	s1.display();
	Student s2("Kareem", 23, "Male", 2, 2.13, "CS");
	s2.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
