#include "task1.h"
double calcDelta() {
	double radius1 = 6378100;
	double radius2 = 0;
	double ference1;
	double diffFer = 1;
	double delta = 0;
	Circle c(radius1);
	c.setRadius(radius1);
	ference1 = c.getFerence();
	c.setFerence(ference1 + diffFer);
	radius2 = c.getRadius();
	delta = radius2 - radius1;
	delta=round(delta*1000)/1000;
	return delta;
}
double calcCost() {
	double radiusP = 3;
	double areaP;
	double road = 1;
	double areaR;
	double ferenceR;
	double cost = 0;
	Circle c(radiusP);
	c.setRadius(radiusP);
	areaP = c.getArea();
	c.setRadius(radiusP + road);
	areaR=c.getArea()-areaP;
	cost += areaR * 1000;
	ferenceR = c.getFerence();
	cost+= ferenceR * 2000;
	return cost;
}