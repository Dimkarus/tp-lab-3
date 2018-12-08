#include <iostream>
#include <math.h>
#include "Circle.h"
#include "task1.h"
double PI = 3.14;

double calcDelta() {
	double rad = 6378.1;
	double fer;
	double res;
	Circle earth(rad);
	fer = earth.getFerence() + 1;
	earth.setFerence(fer);
	res = (earth.getRadius() - rad);
	res = (int)(res * 1000)*0.001;
	return res;
}

double calcCost() {
	double res;
	Circle c1(3.0);
	Circle c2(4.0);
	res = (c2.getArea()/PI*3.1415 - c1.getArea()/PI*3.1415) * 1000;
	res = res + c2.getFerence()/PI*3.1415 * 2000;
	return res;
}