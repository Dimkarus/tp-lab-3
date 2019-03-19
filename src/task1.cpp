#include "task1.h"


double calcDelta()
{

	Circle earth1;
	Circle earth2;
	double earthRad = 6378.1 * 1000;
	earth1.setRadius(earthRad);
	earth2.setFerence(earth1.getFerence() + 1);
	double diff = (earth2.getRadius() - earth1.getRadius());
	diff = round(diff * 1000) / 1000;
	return diff;
}

double calcCost()
{
	Circle pool1(3);
	Circle pool2(4);
	double roadArea = (pool2.getArea() - pool1.getArea()) * 1000;
	double roadDefend = pool2.getFerence() * 2000;
	double cost = roadArea + roadDefend;
	return cost;
}