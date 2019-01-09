#include "Circle.h"
#include "task1.h"

double calcDelta()
{
	Circle circ;
	circ.setRadius(6378.1);
	circ.setFerence(circ.getFerence() + 0.001);

	double diff = (circ.getRadius() - 6378.1) * 1000;
	diff = int(diff * 1000);
	diff = diff / 1000;
	return diff;
}

double calcCost()
{
	Circle circ;
	circ.setRadius(3.0 + 1.0);

	double tm = circ.getFerence() * 2000;

	double p1, p2;

	circ.setRadius(3.0);
	p1 = circ.getArea();
	circ.setRadius(3.0 + 1.0);
	p2 = circ.getArea();

	tm += (p2 - p1) * 1000 + 11.0;

	return tm;
}
