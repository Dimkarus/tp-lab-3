#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include "Circle.h"
#include "task1.h"

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
	res = (c2.getArea() - c1.getArea()) * 1000;
	res = res + c2.getFerence() * 2000;
	return res;
}