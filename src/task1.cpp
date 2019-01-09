#include "Circle.h"
#include "task1.h"

double calcDelta()
{
	Circle Circ;
	Circ.setRadius(6378.1);
	Circ.setFerence(Circ.getFerence() + 0.001);

	double diff = (Circ.getRadius() - 6378.1) * 1000;
	diff = int(diff * 1000);
	diff = diff / 1000;
	return diff;
}

double calcCost()
{
	Circle Circ;
	Circ.setRadius(3.0 + 1.0);

	double tm = Circ.getFerence() * 2000;

	double p1, p2;

	Circ.setRadius(3.0);
	p1 = Circ.getArea();
	Circ.setRadius(3.0 + 1.0);
	p2 = Circ.getArea();

	tm += (p2 - p1) * 1000 + 11.0;

	return tm;
}