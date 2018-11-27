#include <iostream>
#include "Circle.h"
#include <math.h>

void Circle::setRadius(double radiu)
{
	double pi = 3.14;
	radius = radiu;
	area = pi*radius*radius;
    ference = 2 * pi*radius;
}
void Circle::setFerence(double ferenc)
{
	double pi = 3.14;
	ference = ferenc;
	radius = ference / (2 * pi);
	area = pi *radius*radius;
}
void Circle::setArea(double are)
{
	double pi = 3.14;
	area = are;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
}
double Circle::getFerence()
{
	return ference;
	//std::cout << "Ference:" << Circle::ference << endl;
}
double Circle::getArea()
{
	return area;
	//std::cout << "Area:" << Circle::ference << endl;
}

double Circle::getRadius()
{
	return radius;
	//std::cout << "Radius:" << Circle::radius << endl;
}