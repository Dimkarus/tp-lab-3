#include "Circle.h"
# define PI   3.14
#include <math.h>

Circle::Circle(){}
Circle::Circle(double radius){
	setRadius(radius);
}

void Circle::setRadius(double r) {
	radius = r;
	ference = 2 *PI * r;
	area = PI*pow(r,2);
}
double Circle::getRadius() {
	return radius;
}


void Circle::setFerence(double f) {
	radius = f/(2*PI);
	ference = f;
	area = PI * pow(radius, 2);
}
double Circle::getFerence() {
	return ference;
}


void Circle::setArea(double a) {
	radius = sqrt(a/PI);
	ference = 2*PI*radius;
	area = a;
}
double Circle::getArea() {
	return area;
}