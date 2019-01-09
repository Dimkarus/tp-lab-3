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
	double p1, p2;
	Circ.setRadius(3);
	p1 = Circ.getArea();
	Circ.setRadius(4);
	p2 = Circ.getArea();
double rArea = (p2.getArea() - p1.getArea())*1000;
	double rDefend = p2.getFerence() * 2000;
	double tm = rArea + rDefend;
	//tm = round(cost*10)/10;
	return tm;
}
