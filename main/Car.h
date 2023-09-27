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
	Car(int mo, string col, string m, float mil);
	~Car();
	string getManufacturer();
	string getColor();
	float getMilage();
	int getModel();
	void setManufacturer(string m);
	void setColor(string c);
	void setModel(int mo);
	void setMilage(float mil);
};

