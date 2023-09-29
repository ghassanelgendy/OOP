#pragma once
class Rectangle
{
private:
	static int numberOfRects;
	float width;
	float length;
public:
	Rectangle();
	Rectangle(float l, float w);
	~Rectangle();
	void setLength(float l);
	void setWidth(float w);
	float getLength();
	float getWidth();
	Rectangle mergeRect(Rectangle r2);
	Rectangle operator +(Rectangle r2) {
		return mergeRect(r2);
	}
};

