#ifndef CIRCLE_H
#define CIRCLE_H

#define PI 3.14
#include <cmath>

class Circle{
private:
	double Radius;
	double Ference;
	double Area;
public:
	Circle(double data_Radius = 0);
	void setRadius(double data_Radius);
	void setFerence(double data_Ference);
	void setArea(double data_Area);
	double getRadius() { return Radius; }
	double getFerence() { return Ference; }
	double getArea() { return Area; }
};

#endif 