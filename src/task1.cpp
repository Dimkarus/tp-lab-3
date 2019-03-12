#include <iostream>
#include <math.h>
#include "Circle.h"
#include "task1.h"

double calcDelta() {
	Circle planet(6378.1);
	Circle verevka(0);
	double k = planet.getFerence();
	k++;
	verevka.setFerence(k);
	double zazor;
	zazor = verevka.getRadius() - planet.getRadius();
	return zazor;
}

double calcCost() {
	Circle bas(3);
	Circle road(4);
	double cost = 1000 * (road.getArea() - bas.getArea()) + 2000 * road.getFerence();
	return cost;
}