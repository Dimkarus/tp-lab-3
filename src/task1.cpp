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
	Circle p1(3);
	Circle p2(4);
	double rArea = (p2.getArea() - p1.getArea())*1000;
	double rDefend = p2.getFerence() * 2000;
	double tm = rArea + rDefend;
	//tm = round(tm*10)/10;
	return tm;
}	
