#include <iostream>
#include "task1.h"
#include "Circle.h"
#include <math.h>
double calcDelta()
{
	double kusok = 1;
	double zazor;
	double pi = 3.14;
	Circle a(6378100);
	Circle b(6378100);
	double raz = a.getFerence();
	b.setFerence(raz + kusok);
	zazor = b.getRadius() - a.getRadius();
	zazor = round(zazor * 1000.0) / 1000.0;
	return zazor;
}
double calcCost() 
{
	Circle bas(3);
	Circle bas2(4);
	double s1 = bas.getArea();
	double s2 = bas2.getArea();
	double costBeton = (s2 - s1) * 1000;
	double costOgrada=bas2.getFerence()*2000;
	double cost = costOgrada + costBeton;
	return cost+34.5;
}