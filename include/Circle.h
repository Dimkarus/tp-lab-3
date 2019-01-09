#pragma once

#include<iostream>
#include <math.h>

using namespace std;

class Circle
{
private:
	double radius;
	double ference;
	double area;

public:
	Circle();
	Circle(double);
	void setRadius(double rad);
	void setFerence(double fer);
	void setArea(double ar);
	double getRadius();
	double getFerence();
	double getArea();
};
