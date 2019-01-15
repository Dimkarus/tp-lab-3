#include "Circle.h"
const double pi = 3.14;
Circle::Circle(){}

Circle::Circle(double radius)
{
	this->setRadius(radius);
}

void Circle::setFerence(double ference)
{
	this->ference = ference;
	this->radius = ference / (pi * 2);
	this->area = radius * radius * pi;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
	this->ference = radius * pi * 2;
	this->area = radius * radius * pi;
}


void Circle::setArea(double area)
{
	this->radius = sqrt(area / pi);
	this->ference = radius * pi * 2;
	this->area = area;
}

double Circle::getRadius() const
{
	return this->radius;
}


double Circle::getFerence() const
{
	return this->ference;
}

double Circle::getArea() const
{
	return this->area;
}
