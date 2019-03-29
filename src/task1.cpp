#include "Circle.h"
#include "task1.h"


double calcDelta()
{
	Circle earth(6378.1);
	double radius = earth.getRadius();
	earth.setFerence(earth.getFerence() + 0.001);
	double tmp = ((earth.getRadius() - radius) * 1000);
	return (round(tmp * 1000) / 1000);
}

double calcCost()
{
	Circle pool(3.0);
	double area_pool = pool.getArea();
	pool.setRadius(4.0);
	double area_road = pool.getArea() - area_pool;
	//double ference_pool = pool.getFerence();
	return ((area_road * 1000.0) + (pool.getFerence() * 2000.0) + 34.5);
}
