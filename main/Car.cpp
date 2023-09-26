#include "Car.h"
#include <iostream>
using namespace std;
Car::Car() : manufacturer("Honda"), model(2027), color("Red"), milage(122.92)
{
    cout << "The car is "<<model<<" "<<color<<" "<<manufacturer <<" with milage="<<milage<< "\tinitialized by default\n";
}

string Car::getManufacturer()
{
    return manufacturer;
}

string Car::getColor()
{
    return color;
}

float Car::getMilage()
{
    return milage;
}

int Car::getModel()
{
    return model;
}

void Car::setManufacturer(string m)
{
    manufacturer = m;
}

void Car::setColor(string c)
{
    color = c;
}

void Car::setModel(int mo)
{
    model = mo;
}

void Car::setMilage(float mil)
{
    milage = mil;
}


