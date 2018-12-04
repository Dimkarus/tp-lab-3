#include <iostream>
#include "Circle.h"
#include <math.h>

constexpr auto pi = 3.14;
using namespace std;

	Circle::Circle(double r)
	{
		radius = r;
		ference = 2 * pi*r;
		area = pi * r*r;
	}

	void  Circle::Print()
	{
		cout << "Radius: " << radius << endl << "Ference: " << ference << endl;
		cout << "Area: " << area << endl;
	}

	void  Circle::setRadius(double r)
	{
		radius = r;
		ference = 2 * pi*r;
		area = pi * r*r;
		int n = 10 * area + 0.5;
		area = n / 10.0;
	}

	void  Circle::setFerence(double f)
	{
		ference = f;
		radius = f / (2 * pi);
		area = f*f/(4*pi);
	}

	void  Circle::setArea(double a)
	{
		area = a;
		radius = sqrt(a / pi);
		ference = 2 * pi*radius;
	}

	double Circle::getRadius()
	{
		return radius;
	}

	double  Circle::getFerence()
	{
		return ference;
	}

	double  Circle::getArea()
	{
		return area;
	}

