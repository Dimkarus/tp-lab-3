#pragma once
#include <iostream>
using namespace std;
class Circle
{
public:
	Circle()
	{
		radius = 1;
		area = pi*radius*radius;
		ference = 2 * pi*radius;
	}
	Circle(double radiu)
	{
		radius = radiu;
		area = pi*radius*radius;
		ference = 2 * pi*radius;
	}
private:
	double radius, ference, area;
public:
	double pi = 3.14;
	void setRadius(double radius);
	void setFerence(double radius);
	void setArea(double radius);
	double getFerence();
	double getArea();
	double getRadius();
	
};