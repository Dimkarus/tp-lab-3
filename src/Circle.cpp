#include "../include/Circle.h"

/*=========== [Конструктор по умолчанию] ===========*/
Circle::Circle()
{
	this->setRadius(1);//По умолчанию наш радиус = 1
}
/*=========== [Конструктор с параметром] ===========*/
Circle::Circle(double radius)//Конструктор
{
	this->setRadius(radius);
}
/*=========== [Метод: Установка радиуса] ===========*/
void Circle::setRadius(double radius)
{
	this->radius = radius;
	this->ference = 2.0 * PI_CONST * radius;
	this->area = PI_CONST * radius * radius;
}
/*=========== [Метод: Установка длины окружности] ===========*/
void Circle::setFerence(double ference)
{
	this->radius = ference / (2.0 * PI_CONST);
	this->ference = ference;
	this->area = PI_CONST * radius * radius;
}
/*=========== [Метод: Установка площади круга] ===========*/
void Circle::setArea(double area)
{
	this->radius = sqrt(area / (PI_CONST));
	this->ference = 2.0 * PI_CONST * (this->radius);
	this->area = area;
}
/*=========== [Метод: Получение радиуса] ===========*/
const double Circle::getRadius() const
{
	return this->radius;
}
/*=========== [Метод: Получение длины окружности] ===========*/
const double Circle::getFerence() const
{
	return this->ference;
}
/*=========== [Метод: Получение площади круга] ===========*/
const double Circle::getArea() const
{
	return this->area;
}