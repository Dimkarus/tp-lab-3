#ifndef CIRCLE_H
#define CIRCLE_H
#define PI 3.14
#include <cmath>
class Circle
{
private:
	double Radius, Ference, Area;
public:
	Circle(double new_Radius = 0);
	void setRadius(double new_Radius);
	void setFerence(double new_Ference);
	void setArea(double new_Area);
	double getRadius();
	double getFerence();
	double getArea();
};
#endif