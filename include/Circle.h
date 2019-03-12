#ifndef _CIRCLE_H
#define _CIRCLE_H_
#pragma once


class Circle
{
private:
	double radius;
	double ference;
	double area;
public:
	Circle();
	Circle(double);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};
#endif
