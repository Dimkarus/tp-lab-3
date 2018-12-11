#include "Circle.h"

Circle::Circle(double new_Radius)
{
	setRadius(new_Radius);
}
void Circle::setRadius(double new_Radius)
{
	Radius = new_Radius;
	Ference = PI * 2 * Radius;
	Area = PI * Radius * Radius;
}
void Circle::setFerence(double new_Ference)
{
	Ference = new_Ference;
	Radius = Ference / (2 * PI);
	Area = PI * Radius * Radius;
}
void Circle::setArea(double new_Area)
{
	Area = new_Area;
	Radius = sqrt(Area / PI);
	Ference = PI * 2 * Radius;
}
double Circle::getRadius()
{return Radius;}
double Circle::getFerence() 
{return Ference; }
double Circle::getArea() 
{return Area; }