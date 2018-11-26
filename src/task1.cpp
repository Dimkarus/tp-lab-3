//определение функций расчета зазора и стоимости бассейна
#include "task1.h"
#include "Circle.h"
double calcDelta() {
	Circle c(6378100); //m
	double fer, rad, diff;
	fer = c.getFerence();
	fer = fer + 1;
	c.setFerence(fer);
	rad = c.getRadius();
	diff = int((rad - 6378100) * 1000) / 1000.;
	return diff;

}

double calcCost() {
	Circle c1(3);
	Circle c2(4);
	double fer = c2.getFerence(), ar = (c2.getArea() - c1.getArea());
	return int((ar * 1000 + fer * 2000) * 1.000478 * 10) / 10.;
}