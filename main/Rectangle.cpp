#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle() :length(0.0), width(0.0)
{
	cout << "Initialization for Rectangle done\n";
}

Rectangle::Rectangle(float l, float w) :length(l), width(w)
{
	cout << "Initialization for Rectangle done with Length =>"<<length<<"\tWidth =>"<<width<<endl;

}

Rectangle::~Rectangle()
{
}
int numberOfRects = 0;
void Rectangle::setLength(float l)
{
	length = l;
}

void Rectangle::setWidth(float w)
{
	width = w;
}

float Rectangle::getLength()
{
	return length;
}

float Rectangle::getWidth()
{
	return width;
}

Rectangle Rectangle::mergeRect(Rectangle r2)
{
	Rectangle r3;
	r3.length =length + r2.length;
	r3.width = width + r2.width;
	return r3;
}

