#include "Circle.h"
#include<iostream>
double calcDelta() {
	double radius = 6378.1;
	Circle earth(radius);  
	earth.setFerence(earth.getFerence()+0.001); //km

	return(earth.getRadius()-radius)*1000;
}

double calcCost() {
	double radius = 3;
	double cost_road, cost_fence;

	Circle pool(radius);
	double s1 = pool.getArea();
	pool.setRadius(radius + 1); 
	double s2 = pool.getArea();
	
	cost_road = (s2-s1)*1000 ; 
	cost_fence = pool.getFerence() * 2000;

	return cost_road + cost_fence ;

}