#pragma once

#include<iostream>
#include <cmath>

using namespace std;

class Circle
{
private:
	double radius;
	double ference;
	double area;

public:
	Circle();
	Circle(double rad);
	void setRadius(double rad);
	void setFerence(double fer);
	void setArea(double ar);
	double getRadius();
	double getFerence();
	double getArea();
};
