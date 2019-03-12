#include <iostream>
#include <math.h>

class Circle {
	double radius;
	double ference;
	double area;
public:
	Circle(double r);
	void setRadius(double r);
	void setFerence(double f);
	void setArea(double a);
	double getRadius();
	double getFerence();
	double getArea();
};