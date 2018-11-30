
#include "Circle.h"
#include "task1.h"

double calcDelta() 
{
	Circle circle;
	circle.setRadius(r);
	circle.setFerence(circle.getFerence() + 0.001);
	
	return (circle.getRadius() - r) * 1000; 
}

double calcCost()
{
	Circle circle;
	circle.setRadius(r + 1.0);

	double tmp = circle.getFerence() * 2000; 

	double s1, s2;

	circle.setRadius(r);
	s1 = circle.getArea();
	circle.setRadius(r + 1.0);
	s2 = circle.getArea();

	tmp += (s2 - s1) * 1000; 

	return tmp;
}
