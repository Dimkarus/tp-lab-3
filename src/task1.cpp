//определение функций расчета зазора и стоимости бассейна
#include "task1.h"
#include "Circle.h"
double calcDelta() {
	Circle c(6378100); //m
	double fer, rad;
	fer = c.getFerence();
	fer = fer + 1;
	c.setFerence(fer);
	rad = c.getRadius();
	return rad - 6378100;

}

double calcCost() {
	Circle c1(3);
	Circle c2(4);
	double fer = c2.getFerence(), ar = c2.getArea() - c1.getArea();
	return ar * 1000 + fer * 2000;
}