#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Circle
{
private:
	double radius, ference, area;
	double pi = 3.14;
public:
	Circle();
	Circle(double r);

	void setRadius(double Radius);
	void setFerence(double Ference);
	void setArea(double Area);

	double getRadius();
	double getFerence();
	double getArea();
};