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
	Circle(double);
	void setRadius(double rad);
	void setFerence(double fer);
	void setArea(double ar);
	const double getRadius() const;
	const double getFerence() const;
	const double getArea() const;
};