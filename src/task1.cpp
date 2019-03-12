#include <iostream>
#include "task1.h"
#include "Circle.h"

using namespace std;

double calcDelta()
{
	Circle task1(6378100);
	double d;
	
	task1.setRadius(6378100);
	task1.setFerence(task1.getFerence() + 1);
	d = task1.getRadius() - 6378100;
	d=int(d*1000);
	d=d/1000;
	return  d;
}
double calcCost(){
	Circle task2(4);
	double S;
	double cost;
	task2.setRadius(4);
	cost = task2.getFerence() * 2000;
	S = task2.getArea();
	task2.setRadius(3);
	S = S - task2.getArea();
	cost = cost + S * 1000+34.5;
	return cost;
}
