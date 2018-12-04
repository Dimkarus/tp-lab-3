#include "task1.h"

double calcDelta(){
	Circle first(6378100), second;
	second.setFerence(first.getFerence() + 1);
	double tmp = second.getRadius() - first.getRadius();
	return tmp;
}

double calcCost(){
	Circle a(3), b(4);
	double price_fence = b.getFerence() * 2000;
	double price_road = (b.getArea() - a.getArea()) * 1000;
	return price_road + price_fence;
}