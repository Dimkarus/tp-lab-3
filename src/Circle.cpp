#include "../include/Circle.h"

/*=========== [����������� �� ���������] ===========*/
Circle::Circle()
{
	this->setRadius(1);//�� ��������� ��� ������ = 1
}
/*=========== [����������� � ����������] ===========*/
Circle::Circle(double radius)//�����������
{
	this->setRadius(radius);
}
/*=========== [�����: ��������� �������] ===========*/
void Circle::setRadius(double radius)
{
	this->radius = radius;
	this->ference = 2.0 * PI_CONST * radius;
	this->area = PI_CONST * radius * radius;
}
/*=========== [�����: ��������� ����� ����������] ===========*/
void Circle::setFerence(double ference)
{
	this->radius = ference / (2.0 * PI_CONST);
	this->ference = ference;
	this->area = PI_CONST * radius * radius;
}
/*=========== [�����: ��������� ������� �����] ===========*/
void Circle::setArea(double area)
{
	this->radius = sqrt(area / (PI_CONST));
	this->ference = 2.0 * PI_CONST * (this->radius);
	this->area = area;
}
/*=========== [�����: ��������� �������] ===========*/
const double Circle::getRadius() const
{
	return this->radius;
}
/*=========== [�����: ��������� ����� ����������] ===========*/
const double Circle::getFerence() const
{
	return this->ference;
}
/*=========== [�����: ��������� ������� �����] ===========*/
const double Circle::getArea() const
{
	return this->area;
}