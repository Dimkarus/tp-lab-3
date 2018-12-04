//реализация методов

#include "Circle.h"
#include <math.h>

double pi = 3.14;

Circle::Circle(T rad) {
	radius = rad;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

void Circle::setRadius(T rad) {
	radius = rad;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}
void Circle::setFerence(T fer) {
	ference = fer;
	radius = ference / (2 * pi);
	area = pi * radius * radius;
}
void Circle::setArea(T ar) {
	area = ar;
	radius = sqrt(area / pi);
}
T Circle::getRadius() {
	return radius;
}
T Circle::getFerence() {
	return ference;
}
T Circle::getArea() {
	return area;
}