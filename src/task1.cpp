#include "task1.h"
double calcDelta() {
	Circle a(6378100), b;
	b.setFerence(a.getFerence() + 1);
	double tmp = b.getRadius() - a.getRadius();
	return tmp;
}

double calcCost() {
	Circle a(3), b(4);
	return (b.getArea() - a.getArea()) * 1000 + b.getFerence() * 2000;
}