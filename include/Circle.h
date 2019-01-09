#pragma once

#include<iostream>
#include <math.h>

class Circle
{
private:
	double radius;
	double ference;
	double area;

public:
	Circle(double);
	Circle();
	void setRadius(double rad);
	void setFerence(double fer);
	void setArea(double ar);
	double getRadius();
	double getFerence();
	double getArea();
};
