#include "task1.h";
Circle::Circle(double data) {
	radius = data;
}
void Circle::setRadius(double data) {
	radius = data;
	ference = 2 * M_PI*radius;
	area = M_PI*radius*radius;
}
void Circle::setFerence(double data) {
	ference = data;
	radius = ference / (2 * M_PI);
	area= M_PI * radius*radius;
}
void Circle::setArea(double data) {
	area = data;
	radius = sqrt(area / (M_PI));
	ference= 2 * M_PI*radius;
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