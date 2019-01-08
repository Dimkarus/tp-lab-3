#include "../include/Circle.h"

/*=========== [Êîíñòğóêòîğ ïî óìîë÷àíèş] ===========*/
Circle::Circle()
{
	this->setRadius(1);//Ïî óìîë÷àíèş íàø ğàäèóñ = 1
}
/*=========== [Êîíñòğóêòîğ ñ ïàğàìåòğîì] ===========*/
Circle::Circle(double radius)//Êîíñòğóêòîğ
{
	this->setRadius(radius);
}
/*=========== [Ìåòîä: Óñòàíîâêà ğàäèóñà] ===========*/
void Circle::setRadius(double radius)
{
	this->radius = radius;
	this->ference = 2.0 * PI_CONST * radius;
	this->area = PI_CONST * radius * radius;
}
/*=========== [Ìåòîä: Óñòàíîâêà äëèíû îêğóæíîñòè] ===========*/
void Circle::setFerence(double ference)
{
	this->radius = ference / (2.0 * PI_CONST);
	this->ference = ference;
	this->area = PI_CONST * radius * radius;
}
/*=========== [Ìåòîä: Óñòàíîâêà ïëîùàäè êğóãà] ===========*/
void Circle::setArea(double area)
{
	this->radius = sqrt(area / (PI_CONST));
	this->ference = 2.0 * PI_CONST * (this->radius);
	this->area = area;
}
/*=========== [Ìåòîä: Ïîëó÷åíèå ğàäèóñà] ===========*/
const double Circle::getRadius() const
{
	return this->radius;
}
/*=========== [Ìåòîä: Ïîëó÷åíèå äëèíû îêğóæíîñòè] ===========*/
const double Circle::getFerence() const
{
	return this->ference;
}
/*=========== [Ìåòîä: Ïîëó÷åíèå ïëîùàäè êğóãà] ===========*/
const double Circle::getArea() const
{
	return this->area;
}