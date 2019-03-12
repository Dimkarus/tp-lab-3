#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

const double pi = 3.14;

Circle::Circle(double rad)
{
	radius = rad;
	ference = 2 * pi*rad;
	area = pi * rad*rad;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getFerence()
{
	return ference;
}

double Circle::getArea()
{
	return area;
}

void Circle::setRadius(double rad)
{
	radius = rad;
	ference = 2 * pi*rad;
	area = pi * rad*rad;
}

void Circle::setFerence(double fer)
{
	ference = fer;
	radius = fer / (2 * pi);
	area = pi * radius*radius;
}

void Circle::setArea(double ar)
{
	area = ar;
	radius = sqrt(ar / pi);
	ference = 2 * pi*radius;
}