#include "Circle.h"

void Circle::setRadius(double rad)
{
	radius = rad;
	ference = 2*3.1415*rad;
	area = 3.1415*rad*rad;
}
void Circle::setFerence(double fer)
{
	ference = fer;
	radius = fer / (2 * 3.1415);
	area = 3.1415*radius*radius;
}
void Circle::setArea(double ar)
{
	area = ar;
	radius = sqrt(ar / (3.1415));
	ference = 2*3.1415*radius;
}
const double Circle::getRadius() const
{
	return radius;
}
const double Circle::getFerence() const
{
	return ference;
}
const double Circle::getArea() const
{
	return area;
}

Circle::Circle(double radius)
{
	setRadius(radius);
}
Circle::Circle() :radius(0.0)
{
	setRadius(0.0);
}
