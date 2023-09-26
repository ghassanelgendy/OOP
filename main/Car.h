#pragma once
#include <string>
using namespace std;
class Car
{
private:
	string manufacturer;
	string color;
	int model;
	float milage;
public:
	Car(); //default constructor
	Car(string m, float mil, int mo, string col);
	string getManufacturer();
	string getColor();
	float getMilage();
	int getModel();
	void setManufacturer(string m);
	void setColor(string c);
	void setModel(int mo);
	void setMilage(float mil);
};

