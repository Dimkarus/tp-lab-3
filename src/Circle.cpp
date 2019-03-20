#include "Circle.h"

const double pi = 3.1415;

void Circle::setRadius(double rad)
{
	radius = rad;
	ference = 2 * pi*rad;
	area = pi * rad*rad;
}
void Circle::setFerence(double fer)
{
	ference = fer;
	radius = fer / (2 * pi);
	area = pi * radius*radius;
}
void Circle::setArea(double ar)
{
	area = ar;
	radius = sqrt(area / (pi));
	ference = 2 * pi*radius;
}
double Circle::getRadius()
{
	//std::cout << radius << std::endl;
	return radius;
}
double Circle::getFerence()
{
	//std::cout << ference << std::endl;
	return ference;
}
double Circle::getArea()
{
	//std::cout << area << std::endl;
	return area;
}

Circle::Circle(double radius)
{
	setRadius(radius);


}
Circle::Circle() :radius(0.0)
{
	setRadius(0.0);

}