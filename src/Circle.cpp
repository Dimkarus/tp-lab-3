#include "Circle.h"

Circle::Circle() 
{
}

Circle::Circle(double radius) 
{
	this->setRadius(radius);
}
void Circle::setRadius(double radius) 
{
	this->radius = radius;
	this->ference = radius * 3.14 * 2;
	this->area = radius * radius * 3.14;
}
void Circle::setFerence(double ference) 
{
	this->ference = ference;
	this->radius = ference / (3.14 * 2);
	this->area = radius * radius * 3.14;
}
void Circle::setArea(double area) 
{
	this->radius = sqrt(area / 3.14);
	this->ference = radius * 3.14 * 2;
	this->area = area;
}

const double Circle::getRadius() const 
{
	return this->radius;
}
const double Circle::getFerence() const 
{
	return this->ference;
}
const double Circle::getArea() const 
{
	return this->area;
}
