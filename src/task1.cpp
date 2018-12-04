
#include "Circle.h"
#include "task1.h"

double calcDelta() 
{
	Circle circle;
	circle.setRadius(6378.1);
	circle.setFerence(circle.getFerence() + 0.001);
	
	double a = (circle.getRadius() - 6378.1) * 1000; 
	a = int(a * 1000); 
	a = a / 1000;
	return a;
}

double calcCost()
{
	Circle circle;
	circle.setRadius(3.0 + 1.0);

	double tmp = circle.getFerence() * 2000; 

	double s1, s2;

	circle.setRadius(3.0);
	s1 = circle.getArea();
	circle.setRadius(3.0 + 1.0);
	s2 = circle.getArea();

	tmp += (s2 - s1) * 1000 + 11.0; 

	return tmp;
}
