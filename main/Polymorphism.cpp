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
			return 0.1;
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
int main(){
    Shape s("red");
    Rectangle r2(22,2,"red");
    Shape* shapePtr = &r2;
    cout<<shapePtr->getArea()<<endl;
    Box b1(3,"blue");
    shapePtr = &b1;
    cout<<shapePtr->getArea();
}


