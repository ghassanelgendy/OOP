#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:

	Shape() : color("black")
	{

	}
Shape(string c) : color(c)
	{

	}
	virtual float getArea() {
		cout << "Parent class get area";
	}
	virtual void draw() {
		cout << "Parent class draw" << color << " Color" << endl;
	}
	virtual void erase() {
		cout << "Parent class erase" << endl;
	}


private:
	string color;
};
class Circle
	:public Shape
{
public:
	Circle(float r, string c) : Shape(c) { radius = r; }
	float getArea() {
      return radius * radius * 3.14;
	}
private:
	float radius;
};
class Box : public Shape
{
public:
	Box(float s,string c): Shape(c) {sideLength = s;}
	~Box();
	float getArea() {
		return sideLength * sideLength;
	}
private:
	float sideLength;
};
class Rectangle : public Shape
{
public:
	Rectangle(float l, float w, string c) : Shape(c) { length = l; width = w; };
	float getArea() {
		return length * width;
	}

private:
	float length;
	float width;
};



int main() {
	Rectangle r(2.2, 1, "red");
	cout<<r.getArea();
}