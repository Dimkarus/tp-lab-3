#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include "Circle.h"
using namespace std;

Circle::Circle(double r) {
	radius = r;
	ference = 2 * M_PI * r;
	area = M_PI * r * r;
}

void Circle::setRadius(double r) {
	radius = r;
	ference = 2 * M_PI*r;
	area = M_PI * r*r;
}

void Circle::setFerence(double f) {
	ference = f;
	radius = f / (2 * M_PI);
	area = M_PI * radius*radius;
}

void Circle::setArea(double a) {
	area = a;
	radius = sqrt(a / M_PI);
	ference = 2 * M_PI*radius;
}

double Circle::getRadius() {
	return radius;
}

double Circle::getFerence() {
	return ference;
}

double Circle::getArea() {
	return area;
}