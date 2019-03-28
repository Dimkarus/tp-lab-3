#include "Circle.h"


Circle::Circle() {};
Circle::Circle(double r)
{
	setRadius(r);
}

void Circle::setRadius(double Radius)
{
	radius = Radius;
	ference = 2 * pi * radius;
	area = pi * radius * radius;

}

void Circle::setArea(double Area)
{
	area = Area;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
}

void Circle::setFerence(double Ference)
{
	ference = Ference;
	radius = (ference) / (2 * pi);
	area = pi * radius * radius;
}

double Circle::getArea()
{
	return area;
}

double Circle::getFerence()
{
	return ference;
}

double Circle::getRadius()
{
	return radius;
}