#pragma once
// описание класса Circle

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

typedef double T;

class Circle {
private:
	T radius;
	T ference;
	T area;
public:
	Circle(T);
	void setRadius(T);
	void setFerence(T);
	void setArea(T);
	T getRadius();
	T getFerence();
	T getArea();
};

#endif