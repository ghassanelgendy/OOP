#pragma once
#include <string>
using namespace std;
class Distance
{
public:
	Distance();
	Distance(unsigned int i, float f);
	~Distance();
	void setInches(int i);
	void setFeet(float f);
	int getInches();
	float getFeet();
	Distance addDist(Distance d2);
	Distance operator +(Distance d2) {
		return addDist(d2);
	}
	void printDist();
private:
	int inches;
	float feet;
};

