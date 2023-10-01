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
    virtual float getArea() = 0;
	virtual void draw() = 0;
	virtual void erase() = 0;
	string getColor() {
		return color;
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
	void draw() {
		cout << "A " << this->getColor() << " circle is being drew.\n";
	}
	void erase() {
		cout << "A " << this->getColor() << " circle is being erased.\n";
	}
	friend void display(Circle c);
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
	void draw() {
		cout << "A " << this->getColor() << " box is being drew.\n";
	}
	void erase() {
		cout << "A " << this->getColor() << " box is being erased.\n";

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
	void draw() {
		cout << "A " << this->getColor() << " rectangle is being drew.\n";
	}
	void erase() {
		cout << "A " << this->getColor() << " rectangle is being erased.\n";
	}
private:
	float length;
	float width;
};
void display(Circle c) {
	cout << c.radius;
}
int main(){
	Circle r2(3,"blue");
	display(r2);
}


