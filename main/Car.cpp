#include "Car.h"
#include <iostream>
using namespace std;
Car::Car() : manufacturer("Honda"), model(2027), color("Red"), milage(122.92)
{
    cout << "The car is "<<model<<" "<<color<<" "<<manufacturer <<" with milage="<<milage<< "\tinitialized by default\n";
}

Car::Car(int mo , string col, string m, float mil) : model(mo), color(col), manufacturer(m), milage(mil)
{
    cout<< "The car is " << model << " " << color << " " << manufacturer << " with milage=" << milage << "\tinitialized by user\n";
}

Car::~Car()
{
    cout << "Car is destroyed\n";
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


