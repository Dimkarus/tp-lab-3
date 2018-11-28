#ifndef CLASS_CIRCLE_h
#define CLASS_CIRCLE_h
#pragma once

#define PI_CONST 3.1415 //Число ПИ
#include <cmath>

/*=========== [Описание класса Circle] ===========*/
class Circle
{
private:
	double radius;
	double ference;
	double area;

public:
	Circle();//Конструктор по умолчанию
	Circle(double radius);//Конструктор, принимающий значение радиуса

	/*=========== [МЕТОДЫ] ===========*/
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);

	const double getRadius() const;
	const double getFerence() const;
	const double getArea() const;
};

#endif