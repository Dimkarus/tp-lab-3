#include <task1.h>
#include "Circle.h"

double calcDelta()
{
    double radE = 6378.1 * 1000;
    Circle earth(radE);
    earth.setFerence(earth.getFerence() + 1);

    return earth.getRadius() - radE;
}

double calcCost()
{
    double pathPrice(1000.0), fencePrice(2000.0);
    Circle pool(3.0), fence(4.0);
    double costs = fence.getFerence()*fencePrice + (fence.getArea() - pool.getArea()) * pathPrice;

    return costs;
}