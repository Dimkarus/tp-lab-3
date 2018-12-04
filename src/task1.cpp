#include "task1.h"

double calcDelta(){
    Circle a(6378100),b;
    b.setFerence(a.getFerence() + 1);
    double tmp =  b.getRadius() - a.getRadius();
    return tmp;
}

double calcCost(){
    Circle a(3),b(4);
    double price_fence = b.getFerence()*2000;
    double price_road = (b.getArea() - a.getArea())*1000;
    return price_road+price_fence;
}
