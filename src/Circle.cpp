#include <iostream>
#include <math.h>
#include "Circle.h"
#define PI 3.14
using namespace std;

Circle::Circle(double r) {
	radius = r;
	ference = 2 * PI * r;
	area = PI * r * r;
}

void Circle::setRadius(double r) {
	radius = r;
	ference = 2 * PI * r;
	area = PI * r * r;
}

void Circle::setFerence(double f) {
	ference = f;
	radius = f / (2 * PI);
	area = PI * radius*radius;
}

void Circle::setArea(double a) {
	area = a;
	radius = sqrt(a / PI);
	ference = 2 * PI * radius;
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