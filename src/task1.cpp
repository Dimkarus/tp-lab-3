#include <iostream>
#include "task1.h"
#include "Circle.h"
#include <math.h>

constexpr auto pi = 3.14;
using namespace std;

double calcDelta()
{
	Circle earth(6378.1);
	Circle rope(0);
	rope.setFerence(earth.getFerence() + 1);

	//earth.Print();
	//rope.Print();

	double ans = (rope.getRadius() - earth.getRadius());
	int n = 1000 * ans + 0.1;
	ans = n / 1000.0;
	return ans;
}

double calcCost()
{
	Circle pool(3);
	Circle track(4);
	double cost;
	cost = round(1000 * ((track.getArea()/pi)*3.1415 - (pool.getArea()/pi)*3.1415) + 2000 * (track.getFerence()/pi)*3.14);
	return cost;
}

